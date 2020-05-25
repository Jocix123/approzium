package main

import (
	"context"
	"crypto/md5"
	"encoding/hex"
	"fmt"
	"io"
	"time"
    "google.golang.org/grpc/codes"
    "google.golang.org/grpc/status"

	pb "dbauth/authenticator/protos"
	log "github.com/sirupsen/logrus"
)

type Authenticator struct {
	creds   map[string]credentials
	counter int
}

type credentials struct {
	user     string
	password string
}

func NewAuthenticator() *Authenticator {
	return &Authenticator{
		creds: newCreds(),
	}
}

func (a *Authenticator) run() {
	for {
		log.Printf("authenticator running. %d requests received\n", a.counter)
		time.Sleep(2 * time.Second)
	}
}

func (a *Authenticator) GetDBUser(ctx context.Context, req *pb.DBUserRequest) (*pb.DBUserResponse, error) {
	a.counter++
	identity := req.GetIdentity()
	log.Printf("received DBUserRequest for identity %s\n", identity)

	creds, err := a.getCreds(identity)
	if err != nil {
		log.Error(err)
		return nil, status.Errorf(codes.InvalidArgument, err.Error())
    }
    return &pb.DBUserResponse{Dbuser: creds.user}, nil
}

func (a *Authenticator) GetDBHash(ctx context.Context, req *pb.DBHashRequest) (*pb.DBHashResponse, error) {
	a.counter++
	identity := req.GetIdentity()
    salt := req.GetSalt()
	log.Printf("received DBUserRequest for identity %s given salt %s\n", identity, salt)

    if (len(salt) != 4) {
		msg := "salt not received or not 4 bytes long"
		log.Error(msg)
		return nil, status.Errorf(codes.InvalidArgument, msg)
    }

	creds, err := a.getCreds(identity)
	if err != nil {
		log.Error(err)
		return nil, status.Errorf(codes.InvalidArgument, err.Error())
    }
    return &pb.DBHashResponse{Hash: computePGMD5(identity, creds.password, salt)}, nil
}

func (a *Authenticator) getCreds(identity string) (credentials, error) {
	if creds, ok := a.creds[identity]; ok {
		return creds, nil
	}
	msg := fmt.Errorf("credentials not found for identity %s", identity)
	log.Error(msg)
	return credentials{}, msg
}

func newCreds() map[string]credentials {
	creds := make(map[string]credentials)
	creds["diotim"] = credentials{
		user:     "bob",
		password: "password",
	}
	return creds
}

func computeMD5(s string, salt []byte) string {
	hasher := md5.New()
	io.WriteString(hasher, s)
	hasher.Write(salt)
	hashedBytes := hasher.Sum(nil)
	return hex.EncodeToString(hashedBytes)
}

func computePGMD5(user, password string, salt []byte) string {
	first_hash := computeMD5(password, []byte(user))
	second_hash := computeMD5(first_hash, salt)
	return "md5" + second_hash
}

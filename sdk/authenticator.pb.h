// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: authenticator.proto

#ifndef PROTOBUF_authenticator_2eproto__INCLUDED
#define PROTOBUF_authenticator_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_authenticator_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsDBUserRequestImpl();
void InitDefaultsDBUserRequest();
void InitDefaultsDBHashRequestImpl();
void InitDefaultsDBHashRequest();
void InitDefaultsDBUserResponseImpl();
void InitDefaultsDBUserResponse();
void InitDefaultsDBHashResponseImpl();
void InitDefaultsDBHashResponse();
inline void InitDefaults() {
  InitDefaultsDBUserRequest();
  InitDefaultsDBHashRequest();
  InitDefaultsDBUserResponse();
  InitDefaultsDBHashResponse();
}
}  // namespace protobuf_authenticator_2eproto
namespace dbauth {
namespace authenticator {
namespace protos {
class DBHashRequest;
class DBHashRequestDefaultTypeInternal;
extern DBHashRequestDefaultTypeInternal _DBHashRequest_default_instance_;
class DBHashResponse;
class DBHashResponseDefaultTypeInternal;
extern DBHashResponseDefaultTypeInternal _DBHashResponse_default_instance_;
class DBUserRequest;
class DBUserRequestDefaultTypeInternal;
extern DBUserRequestDefaultTypeInternal _DBUserRequest_default_instance_;
class DBUserResponse;
class DBUserResponseDefaultTypeInternal;
extern DBUserResponseDefaultTypeInternal _DBUserResponse_default_instance_;
}  // namespace protos
}  // namespace authenticator
}  // namespace dbauth
namespace dbauth {
namespace authenticator {
namespace protos {

// ===================================================================

class DBUserRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbauth.authenticator.protos.DBUserRequest) */ {
 public:
  DBUserRequest();
  virtual ~DBUserRequest();

  DBUserRequest(const DBUserRequest& from);

  inline DBUserRequest& operator=(const DBUserRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DBUserRequest(DBUserRequest&& from) noexcept
    : DBUserRequest() {
    *this = ::std::move(from);
  }

  inline DBUserRequest& operator=(DBUserRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DBUserRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DBUserRequest* internal_default_instance() {
    return reinterpret_cast<const DBUserRequest*>(
               &_DBUserRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(DBUserRequest* other);
  friend void swap(DBUserRequest& a, DBUserRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DBUserRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  DBUserRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DBUserRequest& from);
  void MergeFrom(const DBUserRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DBUserRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string identity = 1;
  void clear_identity();
  static const int kIdentityFieldNumber = 1;
  const ::std::string& identity() const;
  void set_identity(const ::std::string& value);
  #if LANG_CXX11
  void set_identity(::std::string&& value);
  #endif
  void set_identity(const char* value);
  void set_identity(const char* value, size_t size);
  ::std::string* mutable_identity();
  ::std::string* release_identity();
  void set_allocated_identity(::std::string* identity);

  // @@protoc_insertion_point(class_scope:dbauth.authenticator.protos.DBUserRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr identity_;
  mutable int _cached_size_;
  friend struct ::protobuf_authenticator_2eproto::TableStruct;
  friend void ::protobuf_authenticator_2eproto::InitDefaultsDBUserRequestImpl();
};
// -------------------------------------------------------------------

class DBHashRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbauth.authenticator.protos.DBHashRequest) */ {
 public:
  DBHashRequest();
  virtual ~DBHashRequest();

  DBHashRequest(const DBHashRequest& from);

  inline DBHashRequest& operator=(const DBHashRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DBHashRequest(DBHashRequest&& from) noexcept
    : DBHashRequest() {
    *this = ::std::move(from);
  }

  inline DBHashRequest& operator=(DBHashRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DBHashRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DBHashRequest* internal_default_instance() {
    return reinterpret_cast<const DBHashRequest*>(
               &_DBHashRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(DBHashRequest* other);
  friend void swap(DBHashRequest& a, DBHashRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DBHashRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  DBHashRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DBHashRequest& from);
  void MergeFrom(const DBHashRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DBHashRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string identity = 1;
  void clear_identity();
  static const int kIdentityFieldNumber = 1;
  const ::std::string& identity() const;
  void set_identity(const ::std::string& value);
  #if LANG_CXX11
  void set_identity(::std::string&& value);
  #endif
  void set_identity(const char* value);
  void set_identity(const char* value, size_t size);
  ::std::string* mutable_identity();
  ::std::string* release_identity();
  void set_allocated_identity(::std::string* identity);

  // bytes salt = 2;
  void clear_salt();
  static const int kSaltFieldNumber = 2;
  const ::std::string& salt() const;
  void set_salt(const ::std::string& value);
  #if LANG_CXX11
  void set_salt(::std::string&& value);
  #endif
  void set_salt(const char* value);
  void set_salt(const void* value, size_t size);
  ::std::string* mutable_salt();
  ::std::string* release_salt();
  void set_allocated_salt(::std::string* salt);

  // @@protoc_insertion_point(class_scope:dbauth.authenticator.protos.DBHashRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr identity_;
  ::google::protobuf::internal::ArenaStringPtr salt_;
  mutable int _cached_size_;
  friend struct ::protobuf_authenticator_2eproto::TableStruct;
  friend void ::protobuf_authenticator_2eproto::InitDefaultsDBHashRequestImpl();
};
// -------------------------------------------------------------------

class DBUserResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbauth.authenticator.protos.DBUserResponse) */ {
 public:
  DBUserResponse();
  virtual ~DBUserResponse();

  DBUserResponse(const DBUserResponse& from);

  inline DBUserResponse& operator=(const DBUserResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DBUserResponse(DBUserResponse&& from) noexcept
    : DBUserResponse() {
    *this = ::std::move(from);
  }

  inline DBUserResponse& operator=(DBUserResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DBUserResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DBUserResponse* internal_default_instance() {
    return reinterpret_cast<const DBUserResponse*>(
               &_DBUserResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(DBUserResponse* other);
  friend void swap(DBUserResponse& a, DBUserResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DBUserResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  DBUserResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DBUserResponse& from);
  void MergeFrom(const DBUserResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DBUserResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string dbuser = 1;
  void clear_dbuser();
  static const int kDbuserFieldNumber = 1;
  const ::std::string& dbuser() const;
  void set_dbuser(const ::std::string& value);
  #if LANG_CXX11
  void set_dbuser(::std::string&& value);
  #endif
  void set_dbuser(const char* value);
  void set_dbuser(const char* value, size_t size);
  ::std::string* mutable_dbuser();
  ::std::string* release_dbuser();
  void set_allocated_dbuser(::std::string* dbuser);

  // @@protoc_insertion_point(class_scope:dbauth.authenticator.protos.DBUserResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr dbuser_;
  mutable int _cached_size_;
  friend struct ::protobuf_authenticator_2eproto::TableStruct;
  friend void ::protobuf_authenticator_2eproto::InitDefaultsDBUserResponseImpl();
};
// -------------------------------------------------------------------

class DBHashResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dbauth.authenticator.protos.DBHashResponse) */ {
 public:
  DBHashResponse();
  virtual ~DBHashResponse();

  DBHashResponse(const DBHashResponse& from);

  inline DBHashResponse& operator=(const DBHashResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DBHashResponse(DBHashResponse&& from) noexcept
    : DBHashResponse() {
    *this = ::std::move(from);
  }

  inline DBHashResponse& operator=(DBHashResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DBHashResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DBHashResponse* internal_default_instance() {
    return reinterpret_cast<const DBHashResponse*>(
               &_DBHashResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(DBHashResponse* other);
  friend void swap(DBHashResponse& a, DBHashResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DBHashResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  DBHashResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DBHashResponse& from);
  void MergeFrom(const DBHashResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DBHashResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string hash = 1;
  void clear_hash();
  static const int kHashFieldNumber = 1;
  const ::std::string& hash() const;
  void set_hash(const ::std::string& value);
  #if LANG_CXX11
  void set_hash(::std::string&& value);
  #endif
  void set_hash(const char* value);
  void set_hash(const char* value, size_t size);
  ::std::string* mutable_hash();
  ::std::string* release_hash();
  void set_allocated_hash(::std::string* hash);

  // @@protoc_insertion_point(class_scope:dbauth.authenticator.protos.DBHashResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr hash_;
  mutable int _cached_size_;
  friend struct ::protobuf_authenticator_2eproto::TableStruct;
  friend void ::protobuf_authenticator_2eproto::InitDefaultsDBHashResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DBUserRequest

// string identity = 1;
inline void DBUserRequest::clear_identity() {
  identity_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DBUserRequest::identity() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.protos.DBUserRequest.identity)
  return identity_.GetNoArena();
}
inline void DBUserRequest::set_identity(const ::std::string& value) {
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.protos.DBUserRequest.identity)
}
#if LANG_CXX11
inline void DBUserRequest::set_identity(::std::string&& value) {
  
  identity_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.protos.DBUserRequest.identity)
}
#endif
inline void DBUserRequest::set_identity(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.protos.DBUserRequest.identity)
}
inline void DBUserRequest::set_identity(const char* value, size_t size) {
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.protos.DBUserRequest.identity)
}
inline ::std::string* DBUserRequest::mutable_identity() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.protos.DBUserRequest.identity)
  return identity_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DBUserRequest::release_identity() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.protos.DBUserRequest.identity)
  
  return identity_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DBUserRequest::set_allocated_identity(::std::string* identity) {
  if (identity != NULL) {
    
  } else {
    
  }
  identity_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identity);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.protos.DBUserRequest.identity)
}

// -------------------------------------------------------------------

// DBHashRequest

// string identity = 1;
inline void DBHashRequest::clear_identity() {
  identity_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DBHashRequest::identity() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.protos.DBHashRequest.identity)
  return identity_.GetNoArena();
}
inline void DBHashRequest::set_identity(const ::std::string& value) {
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.protos.DBHashRequest.identity)
}
#if LANG_CXX11
inline void DBHashRequest::set_identity(::std::string&& value) {
  
  identity_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.protos.DBHashRequest.identity)
}
#endif
inline void DBHashRequest::set_identity(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.protos.DBHashRequest.identity)
}
inline void DBHashRequest::set_identity(const char* value, size_t size) {
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.protos.DBHashRequest.identity)
}
inline ::std::string* DBHashRequest::mutable_identity() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.protos.DBHashRequest.identity)
  return identity_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DBHashRequest::release_identity() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.protos.DBHashRequest.identity)
  
  return identity_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DBHashRequest::set_allocated_identity(::std::string* identity) {
  if (identity != NULL) {
    
  } else {
    
  }
  identity_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identity);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.protos.DBHashRequest.identity)
}

// bytes salt = 2;
inline void DBHashRequest::clear_salt() {
  salt_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DBHashRequest::salt() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.protos.DBHashRequest.salt)
  return salt_.GetNoArena();
}
inline void DBHashRequest::set_salt(const ::std::string& value) {
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.protos.DBHashRequest.salt)
}
#if LANG_CXX11
inline void DBHashRequest::set_salt(::std::string&& value) {
  
  salt_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.protos.DBHashRequest.salt)
}
#endif
inline void DBHashRequest::set_salt(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.protos.DBHashRequest.salt)
}
inline void DBHashRequest::set_salt(const void* value, size_t size) {
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.protos.DBHashRequest.salt)
}
inline ::std::string* DBHashRequest::mutable_salt() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.protos.DBHashRequest.salt)
  return salt_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DBHashRequest::release_salt() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.protos.DBHashRequest.salt)
  
  return salt_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DBHashRequest::set_allocated_salt(::std::string* salt) {
  if (salt != NULL) {
    
  } else {
    
  }
  salt_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), salt);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.protos.DBHashRequest.salt)
}

// -------------------------------------------------------------------

// DBUserResponse

// string dbuser = 1;
inline void DBUserResponse::clear_dbuser() {
  dbuser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DBUserResponse::dbuser() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.protos.DBUserResponse.dbuser)
  return dbuser_.GetNoArena();
}
inline void DBUserResponse::set_dbuser(const ::std::string& value) {
  
  dbuser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.protos.DBUserResponse.dbuser)
}
#if LANG_CXX11
inline void DBUserResponse::set_dbuser(::std::string&& value) {
  
  dbuser_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.protos.DBUserResponse.dbuser)
}
#endif
inline void DBUserResponse::set_dbuser(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  dbuser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.protos.DBUserResponse.dbuser)
}
inline void DBUserResponse::set_dbuser(const char* value, size_t size) {
  
  dbuser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.protos.DBUserResponse.dbuser)
}
inline ::std::string* DBUserResponse::mutable_dbuser() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.protos.DBUserResponse.dbuser)
  return dbuser_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DBUserResponse::release_dbuser() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.protos.DBUserResponse.dbuser)
  
  return dbuser_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DBUserResponse::set_allocated_dbuser(::std::string* dbuser) {
  if (dbuser != NULL) {
    
  } else {
    
  }
  dbuser_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dbuser);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.protos.DBUserResponse.dbuser)
}

// -------------------------------------------------------------------

// DBHashResponse

// string hash = 1;
inline void DBHashResponse::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DBHashResponse::hash() const {
  // @@protoc_insertion_point(field_get:dbauth.authenticator.protos.DBHashResponse.hash)
  return hash_.GetNoArena();
}
inline void DBHashResponse::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dbauth.authenticator.protos.DBHashResponse.hash)
}
#if LANG_CXX11
inline void DBHashResponse::set_hash(::std::string&& value) {
  
  hash_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbauth.authenticator.protos.DBHashResponse.hash)
}
#endif
inline void DBHashResponse::set_hash(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbauth.authenticator.protos.DBHashResponse.hash)
}
inline void DBHashResponse::set_hash(const char* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbauth.authenticator.protos.DBHashResponse.hash)
}
inline ::std::string* DBHashResponse::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:dbauth.authenticator.protos.DBHashResponse.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DBHashResponse::release_hash() {
  // @@protoc_insertion_point(field_release:dbauth.authenticator.protos.DBHashResponse.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DBHashResponse::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:dbauth.authenticator.protos.DBHashResponse.hash)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace authenticator
}  // namespace dbauth

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_authenticator_2eproto__INCLUDED
# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: authenticator.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='authenticator.proto',
  package='approzium.authenticator.protos',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=b'\n\x13\x61uthenticator.proto\x12\x1e\x61pprozium.authenticator.protos\"}\n\x10PGMD5HashRequest\x12\"\n\x1asigned_get_caller_identity\x18\x01 \x01(\t\x12\x17\n\x0f\x63laimed_iam_arn\x18\x02 \x01(\t\x12\x0e\n\x06\x64\x62host\x18\x03 \x01(\t\x12\x0e\n\x06\x64\x62user\x18\x04 \x01(\t\x12\x0c\n\x04salt\x18\x05 \x01(\x0c\"!\n\x11PGMD5HashResponse\x12\x0c\n\x04hash\x18\x01 \x01(\t2\x86\x01\n\rAuthenticator\x12u\n\x0cGetPGMD5Hash\x12\x30.approzium.authenticator.protos.PGMD5HashRequest\x1a\x31.approzium.authenticator.protos.PGMD5HashResponse\"\x00\x62\x06proto3'
)




_PGMD5HASHREQUEST = _descriptor.Descriptor(
  name='PGMD5HashRequest',
  full_name='approzium.authenticator.protos.PGMD5HashRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='signed_get_caller_identity', full_name='approzium.authenticator.protos.PGMD5HashRequest.signed_get_caller_identity', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='claimed_iam_arn', full_name='approzium.authenticator.protos.PGMD5HashRequest.claimed_iam_arn', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dbhost', full_name='approzium.authenticator.protos.PGMD5HashRequest.dbhost', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dbuser', full_name='approzium.authenticator.protos.PGMD5HashRequest.dbuser', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='salt', full_name='approzium.authenticator.protos.PGMD5HashRequest.salt', index=4,
      number=5, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=55,
  serialized_end=180,
)


_PGMD5HASHRESPONSE = _descriptor.Descriptor(
  name='PGMD5HashResponse',
  full_name='approzium.authenticator.protos.PGMD5HashResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='hash', full_name='approzium.authenticator.protos.PGMD5HashResponse.hash', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=182,
  serialized_end=215,
)

DESCRIPTOR.message_types_by_name['PGMD5HashRequest'] = _PGMD5HASHREQUEST
DESCRIPTOR.message_types_by_name['PGMD5HashResponse'] = _PGMD5HASHRESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PGMD5HashRequest = _reflection.GeneratedProtocolMessageType('PGMD5HashRequest', (_message.Message,), {
  'DESCRIPTOR' : _PGMD5HASHREQUEST,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.PGMD5HashRequest)
  })
_sym_db.RegisterMessage(PGMD5HashRequest)

PGMD5HashResponse = _reflection.GeneratedProtocolMessageType('PGMD5HashResponse', (_message.Message,), {
  'DESCRIPTOR' : _PGMD5HASHRESPONSE,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.PGMD5HashResponse)
  })
_sym_db.RegisterMessage(PGMD5HashResponse)



_AUTHENTICATOR = _descriptor.ServiceDescriptor(
  name='Authenticator',
  full_name='approzium.authenticator.protos.Authenticator',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=218,
  serialized_end=352,
  methods=[
  _descriptor.MethodDescriptor(
    name='GetPGMD5Hash',
    full_name='approzium.authenticator.protos.Authenticator.GetPGMD5Hash',
    index=0,
    containing_service=None,
    input_type=_PGMD5HASHREQUEST,
    output_type=_PGMD5HASHRESPONSE,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_AUTHENTICATOR)

DESCRIPTOR.services_by_name['Authenticator'] = _AUTHENTICATOR

# @@protoc_insertion_point(module_scope)
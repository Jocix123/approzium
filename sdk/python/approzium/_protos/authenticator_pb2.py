# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: authenticator.proto
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import enum_type_wrapper

# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='authenticator.proto',
  package='approzium.authenticator.protos',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=b'\n\x13\x61uthenticator.proto\x12\x1e\x61pprozium.authenticator.protos\"J\n\x0b\x41WSIdentity\x12\"\n\x1asigned_get_caller_identity\x18\x01 \x01(\t\x12\x17\n\x0f\x63laimed_iam_arn\x18\x02 \x01(\t\"\xc4\x01\n\x0fPasswordRequest\x12G\n\x0f\x63lient_language\x18\x01 \x01(\x0e\x32..approzium.authenticator.protos.ClientLanguage\x12\x0e\n\x06\x64\x62host\x18\x02 \x01(\t\x12\x0e\n\x06\x64\x62port\x18\x03 \x01(\t\x12\x0e\n\x06\x64\x62user\x18\x04 \x01(\t\x12\x38\n\x03\x61ws\x18\x05 \x01(\x0b\x32+.approzium.authenticator.protos.AWSIdentity\"f\n\x10PGMD5HashRequest\x12\x44\n\x0bpwd_request\x18\x01 \x01(\x0b\x32/.approzium.authenticator.protos.PasswordRequest\x12\x0c\n\x04salt\x18\x02 \x01(\x0c\"\x99\x01\n\x13PGSHA256HashRequest\x12\x44\n\x0bpwd_request\x18\x01 \x01(\x0b\x32/.approzium.authenticator.protos.PasswordRequest\x12\x0c\n\x04salt\x18\x02 \x01(\t\x12\x12\n\niterations\x18\x03 \x01(\r\x12\x1a\n\x12\x61uthentication_msg\x18\x04 \x01(\t\"j\n\x14MYSQLSHA1HashRequest\x12\x44\n\x0bpwd_request\x18\x01 \x01(\x0b\x32/.approzium.authenticator.protos.PasswordRequest\x12\x0c\n\x04salt\x18\x02 \x01(\x0c\"0\n\rPGMD5Response\x12\x0c\n\x04hash\x18\x01 \x01(\t\x12\x11\n\trequestid\x18\x02 \x01(\t\"E\n\x10PGSHA256Response\x12\x0e\n\x06\x63proof\x18\x01 \x01(\t\x12\x0e\n\x06sproof\x18\x02 \x01(\t\x12\x11\n\trequestid\x18\x03 \x01(\t\"4\n\x11MYSQLSHA1Response\x12\x0c\n\x04hash\x18\x01 \x01(\x0c\x12\x11\n\trequestid\x18\x02 \x01(\t*?\n\x0e\x43lientLanguage\x12\x19\n\x15LANGUAGE_NOT_PROVIDED\x10\x00\x12\n\n\x06PYTHON\x10\x01\x12\x06\n\x02GO\x10\x02\x32\xfd\x02\n\rAuthenticator\x12q\n\x0cGetPGMD5Hash\x12\x30.approzium.authenticator.protos.PGMD5HashRequest\x1a-.approzium.authenticator.protos.PGMD5Response\"\x00\x12z\n\x0fGetPGSHA256Hash\x12\x33.approzium.authenticator.protos.PGSHA256HashRequest\x1a\x30.approzium.authenticator.protos.PGSHA256Response\"\x00\x12}\n\x10GetMYSQLSHA1Hash\x12\x34.approzium.authenticator.protos.MYSQLSHA1HashRequest\x1a\x31.approzium.authenticator.protos.MYSQLSHA1Response\"\x00\x62\x06proto3'
)

_CLIENTLANGUAGE = _descriptor.EnumDescriptor(
  name='ClientLanguage',
  full_name='approzium.authenticator.protos.ClientLanguage',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='LANGUAGE_NOT_PROVIDED', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PYTHON', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='GO', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=873,
  serialized_end=936,
)
_sym_db.RegisterEnumDescriptor(_CLIENTLANGUAGE)

ClientLanguage = enum_type_wrapper.EnumTypeWrapper(_CLIENTLANGUAGE)
LANGUAGE_NOT_PROVIDED = 0
PYTHON = 1
GO = 2



_AWSIDENTITY = _descriptor.Descriptor(
  name='AWSIdentity',
  full_name='approzium.authenticator.protos.AWSIdentity',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='signed_get_caller_identity', full_name='approzium.authenticator.protos.AWSIdentity.signed_get_caller_identity', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='claimed_iam_arn', full_name='approzium.authenticator.protos.AWSIdentity.claimed_iam_arn', index=1,
      number=2, type=9, cpp_type=9, label=1,
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
  serialized_start=55,
  serialized_end=129,
)


_PASSWORDREQUEST = _descriptor.Descriptor(
  name='PasswordRequest',
  full_name='approzium.authenticator.protos.PasswordRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='client_language', full_name='approzium.authenticator.protos.PasswordRequest.client_language', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dbhost', full_name='approzium.authenticator.protos.PasswordRequest.dbhost', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dbport', full_name='approzium.authenticator.protos.PasswordRequest.dbport', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dbuser', full_name='approzium.authenticator.protos.PasswordRequest.dbuser', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='aws', full_name='approzium.authenticator.protos.PasswordRequest.aws', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=132,
  serialized_end=328,
)


_PGMD5HASHREQUEST = _descriptor.Descriptor(
  name='PGMD5HashRequest',
  full_name='approzium.authenticator.protos.PGMD5HashRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pwd_request', full_name='approzium.authenticator.protos.PGMD5HashRequest.pwd_request', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='salt', full_name='approzium.authenticator.protos.PGMD5HashRequest.salt', index=1,
      number=2, type=12, cpp_type=9, label=1,
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
  serialized_start=330,
  serialized_end=432,
)


_PGSHA256HASHREQUEST = _descriptor.Descriptor(
  name='PGSHA256HashRequest',
  full_name='approzium.authenticator.protos.PGSHA256HashRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pwd_request', full_name='approzium.authenticator.protos.PGSHA256HashRequest.pwd_request', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='salt', full_name='approzium.authenticator.protos.PGSHA256HashRequest.salt', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='iterations', full_name='approzium.authenticator.protos.PGSHA256HashRequest.iterations', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='authentication_msg', full_name='approzium.authenticator.protos.PGSHA256HashRequest.authentication_msg', index=3,
      number=4, type=9, cpp_type=9, label=1,
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
  serialized_start=435,
  serialized_end=588,
)


_MYSQLSHA1HASHREQUEST = _descriptor.Descriptor(
  name='MYSQLSHA1HashRequest',
  full_name='approzium.authenticator.protos.MYSQLSHA1HashRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pwd_request', full_name='approzium.authenticator.protos.MYSQLSHA1HashRequest.pwd_request', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='salt', full_name='approzium.authenticator.protos.MYSQLSHA1HashRequest.salt', index=1,
      number=2, type=12, cpp_type=9, label=1,
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
  serialized_start=590,
  serialized_end=696,
)


_PGMD5RESPONSE = _descriptor.Descriptor(
  name='PGMD5Response',
  full_name='approzium.authenticator.protos.PGMD5Response',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='hash', full_name='approzium.authenticator.protos.PGMD5Response.hash', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='requestid', full_name='approzium.authenticator.protos.PGMD5Response.requestid', index=1,
      number=2, type=9, cpp_type=9, label=1,
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
  serialized_start=698,
  serialized_end=746,
)


_PGSHA256RESPONSE = _descriptor.Descriptor(
  name='PGSHA256Response',
  full_name='approzium.authenticator.protos.PGSHA256Response',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='cproof', full_name='approzium.authenticator.protos.PGSHA256Response.cproof', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sproof', full_name='approzium.authenticator.protos.PGSHA256Response.sproof', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='requestid', full_name='approzium.authenticator.protos.PGSHA256Response.requestid', index=2,
      number=3, type=9, cpp_type=9, label=1,
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
  serialized_start=748,
  serialized_end=817,
)


_MYSQLSHA1RESPONSE = _descriptor.Descriptor(
  name='MYSQLSHA1Response',
  full_name='approzium.authenticator.protos.MYSQLSHA1Response',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='hash', full_name='approzium.authenticator.protos.MYSQLSHA1Response.hash', index=0,
      number=1, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='requestid', full_name='approzium.authenticator.protos.MYSQLSHA1Response.requestid', index=1,
      number=2, type=9, cpp_type=9, label=1,
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
  serialized_start=819,
  serialized_end=871,
)

_PASSWORDREQUEST.fields_by_name['client_language'].enum_type = _CLIENTLANGUAGE
_PASSWORDREQUEST.fields_by_name['aws'].message_type = _AWSIDENTITY
_PGMD5HASHREQUEST.fields_by_name['pwd_request'].message_type = _PASSWORDREQUEST
_PGSHA256HASHREQUEST.fields_by_name['pwd_request'].message_type = _PASSWORDREQUEST
_MYSQLSHA1HASHREQUEST.fields_by_name['pwd_request'].message_type = _PASSWORDREQUEST
DESCRIPTOR.message_types_by_name['AWSIdentity'] = _AWSIDENTITY
DESCRIPTOR.message_types_by_name['PasswordRequest'] = _PASSWORDREQUEST
DESCRIPTOR.message_types_by_name['PGMD5HashRequest'] = _PGMD5HASHREQUEST
DESCRIPTOR.message_types_by_name['PGSHA256HashRequest'] = _PGSHA256HASHREQUEST
DESCRIPTOR.message_types_by_name['MYSQLSHA1HashRequest'] = _MYSQLSHA1HASHREQUEST
DESCRIPTOR.message_types_by_name['PGMD5Response'] = _PGMD5RESPONSE
DESCRIPTOR.message_types_by_name['PGSHA256Response'] = _PGSHA256RESPONSE
DESCRIPTOR.message_types_by_name['MYSQLSHA1Response'] = _MYSQLSHA1RESPONSE
DESCRIPTOR.enum_types_by_name['ClientLanguage'] = _CLIENTLANGUAGE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

AWSIdentity = _reflection.GeneratedProtocolMessageType('AWSIdentity', (_message.Message,), {
  'DESCRIPTOR' : _AWSIDENTITY,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.AWSIdentity)
  })
_sym_db.RegisterMessage(AWSIdentity)

PasswordRequest = _reflection.GeneratedProtocolMessageType('PasswordRequest', (_message.Message,), {
  'DESCRIPTOR' : _PASSWORDREQUEST,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.PasswordRequest)
  })
_sym_db.RegisterMessage(PasswordRequest)

PGMD5HashRequest = _reflection.GeneratedProtocolMessageType('PGMD5HashRequest', (_message.Message,), {
  'DESCRIPTOR' : _PGMD5HASHREQUEST,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.PGMD5HashRequest)
  })
_sym_db.RegisterMessage(PGMD5HashRequest)

PGSHA256HashRequest = _reflection.GeneratedProtocolMessageType('PGSHA256HashRequest', (_message.Message,), {
  'DESCRIPTOR' : _PGSHA256HASHREQUEST,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.PGSHA256HashRequest)
  })
_sym_db.RegisterMessage(PGSHA256HashRequest)

MYSQLSHA1HashRequest = _reflection.GeneratedProtocolMessageType('MYSQLSHA1HashRequest', (_message.Message,), {
  'DESCRIPTOR' : _MYSQLSHA1HASHREQUEST,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.MYSQLSHA1HashRequest)
  })
_sym_db.RegisterMessage(MYSQLSHA1HashRequest)

PGMD5Response = _reflection.GeneratedProtocolMessageType('PGMD5Response', (_message.Message,), {
  'DESCRIPTOR' : _PGMD5RESPONSE,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.PGMD5Response)
  })
_sym_db.RegisterMessage(PGMD5Response)

PGSHA256Response = _reflection.GeneratedProtocolMessageType('PGSHA256Response', (_message.Message,), {
  'DESCRIPTOR' : _PGSHA256RESPONSE,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.PGSHA256Response)
  })
_sym_db.RegisterMessage(PGSHA256Response)

MYSQLSHA1Response = _reflection.GeneratedProtocolMessageType('MYSQLSHA1Response', (_message.Message,), {
  'DESCRIPTOR' : _MYSQLSHA1RESPONSE,
  '__module__' : 'authenticator_pb2'
  # @@protoc_insertion_point(class_scope:approzium.authenticator.protos.MYSQLSHA1Response)
  })
_sym_db.RegisterMessage(MYSQLSHA1Response)



_AUTHENTICATOR = _descriptor.ServiceDescriptor(
  name='Authenticator',
  full_name='approzium.authenticator.protos.Authenticator',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=939,
  serialized_end=1320,
  methods=[
  _descriptor.MethodDescriptor(
    name='GetPGMD5Hash',
    full_name='approzium.authenticator.protos.Authenticator.GetPGMD5Hash',
    index=0,
    containing_service=None,
    input_type=_PGMD5HASHREQUEST,
    output_type=_PGMD5RESPONSE,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='GetPGSHA256Hash',
    full_name='approzium.authenticator.protos.Authenticator.GetPGSHA256Hash',
    index=1,
    containing_service=None,
    input_type=_PGSHA256HASHREQUEST,
    output_type=_PGSHA256RESPONSE,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='GetMYSQLSHA1Hash',
    full_name='approzium.authenticator.protos.Authenticator.GetMYSQLSHA1Hash',
    index=2,
    containing_service=None,
    input_type=_MYSQLSHA1HASHREQUEST,
    output_type=_MYSQLSHA1RESPONSE,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_AUTHENTICATOR)

DESCRIPTOR.services_by_name['Authenticator'] = _AUTHENTICATOR

# @@protoc_insertion_point(module_scope)
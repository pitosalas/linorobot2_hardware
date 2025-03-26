// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#include "my_custom_message/msg/detail/my_custom_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_custom_message
const rosidl_type_hash_t *
my_custom_message__msg__MyCustomMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0xa6, 0x28, 0x9a, 0x51, 0xfe, 0x23, 0xe3,
      0x78, 0x2c, 0xb7, 0xb1, 0x21, 0xc6, 0x8a, 0xd2,
      0x82, 0xd5, 0x20, 0x99, 0x02, 0x69, 0x6b, 0x93,
      0x51, 0xf0, 0x9c, 0x0e, 0x33, 0x19, 0xd4, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_custom_message__msg__MyCustomMessage__TYPE_NAME[] = "my_custom_message/msg/MyCustomMessage";

// Define type names, field names, and default values
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__bool_test[] = "bool_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__byte_test[] = "byte_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__char_test[] = "char_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__float32_test[] = "float32_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__double_test[] = "double_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__int8_test[] = "int8_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__uint8_test[] = "uint8_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__int16_test[] = "int16_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__uint16_test[] = "uint16_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__int32_test[] = "int32_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__uint32_test[] = "uint32_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__int64_test[] = "int64_test";
static char my_custom_message__msg__MyCustomMessage__FIELD_NAME__uint64_test[] = "uint64_test";

static rosidl_runtime_c__type_description__Field my_custom_message__msg__MyCustomMessage__FIELDS[] = {
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__bool_test, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__byte_test, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BYTE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__char_test, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__float32_test, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__double_test, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__int8_test, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__uint8_test, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__int16_test, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__uint16_test, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__int32_test, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__uint32_test, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__int64_test, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_message__msg__MyCustomMessage__FIELD_NAME__uint64_test, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_custom_message__msg__MyCustomMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_custom_message__msg__MyCustomMessage__TYPE_NAME, 37, 37},
      {my_custom_message__msg__MyCustomMessage__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool bool_test\n"
  "byte byte_test\n"
  "char char_test\n"
  "float32 float32_test\n"
  "float64 double_test\n"
  "int8 int8_test\n"
  "uint8 uint8_test\n"
  "int16 int16_test\n"
  "uint16 uint16_test\n"
  "int32 int32_test\n"
  "uint32 uint32_test\n"
  "int64 int64_test\n"
  "uint64 uint64_test";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_custom_message__msg__MyCustomMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_custom_message__msg__MyCustomMessage__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 225, 225},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_custom_message__msg__MyCustomMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_custom_message__msg__MyCustomMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

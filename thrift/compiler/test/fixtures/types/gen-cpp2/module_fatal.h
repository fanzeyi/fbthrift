/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/reflection/reflection.h>

#include <fatal/type/list.h>
#include <fatal/type/pair.h>
#include <fatal/type/sequence.h>

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
namespace apache { namespace thrift { namespace fixtures { namespace types {

namespace thrift_fatal_impl_detail {

struct apache_thrift_fixtures_types_module__unique_strings_list {
  using MyStringField = ::fatal::sequence<char, 'M', 'y', 'S', 't', 'r', 'i', 'n', 'g', 'F', 'i', 'e', 'l', 'd'>;
  using SomeService = ::fatal::sequence<char, 'S', 'o', 'm', 'e', 'S', 'e', 'r', 'v', 'i', 'c', 'e'>;
  using cpp2 = ::fatal::sequence<char, 'c', 'p', 'p', '2'>;
  using VirtualStruct = ::fatal::sequence<char, 'V', 'i', 'r', 't', 'u', 'a', 'l', 'S', 't', 'r', 'u', 'c', 't'>;
  using MyStruct = ::fatal::sequence<char, 'M', 'y', 'S', 't', 'r', 'u', 'c', 't'>;
  using module = ::fatal::sequence<char, 'm', 'o', 'd', 'u', 'l', 'e'>;
  using one = ::fatal::sequence<char, 'o', 'n', 'e'>;
  using MyDataItem = ::fatal::sequence<char, 'M', 'y', 'D', 'a', 't', 'a', 'I', 't', 'e', 'm'>;
  using zero = ::fatal::sequence<char, 'z', 'e', 'r', 'o'>;
  using medium = ::fatal::sequence<char, 'm', 'e', 'd', 'i', 'u', 'm'>;
  using cpp_declare_hash = ::fatal::sequence<char, 'c', 'p', 'p', '.', 'd', 'e', 'c', 'l', 'a', 'r', 'e', '_', 'h', 'a', 's', 'h'>;
  using fieldC = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'C'>;
  using ComplexNestedWithDefault = ::fatal::sequence<char, 'C', 'o', 'm', 'p', 'l', 'e', 'x', 'N', 'e', 's', 't', 'e', 'd', 'W', 'i', 't', 'h', 'D', 'e', 'f', 'a', 'u', 'l', 't'>;
  using cpp_declare_equal_to = ::fatal::sequence<char, 'c', 'p', 'p', '.', 'd', 'e', 'c', 'l', 'a', 'r', 'e', '_', 'e', 'q', 'u', 'a', 'l', '_', 't', 'o'>;
  using n = ::fatal::sequence<char, 'n'>;
  using data = ::fatal::sequence<char, 'd', 'a', 't', 'a'>;
  using ContainerStruct = ::fatal::sequence<char, 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'S', 't', 'r', 'u', 'c', 't'>;
  using cpp_minimize_padding = ::fatal::sequence<char, 'c', 'p', 'p', '.', 'm', 'i', 'n', 'i', 'm', 'i', 'z', 'e', '_', 'p', 'a', 'd', 'd', 'i', 'n', 'g'>;
  using Renaming = ::fatal::sequence<char, 'R', 'e', 'n', 'a', 'm', 'i', 'n', 'g'>;
  using bounce_map = ::fatal::sequence<char, 'b', 'o', 'u', 'n', 'c', 'e', '_', 'm', 'a', 'p'>;
  using MyIntField = ::fatal::sequence<char, 'M', 'y', 'I', 'n', 't', 'F', 'i', 'e', 'l', 'd'>;
  using major = ::fatal::sequence<char, 'm', 'a', 'j', 'o', 'r'>;
  using MinPadding = ::fatal::sequence<char, 'M', 'i', 'n', 'P', 'a', 'd', 'd', 'i', 'n', 'g'>;
  using two = ::fatal::sequence<char, 't', 'w', 'o'>;
  using tiny = ::fatal::sequence<char, 't', 'i', 'n', 'y'>;
  using field = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd'>;
  using NONZERO = ::fatal::sequence<char, 'N', 'O', 'N', 'Z', 'E', 'R', 'O'>;
  using is_unscoped = ::fatal::sequence<char, 'i', 's', '_', 'u', 'n', 's', 'c', 'o', 'p', 'e', 'd'>;
  using apache__thrift__fixtures__types = ::fatal::sequence<char, 'a', 'p', 'a', 'c', 'h', 'e', ':', ':', 't', 'h', 'r', 'i', 'f', 't', ':', ':', 'f', 'i', 'x', 't', 'u', 'r', 'e', 's', ':', ':', 't', 'y', 'p', 'e', 's'>;
  using big = ::fatal::sequence<char, 'b', 'i', 'g'>;
  using cpp_deprecated_enum_unscoped = ::fatal::sequence<char, 'c', 'p', 'p', '.', 'd', 'e', 'p', 'r', 'e', 'c', 'a', 't', 'e', 'd', '_', 'e', 'n', 'u', 'm', '_', 'u', 'n', 's', 'c', 'o', 'p', 'e', 'd'>;
  using small = ::fatal::sequence<char, 's', 'm', 'a', 'l', 'l'>;
  using ZERO = ::fatal::sequence<char, 'Z', 'E', 'R', 'O'>;
  using binary_keyed_map = ::fatal::sequence<char, 'b', 'i', 'n', 'a', 'r', 'y', '_', 'k', 'e', 'y', 'e', 'd', '_', 'm', 'a', 'p'>;
  using fieldB = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'B'>;
  using world = ::fatal::sequence<char, 'w', 'o', 'r', 'l', 'd'>;
  using TrivialNumeric = ::fatal::sequence<char, 'T', 'r', 'i', 'v', 'i', 'a', 'l', 'N', 'u', 'm', 'e', 'r', 'i', 'c'>;
  using fieldA = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'A'>;
  using fieldF = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'F'>;
  using fieldG = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'G'>;
  using fieldD = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'D'>;
  using fieldE = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'E'>;
  using a = ::fatal::sequence<char, 'a'>;
  using cpp_declare_bitwise_ops = ::fatal::sequence<char, 'c', 'p', 'p', '.', 'd', 'e', 'c', 'l', 'a', 'r', 'e', '_', 'b', 'i', 't', 'w', 'i', 's', 'e', '_', 'o', 'p', 's'>;
  using none = ::fatal::sequence<char, 'n', 'o', 'n', 'e'>;
  using b = ::fatal::sequence<char, 'b'>;
  using bar = ::fatal::sequence<char, 'b', 'a', 'r'>;
  using MyForwardRefEnum = ::fatal::sequence<char, 'M', 'y', 'F', 'o', 'r', 'w', 'a', 'r', 'd', 'R', 'e', 'f', 'E', 'n', 'u', 'm'>;
  using CppTypeStruct = ::fatal::sequence<char, 'C', 'p', 'p', 'T', 'y', 'p', 'e', 'S', 't', 'r', 'u', 'c', 't'>;
  using cpp_virtual = ::fatal::sequence<char, 'c', 'p', 'p', '.', 'v', 'i', 'r', 't', 'u', 'a', 'l'>;
  using m = ::fatal::sequence<char, 'm'>;
  using fieldH = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'H'>;
  using has_bitwise_ops = ::fatal::sequence<char, 'h', 'a', 's', '_', 'b', 'i', 't', 'w', 'i', 's', 'e', '_', 'o', 'p', 's'>;
  using hello = ::fatal::sequence<char, 'h', 'e', 'l', 'l', 'o'>;
  using biggish = ::fatal::sequence<char, 'b', 'i', 'g', 'g', 'i', 's', 'h'>;
  using cpp2_noncomparable = ::fatal::sequence<char, 'c', 'p', 'p', '2', '.', 'n', 'o', 'n', 'c', 'o', 'm', 'p', 'a', 'r', 'a', 'b', 'l', 'e'>;
  using ComplexString = ::fatal::sequence<char, 'C', 'o', 'm', 'p', 'l', 'e', 'x', 'S', 't', 'r', 'i', 'n', 'g'>;
  using r = ::fatal::sequence<char, 'r'>;
  using three = ::fatal::sequence<char, 't', 'h', 'r', 'e', 'e'>;
  using MyStructWithForwardRefEnum = ::fatal::sequence<char, 'M', 'y', 'S', 't', 'r', 'u', 'c', 't', 'W', 'i', 't', 'h', 'F', 'o', 'r', 'w', 'a', 'r', 'd', 'R', 'e', 'f', 'E', 'n', 'u', 'm'>;
  using cpp = ::fatal::sequence<char, 'c', 'p', 'p'>;
  using TrivialNestedWithDefault = ::fatal::sequence<char, 'T', 'r', 'i', 'v', 'i', 'a', 'l', 'N', 'e', 's', 't', 'e', 'd', 'W', 'i', 't', 'h', 'D', 'e', 'f', 'a', 'u', 'l', 't'>;
  using z = ::fatal::sequence<char, 'z'>;
  using decorated_struct = ::fatal::sequence<char, 'd', 'e', 'c', 'o', 'r', 'a', 't', 'e', 'd', '_', 's', 't', 'r', 'u', 'c', 't'>;
};

} // thrift_fatal_impl_detail
class module_tags {
  struct apache_thrift_fixtures_types_module__unique_languages_list {
    using cpp = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::cpp;
    using cpp2 = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::cpp2;
  };

  struct apache_thrift_fixtures_types_module__unique_enums_list {
    using has_bitwise_ops = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::has_bitwise_ops;
    using is_unscoped = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::is_unscoped;
    using MyForwardRefEnum = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyForwardRefEnum;
  };

  struct apache_thrift_fixtures_types_module__unique_unions_list {
  };

  struct apache_thrift_fixtures_types_module__unique_structs_list {
    using decorated_struct = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::decorated_struct;
    using ContainerStruct = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::ContainerStruct;
    using CppTypeStruct = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::CppTypeStruct;
    using VirtualStruct = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::VirtualStruct;
    using MyStructWithForwardRefEnum = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyStructWithForwardRefEnum;
    using TrivialNumeric = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::TrivialNumeric;
    using TrivialNestedWithDefault = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::TrivialNestedWithDefault;
    using ComplexString = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::ComplexString;
    using ComplexNestedWithDefault = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::ComplexNestedWithDefault;
    using MinPadding = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MinPadding;
    using MyStruct = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyStruct;
    using MyDataItem = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyDataItem;
    using Renaming = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::Renaming;
  };

  struct apache_thrift_fixtures_types_module__unique_constants_list {
  };

  struct apache_thrift_fixtures_types_module__unique_services_list {
    using SomeService = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::SomeService;
  };

public:
  struct module {};

  using languages = apache_thrift_fixtures_types_module__unique_languages_list;
  using enums = apache_thrift_fixtures_types_module__unique_enums_list;
  using unions = apache_thrift_fixtures_types_module__unique_unions_list;
  using structs = apache_thrift_fixtures_types_module__unique_structs_list;
  using constants = apache_thrift_fixtures_types_module__unique_constants_list;
  using services = apache_thrift_fixtures_types_module__unique_services_list;

  using strings = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list;
};

THRIFT_REGISTER_REFLECTION_METADATA(
  module_tags::module,
  thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::module,
  // languages
  ::fatal::list<
    ::fatal::pair<thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::cpp, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::apache__thrift__fixtures__types>,
    ::fatal::pair<thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::cpp2, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::apache__thrift__fixtures__types>
  >,
  // enums
  ::fatal::list<
    ::fatal::pair<has_bitwise_ops, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::has_bitwise_ops>,
    ::fatal::pair<is_unscoped, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::is_unscoped>,
    ::fatal::pair<MyForwardRefEnum, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyForwardRefEnum>
  >,
  // unions
  ::fatal::list<
  >,
  // structs
  ::fatal::list<
    ::fatal::pair<decorated_struct, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::decorated_struct>,
    ::fatal::pair<ContainerStruct, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::ContainerStruct>,
    ::fatal::pair<CppTypeStruct, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::CppTypeStruct>,
    ::fatal::pair<VirtualStruct, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::VirtualStruct>,
    ::fatal::pair<MyStructWithForwardRefEnum, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyStructWithForwardRefEnum>,
    ::fatal::pair<TrivialNumeric, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::TrivialNumeric>,
    ::fatal::pair<TrivialNestedWithDefault, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::TrivialNestedWithDefault>,
    ::fatal::pair<ComplexString, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::ComplexString>,
    ::fatal::pair<ComplexNestedWithDefault, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::ComplexNestedWithDefault>,
    ::fatal::pair<MinPadding, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MinPadding>,
    ::fatal::pair<MyStruct, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyStruct>,
    ::fatal::pair<MyDataItem, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyDataItem>,
    ::fatal::pair<Renaming, thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::Renaming>
  >,
  // constants
  ::fatal::list<
  >,
  // services
  ::fatal::list<
    thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::SomeService
  >
);

}}}} // apache::thrift::fixtures::types
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_fatal_types.h"

/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <thrift/lib/cpp2/type/Tag.h>

#include "thrift/annotation/gen-cpp2/internal_types.h"
#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/foo_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct injected_field;
struct injected_field;
struct string_field;
struct injected_field;
struct string_field;
struct injected_field;
struct injected_structured_annotation_field;
struct injected_unstructured_annotation_field;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_injected_field
#define APACHE_THRIFT_ACCESSOR_injected_field
APACHE_THRIFT_DEFINE_ACCESSOR(injected_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_injected_field
#define APACHE_THRIFT_ACCESSOR_injected_field
APACHE_THRIFT_DEFINE_ACCESSOR(injected_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_string_field
#define APACHE_THRIFT_ACCESSOR_string_field
APACHE_THRIFT_DEFINE_ACCESSOR(string_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_injected_field
#define APACHE_THRIFT_ACCESSOR_injected_field
APACHE_THRIFT_DEFINE_ACCESSOR(injected_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_string_field
#define APACHE_THRIFT_ACCESSOR_string_field
APACHE_THRIFT_DEFINE_ACCESSOR(string_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_injected_field
#define APACHE_THRIFT_ACCESSOR_injected_field
APACHE_THRIFT_DEFINE_ACCESSOR(injected_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_injected_structured_annotation_field
#define APACHE_THRIFT_ACCESSOR_injected_structured_annotation_field
APACHE_THRIFT_DEFINE_ACCESSOR(injected_structured_annotation_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_injected_unstructured_annotation_field
#define APACHE_THRIFT_ACCESSOR_injected_unstructured_annotation_field
APACHE_THRIFT_DEFINE_ACCESSOR(injected_unstructured_annotation_field);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Fields;
class FieldsInjectedToEmptyStruct;
class FieldsInjectedToStruct;
class FieldsInjectedWithIncludedStruct;
} // cpp2
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class Fields final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = Fields;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Fields() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Fields(apache::thrift::FragileConstructor, ::std::string injected_field__arg);

  Fields(Fields&&) noexcept;

  Fields(const Fields& src);


  Fields& operator=(Fields&&) noexcept;
  Fields& operator=(const Fields& src);
 private:
  ::std::string __fbthrift_field_injected_field;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const Fields&) const;
  bool operator<(const Fields&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> injected_field_ref() const& {
    return {this->__fbthrift_field_injected_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> injected_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_injected_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> injected_field_ref() & {
    return {this->__fbthrift_field_injected_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> injected_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_injected_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> injected_field() const& {
    return {this->__fbthrift_field_injected_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> injected_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_injected_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> injected_field() & {
    return {this->__fbthrift_field_injected_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> injected_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_injected_field), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_injected_field() const& {
    return __fbthrift_field_injected_field;
  }

  ::std::string get_injected_field() && {
    return std::move(__fbthrift_field_injected_field);
  }

  template <typename T_Fields_injected_field_struct_setter = ::std::string>
  [[deprecated("Use `FOO.injected_field_ref() = BAR;` instead of `FOO.set_injected_field(BAR);`")]]
  ::std::string& set_injected_field(T_Fields_injected_field_struct_setter&& injected_field_) {
    injected_field_ref() = std::forward<T_Fields_injected_field_struct_setter>(injected_field_);
    return __fbthrift_field_injected_field;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Fields>;
  friend void swap(Fields& a, Fields& b);
};

template <class Protocol_>
unsigned long Fields::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


class FieldsInjectedToEmptyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = FieldsInjectedToEmptyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  FieldsInjectedToEmptyStruct() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  FieldsInjectedToEmptyStruct(apache::thrift::FragileConstructor, ::std::string injected_field__arg);

  FieldsInjectedToEmptyStruct(FieldsInjectedToEmptyStruct&&) noexcept;

  FieldsInjectedToEmptyStruct(const FieldsInjectedToEmptyStruct& src);


  FieldsInjectedToEmptyStruct& operator=(FieldsInjectedToEmptyStruct&&) noexcept;
  FieldsInjectedToEmptyStruct& operator=(const FieldsInjectedToEmptyStruct& src);
 private:
  ::std::string __fbthrift_field_injected_field;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const FieldsInjectedToEmptyStruct&) const;
  bool operator<(const FieldsInjectedToEmptyStruct&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> injected_field_ref() const& {
    return {this->__fbthrift_field_injected_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> injected_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_injected_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> injected_field_ref() & {
    return {this->__fbthrift_field_injected_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> injected_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_injected_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> injected_field() const& {
    return {this->__fbthrift_field_injected_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> injected_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_injected_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> injected_field() & {
    return {this->__fbthrift_field_injected_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> injected_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_injected_field), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_injected_field() const& {
    return __fbthrift_field_injected_field;
  }

  ::std::string get_injected_field() && {
    return std::move(__fbthrift_field_injected_field);
  }

  template <typename T_FieldsInjectedToEmptyStruct_injected_field_struct_setter = ::std::string>
  [[deprecated("Use `FOO.injected_field_ref() = BAR;` instead of `FOO.set_injected_field(BAR);`")]]
  ::std::string& set_injected_field(T_FieldsInjectedToEmptyStruct_injected_field_struct_setter&& injected_field_) {
    injected_field_ref() = std::forward<T_FieldsInjectedToEmptyStruct_injected_field_struct_setter>(injected_field_);
    return __fbthrift_field_injected_field;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<FieldsInjectedToEmptyStruct>;
  friend void swap(FieldsInjectedToEmptyStruct& a, FieldsInjectedToEmptyStruct& b);
};

template <class Protocol_>
unsigned long FieldsInjectedToEmptyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


class FieldsInjectedToStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = FieldsInjectedToStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  FieldsInjectedToStruct() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  FieldsInjectedToStruct(apache::thrift::FragileConstructor, ::std::string string_field__arg, ::std::string injected_field__arg);

  FieldsInjectedToStruct(FieldsInjectedToStruct&&) noexcept;

  FieldsInjectedToStruct(const FieldsInjectedToStruct& src);


  FieldsInjectedToStruct& operator=(FieldsInjectedToStruct&&) noexcept;
  FieldsInjectedToStruct& operator=(const FieldsInjectedToStruct& src);
 private:
  ::std::string __fbthrift_field_string_field;
 private:
  ::std::string __fbthrift_field_injected_field;
 private:
  apache::thrift::detail::isset_bitset<2, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const FieldsInjectedToStruct&) const;
  bool operator<(const FieldsInjectedToStruct&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> string_field_ref() const& {
    return {this->__fbthrift_field_string_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> string_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_string_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> string_field_ref() & {
    return {this->__fbthrift_field_string_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> string_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_string_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> string_field() const& {
    return {this->__fbthrift_field_string_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> string_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_string_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> string_field() & {
    return {this->__fbthrift_field_string_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> string_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_string_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> injected_field_ref() const& {
    return {this->__fbthrift_field_injected_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> injected_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_injected_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> injected_field_ref() & {
    return {this->__fbthrift_field_injected_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> injected_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_injected_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> injected_field() const& {
    return {this->__fbthrift_field_injected_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> injected_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_injected_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> injected_field() & {
    return {this->__fbthrift_field_injected_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> injected_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_injected_field), __isset.at(1), __isset.bit(1)};
  }

  const ::std::string& get_string_field() const& {
    return __fbthrift_field_string_field;
  }

  ::std::string get_string_field() && {
    return std::move(__fbthrift_field_string_field);
  }

  template <typename T_FieldsInjectedToStruct_string_field_struct_setter = ::std::string>
  [[deprecated("Use `FOO.string_field_ref() = BAR;` instead of `FOO.set_string_field(BAR);`")]]
  ::std::string& set_string_field(T_FieldsInjectedToStruct_string_field_struct_setter&& string_field_) {
    string_field_ref() = std::forward<T_FieldsInjectedToStruct_string_field_struct_setter>(string_field_);
    return __fbthrift_field_string_field;
  }

  const ::std::string& get_injected_field() const& {
    return __fbthrift_field_injected_field;
  }

  ::std::string get_injected_field() && {
    return std::move(__fbthrift_field_injected_field);
  }

  template <typename T_FieldsInjectedToStruct_injected_field_struct_setter = ::std::string>
  [[deprecated("Use `FOO.injected_field_ref() = BAR;` instead of `FOO.set_injected_field(BAR);`")]]
  ::std::string& set_injected_field(T_FieldsInjectedToStruct_injected_field_struct_setter&& injected_field_) {
    injected_field_ref() = std::forward<T_FieldsInjectedToStruct_injected_field_struct_setter>(injected_field_);
    return __fbthrift_field_injected_field;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<FieldsInjectedToStruct>;
  friend void swap(FieldsInjectedToStruct& a, FieldsInjectedToStruct& b);
};

template <class Protocol_>
unsigned long FieldsInjectedToStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


class FieldsInjectedWithIncludedStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = FieldsInjectedWithIncludedStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  FieldsInjectedWithIncludedStruct() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  FieldsInjectedWithIncludedStruct(apache::thrift::FragileConstructor, ::std::string string_field__arg, ::std::string injected_field__arg, ::apache::thrift::detail::boxed_value_ptr<::std::string> injected_structured_annotation_field__arg, ::apache::thrift::detail::boxed_value_ptr<::std::string> injected_unstructured_annotation_field__arg);

  FieldsInjectedWithIncludedStruct(FieldsInjectedWithIncludedStruct&&) noexcept;

  FieldsInjectedWithIncludedStruct(const FieldsInjectedWithIncludedStruct& src);


  FieldsInjectedWithIncludedStruct& operator=(FieldsInjectedWithIncludedStruct&&) noexcept;
  FieldsInjectedWithIncludedStruct& operator=(const FieldsInjectedWithIncludedStruct& src);
 private:
  ::std::string __fbthrift_field_string_field;
 private:
  ::std::string __fbthrift_field_injected_field;
 private:
  ::apache::thrift::detail::boxed_value_ptr<::std::string> __fbthrift_field_injected_structured_annotation_field;
 private:
  ::apache::thrift::detail::boxed_value_ptr<::std::string> __fbthrift_field_injected_unstructured_annotation_field;
 private:
  apache::thrift::detail::isset_bitset<2, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const FieldsInjectedWithIncludedStruct&) const;
  bool operator<(const FieldsInjectedWithIncludedStruct&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> string_field_ref() const& {
    return {this->__fbthrift_field_string_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> string_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_string_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> string_field_ref() & {
    return {this->__fbthrift_field_string_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> string_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_string_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> string_field() const& {
    return {this->__fbthrift_field_string_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> string_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_string_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> string_field() & {
    return {this->__fbthrift_field_string_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> string_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_string_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> injected_field_ref() const& {
    return {this->__fbthrift_field_injected_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> injected_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_injected_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> injected_field_ref() & {
    return {this->__fbthrift_field_injected_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> injected_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_injected_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> injected_field() const& {
    return {this->__fbthrift_field_injected_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> injected_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_injected_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> injected_field() & {
    return {this->__fbthrift_field_injected_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> injected_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_injected_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&> injected_structured_annotation_field_ref() const& {
    return ::apache::thrift::optional_boxed_field_ref<const T&>{this->__fbthrift_field_injected_structured_annotation_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&&> injected_structured_annotation_field_ref() const&& {
    return ::apache::thrift::optional_boxed_field_ref<const T&&>{static_cast<const T&&>(this->__fbthrift_field_injected_structured_annotation_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&> injected_structured_annotation_field_ref() & {
    return ::apache::thrift::optional_boxed_field_ref<T&>{this->__fbthrift_field_injected_structured_annotation_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&&> injected_structured_annotation_field_ref() && {
    return ::apache::thrift::optional_boxed_field_ref<T&&>{static_cast<T&&>(this->__fbthrift_field_injected_structured_annotation_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&> injected_structured_annotation_field() const& {
    return ::apache::thrift::optional_boxed_field_ref<const T&>{this->__fbthrift_field_injected_structured_annotation_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&&> injected_structured_annotation_field() const&& {
    return ::apache::thrift::optional_boxed_field_ref<const T&&>{static_cast<const T&&>(this->__fbthrift_field_injected_structured_annotation_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&> injected_structured_annotation_field() & {
    return ::apache::thrift::optional_boxed_field_ref<T&>{this->__fbthrift_field_injected_structured_annotation_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&&> injected_structured_annotation_field() && {
    return ::apache::thrift::optional_boxed_field_ref<T&&>{static_cast<T&&>(this->__fbthrift_field_injected_structured_annotation_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&> injected_unstructured_annotation_field_ref() const& {
    return ::apache::thrift::optional_boxed_field_ref<const T&>{this->__fbthrift_field_injected_unstructured_annotation_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&&> injected_unstructured_annotation_field_ref() const&& {
    return ::apache::thrift::optional_boxed_field_ref<const T&&>{static_cast<const T&&>(this->__fbthrift_field_injected_unstructured_annotation_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&> injected_unstructured_annotation_field_ref() & {
    return ::apache::thrift::optional_boxed_field_ref<T&>{this->__fbthrift_field_injected_unstructured_annotation_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&&> injected_unstructured_annotation_field_ref() && {
    return ::apache::thrift::optional_boxed_field_ref<T&&>{static_cast<T&&>(this->__fbthrift_field_injected_unstructured_annotation_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&> injected_unstructured_annotation_field() const& {
    return ::apache::thrift::optional_boxed_field_ref<const T&>{this->__fbthrift_field_injected_unstructured_annotation_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&&> injected_unstructured_annotation_field() const&& {
    return ::apache::thrift::optional_boxed_field_ref<const T&&>{static_cast<const T&&>(this->__fbthrift_field_injected_unstructured_annotation_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&> injected_unstructured_annotation_field() & {
    return ::apache::thrift::optional_boxed_field_ref<T&>{this->__fbthrift_field_injected_unstructured_annotation_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&&> injected_unstructured_annotation_field() && {
    return ::apache::thrift::optional_boxed_field_ref<T&&>{static_cast<T&&>(this->__fbthrift_field_injected_unstructured_annotation_field)};
  }

  const ::std::string& get_string_field() const& {
    return __fbthrift_field_string_field;
  }

  ::std::string get_string_field() && {
    return std::move(__fbthrift_field_string_field);
  }

  template <typename T_FieldsInjectedWithIncludedStruct_string_field_struct_setter = ::std::string>
  [[deprecated("Use `FOO.string_field_ref() = BAR;` instead of `FOO.set_string_field(BAR);`")]]
  ::std::string& set_string_field(T_FieldsInjectedWithIncludedStruct_string_field_struct_setter&& string_field_) {
    string_field_ref() = std::forward<T_FieldsInjectedWithIncludedStruct_string_field_struct_setter>(string_field_);
    return __fbthrift_field_string_field;
  }

  const ::std::string& get_injected_field() const& {
    return __fbthrift_field_injected_field;
  }

  ::std::string get_injected_field() && {
    return std::move(__fbthrift_field_injected_field);
  }

  template <typename T_FieldsInjectedWithIncludedStruct_injected_field_struct_setter = ::std::string>
  [[deprecated("Use `FOO.injected_field_ref() = BAR;` instead of `FOO.set_injected_field(BAR);`")]]
  ::std::string& set_injected_field(T_FieldsInjectedWithIncludedStruct_injected_field_struct_setter&& injected_field_) {
    injected_field_ref() = std::forward<T_FieldsInjectedWithIncludedStruct_injected_field_struct_setter>(injected_field_);
    return __fbthrift_field_injected_field;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<FieldsInjectedWithIncludedStruct>;
  friend void swap(FieldsInjectedWithIncludedStruct& a, FieldsInjectedWithIncludedStruct& b);
};

template <class Protocol_>
unsigned long FieldsInjectedWithIncludedStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // cpp2

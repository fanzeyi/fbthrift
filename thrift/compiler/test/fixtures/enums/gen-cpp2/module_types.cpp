/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::Metasyntactic>::size;
folly::Range<::cpp2::Metasyntactic const*> const TEnumTraits<::cpp2::Metasyntactic>::values = folly::range(TEnumDataStorage<::cpp2::Metasyntactic>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::Metasyntactic>::names = folly::range(TEnumDataStorage<::cpp2::Metasyntactic>::names);

char const* TEnumTraits<::cpp2::Metasyntactic>::findName(type value) {
  using factory = ::cpp2::_Metasyntactic_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::Metasyntactic>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_Metasyntactic_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _Metasyntactic_EnumMapFactory::ValuesToNamesMapType _Metasyntactic_VALUES_TO_NAMES = _Metasyntactic_EnumMapFactory::makeValuesToNamesMap();
const _Metasyntactic_EnumMapFactory::NamesToValuesMapType _Metasyntactic_NAMES_TO_VALUES = _Metasyntactic_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SomeStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SomeStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SomeStruct::SomeStruct(const SomeStruct&) = default;
SomeStruct& SomeStruct::operator=(const SomeStruct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SomeStruct::SomeStruct(SomeStruct&& other) noexcept  :
    reasonable(std::move(other.reasonable)),
    fine(std::move(other.fine)),
    questionable(std::move(other.questionable)),
    tags(std::move(other.tags)),
    __isset(other.__isset) {
}

SomeStruct& SomeStruct::operator=(FOLLY_MAYBE_UNUSED SomeStruct&& other) noexcept {
    this->reasonable = std::move(other.reasonable);
    this->fine = std::move(other.fine);
    this->questionable = std::move(other.questionable);
    this->tags = std::move(other.tags);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SomeStruct::SomeStruct(apache::thrift::FragileConstructor, ::cpp2::Metasyntactic reasonable__arg, ::cpp2::Metasyntactic fine__arg, ::cpp2::Metasyntactic questionable__arg, ::std::set<::std::int32_t> tags__arg) :
    reasonable(std::move(reasonable__arg)),
    fine(std::move(fine__arg)),
    questionable(std::move(questionable__arg)),
    tags(std::move(tags__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
  __isset.__fbthrift_set(folly::index_constant<2>(), true);
  __isset.__fbthrift_set(folly::index_constant<3>(), true);
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void SomeStruct::__clear() {
  // clear all fields
  this->reasonable =  ::cpp2::Metasyntactic::FOO;
  this->fine =  ::cpp2::Metasyntactic::BAR;
  this->questionable = static_cast< ::cpp2::Metasyntactic>(-1);
  this->tags.clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool SomeStruct::operator==(const SomeStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reasonable_ref() == rhs.reasonable_ref())) {
    return false;
  }
  if (!(lhs.fine_ref() == rhs.fine_ref())) {
    return false;
  }
  if (!(lhs.questionable_ref() == rhs.questionable_ref())) {
    return false;
  }
  if (!(lhs.tags_ref() == rhs.tags_ref())) {
    return false;
  }
  return true;
}

bool SomeStruct::operator<(const SomeStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reasonable_ref() == rhs.reasonable_ref())) {
    return lhs.reasonable_ref() < rhs.reasonable_ref();
  }
  if (!(lhs.fine_ref() == rhs.fine_ref())) {
    return lhs.fine_ref() < rhs.fine_ref();
  }
  if (!(lhs.questionable_ref() == rhs.questionable_ref())) {
    return lhs.questionable_ref() < rhs.questionable_ref();
  }
  if (!(lhs.tags_ref() == rhs.tags_ref())) {
    return lhs.tags_ref() < rhs.tags_ref();
  }
  return false;
}

const ::std::set<::std::int32_t>& SomeStruct::get_tags() const& {
  return tags;
}

::std::set<::std::int32_t> SomeStruct::get_tags() && {
  return std::move(tags);
}


void swap(SomeStruct& a, SomeStruct& b) {
  using ::std::swap;
  swap(a.reasonable_ref().value(), b.reasonable_ref().value());
  swap(a.fine_ref().value(), b.fine_ref().value());
  swap(a.questionable_ref().value(), b.questionable_ref().value());
  swap(a.tags_ref().value(), b.tags_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void SomeStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SomeStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2

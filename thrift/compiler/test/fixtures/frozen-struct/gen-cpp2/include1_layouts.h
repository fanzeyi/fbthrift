/**
 * Autogenerated by Thrift for src/include1.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/frozen/Frozen.h>
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include1_types.h"
namespace apache { namespace thrift { namespace frozen {


FROZEN_TYPE(::some::ns::IncludedA,
  FROZEN_FIELD(i32Field, 1, ::std::int32_t)
  FROZEN_FIELD(strField, 2, ::std::string)
  FROZEN_VIEW(
    FROZEN_VIEW_FIELD(i32Field, ::std::int32_t)
    FROZEN_VIEW_FIELD(strField, ::std::string))
  FROZEN_SAVE_INLINE(
    FROZEN_SAVE_FIELD(i32Field)
    FROZEN_SAVE_FIELD(strField))
  FROZEN_LOAD_INLINE(
    FROZEN_LOAD_FIELD(i32Field, 1)
    FROZEN_LOAD_FIELD(strField, 2)));

}}} // apache::thrift::frozen

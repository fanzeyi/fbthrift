#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types

cimport terse_write.types_fields as _fbthrift_types_fields

cdef extern from "src/gen-py3/terse_write/types.h":
  pass


cdef extern from "src/gen-cpp2/terse_write_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/terse_write_types.h" namespace "::apache::thrift::test":
    cdef cppclass cMyEnum "::apache::thrift::test::MyEnum":
        pass





cdef class MyEnum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "src/gen-cpp2/terse_write_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/terse_write_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/terse_write_types_custom_protocol.h" namespace "::apache::thrift::test":

    cdef cppclass cMyStruct "::apache::thrift::test::MyStruct":
        cMyStruct() except +
        cMyStruct(const cMyStruct&) except +
        bint operator==(cMyStruct&)
        bint operator!=(cMyStruct&)
        bint operator<(cMyStruct&)
        bint operator>(cMyStruct&)
        bint operator<=(cMyStruct&)
        bint operator>=(cMyStruct&)


    cdef cppclass cMyStructWithCustomDefault "::apache::thrift::test::MyStructWithCustomDefault":
        cMyStructWithCustomDefault() except +
        cMyStructWithCustomDefault(const cMyStructWithCustomDefault&) except +
        bint operator==(cMyStructWithCustomDefault&)
        bint operator!=(cMyStructWithCustomDefault&)
        bint operator<(cMyStructWithCustomDefault&)
        bint operator>(cMyStructWithCustomDefault&)
        bint operator<=(cMyStructWithCustomDefault&)
        bint operator>=(cMyStructWithCustomDefault&)
        __field_ref[cint64_t] field1_ref()


    cdef cppclass cStructLevelTerseStruct "::apache::thrift::test::StructLevelTerseStruct":
        cStructLevelTerseStruct() except +
        cStructLevelTerseStruct(const cStructLevelTerseStruct&) except +
        bint operator==(cStructLevelTerseStruct&)
        bint operator!=(cStructLevelTerseStruct&)
        bint operator<(cStructLevelTerseStruct&)
        bint operator>(cStructLevelTerseStruct&)
        bint operator<=(cStructLevelTerseStruct&)
        bint operator>=(cStructLevelTerseStruct&)
        __terse_field_ref[cbool] bool_field_ref()
        __terse_field_ref[cint8_t] byte_field_ref()
        __terse_field_ref[cint16_t] short_field_ref()
        __terse_field_ref[cint32_t] int_field_ref()
        __terse_field_ref[cint64_t] long_field_ref()
        __terse_field_ref[float] float_field_ref()
        __terse_field_ref[double] double_field_ref()
        __terse_field_ref[string] string_field_ref()
        __terse_field_ref[string] binary_field_ref()
        __terse_field_ref[cMyEnum] enum_field_ref()
        __terse_field_ref[vector[cint16_t]] list_field_ref()
        __terse_field_ref[cset[cint16_t]] set_field_ref()
        __terse_field_ref[cmap[cint16_t,cint16_t]] map_field_ref()
        __terse_field_ref[cMyStruct] struct_field_ref()


    cdef cppclass cFieldLevelTerseStruct "::apache::thrift::test::FieldLevelTerseStruct":
        cFieldLevelTerseStruct() except +
        cFieldLevelTerseStruct(const cFieldLevelTerseStruct&) except +
        bint operator==(cFieldLevelTerseStruct&)
        bint operator!=(cFieldLevelTerseStruct&)
        bint operator<(cFieldLevelTerseStruct&)
        bint operator>(cFieldLevelTerseStruct&)
        bint operator<=(cFieldLevelTerseStruct&)
        bint operator>=(cFieldLevelTerseStruct&)
        __terse_field_ref[cbool] terse_bool_field_ref()
        __terse_field_ref[cint8_t] terse_byte_field_ref()
        __terse_field_ref[cint16_t] terse_short_field_ref()
        __terse_field_ref[cint32_t] terse_int_field_ref()
        __terse_field_ref[cint64_t] terse_long_field_ref()
        __terse_field_ref[float] terse_float_field_ref()
        __terse_field_ref[double] terse_double_field_ref()
        __terse_field_ref[string] terse_string_field_ref()
        __terse_field_ref[string] terse_binary_field_ref()
        __terse_field_ref[cMyEnum] terse_enum_field_ref()
        __terse_field_ref[vector[cint16_t]] terse_list_field_ref()
        __terse_field_ref[cset[cint16_t]] terse_set_field_ref()
        __terse_field_ref[cmap[cint16_t,cint16_t]] terse_map_field_ref()
        __terse_field_ref[cMyStruct] terse_struct_field_ref()
        __field_ref[cbool] bool_field_ref()
        __field_ref[cint8_t] byte_field_ref()
        __field_ref[cint16_t] short_field_ref()
        __field_ref[cint32_t] int_field_ref()
        __field_ref[cint64_t] long_field_ref()
        __field_ref[float] float_field_ref()
        __field_ref[double] double_field_ref()
        __field_ref[string] string_field_ref()
        __field_ref[string] binary_field_ref()
        __field_ref[cMyEnum] enum_field_ref()
        __field_ref[vector[cint16_t]] list_field_ref()
        __field_ref[cset[cint16_t]] set_field_ref()
        __field_ref[cmap[cint16_t,cint16_t]] map_field_ref()
        __field_ref[cMyStruct] struct_field_ref()


    cdef cppclass cTerseStructWithCustomDefault "::apache::thrift::test::TerseStructWithCustomDefault":
        cTerseStructWithCustomDefault() except +
        cTerseStructWithCustomDefault(const cTerseStructWithCustomDefault&) except +
        bint operator==(cTerseStructWithCustomDefault&)
        bint operator!=(cTerseStructWithCustomDefault&)
        bint operator<(cTerseStructWithCustomDefault&)
        bint operator>(cTerseStructWithCustomDefault&)
        bint operator<=(cTerseStructWithCustomDefault&)
        bint operator>=(cTerseStructWithCustomDefault&)
        __terse_field_ref[cbool] bool_field_ref()
        __terse_field_ref[cint8_t] byte_field_ref()
        __terse_field_ref[cint16_t] short_field_ref()
        __terse_field_ref[cint32_t] int_field_ref()
        __terse_field_ref[cint64_t] long_field_ref()
        __terse_field_ref[float] float_field_ref()
        __terse_field_ref[double] double_field_ref()
        __terse_field_ref[string] string_field_ref()
        __terse_field_ref[string] binary_field_ref()
        __terse_field_ref[cMyEnum] enum_field_ref()
        __terse_field_ref[vector[cint16_t]] list_field_ref()
        __terse_field_ref[cset[cint16_t]] set_field_ref()
        __terse_field_ref[cmap[cint16_t,cint16_t]] map_field_ref()
        __terse_field_ref[cMyStructWithCustomDefault] struct_field_ref()




cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStruct] _cpp_obj
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct])



cdef class MyStructWithCustomDefault(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStructWithCustomDefault] _cpp_obj
    cdef _fbthrift_types_fields.__MyStructWithCustomDefault_FieldsSetter _fields_setter
    cdef inline object field1_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStructWithCustomDefault])



cdef class StructLevelTerseStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cStructLevelTerseStruct] _cpp_obj
    cdef _fbthrift_types_fields.__StructLevelTerseStruct_FieldsSetter _fields_setter
    cdef inline object bool_field_impl(self)
    cdef inline object byte_field_impl(self)
    cdef inline object short_field_impl(self)
    cdef inline object int_field_impl(self)
    cdef inline object long_field_impl(self)
    cdef inline object float_field_impl(self)
    cdef inline object double_field_impl(self)
    cdef inline object string_field_impl(self)
    cdef inline object binary_field_impl(self)
    cdef inline object enum_field_impl(self)
    cdef inline object list_field_impl(self)
    cdef inline object set_field_impl(self)
    cdef inline object map_field_impl(self)
    cdef inline object struct_field_impl(self)
    cdef object __fbthrift_cached_enum_field
    cdef List__i16 __fbthrift_cached_list_field
    cdef Set__i16 __fbthrift_cached_set_field
    cdef Map__i16_i16 __fbthrift_cached_map_field
    cdef MyStruct __fbthrift_cached_struct_field

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cStructLevelTerseStruct])



cdef class FieldLevelTerseStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cFieldLevelTerseStruct] _cpp_obj
    cdef _fbthrift_types_fields.__FieldLevelTerseStruct_FieldsSetter _fields_setter
    cdef inline object terse_bool_field_impl(self)
    cdef inline object terse_byte_field_impl(self)
    cdef inline object terse_short_field_impl(self)
    cdef inline object terse_int_field_impl(self)
    cdef inline object terse_long_field_impl(self)
    cdef inline object terse_float_field_impl(self)
    cdef inline object terse_double_field_impl(self)
    cdef inline object terse_string_field_impl(self)
    cdef inline object terse_binary_field_impl(self)
    cdef inline object terse_enum_field_impl(self)
    cdef inline object terse_list_field_impl(self)
    cdef inline object terse_set_field_impl(self)
    cdef inline object terse_map_field_impl(self)
    cdef inline object terse_struct_field_impl(self)
    cdef inline object bool_field_impl(self)
    cdef inline object byte_field_impl(self)
    cdef inline object short_field_impl(self)
    cdef inline object int_field_impl(self)
    cdef inline object long_field_impl(self)
    cdef inline object float_field_impl(self)
    cdef inline object double_field_impl(self)
    cdef inline object string_field_impl(self)
    cdef inline object binary_field_impl(self)
    cdef inline object enum_field_impl(self)
    cdef inline object list_field_impl(self)
    cdef inline object set_field_impl(self)
    cdef inline object map_field_impl(self)
    cdef inline object struct_field_impl(self)
    cdef object __fbthrift_cached_terse_enum_field
    cdef List__i16 __fbthrift_cached_terse_list_field
    cdef Set__i16 __fbthrift_cached_terse_set_field
    cdef Map__i16_i16 __fbthrift_cached_terse_map_field
    cdef MyStruct __fbthrift_cached_terse_struct_field
    cdef object __fbthrift_cached_enum_field
    cdef List__i16 __fbthrift_cached_list_field
    cdef Set__i16 __fbthrift_cached_set_field
    cdef Map__i16_i16 __fbthrift_cached_map_field
    cdef MyStruct __fbthrift_cached_struct_field

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFieldLevelTerseStruct])



cdef class TerseStructWithCustomDefault(thrift.py3.types.Struct):
    cdef shared_ptr[cTerseStructWithCustomDefault] _cpp_obj
    cdef _fbthrift_types_fields.__TerseStructWithCustomDefault_FieldsSetter _fields_setter
    cdef inline object bool_field_impl(self)
    cdef inline object byte_field_impl(self)
    cdef inline object short_field_impl(self)
    cdef inline object int_field_impl(self)
    cdef inline object long_field_impl(self)
    cdef inline object float_field_impl(self)
    cdef inline object double_field_impl(self)
    cdef inline object string_field_impl(self)
    cdef inline object binary_field_impl(self)
    cdef inline object enum_field_impl(self)
    cdef inline object list_field_impl(self)
    cdef inline object set_field_impl(self)
    cdef inline object map_field_impl(self)
    cdef inline object struct_field_impl(self)
    cdef object __fbthrift_cached_enum_field
    cdef List__i16 __fbthrift_cached_list_field
    cdef Set__i16 __fbthrift_cached_set_field
    cdef Map__i16_i16 __fbthrift_cached_map_field
    cdef MyStructWithCustomDefault __fbthrift_cached_struct_field

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cTerseStructWithCustomDefault])


cdef class List__i16(thrift.py3.types.List):
    cdef shared_ptr[vector[cint16_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cint16_t]])
    @staticmethod
    cdef shared_ptr[vector[cint16_t]] _make_instance(object items) except *

cdef class Set__i16(thrift.py3.types.Set):
    cdef shared_ptr[cset[cint16_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[cint16_t]])
    @staticmethod
    cdef shared_ptr[cset[cint16_t]] _make_instance(object items) except *

cdef class Map__i16_i16(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint16_t,cint16_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cint16_t,cint16_t]])
    @staticmethod
    cdef shared_ptr[cmap[cint16_t,cint16_t]] _make_instance(object items) except *



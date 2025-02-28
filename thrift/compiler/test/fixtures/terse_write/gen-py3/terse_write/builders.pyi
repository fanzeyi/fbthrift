#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder

import facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types
import facebook.thrift.annotation.thrift.builders as _facebook_thrift_annotation_thrift_builders

import terse_write.types as _terse_write_types


class MyStruct_Builder(thrift.py3.builder.StructBuilder):

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class MyStructWithCustomDefault_Builder(thrift.py3.builder.StructBuilder):
    field1: _typing.Optional[int]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class StructLevelTerseStruct_Builder(thrift.py3.builder.StructBuilder):
    bool_field: _typing.Optional[bool]
    byte_field: _typing.Optional[int]
    short_field: _typing.Optional[int]
    int_field: _typing.Optional[int]
    long_field: _typing.Optional[int]
    float_field: _typing.Optional[float]
    double_field: _typing.Optional[float]
    string_field: _typing.Optional[str]
    binary_field: _typing.Optional[bytes]
    enum_field: _typing.Optional[_terse_write_types.MyEnum]
    list_field: _typing.Optional[list]
    set_field: _typing.Optional[set]
    map_field: _typing.Optional[dict]
    struct_field: _typing.Any

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class FieldLevelTerseStruct_Builder(thrift.py3.builder.StructBuilder):
    terse_bool_field: _typing.Optional[bool]
    terse_byte_field: _typing.Optional[int]
    terse_short_field: _typing.Optional[int]
    terse_int_field: _typing.Optional[int]
    terse_long_field: _typing.Optional[int]
    terse_float_field: _typing.Optional[float]
    terse_double_field: _typing.Optional[float]
    terse_string_field: _typing.Optional[str]
    terse_binary_field: _typing.Optional[bytes]
    terse_enum_field: _typing.Optional[_terse_write_types.MyEnum]
    terse_list_field: _typing.Optional[list]
    terse_set_field: _typing.Optional[set]
    terse_map_field: _typing.Optional[dict]
    terse_struct_field: _typing.Any
    bool_field: _typing.Optional[bool]
    byte_field: _typing.Optional[int]
    short_field: _typing.Optional[int]
    int_field: _typing.Optional[int]
    long_field: _typing.Optional[int]
    float_field: _typing.Optional[float]
    double_field: _typing.Optional[float]
    string_field: _typing.Optional[str]
    binary_field: _typing.Optional[bytes]
    enum_field: _typing.Optional[_terse_write_types.MyEnum]
    list_field: _typing.Optional[list]
    set_field: _typing.Optional[set]
    map_field: _typing.Optional[dict]
    struct_field: _typing.Any

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class TerseStructWithCustomDefault_Builder(thrift.py3.builder.StructBuilder):
    bool_field: _typing.Optional[bool]
    byte_field: _typing.Optional[int]
    short_field: _typing.Optional[int]
    int_field: _typing.Optional[int]
    long_field: _typing.Optional[int]
    float_field: _typing.Optional[float]
    double_field: _typing.Optional[float]
    string_field: _typing.Optional[str]
    binary_field: _typing.Optional[bytes]
    enum_field: _typing.Optional[_terse_write_types.MyEnum]
    list_field: _typing.Optional[list]
    set_field: _typing.Optional[set]
    map_field: _typing.Optional[dict]
    struct_field: _typing.Any

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...



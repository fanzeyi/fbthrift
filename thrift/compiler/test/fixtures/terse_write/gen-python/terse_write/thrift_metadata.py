#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import apache.thrift.metadata.thrift_types as _fbthrift_metadata


import facebook.thrift.annotation.thrift.thrift_metadata

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_MyStruct(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "terse_write.MyStruct"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
        ])
    new_struct = metadata_struct(structs=struct_dict)


    return new_struct
def gen_metadata_struct_MyStruct() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_MyStruct(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_MyStructWithCustomDefault(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "terse_write.MyStructWithCustomDefault"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="field1", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # field1

    return new_struct
def gen_metadata_struct_MyStructWithCustomDefault() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_MyStructWithCustomDefault(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_StructLevelTerseStruct(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "terse_write.StructLevelTerseStruct"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="bool_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BYTE_TYPE), name="byte_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=3, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE), name="short_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=4, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="int_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=5, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="long_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=6, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE), name="float_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=7, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_FLOAT_TYPE), name="double_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="string_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), name="binary_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=10, type=_fbthrift_metadata.ThriftType(t_enum=_fbthrift_metadata.ThriftEnumType(name="terse_write.MyEnum")), name="enum_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=11, type=_fbthrift_metadata.ThriftType(t_list=_fbthrift_metadata.ThriftListType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="list_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=12, type=_fbthrift_metadata.ThriftType(t_set=_fbthrift_metadata.ThriftSetType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="set_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=13, type=_fbthrift_metadata.ThriftType(t_map=_fbthrift_metadata.ThriftMapType(keyType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE),valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="map_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=14, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="terse_write.MyStruct")), name="struct_field", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # bool_field
     # byte_field
     # short_field
     # int_field
     # long_field
     # float_field
     # double_field
     # string_field
     # binary_field
    new_struct = _fbthrift_gen_metadata_enum_MyEnum(new_struct) # enum_field
     # list_field
     # set_field
     # key
     # val  # map_field
    new_struct = _fbthrift_gen_metadata_struct_MyStruct(new_struct) # struct_field

    return new_struct
def gen_metadata_struct_StructLevelTerseStruct() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_StructLevelTerseStruct(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_FieldLevelTerseStruct(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "terse_write.FieldLevelTerseStruct"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="terse_bool_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BYTE_TYPE), name="terse_byte_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=3, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE), name="terse_short_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=4, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="terse_int_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=5, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="terse_long_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=6, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE), name="terse_float_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=7, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_FLOAT_TYPE), name="terse_double_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="terse_string_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), name="terse_binary_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=10, type=_fbthrift_metadata.ThriftType(t_enum=_fbthrift_metadata.ThriftEnumType(name="terse_write.MyEnum")), name="terse_enum_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=11, type=_fbthrift_metadata.ThriftType(t_list=_fbthrift_metadata.ThriftListType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="terse_list_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=12, type=_fbthrift_metadata.ThriftType(t_set=_fbthrift_metadata.ThriftSetType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="terse_set_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=13, type=_fbthrift_metadata.ThriftType(t_map=_fbthrift_metadata.ThriftMapType(keyType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE),valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="terse_map_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=14, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="terse_write.MyStruct")), name="terse_struct_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ]),
        _fbthrift_metadata.ThriftField(id=15, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="bool_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=16, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BYTE_TYPE), name="byte_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=17, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE), name="short_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=18, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="int_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=19, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="long_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=20, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE), name="float_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=21, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_FLOAT_TYPE), name="double_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=22, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="string_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=23, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), name="binary_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=24, type=_fbthrift_metadata.ThriftType(t_enum=_fbthrift_metadata.ThriftEnumType(name="terse_write.MyEnum")), name="enum_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=25, type=_fbthrift_metadata.ThriftType(t_list=_fbthrift_metadata.ThriftListType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="list_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=26, type=_fbthrift_metadata.ThriftType(t_set=_fbthrift_metadata.ThriftSetType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="set_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=27, type=_fbthrift_metadata.ThriftType(t_map=_fbthrift_metadata.ThriftMapType(keyType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE),valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="map_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=28, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="terse_write.MyStruct")), name="struct_field", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # terse_bool_field
     # terse_byte_field
     # terse_short_field
     # terse_int_field
     # terse_long_field
     # terse_float_field
     # terse_double_field
     # terse_string_field
     # terse_binary_field
    new_struct = _fbthrift_gen_metadata_enum_MyEnum(new_struct) # terse_enum_field
     # terse_list_field
     # terse_set_field
     # key
     # val  # terse_map_field
    new_struct = _fbthrift_gen_metadata_struct_MyStruct(new_struct) # terse_struct_field
     # bool_field
     # byte_field
     # short_field
     # int_field
     # long_field
     # float_field
     # double_field
     # string_field
     # binary_field
    new_struct = _fbthrift_gen_metadata_enum_MyEnum(new_struct) # enum_field
     # list_field
     # set_field
     # key
     # val  # map_field
    new_struct = _fbthrift_gen_metadata_struct_MyStruct(new_struct) # struct_field

    return new_struct
def gen_metadata_struct_FieldLevelTerseStruct() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_FieldLevelTerseStruct(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_TerseStructWithCustomDefault(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "terse_write.TerseStructWithCustomDefault"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="bool_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BYTE_TYPE), name="byte_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=3, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE), name="short_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=4, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="int_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=5, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="long_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=6, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE), name="float_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=7, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_FLOAT_TYPE), name="double_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="string_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), name="binary_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=10, type=_fbthrift_metadata.ThriftType(t_enum=_fbthrift_metadata.ThriftEnumType(name="terse_write.MyEnum")), name="enum_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=11, type=_fbthrift_metadata.ThriftType(t_list=_fbthrift_metadata.ThriftListType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="list_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=12, type=_fbthrift_metadata.ThriftType(t_set=_fbthrift_metadata.ThriftSetType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="set_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=13, type=_fbthrift_metadata.ThriftType(t_map=_fbthrift_metadata.ThriftMapType(keyType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE),valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE))), name="map_field", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=14, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="terse_write.MyStructWithCustomDefault")), name="struct_field", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="thrift.TerseWrite"), fields= {  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # bool_field
     # byte_field
     # short_field
     # int_field
     # long_field
     # float_field
     # double_field
     # string_field
     # binary_field
    new_struct = _fbthrift_gen_metadata_enum_MyEnum(new_struct) # enum_field
     # list_field
     # set_field
     # key
     # val  # map_field
    new_struct = _fbthrift_gen_metadata_struct_MyStructWithCustomDefault(new_struct) # struct_field

    return new_struct
def gen_metadata_struct_TerseStructWithCustomDefault() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_TerseStructWithCustomDefault(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))



def _fbthrift_gen_metadata_enum_MyEnum(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "terse_write.MyEnum"

    if qualified_name in metadata_struct.enums:
        return metadata_struct
    elements = {
        0: "ME0",
        1: "ME1",
    }
    enum_dict = dict(metadata_struct.enums)
    enum_dict[qualified_name] = _fbthrift_metadata.ThriftEnum(name=qualified_name, elements=elements, structured_annotations=[])
    new_struct = metadata_struct(enums=enum_dict)

    return new_struct

def gen_metadata_enum_MyEnum() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_enum_MyEnum(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def getThriftModuleMetadata() -> _fbthrift_metadata.ThriftMetadata:
    meta = _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    meta = _fbthrift_gen_metadata_enum_MyEnum(meta)
    meta = _fbthrift_gen_metadata_struct_MyStruct(meta)
    meta = _fbthrift_gen_metadata_struct_MyStructWithCustomDefault(meta)
    meta = _fbthrift_gen_metadata_struct_StructLevelTerseStruct(meta)
    meta = _fbthrift_gen_metadata_struct_FieldLevelTerseStruct(meta)
    meta = _fbthrift_gen_metadata_struct_TerseStructWithCustomDefault(meta)
    return meta

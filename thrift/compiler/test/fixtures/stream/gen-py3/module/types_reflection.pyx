#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)


cimport module.types as _module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__FooEx():
    cdef _module_types.FooEx defaults = _module_types.FooEx._fbthrift_create(
        constant_shared_ptr[_module_types.cFooEx](
            default_inst[_module_types.cFooEx]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="FooEx",
        kind=__StructType.EXCEPTION,
        annotations={
        },
    )
    return spec

#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

# pyre-unsafe

import typing as __T  # sometimes `t` is used as a field name

from thrift import Thrift
from thrift.protocol.TProtocol import TProtocolBase

__property__ = property  # sometimes `property` is used as a field name


UTF8STRINGS: bool


class InitialResponse:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        content: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def content(self) -> str: ...
    @content.setter
    def content(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class FinalResponse:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        content: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def content(self) -> str: ...
    @content.setter
    def content(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class SinkPayload:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        content: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def content(self) -> str: ...
    @content.setter
    def content(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class CompatibleWithKeywordSink:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        sink: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def sink(self) -> str: ...
    @sink.setter
    def sink(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class InitialException(Thrift.TException):
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        reason: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def reason(self) -> str: ...
    @reason.setter
    def reason(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class SinkException1(Thrift.TException):
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        reason: __T.Optional[str] = ...
    ) -> None:
        ...

    @__property__
    def reason(self) -> str: ...
    @reason.setter
    def reason(self, value: __T.Optional[str]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...


class SinkException2(Thrift.TException):
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        reason: __T.Optional[int] = ...
    ) -> None:
        ...

    @__property__
    def reason(self) -> int: ...
    @reason.setter
    def reason(self, value: __T.Optional[int]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...
    def __dir__(self) -> __T.Sequence[str]: ...



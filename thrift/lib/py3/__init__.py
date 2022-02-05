#!/usr/bin/env python3
# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# See __init__.pyi for easier to digest types for typecheckers

__all__ = []

try:
    from thrift.py3.client import get_client, Client  # noqa: 401

    __all__.extend(["Client", "get_client"])
except ModuleNotFoundError:
    pass

try:
    from thrift.py3.server import (  # noqa: 401
        ThriftServer,
        SSLPolicy,
        get_context,
        RequestContext,
    )

    __all__.extend(["ThriftServer", "get_context", "SSLPolicy", "RequestContext"])
except ModuleNotFoundError:
    pass

try:
    from thrift.py3.types import Struct, BadEnum, Union, Enum, Flag  # noqa: 401

    __all__.extend(["Struct", "BadEnum", "Union", "Enum", "Flag"])
except ModuleNotFoundError:
    pass

try:
    from thrift.py3.exceptions import (  # noqa: 401
        Error,
        ApplicationError,
        TransportError,
        ProtocolError,
    )

    __all__.extend(["Error", "ApplicationError", "TransportError", "ProtocolError"])
except ModuleNotFoundError:
    pass

try:
    from thrift.py3.serializer import serialize, deserialize  # noqa: 401

    __all__.extend(["serialize", "deserialize"])
except ModuleNotFoundError:
    pass

try:
    from thrift.py3.common import Priority, RpcOptions, Protocol  # noqa: 401

    __all__.extend(["Priority", "Protocol", "RpcOptions"])
except ModuleNotFoundError:
    pass

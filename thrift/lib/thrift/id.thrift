/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

include "thrift/annotation/thrift.thrift"

// The **id representations** for well-known Thrift types.
//
// Thrift IDs function much like 'pointers' by allowing Thrift types to be
// 'referenced' by ID, as long as the storage to which the 'id' refers, is
// known or implied by the context in which the ID was found.
//
// These definitions always include the suffix `Id` in their names:
// '{name}Id'. For example, for a type `Foo`, the ID typedef would be
// `typedef id.ExternId FooId`.
@thrift.v1alpha
package "facebook.com/thrift/type"

namespace cpp2 apache.thrift.type
namespace py3 apache.thrift.type
namespace php apache_thrift_type_id
namespace java com.facebook.thrift.type
namespace java.swift com.facebook.thrift.type_swift
namespace java2 com.facebook.thrift.type
namespace py.asyncio apache_thrift_asyncio.id
namespace go thrift.lib.thrift.id
namespace py thrift.lib.thrift.id

// An opaque ID for a value stored in an external location (i.e. a Thrift 'pointer').
//
// Typically for use in APIs when:
//  - the ideal storage mechanism (e.g. in-memory, serialized, id-based, immutable,
//  native pointers, etc) depends on the context, or
//  - it is desirable to 'intern' repeated values, to minimize storage requirements.
//
// The exact external location (and associated lookup mechanism) is implied
// by the context in which the `ExternId` is found.
//
// For purely in-memory uses cases, any ID/Handle scheme can be used to
// associate ids with concrete values, including using native pointers.
//
// For serialization with protocols that encode integers as zigzag-varints
// (e.g. Compact), the optimal id allocation scheme is to use densely-packed
// zigzag-ids. Specifically mapping the id values:
//   1, -1, 2, -2, ...
// to/from the associated the index positions:
//   0, 1, 2, 3, 4, ...
// for retrieval in an external list of values.
//
// For fixed-sized protocols (e.g. Binary), all id -> value mapping
// schemes are equally efficient. However, `noId` must always map to `0`
// when serialized, as `0` is the intrinsic default the underlying
// thrift type, and reserved for the `noId` constant defined below.
// As such, zigzag-ids are always preferred when serializing ExternIds
// in standard Thrift protocols.
//
// Thrift typedefs and adapter annotations may be provided to covert stored
// ids into more ideal, in-memory native representation. For example:
// - an index position,
// - an offset,
// - an ordinal,
// - a hash or digest, or even
// - a native pointer to the deserialized value object itself (assuming the
// external value storage is accessible from the adapter, which *is*
// technically supported by Thrift field adapters).
//
// Note that `noId` typically implies an intrinsic default value should
// be use, and in such cases, it is safe to use some form of ~hash, digest,
// RNG, or any other id generation algorithm, for the in-memory id, as long
// as the intrinsic default, for that same type, also maps to `noId`.
// This is a property guaranteed by Thrift v1+ value hashing algorithms
// (as is also the case with most commonly used hashing/digest algorithms,
// and normal pointers for that matter, i.e. `nullptr`).
//
// TODO(afuller): Consider adding a new thrift base type (or special
// annotation?), so we are not required to double zigzag encode here, just
// to get normal varint encoding, at least for newer Thrift protocols.
@thrift.Experimental // TODO(afuller): Adapt!
typedef i64 ExternId

// Unset/Empty/Null/npos/0 never refers to a valid external value.
// TODO(afuller): Uncomment when consts in multiple files is supported by java2.
// const id.ExternId noId = 0;

// The id of an externally stored Thrift Value.
//
// See 'any.thrift'.
@thrift.Experimental // TODO(afuller): Make strong.
typedef ExternId ValueId

// The id of an externally stored Thrift Protocol.
//
// See 'type.thrift'.
@thrift.Experimental // TODO(afuller): Make strong.
typedef ExternId ProtocolId

// The id of an externally stored type.
//
// See 'type.thrift'.
@thrift.Experimental // TODO(afuller): Make strong.
typedef ExternId TypeId

// The id of an externally stored definition.
//
// See 'schema.thrift'.
@thrift.Experimental // TODO(afuller): Make strong.
typedef ExternId DefinitionId

// The id of an externally stored package.
//
// See 'schema.thrift'.
@thrift.Experimental // TODO(afuller): Make strong.
typedef ExternId PackageId

// The id of an externally stored program.
//
// See 'schema.thrift'.
@thrift.Experimental // TODO(afuller): Make strong.
typedef ExternId ProgramId

// The id of externally stored source code.
//
// TODO(afuller): Add concrete definitions for 'source'.
@thrift.Experimental // TODO(afuller): Make strong.
typedef ExternId SourceId

// An unordered set of value ids, that can contain *at most one* value
// of any type.
@thrift.Experimental // TODO(afuller): Adapt!
typedef set<ValueId> AnnotationIds

// An list of definition ids, in the order they were declared in the IDL/AST.
//
// Changing the order of definitions is always backward compatible.
// TODO(afuller): Add conformance tests to make sure this is true.
@thrift.Experimental // TODO(afuller): Adapt!
typedef list<DefinitionId> DefinitionIds

// An list of programs ids, in the order they were included in the IDL/AST.
//
// Changing the order of include is always backwards compatible.
// TODO(afuller): Add conformance tests to make sure this is true.
@thrift.Experimental // TODO(afuller): Adapt!
typedef list<ProgramId> IncludeIds

// TODO(afuller): java2 currently fails to build in xplat, without at least
// one definition it does code gen for.
struct FbthriftInternal_id_Java2Bug {}

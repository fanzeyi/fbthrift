/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/lib/thrift/gen-py3/patch/metadata.h"

namespace apache {
namespace thrift {
namespace op {
::apache::thrift::metadata::ThriftMetadata patch_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::StructMetadata<GeneratePatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<GenerateOptionalPatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<BoolPatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<BytePatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<I16Patch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<I32Patch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<I64Patch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<FloatPatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<DoublePatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<StringPatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<BinaryPatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalBoolPatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalBytePatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalI16Patch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalI32Patch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalI64Patch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalFloatPatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalDoublePatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalStringPatch>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<OptionalBinaryPatch>::gen(metadata);
  return metadata;
}
} // namespace apache
} // namespace thrift
} // namespace op

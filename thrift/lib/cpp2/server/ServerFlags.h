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

#pragma once

#include <folly/portability/GFlags.h>
#include <thrift/lib/cpp2/Flags.h>

THRIFT_FLAG_DECLARE_bool(experimental_use_resource_pools);
DECLARE_bool(thrift_experimental_use_resource_pools);

namespace apache::thrift {

// Determine whether we should use resource pools.
bool useResourcePools();

[[deprecated("Use useResourcePools instead")]] bool useResourcePoolsFlagsSet();

// Call this to indictate that this binary cannot use resource pools because of
// some setting determined at runtime.
void runtimeDisableResourcePools();

// Call this to require the use of resource pools from code.
void requireResourcePools();

// This is a temporary solution during resource pools roll out. Once
// roll out is complete there will be no tests that require this and it
// will be removed.
#define THRIFT_OMIT_TEST_WITH_RESOURCE_POOLS() \
  do {                                         \
    if (apache::thrift::useResourcePools()) {  \
      return;                                  \
    }                                          \
  } while (false)

#define THRIFT_CO_OMIT_TEST_WITH_RESOURCE_POOLS() \
  do {                                            \
    if (apache::thrift::useResourcePools()) {     \
      co_return;                                  \
    }                                             \
  } while (false)

} // namespace apache::thrift

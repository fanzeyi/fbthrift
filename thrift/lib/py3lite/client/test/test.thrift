/*
 * Copyright (c) Facebook, Inc. and its affiliates.
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

namespace cpp2 thrift.py3lite.test
namespace py3 thrift.py3lite

exception EmptyException {}

exception ArithmeticException {
  1: string msg;
}

service TestService {
  i32 add(1: i32 num1, 2: i32 num2);
  double divide(1: double dividend, 2: double divisor) throws (
    1: ArithmeticException ae,
  );
  void noop();
  void oops() throws (1: EmptyException ee);
  oneway void oneway();
  void surprise();
}

service EchoService extends TestService {
  string echo(1: string input);
}

//
// The following structures are defined to mimic the anonymous argument structs
// for the related service functions. These request structures are used to test
// the `OmniClient` so that we can easily construct the arguments.
//
struct AddRequest {
  1: i32 num1;
  2: i32 num2;
}

struct EmptyRequest {}

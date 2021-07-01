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

#pragma once

#include <thrift/compiler/ast/visitor.h>
#include <thrift/compiler/parse/parsing_driver.h>
#include <thrift/compiler/sema/diagnostic.h>

namespace apache {
namespace thrift {
namespace compiler {

struct MutatorException : std::exception {
  explicit MutatorException(diagnostic msg) : message(std::move(msg)) {}

  diagnostic message;
};

class mutator : virtual public visitor {
 public:
  static void mutate(t_program* program);

 private:
  template <typename T, typename... Args>
  friend std::unique_ptr<T> make_mutator(Args&&...);
};

template <typename T, typename... Args>
std::unique_ptr<T> make_mutator(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

template <typename T, typename... Args>
void run_mutator(t_program* program, Args&&... args) {
  make_mutator<T>(std::forward<Args>(args)...)->traverse(program);
}

/**
 *  This matches the type of fields to their const values
 */
class field_type_to_const_value : virtual public mutator {
 public:
  using mutator::visit;

  bool visit(t_program* program) override;
  bool visit(t_field* field) override;

 private:
  t_program* program_;
};

/**
 *  This matches the type of consts to their const values
 */
class const_type_to_const_value : virtual public mutator {
 public:
  using mutator::visit;

  bool visit(t_program* program) override;
  bool visit(t_const* tconst) override;

 private:
  t_program* program_;
};

/**
 *  This matches the type of structured annotations to their const values
 */
class structured_annotation_type_to_const_value : virtual public mutator {
 public:
  using mutator::visit;

  bool visit(t_program* program) override;
  bool visit(t_named* tnamed);
  // TODO(ffrancet): replace all of these with a single t_named visitor
  // if this is ever switched from using visitor to ast_visitor
  bool visit(t_service* service) override {
    return visit(static_cast<t_named*>(service));
  }
  bool visit(t_enum* tenum) override {
    return visit(static_cast<t_named*>(tenum));
  }
  bool visit(t_struct* tstruct) override {
    return visit(static_cast<t_named*>(tstruct));
  }
  bool visit(t_field* tfield) override {
    return visit(static_cast<t_named*>(tfield));
  }
  bool visit(t_const* tconst) override {
    return visit(static_cast<t_named*>(tconst));
  }

 private:
  t_program* program_;
};

} // namespace compiler
} // namespace thrift
} // namespace apache

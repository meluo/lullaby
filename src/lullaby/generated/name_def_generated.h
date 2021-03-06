// Autogenerated code.  Do not edit.
#ifndef _SRC_LULLABY_GENERATED_NAME_DEF_GENERATED_H_
#define _SRC_LULLABY_GENERATED_NAME_DEF_GENERATED_H_

#include <type_traits>
#include <memory>
#include "flatbuffers/name_def_generated.h"
#include "lullaby/base/common_types.h"
#include "lullaby/base/typeid.h"
#include "lullaby/util/color.h"
#include "lullaby/util/math.h"
#include "lullaby/util/optional.h"
#include "common_generated.h"

namespace lull {
class NameDefT;
class NameDefT {
 public:
  using FlatBufferType = NameDef;

  std::string name;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

template <typename Archive>
void NameDefT::SerializeFlatbuffer(Archive archive) {
  archive.String(&name, 4);
}

}  // namespace lull

LULLABY_SETUP_TYPEID(lull::NameDefT);

#endif  // _SRC_LULLABY_GENERATED_NAME_DEF_GENERATED_H_


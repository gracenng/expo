/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ABI38_0_0AndroidTextInputState.h"

#include <ABI38_0_0React/components/text/conversions.h>
#include <ABI38_0_0React/debug/debugStringConvertibleUtils.h>

namespace ABI38_0_0facebook {
namespace ABI38_0_0React {

#ifdef ANDROID
folly::dynamic AndroidTextInputState::getDynamic() const {
  // Java doesn't need all fields, so we don't pass them along.
  folly::dynamic newState = folly::dynamic::object();
  newState["mostRecentEventCount"] = mostRecentEventCount;
  newState["attributedString"] = toDynamic(attributedString);
  newState["paragraphAttributes"] = toDynamic(paragraphAttributes);
  newState["hash"] = newState["attributedString"]["hash"];
  return newState;
}
#endif

} // namespace ABI38_0_0React
} // namespace ABI38_0_0facebook

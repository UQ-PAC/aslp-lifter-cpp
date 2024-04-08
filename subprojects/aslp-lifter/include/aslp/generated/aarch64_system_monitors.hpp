/* AUTO-GENERATED LIFTER FILE */

#pragma once
#include <cassert>
#include <tuple>
#include <variant>
#include <vector>
#include <stdexcept>
#include <aslp/interface.hpp>
#include <aslp/generated/aslp_lifter.hpp>

namespace aslp {

template <typename Traits>
void aslp_lifter<Traits>::f_aarch64_system_monitors(typename Traits::bits v_enc) {
  iface.f_gen_store(iface.v___ExclusiveLocal(), iface.f_gen_bool_lit(false));

} // f_aarch64_system_monitors


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_integer_flags_cfinv(typename Traits::bits v_enc) {
  iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_load(iface.v_PSTATE_C())));

} // f_aarch64_integer_flags_cfinv


} // namespace aslp
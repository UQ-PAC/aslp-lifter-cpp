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
void aslp_lifter<Traits>::f_aarch64_integer_flags_axflag(typename Traits::bits v_enc) {
  iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_bit_lit(iface.bits_lit(1U, "0")));
  iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_or_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_load(iface.v_PSTATE_V())));
  iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_and_bits(iface.f_gen_load(iface.v_PSTATE_C()), iface.f_gen_not_bits(iface.f_gen_load(iface.v_PSTATE_V()))));
  iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_bit_lit(iface.bits_lit(1U, "0")));

} // f_aarch64_integer_flags_axflag


} // namespace aslp
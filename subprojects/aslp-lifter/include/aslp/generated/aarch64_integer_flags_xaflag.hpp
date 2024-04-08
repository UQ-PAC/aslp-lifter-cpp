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
void aslp_lifter<Traits>::f_aarch64_integer_flags_xaflag(typename Traits::bits v_enc) {
  const auto v_Exp8__1 = iface.f_decl_bv("Exp8__1", iface.bigint_lit("1"));
  iface.f_gen_store(v_Exp8__1, iface.f_gen_load(iface.v_PSTATE_Z()));
  const auto v_Exp9__1 = iface.f_decl_bv("Exp9__1", iface.bigint_lit("1"));
  iface.f_gen_store(v_Exp9__1, iface.f_gen_load(iface.v_PSTATE_C()));
  const auto v_Exp10__1 = iface.f_decl_bv("Exp10__1", iface.bigint_lit("1"));
  iface.f_gen_store(v_Exp10__1, iface.f_gen_load(iface.v_PSTATE_Z()));
  iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_and_bits(iface.f_gen_not_bits(iface.f_gen_load(iface.v_PSTATE_C())), iface.f_gen_not_bits(iface.f_gen_load(iface.v_PSTATE_Z()))));
  iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_and_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_load(iface.v_PSTATE_C())));
  iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_or_bits(iface.f_gen_load(iface.v_PSTATE_C()), iface.f_gen_load(v_Exp8__1)));
  iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_and_bits(iface.f_gen_not_bits(iface.f_gen_load(v_Exp9__1)), iface.f_gen_load(v_Exp10__1)));

} // f_aarch64_integer_flags_xaflag


} // namespace aslp
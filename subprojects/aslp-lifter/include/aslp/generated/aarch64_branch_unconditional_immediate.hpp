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
void aslp_lifter<Traits>::f_aarch64_branch_unconditional_immediate(typename Traits::bits v_enc) {
  auto v_If1__1 = iface.bits_zero(iface.bigint_lit("4"));
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    v_If1__1 = iface.bits_lit(4U, "0000");
  } else {
    v_If1__1 = iface.bits_lit(4U, "0101");
  } // if
  if (iface.f_eq_bits(v_If1__1, iface.bits_lit(4U, "0000"))) {
    iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
    iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
    iface.f_gen_store(iface.v__PC(), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("26")), iface.bits_lit(2U, "00")), iface.bigint_lit("64")))));
  } else {
    iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
    iface.f_gen_store(iface.v__PC(), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("26")), iface.bits_lit(2U, "00")), iface.bigint_lit("64")))));
  } // if

} // f_aarch64_branch_unconditional_immediate


} // namespace aslp
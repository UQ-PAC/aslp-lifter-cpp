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
void aslp_lifter<Traits>::f_aarch64_branch_conditional_compare(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_X_read2__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read2__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
    } else {
      v_X_read2__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_enum(iface.f_gen_eq_bits(v_X_read2__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"))), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))));
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
    iface.f_gen_store(iface.v__PC(), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("19")), iface.bits_lit(2U, "00")), iface.bigint_lit("64")))));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
  } else {
    auto v_X_read16__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read16__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
    } else {
      v_X_read16__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
    } // if
    const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_enum(iface.f_gen_eq_bits(v_X_read16__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))));
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
    iface.f_gen_store(iface.v__PC(), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("19")), iface.bits_lit(2U, "00")), iface.bigint_lit("64")))));
    iface.f_switch_context(iface.f_merge_branch(v_temp1));
  } // if

} // f_aarch64_branch_conditional_compare


} // namespace aslp
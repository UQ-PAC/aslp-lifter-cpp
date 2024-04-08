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
void aslp_lifter<Traits>::f_aarch64_integer_arithmetic_div(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    const auto v_X_read4__2 = iface.f_decl_bv("X.read4__2", iface.bigint_lit("64"));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_store(v_X_read4__2, iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
    } else {
      iface.f_gen_store(v_X_read4__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
    } // if
    const auto v_X_read9__2 = iface.f_decl_bv("X.read9__2", iface.bigint_lit("64"));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_store(v_X_read9__2, iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))));
    } else {
      iface.f_gen_store(v_X_read9__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
    } // if
    const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_X_read9__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"))));
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
    } // if
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    const auto v_If21__2 = iface.f_decl_bv("If21__2", iface.bigint_lit("65"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      iface.f_gen_store(v_If21__2, iface.f_gen_ZeroExtend(iface.f_gen_load(v_X_read4__2), iface.f_gen_int_lit(iface.bigint_lit("65"))));
    } else {
      iface.f_gen_store(v_If21__2, iface.f_gen_SignExtend(iface.f_gen_load(v_X_read4__2), iface.f_gen_int_lit(iface.bigint_lit("65"))));
    } // if
    const auto v_If26__2 = iface.f_decl_bv("If26__2", iface.bigint_lit("65"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      iface.f_gen_store(v_If26__2, iface.f_gen_ZeroExtend(iface.f_gen_load(v_X_read9__2), iface.f_gen_int_lit(iface.bigint_lit("65"))));
    } else {
      iface.f_gen_store(v_If26__2, iface.f_gen_SignExtend(iface.f_gen_load(v_X_read9__2), iface.f_gen_int_lit(iface.bigint_lit("65"))));
    } // if
    iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_sdiv_bits(iface.f_gen_load(v_If21__2), iface.f_gen_load(v_If26__2)), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
    } // if
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
  } else {
    const auto v_X_read33__2 = iface.f_decl_bv("X.read33__2", iface.bigint_lit("32"));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_store(v_X_read33__2, iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
    } else {
      iface.f_gen_store(v_X_read33__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
    } // if
    const auto v_X_read38__2 = iface.f_decl_bv("X.read38__2", iface.bigint_lit("32"));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_store(v_X_read38__2, iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
    } else {
      iface.f_gen_store(v_X_read38__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
    } // if
    const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_X_read38__2), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
    } // if
    iface.f_switch_context(iface.f_false_branch(v_temp1));
    const auto v_If50__2 = iface.f_decl_bv("If50__2", iface.bigint_lit("33"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      iface.f_gen_store(v_If50__2, iface.f_gen_ZeroExtend(iface.f_gen_load(v_X_read33__2), iface.f_gen_int_lit(iface.bigint_lit("33"))));
    } else {
      iface.f_gen_store(v_If50__2, iface.f_gen_SignExtend(iface.f_gen_load(v_X_read33__2), iface.f_gen_int_lit(iface.bigint_lit("33"))));
    } // if
    const auto v_If55__2 = iface.f_decl_bv("If55__2", iface.bigint_lit("33"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      iface.f_gen_store(v_If55__2, iface.f_gen_ZeroExtend(iface.f_gen_load(v_X_read38__2), iface.f_gen_int_lit(iface.bigint_lit("33"))));
    } else {
      iface.f_gen_store(v_If55__2, iface.f_gen_SignExtend(iface.f_gen_load(v_X_read38__2), iface.f_gen_int_lit(iface.bigint_lit("33"))));
    } // if
    iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_sdiv_bits(iface.f_gen_load(v_If50__2), iface.f_gen_load(v_If55__2)), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
    } // if
    iface.f_switch_context(iface.f_merge_branch(v_temp1));
  } // if

} // f_aarch64_integer_arithmetic_div


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_float_arithmetic_round_frint_32_64(typename Traits::bits v_enc) {
  const auto v_Exp5__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
  if (v_Exp5__1) {
    auto v_If6__1 = iface.bits_zero(iface.bigint_lit("7"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      v_If6__1 = iface.bits_lit(7U, "0100000");
    } else {
      v_If6__1 = iface.bits_lit(7U, "1000000");
    } // if
    auto v_If7__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      v_If7__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "011"));
    } else {
      const auto v_FPDecodeRounding10__3 = iface.f_decl_bv("FPDecodeRounding10__3", iface.bigint_lit("3"));
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_FPDecodeRounding10__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_FPDecodeRounding10__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(v_FPDecodeRounding10__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
      iface.f_switch_context(iface.f_false_branch(v_temp2));
      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_FPDecodeRounding10__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      v_If7__1 = iface.f_gen_load(v_FPDecodeRounding10__3);
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp16__2 = typename Traits::rt_expr{};
    v_Exp16__2 = iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If7__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If6__1)));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp16__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    const auto v_Exp22__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
    if (v_Exp22__1) {
      auto v_If23__1 = iface.bits_zero(iface.bigint_lit("7"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        v_If23__1 = iface.bits_lit(7U, "0100000");
      } else {
        v_If23__1 = iface.bits_lit(7U, "1000000");
      } // if
      auto v_If24__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        v_If24__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "011"));
      } else {
        const auto v_FPDecodeRounding27__3 = iface.f_decl_bv("FPDecodeRounding27__3", iface.bigint_lit("3"));
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_FPDecodeRounding27__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_FPDecodeRounding27__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_FPDecodeRounding27__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_FPDecodeRounding27__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        iface.f_gen_assert(iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        v_If24__1 = iface.f_gen_load(v_FPDecodeRounding27__3);
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp33__2 = typename Traits::rt_expr{};
      v_Exp33__2 = iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If24__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If23__1)));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp33__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } // if

} // f_aarch64_float_arithmetic_round_frint_32_64


} // namespace aslp
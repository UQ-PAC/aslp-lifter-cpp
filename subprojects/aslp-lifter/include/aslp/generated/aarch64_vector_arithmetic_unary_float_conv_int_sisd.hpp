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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_conv_int_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp6__2 = typename Traits::rt_expr{};
    v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_FPDecodeRounding9__3 = iface.f_decl_bv("FPDecodeRounding9__3", iface.bigint_lit("3"));
    const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    iface.f_gen_store(v_FPDecodeRounding9__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    iface.f_gen_store(v_FPDecodeRounding9__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp1));
    const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
    iface.f_switch_context(iface.f_true_branch(v_temp2));
    iface.f_gen_store(v_FPDecodeRounding9__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp2));
    const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
    iface.f_switch_context(iface.f_true_branch(v_temp3));
    iface.f_gen_store(v_FPDecodeRounding9__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
    iface.f_switch_context(iface.f_false_branch(v_temp3));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
    auto v_Exp13__2 = typename Traits::rt_expr{};
    v_Exp13__2 = iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3)));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp13__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp23__2 = typename Traits::rt_expr{};
      v_Exp23__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      const auto v_FPDecodeRounding26__3 = iface.f_decl_bv("FPDecodeRounding26__3", iface.bigint_lit("3"));
      const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(v_FPDecodeRounding26__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_false_branch(v_temp4));
      const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
      iface.f_switch_context(iface.f_true_branch(v_temp5));
      iface.f_gen_store(v_FPDecodeRounding26__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp5));
      const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
      iface.f_switch_context(iface.f_true_branch(v_temp6));
      iface.f_gen_store(v_FPDecodeRounding26__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
      iface.f_switch_context(iface.f_false_branch(v_temp6));
      const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
      iface.f_switch_context(iface.f_true_branch(v_temp7));
      iface.f_gen_store(v_FPDecodeRounding26__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
      iface.f_switch_context(iface.f_false_branch(v_temp7));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp4));
      auto v_Exp30__2 = typename Traits::rt_expr{};
      v_Exp30__2 = iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp23__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding26__3)));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp30__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_float_conv_int_sisd


} // namespace aslp
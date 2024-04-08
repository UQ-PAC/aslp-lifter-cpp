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
void aslp_lifter<Traits>::f_aarch64_vector_shift_conv_int_sisd(typename Traits::bits v_enc) {
  const auto v_Exp3__1 = iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "0000"));
  auto v_If4__1 = true;
  if (v_Exp3__1) {
    v_If4__1 = true;
  } else {
    const auto v_Exp5__1 = iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "0010"));
    auto v_If6__1 = true;
    if (v_Exp5__1) {
      v_If6__1 = false;
    } else {
      v_If6__1 = false;
    } // if
    v_If4__1 = v_If6__1;
  } // if
  if (v_If4__1) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    const auto v_Exp8__1 = iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "1000"));
    if (v_Exp8__1) {
      const auto v_FPDecodeRounding12__3 = iface.f_decl_bv("FPDecodeRounding12__3", iface.bigint_lit("3"));
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_FPDecodeRounding12__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_FPDecodeRounding12__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(v_FPDecodeRounding12__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
      iface.f_switch_context(iface.f_false_branch(v_temp2));
      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_FPDecodeRounding12__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp19__2 = typename Traits::rt_expr{};
      v_Exp19__2 = iface.f_gen_FixedToFP(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit((iface.bigint_lit("128")) - (iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3")))))), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding12__3)));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp19__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      const auto v_Exp26__1 = iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0100"));
      if (v_Exp26__1) {
        const auto v_FPDecodeRounding30__3 = iface.f_decl_bv("FPDecodeRounding30__3", iface.bigint_lit("3"));
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_FPDecodeRounding30__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_FPDecodeRounding30__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_FPDecodeRounding30__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_FPDecodeRounding30__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        iface.f_gen_assert(iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp37__2 = typename Traits::rt_expr{};
        v_Exp37__2 = iface.f_gen_FixedToFP(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit((iface.bigint_lit("64")) - (iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3")))))), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding30__3)));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp37__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        const auto v_FPDecodeRounding47__3 = iface.f_decl_bv("FPDecodeRounding47__3", iface.bigint_lit("3"));
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_FPDecodeRounding47__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        const auto v_temp9 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_FPDecodeRounding47__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        const auto v_temp10 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_FPDecodeRounding47__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_FPDecodeRounding47__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        iface.f_gen_assert(iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp54__2 = typename Traits::rt_expr{};
        v_Exp54__2 = iface.f_gen_FixedToFP(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit((iface.bigint_lit("32")) - (iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3")))))), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding47__3)));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp54__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } // if
  } // if

} // f_aarch64_vector_shift_conv_int_sisd


} // namespace aslp
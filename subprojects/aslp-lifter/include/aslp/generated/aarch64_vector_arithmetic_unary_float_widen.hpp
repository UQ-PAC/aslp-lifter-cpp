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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_widen(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
    auto v_Vpart_read5__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    const auto v_Exp8__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
    assert(v_Exp8__2);
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      v_Vpart_read5__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
    } else {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      v_Vpart_read5__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
    } // if
    const auto v_FPDecodeRounding21__4 = iface.f_decl_bv("FPDecodeRounding21__4", iface.bigint_lit("3"));
    const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    iface.f_gen_store(v_FPDecodeRounding21__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    iface.f_gen_store(v_FPDecodeRounding21__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp1));
    const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
    iface.f_switch_context(iface.f_true_branch(v_temp2));
    iface.f_gen_store(v_FPDecodeRounding21__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp2));
    const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
    iface.f_switch_context(iface.f_true_branch(v_temp3));
    iface.f_gen_store(v_FPDecodeRounding21__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
    iface.f_switch_context(iface.f_false_branch(v_temp3));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
    const auto v_Exp23__3 = iface.f_decl_bv("Exp23__3", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp23__3, iface.f_gen_FPConvert(iface.f_gen_slice(v_Vpart_read5__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding21__4))));
    const auto v_FPDecodeRounding28__4 = iface.f_decl_bv("FPDecodeRounding28__4", iface.bigint_lit("3"));
    const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
    iface.f_switch_context(iface.f_true_branch(v_temp4));
    iface.f_gen_store(v_FPDecodeRounding28__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp4));
    const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
    iface.f_switch_context(iface.f_true_branch(v_temp5));
    iface.f_gen_store(v_FPDecodeRounding28__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp5));
    const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
    iface.f_switch_context(iface.f_true_branch(v_temp6));
    iface.f_gen_store(v_FPDecodeRounding28__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp6));
    const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
    iface.f_switch_context(iface.f_true_branch(v_temp7));
    iface.f_gen_store(v_FPDecodeRounding28__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
    iface.f_switch_context(iface.f_false_branch(v_temp7));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_merge_branch(v_temp4));
    const auto v_Exp30__3 = iface.f_decl_bv("Exp30__3", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp30__3, iface.f_gen_FPConvert(iface.f_gen_slice(v_Vpart_read5__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding28__4))));
    const auto v_FPDecodeRounding35__4 = iface.f_decl_bv("FPDecodeRounding35__4", iface.bigint_lit("3"));
    const auto v_temp8 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
    iface.f_switch_context(iface.f_true_branch(v_temp8));
    iface.f_gen_store(v_FPDecodeRounding35__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp8));
    const auto v_temp9 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
    iface.f_switch_context(iface.f_true_branch(v_temp9));
    iface.f_gen_store(v_FPDecodeRounding35__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp9));
    const auto v_temp10 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
    iface.f_switch_context(iface.f_true_branch(v_temp10));
    iface.f_gen_store(v_FPDecodeRounding35__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp10));
    const auto v_temp11 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
    iface.f_switch_context(iface.f_true_branch(v_temp11));
    iface.f_gen_store(v_FPDecodeRounding35__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
    iface.f_switch_context(iface.f_false_branch(v_temp11));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_merge_branch(v_temp8));
    const auto v_Exp37__3 = iface.f_decl_bv("Exp37__3", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp37__3, iface.f_gen_FPConvert(iface.f_gen_slice(v_Vpart_read5__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding35__4))));
    const auto v_FPDecodeRounding42__4 = iface.f_decl_bv("FPDecodeRounding42__4", iface.bigint_lit("3"));
    const auto v_temp12 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
    iface.f_switch_context(iface.f_true_branch(v_temp12));
    iface.f_gen_store(v_FPDecodeRounding42__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp12));
    const auto v_temp13 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
    iface.f_switch_context(iface.f_true_branch(v_temp13));
    iface.f_gen_store(v_FPDecodeRounding42__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp13));
    const auto v_temp14 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
    iface.f_switch_context(iface.f_true_branch(v_temp14));
    iface.f_gen_store(v_FPDecodeRounding42__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp14));
    const auto v_temp15 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
    iface.f_switch_context(iface.f_true_branch(v_temp15));
    iface.f_gen_store(v_FPDecodeRounding42__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
    iface.f_switch_context(iface.f_false_branch(v_temp15));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_merge_branch(v_temp12));
    auto v_Exp44__3 = typename Traits::rt_expr{};
    v_Exp44__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Vpart_read5__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding42__4)));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp44__3, iface.f_gen_append_bits(iface.f_gen_load(v_Exp37__3), iface.f_gen_append_bits(iface.f_gen_load(v_Exp30__3), iface.f_gen_load(v_Exp23__3)))));
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
      auto v_Vpart_read53__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp56__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp56__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read53__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read53__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
      } // if
      const auto v_FPDecodeRounding69__4 = iface.f_decl_bv("FPDecodeRounding69__4", iface.bigint_lit("3"));
      const auto v_temp16 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp16));
      iface.f_gen_store(v_FPDecodeRounding69__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_false_branch(v_temp16));
      const auto v_temp17 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
      iface.f_switch_context(iface.f_true_branch(v_temp17));
      iface.f_gen_store(v_FPDecodeRounding69__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp17));
      const auto v_temp18 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
      iface.f_switch_context(iface.f_true_branch(v_temp18));
      iface.f_gen_store(v_FPDecodeRounding69__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
      iface.f_switch_context(iface.f_false_branch(v_temp18));
      const auto v_temp19 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
      iface.f_switch_context(iface.f_true_branch(v_temp19));
      iface.f_gen_store(v_FPDecodeRounding69__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
      iface.f_switch_context(iface.f_false_branch(v_temp19));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp16));
      const auto v_Exp71__3 = iface.f_decl_bv("Exp71__3", iface.bigint_lit("64"));
      iface.f_gen_store(v_Exp71__3, iface.f_gen_FPConvert(iface.f_gen_slice(v_Vpart_read53__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding69__4))));
      const auto v_FPDecodeRounding76__4 = iface.f_decl_bv("FPDecodeRounding76__4", iface.bigint_lit("3"));
      const auto v_temp20 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp20));
      iface.f_gen_store(v_FPDecodeRounding76__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_false_branch(v_temp20));
      const auto v_temp21 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
      iface.f_switch_context(iface.f_true_branch(v_temp21));
      iface.f_gen_store(v_FPDecodeRounding76__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp21));
      const auto v_temp22 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
      iface.f_switch_context(iface.f_true_branch(v_temp22));
      iface.f_gen_store(v_FPDecodeRounding76__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
      iface.f_switch_context(iface.f_false_branch(v_temp22));
      const auto v_temp23 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
      iface.f_switch_context(iface.f_true_branch(v_temp23));
      iface.f_gen_store(v_FPDecodeRounding76__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
      iface.f_switch_context(iface.f_false_branch(v_temp23));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp20));
      auto v_Exp78__3 = typename Traits::rt_expr{};
      v_Exp78__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Vpart_read53__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding76__4)));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp78__3, iface.f_gen_load(v_Exp71__3)));
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_float_widen


} // namespace aslp
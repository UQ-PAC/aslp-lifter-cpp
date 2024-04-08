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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp6__2 = typename Traits::rt_expr{};
    v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_FPRSqrtEstimate10__2 = iface.f_decl_bv("FPRSqrtEstimate10__2", iface.bigint_lit("32"));
    const auto v_FPUnpackBase14__4 = iface.f_decl_bv("FPUnpackBase14__4", iface.bigint_lit("3"));
    const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("23"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    const auto v_temp1 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("23")), iface.f_gen_bit_lit(iface.bits_lit(23U, "00000000000000000000000"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("23")), iface.f_gen_bit_lit(iface.bits_lit(23U, "00000000000000000000000")))), iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("24"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))))));
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    const auto v_temp2 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("23")), iface.f_gen_bit_lit(iface.bits_lit(23U, "00000000000000000000000")))));
    iface.f_switch_context(iface.f_true_branch(v_temp2));
    const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp3));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_false_branch(v_temp3));
    iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("8"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("7")))));
    iface.f_switch_context(iface.f_merge_branch(v_temp3));
    const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("31"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp4));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp4));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp2));
    const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp5));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp5));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp1));
    const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp6));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp6));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("23"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111"))));
    iface.f_switch_context(iface.f_true_branch(v_temp7));
    const auto v_temp8 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("23")), iface.f_gen_bit_lit(iface.bits_lit(23U, "00000000000000000000000"))));
    iface.f_switch_context(iface.f_true_branch(v_temp8));
    const auto v_temp9 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp9));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp9));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp8));
    const auto v_If38__4 = iface.f_decl_bv("If38__4", iface.bigint_lit("3"));
    const auto v_temp10 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("22"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp10));
    iface.f_gen_store(v_If38__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
    iface.f_switch_context(iface.f_false_branch(v_temp10));
    iface.f_gen_store(v_If38__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "100")));
    iface.f_switch_context(iface.f_merge_branch(v_temp10));
    const auto v_temp11 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("31"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp11));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_load(v_If38__4));
    iface.f_switch_context(iface.f_false_branch(v_temp11));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_load(v_If38__4));
    iface.f_switch_context(iface.f_false_branch(v_temp7));
    const auto v_temp12 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp12));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp12));
    iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
    const auto v_temp13 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100")))), iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011"))))));
    iface.f_switch_context(iface.f_true_branch(v_temp13));
    const auto v_FPProcessNaN47__3 = iface.f_decl_bv("FPProcessNaN47__3", iface.bigint_lit("32"));
    const auto v_Exp49__3 = iface.f_decl_bool("Exp49__3");
    iface.f_gen_store(v_Exp49__3, iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011")))), iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))))));
    iface.f_gen_assert(iface.f_gen_load(v_Exp49__3));
    const auto v_temp14 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))));
    iface.f_switch_context(iface.f_true_branch(v_temp14));
    const auto v_temp15 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("8"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp15));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_false_branch(v_temp15));
    iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("1"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_merge_branch(v_temp15));
    const auto v_temp16 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("25"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp16));
    iface.f_gen_store(v_FPProcessNaN47__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111110000000000000000000000")));
    iface.f_switch_context(iface.f_false_branch(v_temp16));
    iface.f_gen_store(v_FPProcessNaN47__3, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("23"), iface.bigint_lit("9")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("22")))));
    iface.f_switch_context(iface.f_false_branch(v_temp14));
    const auto v_temp17 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("25"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp17));
    iface.f_gen_store(v_FPProcessNaN47__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111110000000000000000000000")));
    iface.f_switch_context(iface.f_false_branch(v_temp17));
    iface.f_gen_store(v_FPProcessNaN47__3, iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
    iface.f_switch_context(iface.f_merge_branch(v_temp14));
    iface.f_gen_store(v_FPRSqrtEstimate10__2, iface.f_gen_load(v_FPProcessNaN47__3));
    iface.f_switch_context(iface.f_false_branch(v_temp13));
    const auto v_temp18 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "001"))));
    iface.f_switch_context(iface.f_true_branch(v_temp18));
    const auto v_temp19 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("9"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp19));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_false_branch(v_temp19));
    iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("2"), iface.bigint_lit("30")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("1")))));
    iface.f_switch_context(iface.f_merge_branch(v_temp19));
    iface.f_gen_store(v_FPRSqrtEstimate10__2, iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("31"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111"))), iface.f_gen_bit_lit(iface.bits_lit(23U, "00000000000000000000000"))));
    iface.f_switch_context(iface.f_false_branch(v_temp18));
    const auto v_temp20 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("31"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp20));
    const auto v_temp21 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("8"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_true_branch(v_temp21));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_false_branch(v_temp21));
    iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("1"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
    iface.f_switch_context(iface.f_merge_branch(v_temp21));
    iface.f_gen_store(v_FPRSqrtEstimate10__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111110000000000000000000000")));
    iface.f_switch_context(iface.f_false_branch(v_temp20));
    const auto v_temp22 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "010"))));
    iface.f_switch_context(iface.f_true_branch(v_temp22));
    iface.f_gen_store(v_FPRSqrtEstimate10__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
    iface.f_switch_context(iface.f_false_branch(v_temp22));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_merge_branch(v_temp13));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_FPRSqrtEstimate10__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp117__2 = typename Traits::rt_expr{};
      v_Exp117__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      const auto v_FPRSqrtEstimate121__2 = iface.f_decl_bv("FPRSqrtEstimate121__2", iface.bigint_lit("64"));
      const auto v_FPUnpackBase125__4 = iface.f_decl_bv("FPUnpackBase125__4", iface.bigint_lit("3"));
      const auto v_temp23 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("52"), iface.bigint_lit("11")), iface.f_gen_bit_lit(iface.bits_lit(11U, "00000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp23));
      const auto v_temp24 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("52")), iface.f_gen_bit_lit(iface.bits_lit(52U, "0000000000000000000000000000000000000000000000000000"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("52")), iface.f_gen_bit_lit(iface.bits_lit(52U, "0000000000000000000000000000000000000000000000000000")))), iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("24"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp24));
      const auto v_temp25 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("52")), iface.f_gen_bit_lit(iface.bits_lit(52U, "0000000000000000000000000000000000000000000000000000")))));
      iface.f_switch_context(iface.f_true_branch(v_temp25));
      const auto v_temp26 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp26));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_false_branch(v_temp26));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("8"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("7")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp26));
      const auto v_temp27 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp117__2, iface.bigint_lit("63"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp27));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp27));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp25));
      const auto v_temp28 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp28));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp28));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
      iface.f_switch_context(iface.f_false_branch(v_temp24));
      const auto v_temp29 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp29));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_false_branch(v_temp29));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_false_branch(v_temp23));
      const auto v_temp30 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("52"), iface.bigint_lit("11")), iface.f_gen_bit_lit(iface.bits_lit(11U, "11111111111"))));
      iface.f_switch_context(iface.f_true_branch(v_temp30));
      const auto v_temp31 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("52")), iface.f_gen_bit_lit(iface.bits_lit(52U, "0000000000000000000000000000000000000000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp31));
      const auto v_temp32 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp32));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
      iface.f_switch_context(iface.f_false_branch(v_temp32));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
      iface.f_switch_context(iface.f_false_branch(v_temp31));
      const auto v_If149__4 = iface.f_decl_bv("If149__4", iface.bigint_lit("3"));
      const auto v_temp33 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("51"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp33));
      iface.f_gen_store(v_If149__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
      iface.f_switch_context(iface.f_false_branch(v_temp33));
      iface.f_gen_store(v_If149__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "100")));
      iface.f_switch_context(iface.f_merge_branch(v_temp33));
      const auto v_temp34 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp117__2, iface.bigint_lit("63"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp34));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_load(v_If149__4));
      iface.f_switch_context(iface.f_false_branch(v_temp34));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_load(v_If149__4));
      iface.f_switch_context(iface.f_false_branch(v_temp30));
      const auto v_temp35 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp35));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_false_branch(v_temp35));
      iface.f_gen_store(v_FPUnpackBase125__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp23));
      const auto v_temp36 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100")))), iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp36));
      const auto v_FPProcessNaN158__3 = iface.f_decl_bv("FPProcessNaN158__3", iface.bigint_lit("64"));
      const auto v_Exp160__3 = iface.f_decl_bool("Exp160__3");
      iface.f_gen_store(v_Exp160__3, iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011")))), iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))))));
      iface.f_gen_assert(iface.f_gen_load(v_Exp160__3));
      const auto v_temp37 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))));
      iface.f_switch_context(iface.f_true_branch(v_temp37));
      const auto v_temp38 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("8"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp38));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_false_branch(v_temp38));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("1"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp38));
      const auto v_temp39 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("25"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp39));
      iface.f_gen_store(v_FPProcessNaN158__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111000000000000000000000000000000000000000000000000000")));
      iface.f_switch_context(iface.f_false_branch(v_temp39));
      iface.f_gen_store(v_FPProcessNaN158__3, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp117__2, iface.bigint_lit("52"), iface.bigint_lit("12")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(v_Exp117__2, iface.bigint_lit("0"), iface.bigint_lit("51")))));
      iface.f_switch_context(iface.f_false_branch(v_temp37));
      const auto v_temp40 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("25"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp40));
      iface.f_gen_store(v_FPProcessNaN158__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111000000000000000000000000000000000000000000000000000")));
      iface.f_switch_context(iface.f_false_branch(v_temp40));
      iface.f_gen_store(v_FPProcessNaN158__3, iface.f_gen_slice(v_Exp117__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
      iface.f_switch_context(iface.f_merge_branch(v_temp37));
      iface.f_gen_store(v_FPRSqrtEstimate121__2, iface.f_gen_load(v_FPProcessNaN158__3));
      iface.f_switch_context(iface.f_false_branch(v_temp36));
      const auto v_temp41 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "001"))));
      iface.f_switch_context(iface.f_true_branch(v_temp41));
      const auto v_temp42 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("9"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp42));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_false_branch(v_temp42));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("2"), iface.bigint_lit("30")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("1")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp42));
      iface.f_gen_store(v_FPRSqrtEstimate121__2, iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_slice(v_Exp117__2, iface.bigint_lit("63"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(11U, "11111111111"))), iface.f_gen_bit_lit(iface.bits_lit(52U, "0000000000000000000000000000000000000000000000000000"))));
      iface.f_switch_context(iface.f_false_branch(v_temp41));
      const auto v_temp43 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp117__2, iface.bigint_lit("63"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp43));
      const auto v_temp44 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("8"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_true_branch(v_temp44));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_false_branch(v_temp44));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("1"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp44));
      iface.f_gen_store(v_FPRSqrtEstimate121__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111000000000000000000000000000000000000000000000000000")));
      iface.f_switch_context(iface.f_false_branch(v_temp43));
      const auto v_temp45 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase125__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "010"))));
      iface.f_switch_context(iface.f_true_branch(v_temp45));
      iface.f_gen_store(v_FPRSqrtEstimate121__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
      iface.f_switch_context(iface.f_false_branch(v_temp45));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp36));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_FPRSqrtEstimate121__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_sisd


} // namespace aslp
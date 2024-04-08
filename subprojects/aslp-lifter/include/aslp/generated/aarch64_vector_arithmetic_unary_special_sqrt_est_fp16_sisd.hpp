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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_sisd(typename Traits::bits v_enc) {
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  auto v_Exp6__2 = typename Traits::rt_expr{};
  v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
  const auto v_FPRSqrtEstimate10__2 = iface.f_decl_bv("FPRSqrtEstimate10__2", iface.bigint_lit("16"));
  const auto v_FPUnpackBase14__4 = iface.f_decl_bv("FPUnpackBase14__4", iface.bigint_lit("3"));
  const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("10"), iface.bigint_lit("5")), iface.f_gen_bit_lit(iface.bits_lit(5U, "00000"))));
  iface.f_switch_context(iface.f_true_branch(v_temp0));
  const auto v_temp1 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("10")), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("10")), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")))), iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("19"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))))));
  iface.f_switch_context(iface.f_true_branch(v_temp1));
  const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp2));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
  iface.f_switch_context(iface.f_false_branch(v_temp2));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
  iface.f_switch_context(iface.f_false_branch(v_temp1));
  const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp3));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
  iface.f_switch_context(iface.f_false_branch(v_temp3));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
  iface.f_switch_context(iface.f_false_branch(v_temp0));
  const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("10"), iface.bigint_lit("5")), iface.f_gen_bit_lit(iface.bits_lit(5U, "11111"))));
  iface.f_switch_context(iface.f_true_branch(v_temp4));
  const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("10")), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
  iface.f_switch_context(iface.f_true_branch(v_temp5));
  const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp6));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
  iface.f_switch_context(iface.f_false_branch(v_temp6));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
  iface.f_switch_context(iface.f_false_branch(v_temp5));
  const auto v_If32__4 = iface.f_decl_bv("If32__4", iface.bigint_lit("3"));
  const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("9"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp7));
  iface.f_gen_store(v_If32__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
  iface.f_switch_context(iface.f_false_branch(v_temp7));
  iface.f_gen_store(v_If32__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "100")));
  iface.f_switch_context(iface.f_merge_branch(v_temp7));
  const auto v_temp8 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp8));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_load(v_If32__4));
  iface.f_switch_context(iface.f_false_branch(v_temp8));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_load(v_If32__4));
  iface.f_switch_context(iface.f_false_branch(v_temp4));
  const auto v_temp9 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp9));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
  iface.f_switch_context(iface.f_false_branch(v_temp9));
  iface.f_gen_store(v_FPUnpackBase14__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
  iface.f_switch_context(iface.f_merge_branch(v_temp0));
  const auto v_temp10 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100")))), iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011"))))));
  iface.f_switch_context(iface.f_true_branch(v_temp10));
  const auto v_FPProcessNaN41__3 = iface.f_decl_bv("FPProcessNaN41__3", iface.bigint_lit("16"));
  const auto v_Exp43__3 = iface.f_decl_bool("Exp43__3");
  iface.f_gen_store(v_Exp43__3, iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "011")))), iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))))));
  iface.f_gen_assert(iface.f_gen_load(v_Exp43__3));
  const auto v_temp11 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "100"))));
  iface.f_switch_context(iface.f_true_branch(v_temp11));
  const auto v_temp12 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("8"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp12));
  iface.f_gen_assert(iface.f_gen_bool_lit(false));
  iface.f_switch_context(iface.f_false_branch(v_temp12));
  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("1"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_merge_branch(v_temp12));
  const auto v_temp13 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("25"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp13));
  iface.f_gen_store(v_FPProcessNaN41__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111000000000")));
  iface.f_switch_context(iface.f_false_branch(v_temp13));
  iface.f_gen_store(v_FPProcessNaN41__3, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("10"), iface.bigint_lit("6")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("9")))));
  iface.f_switch_context(iface.f_false_branch(v_temp11));
  const auto v_temp14 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("25"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp14));
  iface.f_gen_store(v_FPProcessNaN41__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111000000000")));
  iface.f_switch_context(iface.f_false_branch(v_temp14));
  iface.f_gen_store(v_FPProcessNaN41__3, iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
  iface.f_switch_context(iface.f_merge_branch(v_temp11));
  iface.f_gen_store(v_FPRSqrtEstimate10__2, iface.f_gen_load(v_FPProcessNaN41__3));
  iface.f_switch_context(iface.f_false_branch(v_temp10));
  const auto v_temp15 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "001"))));
  iface.f_switch_context(iface.f_true_branch(v_temp15));
  const auto v_temp16 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("9"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp16));
  iface.f_gen_assert(iface.f_gen_bool_lit(false));
  iface.f_switch_context(iface.f_false_branch(v_temp16));
  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("2"), iface.bigint_lit("30")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("1")))));
  iface.f_switch_context(iface.f_merge_branch(v_temp16));
  iface.f_gen_store(v_FPRSqrtEstimate10__2, iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(5U, "11111"))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
  iface.f_switch_context(iface.f_false_branch(v_temp15));
  const auto v_temp17 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("15"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp17));
  const auto v_temp18 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("8"), iface.bigint_lit("1")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_true_branch(v_temp18));
  iface.f_gen_assert(iface.f_gen_bool_lit(false));
  iface.f_switch_context(iface.f_false_branch(v_temp18));
  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("1"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))));
  iface.f_switch_context(iface.f_merge_branch(v_temp18));
  iface.f_gen_store(v_FPRSqrtEstimate10__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111000000000")));
  iface.f_switch_context(iface.f_false_branch(v_temp17));
  const auto v_temp19 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(v_FPUnpackBase14__4), iface.f_gen_bit_lit(iface.bits_lit(3U, "010"))));
  iface.f_switch_context(iface.f_true_branch(v_temp19));
  iface.f_gen_store(v_FPRSqrtEstimate10__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
  iface.f_switch_context(iface.f_false_branch(v_temp19));
  iface.f_gen_assert(iface.f_gen_bool_lit(false));
  iface.f_switch_context(iface.f_merge_branch(v_temp10));
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_FPRSqrtEstimate10__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));

} // f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_sisd


} // namespace aslp
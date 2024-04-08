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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_est_int(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp5__2 = typename Traits::rt_expr{};
      v_Exp5__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      const auto v_UnsignedRSqrtEstimate8__2 = iface.f_decl_bv("UnsignedRSqrtEstimate8__2", iface.bigint_lit("32"));
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("30"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_UnsignedRSqrtEstimate8__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      iface.f_gen_assert(iface.f_gen_and_bool(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0010000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("23"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("23"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("11"))), iface.f_gen_bit_lit(iface.bits_lit(11U, "01000000000")))));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      const auto v_UnsignedRSqrtEstimate19__2 = iface.f_decl_bv("UnsignedRSqrtEstimate19__2", iface.bigint_lit("32"));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("62"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_UnsignedRSqrtEstimate19__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_assert(iface.f_gen_and_bool(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0010000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("55"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("55"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("11"))), iface.f_gen_bit_lit(iface.bits_lit(11U, "01000000000")))));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp1));
      const auto v_UnsignedRSqrtEstimate30__2 = iface.f_decl_bv("UnsignedRSqrtEstimate30__2", iface.bigint_lit("32"));
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("94"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(v_UnsignedRSqrtEstimate30__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp2));
      iface.f_gen_assert(iface.f_gen_and_bool(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0010000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("87"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("87"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("11"))), iface.f_gen_bit_lit(iface.bits_lit(11U, "01000000000")))));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp2));
      const auto v_UnsignedRSqrtEstimate41__2 = iface.f_decl_bv("UnsignedRSqrtEstimate41__2", iface.bigint_lit("32"));
      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("126"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_UnsignedRSqrtEstimate41__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      iface.f_gen_assert(iface.f_gen_and_bool(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0010000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("119"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp5__2, iface.bigint_lit("119"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("11"))), iface.f_gen_bit_lit(iface.bits_lit(11U, "01000000000")))));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp3));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedRSqrtEstimate41__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedRSqrtEstimate30__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedRSqrtEstimate19__2), iface.f_gen_load(v_UnsignedRSqrtEstimate8__2)))));
    } else {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp58__2 = typename Traits::rt_expr{};
      v_Exp58__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      const auto v_UnsignedRSqrtEstimate61__2 = iface.f_decl_bv("UnsignedRSqrtEstimate61__2", iface.bigint_lit("32"));
      const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("30"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(v_UnsignedRSqrtEstimate61__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp4));
      iface.f_gen_assert(iface.f_gen_and_bool(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0010000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("23"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("23"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("11"))), iface.f_gen_bit_lit(iface.bits_lit(11U, "01000000000")))));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp4));
      const auto v_UnsignedRSqrtEstimate72__2 = iface.f_decl_bv("UnsignedRSqrtEstimate72__2", iface.bigint_lit("32"));
      const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp58__2, iface.bigint_lit("62"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
      iface.f_switch_context(iface.f_true_branch(v_temp5));
      iface.f_gen_store(v_UnsignedRSqrtEstimate72__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp5));
      iface.f_gen_assert(iface.f_gen_and_bool(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0010000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp58__2, iface.bigint_lit("55"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp58__2, iface.bigint_lit("55"), iface.bigint_lit("9")), iface.f_gen_int_lit(iface.bigint_lit("11"))), iface.f_gen_bit_lit(iface.bits_lit(11U, "01000000000")))));
      iface.f_gen_assert(iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp5));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedRSqrtEstimate72__2), iface.f_gen_load(v_UnsignedRSqrtEstimate61__2)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_est_int


} // namespace aslp
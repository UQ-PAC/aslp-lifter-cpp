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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_simd(typename Traits::bits v_enc) {
  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      auto v_Vpart_read7__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp10__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp10__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read7__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read7__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
      } // if
      auto v_Vpart_read18__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp21__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp21__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read18__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read18__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp31__2 = typename Traits::rt_expr{};
      v_Exp31__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
      const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
      const auto v_SignedSatQ36__2 = iface.f_decl_bv("SignedSatQ36__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ37__2 = iface.f_decl_bool("SignedSatQ37__2");
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_SignedSatQ36__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ37__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ36__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ37__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ36__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ37__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ47__2 = iface.f_decl_bv("SignedSatQ47__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ48__2 = iface.f_decl_bool("SignedSatQ48__2");
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ36__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_SignedSatQ47__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ48__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ36__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ47__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ48__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ47__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ36__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ48__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_load(v_SignedSatQ47__2)));
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ37__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ37__2)), iface.f_gen_load(v_SignedSatQ48__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
      } else {
        const auto v_SignedSatQ62__2 = iface.f_decl_bv("SignedSatQ62__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ63__2 = iface.f_decl_bool("SignedSatQ63__2");
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ36__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_SignedSatQ62__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ63__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ36__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_SignedSatQ62__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ63__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_SignedSatQ62__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ36__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ63__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_load(v_SignedSatQ62__2)));
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ37__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ37__2)), iface.f_gen_load(v_SignedSatQ63__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
      } // if
      const auto v_SignedSatQ78__2 = iface.f_decl_bv("SignedSatQ78__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ79__2 = iface.f_decl_bool("SignedSatQ79__2");
      const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp8));
      iface.f_gen_store(v_SignedSatQ78__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ79__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp8));
      const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp9));
      iface.f_gen_store(v_SignedSatQ78__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ79__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp9));
      iface.f_gen_store(v_SignedSatQ78__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ79__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp8));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ89__2 = iface.f_decl_bv("SignedSatQ89__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ90__2 = iface.f_decl_bool("SignedSatQ90__2");
        const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ78__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_SignedSatQ89__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ90__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ78__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_SignedSatQ89__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ90__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        iface.f_gen_store(v_SignedSatQ89__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ78__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ90__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp10));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ89__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
        const auto v_temp12 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ79__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ79__2)), iface.f_gen_load(v_SignedSatQ90__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp12));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp12));
      } else {
        const auto v_SignedSatQ104__2 = iface.f_decl_bv("SignedSatQ104__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ105__2 = iface.f_decl_bool("SignedSatQ105__2");
        const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ78__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp13));
        iface.f_gen_store(v_SignedSatQ104__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ105__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp13));
        const auto v_temp14 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ78__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(v_SignedSatQ104__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ105__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp14));
        iface.f_gen_store(v_SignedSatQ104__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ78__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ105__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp13));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ104__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
        const auto v_temp15 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ79__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ79__2)), iface.f_gen_load(v_SignedSatQ105__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp15));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp15));
      } // if
      const auto v_SignedSatQ120__2 = iface.f_decl_bv("SignedSatQ120__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ121__2 = iface.f_decl_bool("SignedSatQ121__2");
      const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp16));
      iface.f_gen_store(v_SignedSatQ120__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ121__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp16));
      const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp17));
      iface.f_gen_store(v_SignedSatQ120__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ121__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp17));
      iface.f_gen_store(v_SignedSatQ120__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ121__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp16));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ131__2 = iface.f_decl_bv("SignedSatQ131__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ132__2 = iface.f_decl_bool("SignedSatQ132__2");
        const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ120__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp18));
        iface.f_gen_store(v_SignedSatQ131__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ132__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp18));
        const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ120__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(v_SignedSatQ131__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ132__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp19));
        iface.f_gen_store(v_SignedSatQ131__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ120__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ132__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp18));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ131__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        const auto v_temp20 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ121__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ121__2)), iface.f_gen_load(v_SignedSatQ132__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp20));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp20));
      } else {
        const auto v_SignedSatQ146__2 = iface.f_decl_bv("SignedSatQ146__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ147__2 = iface.f_decl_bool("SignedSatQ147__2");
        const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ120__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp21));
        iface.f_gen_store(v_SignedSatQ146__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ147__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp21));
        const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ120__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp22));
        iface.f_gen_store(v_SignedSatQ146__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ147__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp22));
        iface.f_gen_store(v_SignedSatQ146__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ120__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ147__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp21));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ146__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        const auto v_temp23 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ121__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ121__2)), iface.f_gen_load(v_SignedSatQ147__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp23));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp23));
      } // if
      const auto v_SignedSatQ162__2 = iface.f_decl_bv("SignedSatQ162__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ163__2 = iface.f_decl_bool("SignedSatQ163__2");
      const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp24));
      iface.f_gen_store(v_SignedSatQ162__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ163__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp24));
      const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp25));
      iface.f_gen_store(v_SignedSatQ162__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ163__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp25));
      iface.f_gen_store(v_SignedSatQ162__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ163__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp24));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ173__2 = iface.f_decl_bv("SignedSatQ173__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ174__2 = iface.f_decl_bool("SignedSatQ174__2");
        const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ162__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp26));
        iface.f_gen_store(v_SignedSatQ173__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ174__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp26));
        const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ162__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp27));
        iface.f_gen_store(v_SignedSatQ173__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ174__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp27));
        iface.f_gen_store(v_SignedSatQ173__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ162__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ174__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp26));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ173__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
        const auto v_temp28 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ163__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ163__2)), iface.f_gen_load(v_SignedSatQ174__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp28));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp28));
      } else {
        const auto v_SignedSatQ188__2 = iface.f_decl_bv("SignedSatQ188__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ189__2 = iface.f_decl_bool("SignedSatQ189__2");
        const auto v_temp29 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ162__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp29));
        iface.f_gen_store(v_SignedSatQ188__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ189__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp29));
        const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ162__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp30));
        iface.f_gen_store(v_SignedSatQ188__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ189__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp30));
        iface.f_gen_store(v_SignedSatQ188__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ162__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ189__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp29));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ188__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
        const auto v_temp31 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ163__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ163__2)), iface.f_gen_load(v_SignedSatQ189__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp31));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp31));
      } // if
      const auto v_SignedSatQ204__2 = iface.f_decl_bv("SignedSatQ204__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ205__2 = iface.f_decl_bool("SignedSatQ205__2");
      const auto v_temp32 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp32));
      iface.f_gen_store(v_SignedSatQ204__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ205__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp32));
      const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp33));
      iface.f_gen_store(v_SignedSatQ204__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ205__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp33));
      iface.f_gen_store(v_SignedSatQ204__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ205__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp32));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ215__2 = iface.f_decl_bv("SignedSatQ215__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ216__2 = iface.f_decl_bool("SignedSatQ216__2");
        const auto v_temp34 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ204__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp34));
        iface.f_gen_store(v_SignedSatQ215__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ216__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp34));
        const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ204__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp35));
        iface.f_gen_store(v_SignedSatQ215__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ216__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp35));
        iface.f_gen_store(v_SignedSatQ215__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ204__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ216__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp34));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ215__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        const auto v_temp36 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ205__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ205__2)), iface.f_gen_load(v_SignedSatQ216__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp36));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp36));
      } else {
        const auto v_SignedSatQ230__2 = iface.f_decl_bv("SignedSatQ230__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ231__2 = iface.f_decl_bool("SignedSatQ231__2");
        const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ204__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp37));
        iface.f_gen_store(v_SignedSatQ230__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ231__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp37));
        const auto v_temp38 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ204__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp38));
        iface.f_gen_store(v_SignedSatQ230__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ231__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp38));
        iface.f_gen_store(v_SignedSatQ230__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ204__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ231__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp37));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ230__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        const auto v_temp39 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ205__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ205__2)), iface.f_gen_load(v_SignedSatQ231__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp39));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp39));
      } // if
      const auto v_SignedSatQ246__2 = iface.f_decl_bv("SignedSatQ246__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ247__2 = iface.f_decl_bool("SignedSatQ247__2");
      const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp40));
      iface.f_gen_store(v_SignedSatQ246__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ247__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp40));
      const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp41));
      iface.f_gen_store(v_SignedSatQ246__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ247__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp41));
      iface.f_gen_store(v_SignedSatQ246__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ247__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp40));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ257__2 = iface.f_decl_bv("SignedSatQ257__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ258__2 = iface.f_decl_bool("SignedSatQ258__2");
        const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ246__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp42));
        iface.f_gen_store(v_SignedSatQ257__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ258__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp42));
        const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ246__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp43));
        iface.f_gen_store(v_SignedSatQ257__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ258__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp43));
        iface.f_gen_store(v_SignedSatQ257__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ246__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ258__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp42));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ257__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
        const auto v_temp44 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ247__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ247__2)), iface.f_gen_load(v_SignedSatQ258__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp44));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp44));
      } else {
        const auto v_SignedSatQ272__2 = iface.f_decl_bv("SignedSatQ272__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ273__2 = iface.f_decl_bool("SignedSatQ273__2");
        const auto v_temp45 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ246__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp45));
        iface.f_gen_store(v_SignedSatQ272__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ273__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp45));
        const auto v_temp46 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ246__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp46));
        iface.f_gen_store(v_SignedSatQ272__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ273__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp46));
        iface.f_gen_store(v_SignedSatQ272__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ246__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ273__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp45));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ272__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
        const auto v_temp47 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ247__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ247__2)), iface.f_gen_load(v_SignedSatQ273__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp47));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp47));
      } // if
      const auto v_SignedSatQ288__2 = iface.f_decl_bv("SignedSatQ288__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ289__2 = iface.f_decl_bool("SignedSatQ289__2");
      const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp48));
      iface.f_gen_store(v_SignedSatQ288__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ289__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp48));
      const auto v_temp49 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp49));
      iface.f_gen_store(v_SignedSatQ288__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ289__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp49));
      iface.f_gen_store(v_SignedSatQ288__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ289__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp48));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ299__2 = iface.f_decl_bv("SignedSatQ299__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ300__2 = iface.f_decl_bool("SignedSatQ300__2");
        const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ288__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp50));
        iface.f_gen_store(v_SignedSatQ299__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ300__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp50));
        const auto v_temp51 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ288__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp51));
        iface.f_gen_store(v_SignedSatQ299__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ300__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp51));
        iface.f_gen_store(v_SignedSatQ299__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ288__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ300__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp50));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ299__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
        const auto v_temp52 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ289__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ289__2)), iface.f_gen_load(v_SignedSatQ300__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp52));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp52));
      } else {
        const auto v_SignedSatQ314__2 = iface.f_decl_bv("SignedSatQ314__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ315__2 = iface.f_decl_bool("SignedSatQ315__2");
        const auto v_temp53 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ288__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp53));
        iface.f_gen_store(v_SignedSatQ314__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ315__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp53));
        const auto v_temp54 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ288__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp54));
        iface.f_gen_store(v_SignedSatQ314__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ315__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp54));
        iface.f_gen_store(v_SignedSatQ314__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ288__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ315__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp53));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ314__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
        const auto v_temp55 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ289__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ289__2)), iface.f_gen_load(v_SignedSatQ315__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp55));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp55));
      } // if
      const auto v_SignedSatQ330__2 = iface.f_decl_bv("SignedSatQ330__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ331__2 = iface.f_decl_bool("SignedSatQ331__2");
      const auto v_temp56 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp56));
      iface.f_gen_store(v_SignedSatQ330__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ331__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp56));
      const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp57));
      iface.f_gen_store(v_SignedSatQ330__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ331__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp57));
      iface.f_gen_store(v_SignedSatQ330__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ331__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp56));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ341__2 = iface.f_decl_bv("SignedSatQ341__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ342__2 = iface.f_decl_bool("SignedSatQ342__2");
        const auto v_temp58 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ330__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp58));
        iface.f_gen_store(v_SignedSatQ341__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ342__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp58));
        const auto v_temp59 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ330__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp59));
        iface.f_gen_store(v_SignedSatQ341__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ342__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp59));
        iface.f_gen_store(v_SignedSatQ341__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ330__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ342__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp58));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ341__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
        const auto v_temp60 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ331__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ331__2)), iface.f_gen_load(v_SignedSatQ342__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp60));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp60));
      } else {
        const auto v_SignedSatQ356__2 = iface.f_decl_bv("SignedSatQ356__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ357__2 = iface.f_decl_bool("SignedSatQ357__2");
        const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ330__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp61));
        iface.f_gen_store(v_SignedSatQ356__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ357__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp61));
        const auto v_temp62 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ330__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp62));
        iface.f_gen_store(v_SignedSatQ356__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ357__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp62));
        iface.f_gen_store(v_SignedSatQ356__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp31__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ330__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ357__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp61));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ356__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
        const auto v_temp63 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ331__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ331__2)), iface.f_gen_load(v_SignedSatQ357__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp63));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp63));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        auto v_Vpart_read376__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp379__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp379__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read376__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read376__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        auto v_Vpart_read387__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp390__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp390__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read387__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read387__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp400__2 = typename Traits::rt_expr{};
        v_Exp400__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
        const auto v_SignedSatQ405__2 = iface.f_decl_bv("SignedSatQ405__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ406__2 = iface.f_decl_bool("SignedSatQ406__2");
        const auto v_temp64 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp64));
        iface.f_gen_store(v_SignedSatQ405__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ406__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp64));
        const auto v_temp65 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp65));
        iface.f_gen_store(v_SignedSatQ405__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ406__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp65));
        iface.f_gen_store(v_SignedSatQ405__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ406__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp64));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_SignedSatQ416__2 = iface.f_decl_bv("SignedSatQ416__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ417__2 = iface.f_decl_bool("SignedSatQ417__2");
          const auto v_temp66 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ405__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp66));
          iface.f_gen_store(v_SignedSatQ416__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ417__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp66));
          const auto v_temp67 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ405__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp67));
          iface.f_gen_store(v_SignedSatQ416__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ417__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp67));
          iface.f_gen_store(v_SignedSatQ416__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ405__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ417__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp66));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_load(v_SignedSatQ416__2)));
          const auto v_temp68 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ406__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ406__2)), iface.f_gen_load(v_SignedSatQ417__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp68));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp68));
        } else {
          const auto v_SignedSatQ431__2 = iface.f_decl_bv("SignedSatQ431__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ432__2 = iface.f_decl_bool("SignedSatQ432__2");
          const auto v_temp69 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ405__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp69));
          iface.f_gen_store(v_SignedSatQ431__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ432__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp69));
          const auto v_temp70 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ405__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp70));
          iface.f_gen_store(v_SignedSatQ431__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ432__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp70));
          iface.f_gen_store(v_SignedSatQ431__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ405__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ432__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp69));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_load(v_SignedSatQ431__2)));
          const auto v_temp71 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ406__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ406__2)), iface.f_gen_load(v_SignedSatQ432__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp71));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp71));
        } // if
        const auto v_SignedSatQ447__2 = iface.f_decl_bv("SignedSatQ447__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ448__2 = iface.f_decl_bool("SignedSatQ448__2");
        const auto v_temp72 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp72));
        iface.f_gen_store(v_SignedSatQ447__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ448__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp72));
        const auto v_temp73 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp73));
        iface.f_gen_store(v_SignedSatQ447__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ448__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp73));
        iface.f_gen_store(v_SignedSatQ447__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ448__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp72));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_SignedSatQ458__2 = iface.f_decl_bv("SignedSatQ458__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ459__2 = iface.f_decl_bool("SignedSatQ459__2");
          const auto v_temp74 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ447__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp74));
          iface.f_gen_store(v_SignedSatQ458__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ459__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp74));
          const auto v_temp75 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ447__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp75));
          iface.f_gen_store(v_SignedSatQ458__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ459__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp75));
          iface.f_gen_store(v_SignedSatQ458__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ447__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ459__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp74));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ458__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          const auto v_temp76 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ448__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ448__2)), iface.f_gen_load(v_SignedSatQ459__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp76));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp76));
        } else {
          const auto v_SignedSatQ473__2 = iface.f_decl_bv("SignedSatQ473__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ474__2 = iface.f_decl_bool("SignedSatQ474__2");
          const auto v_temp77 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ447__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp77));
          iface.f_gen_store(v_SignedSatQ473__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ474__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp77));
          const auto v_temp78 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ447__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp78));
          iface.f_gen_store(v_SignedSatQ473__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ474__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp78));
          iface.f_gen_store(v_SignedSatQ473__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ447__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ474__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp77));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ473__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          const auto v_temp79 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ448__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ448__2)), iface.f_gen_load(v_SignedSatQ474__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp79));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp79));
        } // if
        const auto v_SignedSatQ489__2 = iface.f_decl_bv("SignedSatQ489__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ490__2 = iface.f_decl_bool("SignedSatQ490__2");
        const auto v_temp80 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp80));
        iface.f_gen_store(v_SignedSatQ489__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ490__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp80));
        const auto v_temp81 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp81));
        iface.f_gen_store(v_SignedSatQ489__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ490__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp81));
        iface.f_gen_store(v_SignedSatQ489__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ490__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp80));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_SignedSatQ500__2 = iface.f_decl_bv("SignedSatQ500__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ501__2 = iface.f_decl_bool("SignedSatQ501__2");
          const auto v_temp82 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ489__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp82));
          iface.f_gen_store(v_SignedSatQ500__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ501__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp82));
          const auto v_temp83 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ489__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp83));
          iface.f_gen_store(v_SignedSatQ500__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ501__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp83));
          iface.f_gen_store(v_SignedSatQ500__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ489__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ501__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp82));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ500__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          const auto v_temp84 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ490__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ490__2)), iface.f_gen_load(v_SignedSatQ501__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp84));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp84));
        } else {
          const auto v_SignedSatQ515__2 = iface.f_decl_bv("SignedSatQ515__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ516__2 = iface.f_decl_bool("SignedSatQ516__2");
          const auto v_temp85 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ489__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp85));
          iface.f_gen_store(v_SignedSatQ515__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ516__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp85));
          const auto v_temp86 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ489__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp86));
          iface.f_gen_store(v_SignedSatQ515__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ516__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp86));
          iface.f_gen_store(v_SignedSatQ515__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ489__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ516__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp85));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ515__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          const auto v_temp87 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ490__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ490__2)), iface.f_gen_load(v_SignedSatQ516__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp87));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp87));
        } // if
        const auto v_SignedSatQ531__2 = iface.f_decl_bv("SignedSatQ531__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ532__2 = iface.f_decl_bool("SignedSatQ532__2");
        const auto v_temp88 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp88));
        iface.f_gen_store(v_SignedSatQ531__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ532__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp88));
        const auto v_temp89 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp89));
        iface.f_gen_store(v_SignedSatQ531__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ532__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp89));
        iface.f_gen_store(v_SignedSatQ531__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read376__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read387__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ532__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp88));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_SignedSatQ542__2 = iface.f_decl_bv("SignedSatQ542__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ543__2 = iface.f_decl_bool("SignedSatQ543__2");
          const auto v_temp90 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ531__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp90));
          iface.f_gen_store(v_SignedSatQ542__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ543__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp90));
          const auto v_temp91 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ531__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp91));
          iface.f_gen_store(v_SignedSatQ542__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ543__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp91));
          iface.f_gen_store(v_SignedSatQ542__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ531__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ543__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp90));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ542__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
          const auto v_temp92 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ532__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ532__2)), iface.f_gen_load(v_SignedSatQ543__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp92));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp92));
        } else {
          const auto v_SignedSatQ557__2 = iface.f_decl_bv("SignedSatQ557__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ558__2 = iface.f_decl_bool("SignedSatQ558__2");
          const auto v_temp93 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ531__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp93));
          iface.f_gen_store(v_SignedSatQ557__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ558__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp93));
          const auto v_temp94 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ531__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp94));
          iface.f_gen_store(v_SignedSatQ557__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ558__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp94));
          iface.f_gen_store(v_SignedSatQ557__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp400__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ531__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ558__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp93));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ557__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
          const auto v_temp95 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ532__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ532__2)), iface.f_gen_load(v_SignedSatQ558__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp95));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp95));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          auto v_Vpart_read577__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp580__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp580__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read577__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read577__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          auto v_Vpart_read588__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp591__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp591__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read588__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read588__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp601__2 = typename Traits::rt_expr{};
          v_Exp601__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
          const auto v_SignedSatQ606__2 = iface.f_decl_bv("SignedSatQ606__2", iface.bigint_lit("64"));
          const auto v_SignedSatQ607__2 = iface.f_decl_bool("SignedSatQ607__2");
          const auto v_temp96 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read577__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read588__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp96));
          iface.f_gen_store(v_SignedSatQ606__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ607__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp96));
          const auto v_temp97 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read577__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read588__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp97));
          iface.f_gen_store(v_SignedSatQ606__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ607__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp97));
          iface.f_gen_store(v_SignedSatQ606__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read577__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read588__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
          iface.f_gen_store(v_SignedSatQ607__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp96));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_SignedSatQ617__2 = iface.f_decl_bv("SignedSatQ617__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ618__2 = iface.f_decl_bool("SignedSatQ618__2");
            const auto v_temp98 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ606__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp98));
            iface.f_gen_store(v_SignedSatQ617__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ618__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp98));
            const auto v_temp99 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ606__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp99));
            iface.f_gen_store(v_SignedSatQ617__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ618__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp99));
            iface.f_gen_store(v_SignedSatQ617__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ606__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ618__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp98));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(v_SignedSatQ617__2)));
            const auto v_temp100 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ607__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ607__2)), iface.f_gen_load(v_SignedSatQ618__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp100));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp100));
          } else {
            const auto v_SignedSatQ632__2 = iface.f_decl_bv("SignedSatQ632__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ633__2 = iface.f_decl_bool("SignedSatQ633__2");
            const auto v_temp101 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ606__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp101));
            iface.f_gen_store(v_SignedSatQ632__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ633__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp101));
            const auto v_temp102 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ606__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp102));
            iface.f_gen_store(v_SignedSatQ632__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ633__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp102));
            iface.f_gen_store(v_SignedSatQ632__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ606__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ633__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp101));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(v_SignedSatQ632__2)));
            const auto v_temp103 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ607__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ607__2)), iface.f_gen_load(v_SignedSatQ633__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp103));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp103));
          } // if
          const auto v_SignedSatQ648__2 = iface.f_decl_bv("SignedSatQ648__2", iface.bigint_lit("64"));
          const auto v_SignedSatQ649__2 = iface.f_decl_bool("SignedSatQ649__2");
          const auto v_temp104 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read577__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read588__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp104));
          iface.f_gen_store(v_SignedSatQ648__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ649__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp104));
          const auto v_temp105 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read577__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read588__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp105));
          iface.f_gen_store(v_SignedSatQ648__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ649__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp105));
          iface.f_gen_store(v_SignedSatQ648__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read577__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read588__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
          iface.f_gen_store(v_SignedSatQ649__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp104));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_SignedSatQ659__2 = iface.f_decl_bv("SignedSatQ659__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ660__2 = iface.f_decl_bool("SignedSatQ660__2");
            const auto v_temp106 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ648__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp106));
            iface.f_gen_store(v_SignedSatQ659__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ660__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp106));
            const auto v_temp107 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ648__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp107));
            iface.f_gen_store(v_SignedSatQ659__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ660__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp107));
            iface.f_gen_store(v_SignedSatQ659__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ648__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ660__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp106));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ659__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
            const auto v_temp108 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ649__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ649__2)), iface.f_gen_load(v_SignedSatQ660__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp108));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp108));
          } else {
            const auto v_SignedSatQ674__2 = iface.f_decl_bv("SignedSatQ674__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ675__2 = iface.f_decl_bool("SignedSatQ675__2");
            const auto v_temp109 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ648__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp109));
            iface.f_gen_store(v_SignedSatQ674__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ675__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp109));
            const auto v_temp110 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ648__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp110));
            iface.f_gen_store(v_SignedSatQ674__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ675__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp110));
            iface.f_gen_store(v_SignedSatQ674__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp601__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ648__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ675__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp109));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ674__2), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
            const auto v_temp111 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ649__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ649__2)), iface.f_gen_load(v_SignedSatQ675__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp111));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp111));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            auto v_Vpart_read694__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp697__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp697__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read694__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read694__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            auto v_Vpart_read705__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp708__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp708__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read705__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read705__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp718__2 = typename Traits::rt_expr{};
            v_Exp718__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
            const auto v_SignedSatQ723__2 = iface.f_decl_bv("SignedSatQ723__2", iface.bigint_lit("128"));
            const auto v_SignedSatQ724__2 = iface.f_decl_bool("SignedSatQ724__2");
            const auto v_temp112 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(v_Vpart_read694__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(v_Vpart_read705__2, iface.f_gen_int_lit(iface.bigint_lit("129"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp112));
            iface.f_gen_store(v_SignedSatQ723__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ724__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp112));
            const auto v_temp113 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(v_Vpart_read694__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(v_Vpart_read705__2, iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp113));
            iface.f_gen_store(v_SignedSatQ723__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ724__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp113));
            iface.f_gen_store(v_SignedSatQ723__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(v_Vpart_read694__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(v_Vpart_read705__2, iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")));
            iface.f_gen_store(v_SignedSatQ724__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp112));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_SignedSatQ734__2 = iface.f_decl_bv("SignedSatQ734__2", iface.bigint_lit("128"));
              const auto v_SignedSatQ735__2 = iface.f_decl_bool("SignedSatQ735__2");
              const auto v_temp114 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_Exp718__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ723__2), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp114));
              iface.f_gen_store(v_SignedSatQ734__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ735__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp114));
              const auto v_temp115 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_Exp718__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ723__2), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp115));
              iface.f_gen_store(v_SignedSatQ734__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ735__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp115));
              iface.f_gen_store(v_SignedSatQ734__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_Exp718__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ723__2), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
              iface.f_gen_store(v_SignedSatQ735__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp114));
              iface.f_gen_store(v_result__1, iface.f_gen_load(v_SignedSatQ734__2));
              const auto v_temp116 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ724__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ724__2)), iface.f_gen_load(v_SignedSatQ735__2))));
              iface.f_switch_context(iface.f_true_branch(v_temp116));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp116));
            } else {
              const auto v_SignedSatQ749__2 = iface.f_decl_bv("SignedSatQ749__2", iface.bigint_lit("128"));
              const auto v_SignedSatQ750__2 = iface.f_decl_bool("SignedSatQ750__2");
              const auto v_temp117 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp718__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ723__2), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp117));
              iface.f_gen_store(v_SignedSatQ749__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ750__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp117));
              const auto v_temp118 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp718__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ723__2), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp118));
              iface.f_gen_store(v_SignedSatQ749__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ750__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp118));
              iface.f_gen_store(v_SignedSatQ749__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_Exp718__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ723__2), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
              iface.f_gen_store(v_SignedSatQ750__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp117));
              iface.f_gen_store(v_result__1, iface.f_gen_load(v_SignedSatQ749__2));
              const auto v_temp119 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ724__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ724__2)), iface.f_gen_load(v_SignedSatQ750__2))));
              iface.f_switch_context(iface.f_true_branch(v_temp119));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp119));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_simd


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_double_simd(typename Traits::bits v_enc) {
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
      const auto v_SignedSatQ33__2 = iface.f_decl_bv("SignedSatQ33__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ34__2 = iface.f_decl_bool("SignedSatQ34__2");
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_SignedSatQ33__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ34__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ33__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ34__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ33__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ34__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ34__2));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp2));
      const auto v_SignedSatQ48__2 = iface.f_decl_bv("SignedSatQ48__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ49__2 = iface.f_decl_bool("SignedSatQ49__2");
      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_SignedSatQ48__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(v_SignedSatQ48__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp4));
      iface.f_gen_store(v_SignedSatQ48__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp3));
      const auto v_temp5 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ49__2));
      iface.f_switch_context(iface.f_true_branch(v_temp5));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp5));
      const auto v_SignedSatQ62__2 = iface.f_decl_bv("SignedSatQ62__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ63__2 = iface.f_decl_bool("SignedSatQ63__2");
      const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp6));
      iface.f_gen_store(v_SignedSatQ62__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ63__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp6));
      const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp7));
      iface.f_gen_store(v_SignedSatQ62__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ63__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp7));
      iface.f_gen_store(v_SignedSatQ62__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ63__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp6));
      const auto v_temp8 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ63__2));
      iface.f_switch_context(iface.f_true_branch(v_temp8));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp8));
      const auto v_SignedSatQ76__2 = iface.f_decl_bv("SignedSatQ76__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ77__2 = iface.f_decl_bool("SignedSatQ77__2");
      const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp9));
      iface.f_gen_store(v_SignedSatQ76__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ77__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp9));
      const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp10));
      iface.f_gen_store(v_SignedSatQ76__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ77__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp10));
      iface.f_gen_store(v_SignedSatQ76__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ77__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp9));
      const auto v_temp11 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ77__2));
      iface.f_switch_context(iface.f_true_branch(v_temp11));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp11));
      const auto v_SignedSatQ90__2 = iface.f_decl_bv("SignedSatQ90__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ91__2 = iface.f_decl_bool("SignedSatQ91__2");
      const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp12));
      iface.f_gen_store(v_SignedSatQ90__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ91__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp12));
      const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp13));
      iface.f_gen_store(v_SignedSatQ90__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ91__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp13));
      iface.f_gen_store(v_SignedSatQ90__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ91__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp12));
      const auto v_temp14 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ91__2));
      iface.f_switch_context(iface.f_true_branch(v_temp14));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp14));
      const auto v_SignedSatQ104__2 = iface.f_decl_bv("SignedSatQ104__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ105__2 = iface.f_decl_bool("SignedSatQ105__2");
      const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp15));
      iface.f_gen_store(v_SignedSatQ104__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ105__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp15));
      const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp16));
      iface.f_gen_store(v_SignedSatQ104__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ105__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp16));
      iface.f_gen_store(v_SignedSatQ104__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ105__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp15));
      const auto v_temp17 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ105__2));
      iface.f_switch_context(iface.f_true_branch(v_temp17));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp17));
      const auto v_SignedSatQ118__2 = iface.f_decl_bv("SignedSatQ118__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ119__2 = iface.f_decl_bool("SignedSatQ119__2");
      const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp18));
      iface.f_gen_store(v_SignedSatQ118__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ119__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp18));
      const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp19));
      iface.f_gen_store(v_SignedSatQ118__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ119__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp19));
      iface.f_gen_store(v_SignedSatQ118__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ119__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp18));
      const auto v_temp20 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ119__2));
      iface.f_switch_context(iface.f_true_branch(v_temp20));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp20));
      const auto v_SignedSatQ132__2 = iface.f_decl_bv("SignedSatQ132__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ133__2 = iface.f_decl_bool("SignedSatQ133__2");
      const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp21));
      iface.f_gen_store(v_SignedSatQ132__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ133__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp21));
      const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp22));
      iface.f_gen_store(v_SignedSatQ132__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ133__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp22));
      iface.f_gen_store(v_SignedSatQ132__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read18__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ133__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp21));
      const auto v_temp23 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ133__2));
      iface.f_switch_context(iface.f_true_branch(v_temp23));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp23));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ132__2), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ118__2), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ104__2), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ90__2), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ76__2), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ62__2), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ48__2), iface.f_gen_load(v_SignedSatQ33__2)))))))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        auto v_Vpart_read149__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp152__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp152__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read149__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read149__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        auto v_Vpart_read160__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp163__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp163__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read160__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read160__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        const auto v_SignedSatQ175__2 = iface.f_decl_bv("SignedSatQ175__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ176__2 = iface.f_decl_bool("SignedSatQ176__2");
        const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp24));
        iface.f_gen_store(v_SignedSatQ175__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ176__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp24));
        const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp25));
        iface.f_gen_store(v_SignedSatQ175__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ176__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp25));
        iface.f_gen_store(v_SignedSatQ175__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ176__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp24));
        const auto v_temp26 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ176__2));
        iface.f_switch_context(iface.f_true_branch(v_temp26));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp26));
        const auto v_SignedSatQ190__2 = iface.f_decl_bv("SignedSatQ190__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ191__2 = iface.f_decl_bool("SignedSatQ191__2");
        const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp27));
        iface.f_gen_store(v_SignedSatQ190__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ191__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp27));
        const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp28));
        iface.f_gen_store(v_SignedSatQ190__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ191__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp28));
        iface.f_gen_store(v_SignedSatQ190__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ191__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp27));
        const auto v_temp29 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ191__2));
        iface.f_switch_context(iface.f_true_branch(v_temp29));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp29));
        const auto v_SignedSatQ204__2 = iface.f_decl_bv("SignedSatQ204__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ205__2 = iface.f_decl_bool("SignedSatQ205__2");
        const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp30));
        iface.f_gen_store(v_SignedSatQ204__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ205__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp30));
        const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp31));
        iface.f_gen_store(v_SignedSatQ204__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ205__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp31));
        iface.f_gen_store(v_SignedSatQ204__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ205__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp30));
        const auto v_temp32 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ205__2));
        iface.f_switch_context(iface.f_true_branch(v_temp32));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp32));
        const auto v_SignedSatQ218__2 = iface.f_decl_bv("SignedSatQ218__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ219__2 = iface.f_decl_bool("SignedSatQ219__2");
        const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp33));
        iface.f_gen_store(v_SignedSatQ218__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ219__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp33));
        const auto v_temp34 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp34));
        iface.f_gen_store(v_SignedSatQ218__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ219__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp34));
        iface.f_gen_store(v_SignedSatQ218__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read149__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read160__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ219__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp33));
        const auto v_temp35 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ219__2));
        iface.f_switch_context(iface.f_true_branch(v_temp35));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp35));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ218__2), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ204__2), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ190__2), iface.f_gen_load(v_SignedSatQ175__2)))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          auto v_Vpart_read235__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp238__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp238__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read235__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read235__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          auto v_Vpart_read246__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp249__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp249__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read246__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read246__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          const auto v_SignedSatQ261__2 = iface.f_decl_bv("SignedSatQ261__2", iface.bigint_lit("64"));
          const auto v_SignedSatQ262__2 = iface.f_decl_bool("SignedSatQ262__2");
          const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read235__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read246__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp36));
          iface.f_gen_store(v_SignedSatQ261__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ262__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp36));
          const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read235__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read246__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp37));
          iface.f_gen_store(v_SignedSatQ261__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ262__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp37));
          iface.f_gen_store(v_SignedSatQ261__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read235__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read246__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
          iface.f_gen_store(v_SignedSatQ262__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp36));
          const auto v_temp38 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ262__2));
          iface.f_switch_context(iface.f_true_branch(v_temp38));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp38));
          const auto v_SignedSatQ276__2 = iface.f_decl_bv("SignedSatQ276__2", iface.bigint_lit("64"));
          const auto v_SignedSatQ277__2 = iface.f_decl_bool("SignedSatQ277__2");
          const auto v_temp39 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read235__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read246__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp39));
          iface.f_gen_store(v_SignedSatQ276__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ277__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp39));
          const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read235__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read246__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp40));
          iface.f_gen_store(v_SignedSatQ276__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ277__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp40));
          iface.f_gen_store(v_SignedSatQ276__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read235__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read246__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
          iface.f_gen_store(v_SignedSatQ277__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp39));
          const auto v_temp41 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ277__2));
          iface.f_switch_context(iface.f_true_branch(v_temp41));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp41));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_SignedSatQ276__2), iface.f_gen_load(v_SignedSatQ261__2)));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            auto v_Vpart_read293__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp296__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp296__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read293__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read293__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            auto v_Vpart_read304__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp307__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp307__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read304__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read304__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            const auto v_SignedSatQ319__2 = iface.f_decl_bv("SignedSatQ319__2", iface.bigint_lit("128"));
            const auto v_SignedSatQ320__2 = iface.f_decl_bool("SignedSatQ320__2");
            const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(v_Vpart_read293__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(v_Vpart_read304__2, iface.f_gen_int_lit(iface.bigint_lit("129"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp42));
            iface.f_gen_store(v_SignedSatQ319__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ320__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp42));
            const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(v_Vpart_read293__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(v_Vpart_read304__2, iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp43));
            iface.f_gen_store(v_SignedSatQ319__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ320__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp43));
            iface.f_gen_store(v_SignedSatQ319__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(v_Vpart_read293__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(v_Vpart_read304__2, iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")));
            iface.f_gen_store(v_SignedSatQ320__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp42));
            const auto v_temp44 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ320__2));
            iface.f_switch_context(iface.f_true_branch(v_temp44));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp44));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_SignedSatQ319__2));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_double_simd


} // namespace aslp
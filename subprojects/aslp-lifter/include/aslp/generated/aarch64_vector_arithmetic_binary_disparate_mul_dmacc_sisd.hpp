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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_sisd(typename Traits::bits v_enc) {
  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp18__2 = typename Traits::rt_expr{};
      v_Exp18__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
      auto v_result__1 = typename Traits::rt_expr{};
      const auto v_SignedSatQ23__2 = iface.f_decl_bv("SignedSatQ23__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ24__2 = iface.f_decl_bool("SignedSatQ24__2");
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_SignedSatQ23__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ24__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ23__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ24__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ23__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ24__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ34__2 = iface.f_decl_bv("SignedSatQ34__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ35__2 = iface.f_decl_bool("SignedSatQ35__2");
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ23__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_SignedSatQ34__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ35__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ23__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ34__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ35__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ34__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ23__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ35__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        v_result__1 = iface.f_gen_load(v_SignedSatQ34__2);
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ24__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ24__2)), iface.f_gen_load(v_SignedSatQ35__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
      } else {
        const auto v_SignedSatQ49__2 = iface.f_decl_bv("SignedSatQ49__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ50__2 = iface.f_decl_bool("SignedSatQ50__2");
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ23__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ50__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ23__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ50__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ23__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ50__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        v_result__1 = iface.f_gen_load(v_SignedSatQ49__2);
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ24__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ24__2)), iface.f_gen_load(v_SignedSatQ50__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp80__2 = typename Traits::rt_expr{};
        v_Exp80__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        auto v_result__1 = typename Traits::rt_expr{};
        const auto v_SignedSatQ85__2 = iface.f_decl_bv("SignedSatQ85__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ86__2 = iface.f_decl_bool("SignedSatQ86__2");
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_SignedSatQ85__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ86__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_SignedSatQ85__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ86__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        iface.f_gen_store(v_SignedSatQ85__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ86__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_SignedSatQ96__2 = iface.f_decl_bv("SignedSatQ96__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ97__2 = iface.f_decl_bool("SignedSatQ97__2");
          const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ85__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp10));
          iface.f_gen_store(v_SignedSatQ96__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ97__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp10));
          const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ85__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp11));
          iface.f_gen_store(v_SignedSatQ96__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ97__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp11));
          iface.f_gen_store(v_SignedSatQ96__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ85__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ97__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp10));
          v_result__1 = iface.f_gen_load(v_SignedSatQ96__2);
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ86__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ86__2)), iface.f_gen_load(v_SignedSatQ97__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
        } else {
          const auto v_SignedSatQ111__2 = iface.f_decl_bv("SignedSatQ111__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ112__2 = iface.f_decl_bool("SignedSatQ112__2");
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ85__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ111__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ112__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          const auto v_temp14 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ85__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(v_SignedSatQ111__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ112__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp14));
          iface.f_gen_store(v_SignedSatQ111__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ85__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ112__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp13));
          v_result__1 = iface.f_gen_load(v_SignedSatQ111__2);
          const auto v_temp15 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ86__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ86__2)), iface.f_gen_load(v_SignedSatQ112__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp15));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp15));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp142__2 = typename Traits::rt_expr{};
          v_Exp142__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          auto v_result__1 = typename Traits::rt_expr{};
          const auto v_SignedSatQ147__2 = iface.f_decl_bv("SignedSatQ147__2", iface.bigint_lit("64"));
          const auto v_SignedSatQ148__2 = iface.f_decl_bool("SignedSatQ148__2");
          const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp16));
          iface.f_gen_store(v_SignedSatQ147__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ148__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp16));
          const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp17));
          iface.f_gen_store(v_SignedSatQ147__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ148__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp17));
          iface.f_gen_store(v_SignedSatQ147__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
          iface.f_gen_store(v_SignedSatQ148__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp16));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_SignedSatQ158__2 = iface.f_decl_bv("SignedSatQ158__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ159__2 = iface.f_decl_bool("SignedSatQ159__2");
            const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ147__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp18));
            iface.f_gen_store(v_SignedSatQ158__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ159__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp18));
            const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ147__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp19));
            iface.f_gen_store(v_SignedSatQ158__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ159__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp19));
            iface.f_gen_store(v_SignedSatQ158__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ147__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ159__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp18));
            v_result__1 = iface.f_gen_load(v_SignedSatQ158__2);
            const auto v_temp20 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ148__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ148__2)), iface.f_gen_load(v_SignedSatQ159__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp20));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp20));
          } else {
            const auto v_SignedSatQ173__2 = iface.f_decl_bv("SignedSatQ173__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ174__2 = iface.f_decl_bool("SignedSatQ174__2");
            const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ147__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp21));
            iface.f_gen_store(v_SignedSatQ173__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ174__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp21));
            const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ147__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp22));
            iface.f_gen_store(v_SignedSatQ173__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ174__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp22));
            iface.f_gen_store(v_SignedSatQ173__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ147__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ174__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp21));
            v_result__1 = iface.f_gen_load(v_SignedSatQ173__2);
            const auto v_temp23 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ148__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ148__2)), iface.f_gen_load(v_SignedSatQ174__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp23));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp23));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp204__2 = typename Traits::rt_expr{};
            v_Exp204__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            auto v_result__1 = typename Traits::rt_expr{};
            const auto v_SignedSatQ209__2 = iface.f_decl_bv("SignedSatQ209__2", iface.bigint_lit("128"));
            const auto v_SignedSatQ210__2 = iface.f_decl_bool("SignedSatQ210__2");
            const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp24));
            iface.f_gen_store(v_SignedSatQ209__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ210__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp24));
            const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp25));
            iface.f_gen_store(v_SignedSatQ209__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ210__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp25));
            iface.f_gen_store(v_SignedSatQ209__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")));
            iface.f_gen_store(v_SignedSatQ210__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp24));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_SignedSatQ220__2 = iface.f_decl_bv("SignedSatQ220__2", iface.bigint_lit("128"));
              const auto v_SignedSatQ221__2 = iface.f_decl_bool("SignedSatQ221__2");
              const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ209__2), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp26));
              iface.f_gen_store(v_SignedSatQ220__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ221__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp26));
              const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ209__2), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp27));
              iface.f_gen_store(v_SignedSatQ220__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ221__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp27));
              iface.f_gen_store(v_SignedSatQ220__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ209__2), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
              iface.f_gen_store(v_SignedSatQ221__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp26));
              v_result__1 = iface.f_gen_load(v_SignedSatQ220__2);
              const auto v_temp28 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ210__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ210__2)), iface.f_gen_load(v_SignedSatQ221__2))));
              iface.f_switch_context(iface.f_true_branch(v_temp28));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp28));
            } else {
              const auto v_SignedSatQ235__2 = iface.f_decl_bv("SignedSatQ235__2", iface.bigint_lit("128"));
              const auto v_SignedSatQ236__2 = iface.f_decl_bool("SignedSatQ236__2");
              const auto v_temp29 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ209__2), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp29));
              iface.f_gen_store(v_SignedSatQ235__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ236__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp29));
              const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ209__2), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp30));
              iface.f_gen_store(v_SignedSatQ235__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ236__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp30));
              iface.f_gen_store(v_SignedSatQ235__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ209__2), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
              iface.f_gen_store(v_SignedSatQ236__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp29));
              v_result__1 = iface.f_gen_load(v_SignedSatQ235__2);
              const auto v_temp31 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ210__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ210__2)), iface.f_gen_load(v_SignedSatQ236__2))));
              iface.f_switch_context(iface.f_true_branch(v_temp31));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp31));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), v_result__1);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_sisd


} // namespace aslp
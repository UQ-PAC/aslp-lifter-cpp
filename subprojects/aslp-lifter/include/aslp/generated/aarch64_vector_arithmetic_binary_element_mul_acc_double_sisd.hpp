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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_double_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_index__1 = iface.bits_zero(iface.bigint_lit("3"));
    auto v_Rmhi__1 = iface.bits_zero(iface.bigint_lit("1"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
      v_index__1 = iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")));
      v_Rmhi__1 = iface.bits_lit(1U, "0");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
        v_index__1 = iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.bigint_lit("3"));
        v_Rmhi__1 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1"));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp18__2 = typename Traits::rt_expr{};
      v_Exp18__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
      auto v_result__1 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")), iface.bits_lit(7U, "0001000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
      const auto v_SignedSatQ25__2 = iface.f_decl_bv("SignedSatQ25__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ26__2 = iface.f_decl_bool("SignedSatQ26__2");
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_SignedSatQ25__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ26__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ25__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ26__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ25__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ26__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ36__2 = iface.f_decl_bv("SignedSatQ36__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ37__2 = iface.f_decl_bool("SignedSatQ37__2");
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ25__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_SignedSatQ36__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ37__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ25__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ36__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ37__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ36__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ25__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ37__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        v_result__1 = iface.f_gen_load(v_SignedSatQ36__2);
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ26__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ26__2)), iface.f_gen_load(v_SignedSatQ37__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
      } else {
        const auto v_SignedSatQ51__2 = iface.f_decl_bv("SignedSatQ51__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ52__2 = iface.f_decl_bool("SignedSatQ52__2");
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ25__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_SignedSatQ51__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ52__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ25__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_SignedSatQ51__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ52__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_SignedSatQ51__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp18__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ25__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ52__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        v_result__1 = iface.f_gen_load(v_SignedSatQ51__2);
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ26__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ26__2)), iface.f_gen_load(v_SignedSatQ52__2))));
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
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp80__2 = typename Traits::rt_expr{};
        v_Exp80__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        auto v_result__1 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
        const auto v_SignedSatQ87__2 = iface.f_decl_bv("SignedSatQ87__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ88__2 = iface.f_decl_bool("SignedSatQ88__2");
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_SignedSatQ87__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ88__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_SignedSatQ87__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ88__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        iface.f_gen_store(v_SignedSatQ87__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ88__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_SignedSatQ98__2 = iface.f_decl_bv("SignedSatQ98__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ99__2 = iface.f_decl_bool("SignedSatQ99__2");
          const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ87__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp10));
          iface.f_gen_store(v_SignedSatQ98__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ99__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp10));
          const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ87__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp11));
          iface.f_gen_store(v_SignedSatQ98__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ99__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp11));
          iface.f_gen_store(v_SignedSatQ98__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ87__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ99__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp10));
          v_result__1 = iface.f_gen_load(v_SignedSatQ98__2);
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ88__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ88__2)), iface.f_gen_load(v_SignedSatQ99__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
        } else {
          const auto v_SignedSatQ113__2 = iface.f_decl_bv("SignedSatQ113__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ114__2 = iface.f_decl_bool("SignedSatQ114__2");
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ87__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ113__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ114__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          const auto v_temp14 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ87__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(v_SignedSatQ113__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ114__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp14));
          iface.f_gen_store(v_SignedSatQ113__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ87__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ114__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp13));
          v_result__1 = iface.f_gen_load(v_SignedSatQ113__2);
          const auto v_temp15 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ88__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ88__2)), iface.f_gen_load(v_SignedSatQ114__2))));
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
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp142__2 = typename Traits::rt_expr{};
          v_Exp142__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          auto v_result__1 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")), iface.bits_lit(9U, "000100000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0010000000"))));
          const auto v_SignedSatQ149__2 = iface.f_decl_bv("SignedSatQ149__2", iface.bigint_lit("64"));
          const auto v_SignedSatQ150__2 = iface.f_decl_bool("SignedSatQ150__2");
          const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp16));
          iface.f_gen_store(v_SignedSatQ149__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ150__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp16));
          const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp17));
          iface.f_gen_store(v_SignedSatQ149__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ150__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp17));
          iface.f_gen_store(v_SignedSatQ149__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
          iface.f_gen_store(v_SignedSatQ150__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp16));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_SignedSatQ160__2 = iface.f_decl_bv("SignedSatQ160__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ161__2 = iface.f_decl_bool("SignedSatQ161__2");
            const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ149__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp18));
            iface.f_gen_store(v_SignedSatQ160__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ161__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp18));
            const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ149__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp19));
            iface.f_gen_store(v_SignedSatQ160__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ161__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp19));
            iface.f_gen_store(v_SignedSatQ160__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ149__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ161__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp18));
            v_result__1 = iface.f_gen_load(v_SignedSatQ160__2);
            const auto v_temp20 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ150__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ150__2)), iface.f_gen_load(v_SignedSatQ161__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp20));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp20));
          } else {
            const auto v_SignedSatQ175__2 = iface.f_decl_bv("SignedSatQ175__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ176__2 = iface.f_decl_bool("SignedSatQ176__2");
            const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ149__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp21));
            iface.f_gen_store(v_SignedSatQ175__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ176__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp21));
            const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ149__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp22));
            iface.f_gen_store(v_SignedSatQ175__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ176__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp22));
            iface.f_gen_store(v_SignedSatQ175__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp142__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ149__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ176__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp21));
            v_result__1 = iface.f_gen_load(v_SignedSatQ175__2);
            const auto v_temp23 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ150__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ150__2)), iface.f_gen_load(v_SignedSatQ176__2))));
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
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp204__2 = typename Traits::rt_expr{};
            v_Exp204__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            auto v_result__1 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0001000000")), iface.bigint_lit("11")), iface.bits_lit(11U, "00010000000"))));
            const auto v_SignedSatQ211__2 = iface.f_decl_bv("SignedSatQ211__2", iface.bigint_lit("128"));
            const auto v_SignedSatQ212__2 = iface.f_decl_bool("SignedSatQ212__2");
            const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp24));
            iface.f_gen_store(v_SignedSatQ211__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ212__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp24));
            const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp25));
            iface.f_gen_store(v_SignedSatQ211__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ212__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp25));
            iface.f_gen_store(v_SignedSatQ211__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")));
            iface.f_gen_store(v_SignedSatQ212__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp24));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_SignedSatQ222__2 = iface.f_decl_bv("SignedSatQ222__2", iface.bigint_lit("128"));
              const auto v_SignedSatQ223__2 = iface.f_decl_bool("SignedSatQ223__2");
              const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ211__2), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp26));
              iface.f_gen_store(v_SignedSatQ222__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ223__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp26));
              const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ211__2), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp27));
              iface.f_gen_store(v_SignedSatQ222__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ223__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp27));
              iface.f_gen_store(v_SignedSatQ222__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ211__2), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
              iface.f_gen_store(v_SignedSatQ223__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp26));
              v_result__1 = iface.f_gen_load(v_SignedSatQ222__2);
              const auto v_temp28 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ212__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ212__2)), iface.f_gen_load(v_SignedSatQ223__2))));
              iface.f_switch_context(iface.f_true_branch(v_temp28));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp28));
            } else {
              const auto v_SignedSatQ237__2 = iface.f_decl_bv("SignedSatQ237__2", iface.bigint_lit("128"));
              const auto v_SignedSatQ238__2 = iface.f_decl_bool("SignedSatQ238__2");
              const auto v_temp29 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ211__2), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp29));
              iface.f_gen_store(v_SignedSatQ237__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ238__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp29));
              const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ211__2), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp30));
              iface.f_gen_store(v_SignedSatQ237__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ238__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp30));
              iface.f_gen_store(v_SignedSatQ237__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_Exp204__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ211__2), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
              iface.f_gen_store(v_SignedSatQ238__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp29));
              v_result__1 = iface.f_gen_load(v_SignedSatQ237__2);
              const auto v_temp31 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ212__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ212__2)), iface.f_gen_load(v_SignedSatQ238__2))));
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
  } else {
    auto v_index__1 = iface.bits_zero(iface.bigint_lit("3"));
    auto v_Rmhi__1 = iface.bits_zero(iface.bigint_lit("1"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
      v_index__1 = iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")));
      v_Rmhi__1 = iface.bits_lit(1U, "0");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
        v_index__1 = iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.bigint_lit("3"));
        v_Rmhi__1 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1"));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp272__2 = typename Traits::rt_expr{};
      v_Exp272__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
      auto v_result__1 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")), iface.bits_lit(7U, "0001000")), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))));
      const auto v_SignedSatQ279__2 = iface.f_decl_bv("SignedSatQ279__2", iface.bigint_lit("16"));
      const auto v_SignedSatQ280__2 = iface.f_decl_bool("SignedSatQ280__2");
      const auto v_temp32 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp32));
      iface.f_gen_store(v_SignedSatQ279__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
      iface.f_gen_store(v_SignedSatQ280__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp32));
      const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp33));
      iface.f_gen_store(v_SignedSatQ279__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
      iface.f_gen_store(v_SignedSatQ280__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp33));
      iface.f_gen_store(v_SignedSatQ279__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
      iface.f_gen_store(v_SignedSatQ280__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp32));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ290__2 = iface.f_decl_bv("SignedSatQ290__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ291__2 = iface.f_decl_bool("SignedSatQ291__2");
        const auto v_temp34 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp272__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ279__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp34));
        iface.f_gen_store(v_SignedSatQ290__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ291__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp34));
        const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp272__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ279__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp35));
        iface.f_gen_store(v_SignedSatQ290__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ291__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp35));
        iface.f_gen_store(v_SignedSatQ290__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp272__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ279__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ291__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp34));
        v_result__1 = iface.f_gen_load(v_SignedSatQ290__2);
        const auto v_temp36 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ280__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ280__2)), iface.f_gen_load(v_SignedSatQ291__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp36));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp36));
      } else {
        const auto v_SignedSatQ305__2 = iface.f_decl_bv("SignedSatQ305__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ306__2 = iface.f_decl_bool("SignedSatQ306__2");
        const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp272__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ279__2), iface.f_gen_int_lit(iface.bigint_lit("17"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp37));
        iface.f_gen_store(v_SignedSatQ305__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ306__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp37));
        const auto v_temp38 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp272__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ279__2), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp38));
        iface.f_gen_store(v_SignedSatQ305__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ306__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp38));
        iface.f_gen_store(v_SignedSatQ305__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp272__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ279__2), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ306__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp37));
        v_result__1 = iface.f_gen_load(v_SignedSatQ305__2);
        const auto v_temp39 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ280__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ280__2)), iface.f_gen_load(v_SignedSatQ306__2))));
        iface.f_switch_context(iface.f_true_branch(v_temp39));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp39));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp334__2 = typename Traits::rt_expr{};
        v_Exp334__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        auto v_result__1 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")), iface.bigint_lit("9")), iface.bits_lit(9U, "001000000"))));
        const auto v_SignedSatQ341__2 = iface.f_decl_bv("SignedSatQ341__2", iface.bigint_lit("32"));
        const auto v_SignedSatQ342__2 = iface.f_decl_bool("SignedSatQ342__2");
        const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp40));
        iface.f_gen_store(v_SignedSatQ341__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
        iface.f_gen_store(v_SignedSatQ342__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp40));
        const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp41));
        iface.f_gen_store(v_SignedSatQ341__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
        iface.f_gen_store(v_SignedSatQ342__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp41));
        iface.f_gen_store(v_SignedSatQ341__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
        iface.f_gen_store(v_SignedSatQ342__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp40));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_SignedSatQ352__2 = iface.f_decl_bv("SignedSatQ352__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ353__2 = iface.f_decl_bool("SignedSatQ353__2");
          const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ341__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp42));
          iface.f_gen_store(v_SignedSatQ352__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ353__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp42));
          const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ341__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp43));
          iface.f_gen_store(v_SignedSatQ352__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ353__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp43));
          iface.f_gen_store(v_SignedSatQ352__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ341__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ353__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp42));
          v_result__1 = iface.f_gen_load(v_SignedSatQ352__2);
          const auto v_temp44 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ342__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ342__2)), iface.f_gen_load(v_SignedSatQ353__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp44));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp44));
        } else {
          const auto v_SignedSatQ367__2 = iface.f_decl_bv("SignedSatQ367__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ368__2 = iface.f_decl_bool("SignedSatQ368__2");
          const auto v_temp45 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ341__2), iface.f_gen_int_lit(iface.bigint_lit("33"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp45));
          iface.f_gen_store(v_SignedSatQ367__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ368__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp45));
          const auto v_temp46 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ341__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp46));
          iface.f_gen_store(v_SignedSatQ367__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ368__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp46));
          iface.f_gen_store(v_SignedSatQ367__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ341__2), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ368__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp45));
          v_result__1 = iface.f_gen_load(v_SignedSatQ367__2);
          const auto v_temp47 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ342__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ342__2)), iface.f_gen_load(v_SignedSatQ368__2))));
          iface.f_switch_context(iface.f_true_branch(v_temp47));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp47));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp396__2 = typename Traits::rt_expr{};
          v_Exp396__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          auto v_result__1 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")), iface.bits_lit(9U, "000100000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0001000000"))));
          const auto v_SignedSatQ403__2 = iface.f_decl_bv("SignedSatQ403__2", iface.bigint_lit("64"));
          const auto v_SignedSatQ404__2 = iface.f_decl_bool("SignedSatQ404__2");
          const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp48));
          iface.f_gen_store(v_SignedSatQ403__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ404__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp48));
          const auto v_temp49 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp49));
          iface.f_gen_store(v_SignedSatQ403__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ404__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp49));
          iface.f_gen_store(v_SignedSatQ403__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
          iface.f_gen_store(v_SignedSatQ404__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp48));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_SignedSatQ414__2 = iface.f_decl_bv("SignedSatQ414__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ415__2 = iface.f_decl_bool("SignedSatQ415__2");
            const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ403__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp50));
            iface.f_gen_store(v_SignedSatQ414__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ415__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp50));
            const auto v_temp51 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ403__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp51));
            iface.f_gen_store(v_SignedSatQ414__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ415__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp51));
            iface.f_gen_store(v_SignedSatQ414__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ403__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ415__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp50));
            v_result__1 = iface.f_gen_load(v_SignedSatQ414__2);
            const auto v_temp52 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ404__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ404__2)), iface.f_gen_load(v_SignedSatQ415__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp52));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp52));
          } else {
            const auto v_SignedSatQ429__2 = iface.f_decl_bv("SignedSatQ429__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ430__2 = iface.f_decl_bool("SignedSatQ430__2");
            const auto v_temp53 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ403__2), iface.f_gen_int_lit(iface.bigint_lit("65"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp53));
            iface.f_gen_store(v_SignedSatQ429__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ430__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp53));
            const auto v_temp54 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ403__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp54));
            iface.f_gen_store(v_SignedSatQ429__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ430__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp54));
            iface.f_gen_store(v_SignedSatQ429__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ403__2), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ430__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp53));
            v_result__1 = iface.f_gen_load(v_SignedSatQ429__2);
            const auto v_temp55 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ404__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ404__2)), iface.f_gen_load(v_SignedSatQ430__2))));
            iface.f_switch_context(iface.f_true_branch(v_temp55));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp55));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp458__2 = typename Traits::rt_expr{};
            v_Exp458__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            auto v_result__1 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0001000000")), iface.bigint_lit("11")), iface.bits_lit(11U, "00001000000"))));
            const auto v_SignedSatQ465__2 = iface.f_decl_bv("SignedSatQ465__2", iface.bigint_lit("128"));
            const auto v_SignedSatQ466__2 = iface.f_decl_bool("SignedSatQ466__2");
            const auto v_temp56 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp56));
            iface.f_gen_store(v_SignedSatQ465__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ466__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp56));
            const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp57));
            iface.f_gen_store(v_SignedSatQ465__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ466__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp57));
            iface.f_gen_store(v_SignedSatQ465__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")));
            iface.f_gen_store(v_SignedSatQ466__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp56));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_SignedSatQ476__2 = iface.f_decl_bv("SignedSatQ476__2", iface.bigint_lit("128"));
              const auto v_SignedSatQ477__2 = iface.f_decl_bool("SignedSatQ477__2");
              const auto v_temp58 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_Exp458__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ465__2), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp58));
              iface.f_gen_store(v_SignedSatQ476__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ477__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp58));
              const auto v_temp59 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_Exp458__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ465__2), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp59));
              iface.f_gen_store(v_SignedSatQ476__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ477__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp59));
              iface.f_gen_store(v_SignedSatQ476__2, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_Exp458__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ465__2), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
              iface.f_gen_store(v_SignedSatQ477__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp58));
              v_result__1 = iface.f_gen_load(v_SignedSatQ476__2);
              const auto v_temp60 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ466__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ466__2)), iface.f_gen_load(v_SignedSatQ477__2))));
              iface.f_switch_context(iface.f_true_branch(v_temp60));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp60));
            } else {
              const auto v_SignedSatQ491__2 = iface.f_decl_bv("SignedSatQ491__2", iface.bigint_lit("128"));
              const auto v_SignedSatQ492__2 = iface.f_decl_bool("SignedSatQ492__2");
              const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp458__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ465__2), iface.f_gen_int_lit(iface.bigint_lit("129"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp61));
              iface.f_gen_store(v_SignedSatQ491__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "01111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ492__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp61));
              const auto v_temp62 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp458__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ465__2), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(129U, "110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp62));
              iface.f_gen_store(v_SignedSatQ491__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ492__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp62));
              iface.f_gen_store(v_SignedSatQ491__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_Exp458__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_SignedSatQ465__2), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
              iface.f_gen_store(v_SignedSatQ492__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp61));
              v_result__1 = iface.f_gen_load(v_SignedSatQ491__2);
              const auto v_temp63 = iface.f_gen_branch(iface.f_gen_or_bool(iface.f_gen_load(v_SignedSatQ466__2), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_load(v_SignedSatQ466__2)), iface.f_gen_load(v_SignedSatQ492__2))));
              iface.f_switch_context(iface.f_true_branch(v_temp63));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp63));
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

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_double_sisd


} // namespace aslp
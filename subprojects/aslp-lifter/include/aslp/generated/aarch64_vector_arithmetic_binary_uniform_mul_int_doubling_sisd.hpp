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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_sisd(typename Traits::bits v_enc) {
  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp8__2 = typename Traits::rt_expr{};
      v_Exp8__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp11__2 = typename Traits::rt_expr{};
      v_Exp11__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
      auto v_If12__1 = iface.bits_zero(iface.bigint_lit("8"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If12__1 = iface.bits_lit(8U, "10000000");
      } else {
        v_If12__1 = iface.bits_lit(8U, "00000000");
      } // if
      const auto v_SignedSatQ19__2 = iface.f_decl_bv("SignedSatQ19__2", iface.bigint_lit("8"));
      const auto v_SignedSatQ20__2 = iface.f_decl_bool("SignedSatQ20__2");
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If12__1, iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(5U, "01000")))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_SignedSatQ19__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
      iface.f_gen_store(v_SignedSatQ20__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If12__1, iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(5U, "01000"))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ19__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
      iface.f_gen_store(v_SignedSatQ20__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ19__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If12__1, iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(5U, "01000"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")));
      iface.f_gen_store(v_SignedSatQ20__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ20__2));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp2));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_SignedSatQ19__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp38__2 = typename Traits::rt_expr{};
        v_Exp38__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp41__2 = typename Traits::rt_expr{};
        v_Exp41__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If42__1 = iface.bits_zero(iface.bigint_lit("16"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If42__1 = iface.bits_lit(16U, "1000000000000000");
        } else {
          v_If42__1 = iface.bits_lit(16U, "0000000000000000");
        } // if
        const auto v_SignedSatQ49__2 = iface.f_decl_bv("SignedSatQ49__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ50__2 = iface.f_decl_bool("SignedSatQ50__2");
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000111111111111111")), iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp38__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp41__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If42__1, iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(6U, "010000")))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ50__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp38__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp41__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If42__1, iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(6U, "010000"))), iface.f_gen_bit_lit(iface.bits_lit(33U, "111111111111111111000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ50__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        iface.f_gen_store(v_SignedSatQ49__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp38__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp41__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If42__1, iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(6U, "010000"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ50__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ50__2));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_SignedSatQ49__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp68__2 = typename Traits::rt_expr{};
          v_Exp68__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp71__2 = typename Traits::rt_expr{};
          v_Exp71__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If72__1 = iface.bits_zero(iface.bigint_lit("32"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If72__1 = iface.bits_lit(32U, "10000000000000000000000000000000");
          } else {
            v_If72__1 = iface.bits_lit(32U, "00000000000000000000000000000000");
          } // if
          const auto v_SignedSatQ79__2 = iface.f_decl_bv("SignedSatQ79__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ80__2 = iface.f_decl_bool("SignedSatQ80__2");
          const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp68__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp71__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If72__1, iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(7U, "0100000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_SignedSatQ79__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ80__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp68__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp71__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If72__1, iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(7U, "0100000"))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11111111111111111111111111111111110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_SignedSatQ79__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ80__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          iface.f_gen_store(v_SignedSatQ79__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp68__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp71__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If72__1, iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(7U, "0100000"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ80__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp6));
          const auto v_temp8 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ80__2));
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp8));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_SignedSatQ79__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp98__2 = typename Traits::rt_expr{};
            v_Exp98__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp101__2 = typename Traits::rt_expr{};
            v_Exp101__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If102__1 = iface.bits_zero(iface.bigint_lit("64"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If102__1 = iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000");
            } else {
              v_If102__1 = iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000");
            } // if
            const auto v_SignedSatQ109__2 = iface.f_decl_bv("SignedSatQ109__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ110__2 = iface.f_decl_bool("SignedSatQ110__2");
            const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp98__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp101__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If102__1, iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(8U, "01000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp9));
            iface.f_gen_store(v_SignedSatQ109__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ110__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp9));
            const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp98__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp101__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If102__1, iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(8U, "01000000"))), iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp10));
            iface.f_gen_store(v_SignedSatQ109__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ110__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp10));
            iface.f_gen_store(v_SignedSatQ109__2, iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_mul_bits(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000010")), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp98__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp101__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_If102__1, iface.bigint_lit("129")))), iface.f_gen_bit_lit(iface.bits_lit(8U, "01000000"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ110__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp9));
            const auto v_temp11 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ110__2));
            iface.f_switch_context(iface.f_true_branch(v_temp11));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp11));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_SignedSatQ109__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_sisd


} // namespace aslp
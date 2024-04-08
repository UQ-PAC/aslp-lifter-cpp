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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_diff_neg_sat_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_result__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      const auto v_SignedSatQ9__2 = iface.f_decl_bv("SignedSatQ9__2", iface.bigint_lit("8"));
      const auto v_SignedSatQ10__2 = iface.f_decl_bool("SignedSatQ10__2");
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "001111111")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_SignedSatQ9__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
      iface.f_gen_store(v_SignedSatQ10__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "110000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ9__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
      iface.f_gen_store(v_SignedSatQ10__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_SignedSatQ9__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000001"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
      iface.f_gen_store(v_SignedSatQ10__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      v_result__1 = iface.f_gen_load(v_SignedSatQ9__2);
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ10__2));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp2));
    } else {
      const auto v_If21__2 = iface.f_decl_bv("If21__2", iface.bigint_lit("9"));
      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"))));
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_If21__2, iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9"))));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      iface.f_gen_store(v_If21__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp3));
      const auto v_SignedSatQ22__2 = iface.f_decl_bv("SignedSatQ22__2", iface.bigint_lit("8"));
      const auto v_SignedSatQ23__2 = iface.f_decl_bool("SignedSatQ23__2");
      const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "001111111")), iface.f_gen_load(v_If21__2)));
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(v_SignedSatQ22__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
      iface.f_gen_store(v_SignedSatQ23__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp4));
      const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If21__2), iface.f_gen_bit_lit(iface.bits_lit(9U, "110000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp5));
      iface.f_gen_store(v_SignedSatQ22__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
      iface.f_gen_store(v_SignedSatQ23__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp5));
      iface.f_gen_store(v_SignedSatQ22__2, iface.f_gen_slice(iface.f_gen_load(v_If21__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
      iface.f_gen_store(v_SignedSatQ23__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp4));
      v_result__1 = iface.f_gen_load(v_SignedSatQ22__2);
      const auto v_temp6 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ23__2));
      iface.f_switch_context(iface.f_true_branch(v_temp6));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp6));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_result__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_SignedSatQ45__2 = iface.f_decl_bv("SignedSatQ45__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ46__2 = iface.f_decl_bool("SignedSatQ46__2");
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000001")))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_SignedSatQ45__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ46__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000001"))), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_SignedSatQ45__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ46__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        iface.f_gen_store(v_SignedSatQ45__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ46__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
        v_result__1 = iface.f_gen_load(v_SignedSatQ45__2);
        const auto v_temp9 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ46__2));
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
      } else {
        const auto v_If57__2 = iface.f_decl_bv("If57__2", iface.bigint_lit("17"));
        const auto v_temp10 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_If57__2, iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17"))));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        iface.f_gen_store(v_If57__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp10));
        const auto v_SignedSatQ58__2 = iface.f_decl_bv("SignedSatQ58__2", iface.bigint_lit("16"));
        const auto v_SignedSatQ59__2 = iface.f_decl_bool("SignedSatQ59__2");
        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00111111111111111")), iface.f_gen_load(v_If57__2)));
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_SignedSatQ58__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ59__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If57__2), iface.f_gen_bit_lit(iface.bits_lit(17U, "11000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp12));
        iface.f_gen_store(v_SignedSatQ58__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ59__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp12));
        iface.f_gen_store(v_SignedSatQ58__2, iface.f_gen_slice(iface.f_gen_load(v_If57__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ59__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp11));
        v_result__1 = iface.f_gen_load(v_SignedSatQ58__2);
        const auto v_temp13 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ59__2));
        iface.f_switch_context(iface.f_true_branch(v_temp13));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp13));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_result__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_SignedSatQ81__2 = iface.f_decl_bv("SignedSatQ81__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ82__2 = iface.f_decl_bool("SignedSatQ82__2");
          const auto v_temp14 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(v_SignedSatQ81__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ82__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp14));
          const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001"))), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp15));
          iface.f_gen_store(v_SignedSatQ81__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ82__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp15));
          iface.f_gen_store(v_SignedSatQ81__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ82__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp14));
          v_result__1 = iface.f_gen_load(v_SignedSatQ81__2);
          const auto v_temp16 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ82__2));
          iface.f_switch_context(iface.f_true_branch(v_temp16));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp16));
        } else {
          const auto v_If93__2 = iface.f_decl_bv("If93__2", iface.bigint_lit("33"));
          const auto v_temp17 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"))));
          iface.f_switch_context(iface.f_true_branch(v_temp17));
          iface.f_gen_store(v_If93__2, iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))));
          iface.f_switch_context(iface.f_false_branch(v_temp17));
          iface.f_gen_store(v_If93__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp17));
          const auto v_SignedSatQ94__2 = iface.f_decl_bv("SignedSatQ94__2", iface.bigint_lit("32"));
          const auto v_SignedSatQ95__2 = iface.f_decl_bool("SignedSatQ95__2");
          const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "001111111111111111111111111111111")), iface.f_gen_load(v_If93__2)));
          iface.f_switch_context(iface.f_true_branch(v_temp18));
          iface.f_gen_store(v_SignedSatQ94__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ95__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp18));
          const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If93__2), iface.f_gen_bit_lit(iface.bits_lit(33U, "110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp19));
          iface.f_gen_store(v_SignedSatQ94__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ95__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp19));
          iface.f_gen_store(v_SignedSatQ94__2, iface.f_gen_slice(iface.f_gen_load(v_If93__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ95__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp18));
          v_result__1 = iface.f_gen_load(v_SignedSatQ94__2);
          const auto v_temp20 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ95__2));
          iface.f_switch_context(iface.f_true_branch(v_temp20));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp20));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_result__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_SignedSatQ117__2 = iface.f_decl_bv("SignedSatQ117__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ118__2 = iface.f_decl_bool("SignedSatQ118__2");
            const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp21));
            iface.f_gen_store(v_SignedSatQ117__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ118__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp21));
            const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001"))), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp22));
            iface.f_gen_store(v_SignedSatQ117__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ118__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp22));
            iface.f_gen_store(v_SignedSatQ117__2, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ118__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp21));
            v_result__1 = iface.f_gen_load(v_SignedSatQ117__2);
            const auto v_temp23 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ118__2));
            iface.f_switch_context(iface.f_true_branch(v_temp23));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp23));
          } else {
            const auto v_If129__2 = iface.f_decl_bv("If129__2", iface.bigint_lit("65"));
            const auto v_temp24 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
            iface.f_switch_context(iface.f_true_branch(v_temp24));
            iface.f_gen_store(v_If129__2, iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))));
            iface.f_switch_context(iface.f_false_branch(v_temp24));
            iface.f_gen_store(v_If129__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp24));
            const auto v_SignedSatQ130__2 = iface.f_decl_bv("SignedSatQ130__2", iface.bigint_lit("64"));
            const auto v_SignedSatQ131__2 = iface.f_decl_bool("SignedSatQ131__2");
            const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If129__2)));
            iface.f_switch_context(iface.f_true_branch(v_temp25));
            iface.f_gen_store(v_SignedSatQ130__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ131__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp25));
            const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If129__2), iface.f_gen_bit_lit(iface.bits_lit(65U, "11000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp26));
            iface.f_gen_store(v_SignedSatQ130__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ131__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp26));
            iface.f_gen_store(v_SignedSatQ130__2, iface.f_gen_slice(iface.f_gen_load(v_If129__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ131__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp25));
            v_result__1 = iface.f_gen_load(v_SignedSatQ130__2);
            const auto v_temp27 = iface.f_gen_branch(iface.f_gen_load(v_SignedSatQ131__2));
            iface.f_switch_context(iface.f_true_branch(v_temp27));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp27));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_diff_neg_sat_sisd


} // namespace aslp
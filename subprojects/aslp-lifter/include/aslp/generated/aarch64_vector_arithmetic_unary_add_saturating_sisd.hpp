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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_add_saturating_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp9__2 = typename Traits::rt_expr{};
    v_Exp9__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
    auto v_If12__2 = typename Traits::rt_expr{};
    if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
      v_If12__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
    } else {
      v_If12__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
    } // if
    auto v_If17__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If17__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
    } else {
      v_If17__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
    } // if
    auto v_SatQ20__2 = typename Traits::rt_expr{};
    auto v_SatQ21__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      const auto v_UnsignedSatQ22__3 = iface.f_decl_bv("UnsignedSatQ22__3", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ23__3 = iface.f_decl_bool("UnsignedSatQ23__3");
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      v_SatQ20__2 = iface.f_gen_load(v_UnsignedSatQ22__3);
      v_SatQ21__2 = iface.f_gen_load(v_UnsignedSatQ23__3);
    } else {
      const auto v_SignedSatQ28__3 = iface.f_decl_bv("SignedSatQ28__3", iface.bigint_lit("8"));
      const auto v_SignedSatQ29__3 = iface.f_decl_bool("SignedSatQ29__3");
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
      iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp2));
      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
      iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
      iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp2));
      v_SatQ20__2 = iface.f_gen_load(v_SignedSatQ28__3);
      v_SatQ21__2 = iface.f_gen_load(v_SignedSatQ29__3);
    } // if
    const auto v_temp4 = iface.f_gen_branch(v_SatQ21__2);
    iface.f_switch_context(iface.f_true_branch(v_temp4));
    iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
    iface.f_switch_context(iface.f_merge_branch(v_temp4));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ20__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp52__2 = typename Traits::rt_expr{};
      v_Exp52__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
      auto v_If55__2 = typename Traits::rt_expr{};
      if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
        v_If55__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If55__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_If60__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If60__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp52__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If60__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp52__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ63__2 = typename Traits::rt_expr{};
      auto v_SatQ64__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ65__3 = iface.f_decl_bv("UnsignedSatQ65__3", iface.bigint_lit("16"));
        const auto v_UnsignedSatQ66__3 = iface.f_decl_bool("UnsignedSatQ66__3");
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If55__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_UnsignedSatQ65__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
        iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If55__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_UnsignedSatQ65__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
        iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_UnsignedSatQ65__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If55__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        v_SatQ63__2 = iface.f_gen_load(v_UnsignedSatQ65__3);
        v_SatQ64__2 = iface.f_gen_load(v_UnsignedSatQ66__3);
      } else {
        const auto v_SignedSatQ71__3 = iface.f_decl_bv("SignedSatQ71__3", iface.bigint_lit("16"));
        const auto v_SignedSatQ72__3 = iface.f_decl_bool("SignedSatQ72__3");
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If55__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_SignedSatQ71__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
        iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If55__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_SignedSatQ71__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
        iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        iface.f_gen_store(v_SignedSatQ71__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If55__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
        v_SatQ63__2 = iface.f_gen_load(v_SignedSatQ71__3);
        v_SatQ64__2 = iface.f_gen_load(v_SignedSatQ72__3);
      } // if
      const auto v_temp9 = iface.f_gen_branch(v_SatQ64__2);
      iface.f_switch_context(iface.f_true_branch(v_temp9));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp9));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ63__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp95__2 = typename Traits::rt_expr{};
        v_Exp95__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If98__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If98__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } else {
          v_If98__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } // if
        auto v_If103__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If103__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp95__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } else {
          v_If103__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp95__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } // if
        auto v_SatQ106__2 = typename Traits::rt_expr{};
        auto v_SatQ107__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ108__3 = iface.f_decl_bv("UnsignedSatQ108__3", iface.bigint_lit("32"));
          const auto v_UnsignedSatQ109__3 = iface.f_decl_bool("UnsignedSatQ109__3");
          const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If98__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp10));
          iface.f_gen_store(v_UnsignedSatQ108__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ109__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp10));
          const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If98__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp11));
          iface.f_gen_store(v_UnsignedSatQ108__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ109__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp11));
          iface.f_gen_store(v_UnsignedSatQ108__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If98__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_UnsignedSatQ109__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp10));
          v_SatQ106__2 = iface.f_gen_load(v_UnsignedSatQ108__3);
          v_SatQ107__2 = iface.f_gen_load(v_UnsignedSatQ109__3);
        } else {
          const auto v_SignedSatQ114__3 = iface.f_decl_bv("SignedSatQ114__3", iface.bigint_lit("32"));
          const auto v_SignedSatQ115__3 = iface.f_decl_bool("SignedSatQ115__3");
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If98__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(v_SignedSatQ114__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
          iface.f_gen_store(v_SignedSatQ115__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp12));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If98__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ114__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
          iface.f_gen_store(v_SignedSatQ115__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ114__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If98__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_SignedSatQ115__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
          v_SatQ106__2 = iface.f_gen_load(v_SignedSatQ114__3);
          v_SatQ107__2 = iface.f_gen_load(v_SignedSatQ115__3);
        } // if
        const auto v_temp14 = iface.f_gen_branch(v_SatQ107__2);
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ106__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp138__2 = typename Traits::rt_expr{};
          v_Exp138__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If141__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If141__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } else {
            v_If141__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } // if
          auto v_If146__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If146__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp138__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } else {
            v_If146__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp138__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } // if
          auto v_SatQ149__2 = typename Traits::rt_expr{};
          auto v_SatQ150__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ151__3 = iface.f_decl_bv("UnsignedSatQ151__3", iface.bigint_lit("64"));
            const auto v_UnsignedSatQ152__3 = iface.f_decl_bool("UnsignedSatQ152__3");
            const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If141__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp15));
            iface.f_gen_store(v_UnsignedSatQ151__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ152__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp15));
            const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If141__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp16));
            iface.f_gen_store(v_UnsignedSatQ151__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ152__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp16));
            iface.f_gen_store(v_UnsignedSatQ151__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If141__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_UnsignedSatQ152__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp15));
            v_SatQ149__2 = iface.f_gen_load(v_UnsignedSatQ151__3);
            v_SatQ150__2 = iface.f_gen_load(v_UnsignedSatQ152__3);
          } else {
            const auto v_SignedSatQ157__3 = iface.f_decl_bv("SignedSatQ157__3", iface.bigint_lit("64"));
            const auto v_SignedSatQ158__3 = iface.f_decl_bool("SignedSatQ158__3");
            const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If141__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp17));
            iface.f_gen_store(v_SignedSatQ157__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ158__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp17));
            const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If141__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "111000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp18));
            iface.f_gen_store(v_SignedSatQ157__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ158__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp18));
            iface.f_gen_store(v_SignedSatQ157__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If141__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_SignedSatQ158__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp17));
            v_SatQ149__2 = iface.f_gen_load(v_SignedSatQ157__3);
            v_SatQ150__2 = iface.f_gen_load(v_SignedSatQ158__3);
          } // if
          const auto v_temp19 = iface.f_gen_branch(v_SatQ150__2);
          iface.f_switch_context(iface.f_true_branch(v_temp19));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp19));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ149__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_add_saturating_sisd


} // namespace aslp
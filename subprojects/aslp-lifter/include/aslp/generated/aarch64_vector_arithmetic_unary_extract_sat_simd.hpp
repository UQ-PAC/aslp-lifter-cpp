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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_extract_sat_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp7__2 = typename Traits::rt_expr{};
      v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      auto v_If10__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If10__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If10__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ13__2 = typename Traits::rt_expr{};
      auto v_SatQ14__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ15__3 = iface.f_decl_bv("UnsignedSatQ15__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ16__3 = iface.f_decl_bool("UnsignedSatQ16__3");
        const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If10__2));
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_UnsignedSatQ15__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ16__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If10__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_UnsignedSatQ15__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ16__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_UnsignedSatQ15__3, iface.f_gen_slice(v_If10__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ16__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        v_SatQ13__2 = iface.f_gen_load(v_UnsignedSatQ15__3);
        v_SatQ14__2 = iface.f_gen_load(v_UnsignedSatQ16__3);
      } else {
        const auto v_SignedSatQ21__3 = iface.f_decl_bv("SignedSatQ21__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ22__3 = iface.f_decl_bool("SignedSatQ22__3");
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If10__2));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_SignedSatQ21__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ22__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If10__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ21__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ22__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ21__3, iface.f_gen_slice(v_If10__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ22__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        v_SatQ13__2 = iface.f_gen_load(v_SignedSatQ21__3);
        v_SatQ14__2 = iface.f_gen_load(v_SignedSatQ22__3);
      } // if
      const auto v_temp4 = iface.f_gen_branch(v_SatQ14__2);
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp4));
      auto v_If36__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If36__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If36__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ39__2 = typename Traits::rt_expr{};
      auto v_SatQ40__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ41__3 = iface.f_decl_bv("UnsignedSatQ41__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ42__3 = iface.f_decl_bool("UnsignedSatQ42__3");
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If36__2));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_UnsignedSatQ41__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ42__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If36__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_UnsignedSatQ41__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ42__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_UnsignedSatQ41__3, iface.f_gen_slice(v_If36__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ42__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        v_SatQ39__2 = iface.f_gen_load(v_UnsignedSatQ41__3);
        v_SatQ40__2 = iface.f_gen_load(v_UnsignedSatQ42__3);
      } else {
        const auto v_SignedSatQ47__3 = iface.f_decl_bv("SignedSatQ47__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ48__3 = iface.f_decl_bool("SignedSatQ48__3");
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If36__2));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_SignedSatQ47__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ48__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If36__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_SignedSatQ47__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ48__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        iface.f_gen_store(v_SignedSatQ47__3, iface.f_gen_slice(v_If36__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ48__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
        v_SatQ39__2 = iface.f_gen_load(v_SignedSatQ47__3);
        v_SatQ40__2 = iface.f_gen_load(v_SignedSatQ48__3);
      } // if
      const auto v_temp9 = iface.f_gen_branch(v_SatQ40__2);
      iface.f_switch_context(iface.f_true_branch(v_temp9));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp9));
      auto v_If61__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If61__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If61__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ64__2 = typename Traits::rt_expr{};
      auto v_SatQ65__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ66__3 = iface.f_decl_bv("UnsignedSatQ66__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ67__3 = iface.f_decl_bool("UnsignedSatQ67__3");
        const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If61__2));
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ67__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If61__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ67__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_slice(v_If61__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ67__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp10));
        v_SatQ64__2 = iface.f_gen_load(v_UnsignedSatQ66__3);
        v_SatQ65__2 = iface.f_gen_load(v_UnsignedSatQ67__3);
      } else {
        const auto v_SignedSatQ72__3 = iface.f_decl_bv("SignedSatQ72__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ73__3 = iface.f_decl_bool("SignedSatQ73__3");
        const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If61__2));
        iface.f_switch_context(iface.f_true_branch(v_temp12));
        iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ73__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp12));
        const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If61__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp13));
        iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ73__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp13));
        iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_slice(v_If61__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ73__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp12));
        v_SatQ64__2 = iface.f_gen_load(v_SignedSatQ72__3);
        v_SatQ65__2 = iface.f_gen_load(v_SignedSatQ73__3);
      } // if
      const auto v_temp14 = iface.f_gen_branch(v_SatQ65__2);
      iface.f_switch_context(iface.f_true_branch(v_temp14));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp14));
      auto v_If86__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If86__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If86__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ89__2 = typename Traits::rt_expr{};
      auto v_SatQ90__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ91__3 = iface.f_decl_bv("UnsignedSatQ91__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ92__3 = iface.f_decl_bool("UnsignedSatQ92__3");
        const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If86__2));
        iface.f_switch_context(iface.f_true_branch(v_temp15));
        iface.f_gen_store(v_UnsignedSatQ91__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ92__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp15));
        const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If86__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp16));
        iface.f_gen_store(v_UnsignedSatQ91__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ92__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp16));
        iface.f_gen_store(v_UnsignedSatQ91__3, iface.f_gen_slice(v_If86__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ92__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp15));
        v_SatQ89__2 = iface.f_gen_load(v_UnsignedSatQ91__3);
        v_SatQ90__2 = iface.f_gen_load(v_UnsignedSatQ92__3);
      } else {
        const auto v_SignedSatQ97__3 = iface.f_decl_bv("SignedSatQ97__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ98__3 = iface.f_decl_bool("SignedSatQ98__3");
        const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If86__2));
        iface.f_switch_context(iface.f_true_branch(v_temp17));
        iface.f_gen_store(v_SignedSatQ97__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ98__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp17));
        const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If86__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp18));
        iface.f_gen_store(v_SignedSatQ97__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ98__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp18));
        iface.f_gen_store(v_SignedSatQ97__3, iface.f_gen_slice(v_If86__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ98__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp17));
        v_SatQ89__2 = iface.f_gen_load(v_SignedSatQ97__3);
        v_SatQ90__2 = iface.f_gen_load(v_SignedSatQ98__3);
      } // if
      const auto v_temp19 = iface.f_gen_branch(v_SatQ90__2);
      iface.f_switch_context(iface.f_true_branch(v_temp19));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp19));
      auto v_If111__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If111__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If111__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ114__2 = typename Traits::rt_expr{};
      auto v_SatQ115__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ116__3 = iface.f_decl_bv("UnsignedSatQ116__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ117__3 = iface.f_decl_bool("UnsignedSatQ117__3");
        const auto v_temp20 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If111__2));
        iface.f_switch_context(iface.f_true_branch(v_temp20));
        iface.f_gen_store(v_UnsignedSatQ116__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ117__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp20));
        const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If111__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp21));
        iface.f_gen_store(v_UnsignedSatQ116__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ117__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp21));
        iface.f_gen_store(v_UnsignedSatQ116__3, iface.f_gen_slice(v_If111__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ117__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp20));
        v_SatQ114__2 = iface.f_gen_load(v_UnsignedSatQ116__3);
        v_SatQ115__2 = iface.f_gen_load(v_UnsignedSatQ117__3);
      } else {
        const auto v_SignedSatQ122__3 = iface.f_decl_bv("SignedSatQ122__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ123__3 = iface.f_decl_bool("SignedSatQ123__3");
        const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If111__2));
        iface.f_switch_context(iface.f_true_branch(v_temp22));
        iface.f_gen_store(v_SignedSatQ122__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ123__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp22));
        const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If111__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp23));
        iface.f_gen_store(v_SignedSatQ122__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ123__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp23));
        iface.f_gen_store(v_SignedSatQ122__3, iface.f_gen_slice(v_If111__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ123__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp22));
        v_SatQ114__2 = iface.f_gen_load(v_SignedSatQ122__3);
        v_SatQ115__2 = iface.f_gen_load(v_SignedSatQ123__3);
      } // if
      const auto v_temp24 = iface.f_gen_branch(v_SatQ115__2);
      iface.f_switch_context(iface.f_true_branch(v_temp24));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp24));
      auto v_If136__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If136__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If136__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ139__2 = typename Traits::rt_expr{};
      auto v_SatQ140__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ141__3 = iface.f_decl_bv("UnsignedSatQ141__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ142__3 = iface.f_decl_bool("UnsignedSatQ142__3");
        const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If136__2));
        iface.f_switch_context(iface.f_true_branch(v_temp25));
        iface.f_gen_store(v_UnsignedSatQ141__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ142__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp25));
        const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If136__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp26));
        iface.f_gen_store(v_UnsignedSatQ141__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ142__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp26));
        iface.f_gen_store(v_UnsignedSatQ141__3, iface.f_gen_slice(v_If136__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ142__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp25));
        v_SatQ139__2 = iface.f_gen_load(v_UnsignedSatQ141__3);
        v_SatQ140__2 = iface.f_gen_load(v_UnsignedSatQ142__3);
      } else {
        const auto v_SignedSatQ147__3 = iface.f_decl_bv("SignedSatQ147__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ148__3 = iface.f_decl_bool("SignedSatQ148__3");
        const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If136__2));
        iface.f_switch_context(iface.f_true_branch(v_temp27));
        iface.f_gen_store(v_SignedSatQ147__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ148__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp27));
        const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If136__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp28));
        iface.f_gen_store(v_SignedSatQ147__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ148__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp28));
        iface.f_gen_store(v_SignedSatQ147__3, iface.f_gen_slice(v_If136__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ148__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp27));
        v_SatQ139__2 = iface.f_gen_load(v_SignedSatQ147__3);
        v_SatQ140__2 = iface.f_gen_load(v_SignedSatQ148__3);
      } // if
      const auto v_temp29 = iface.f_gen_branch(v_SatQ140__2);
      iface.f_switch_context(iface.f_true_branch(v_temp29));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp29));
      auto v_If161__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If161__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If161__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ164__2 = typename Traits::rt_expr{};
      auto v_SatQ165__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ166__3 = iface.f_decl_bv("UnsignedSatQ166__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ167__3 = iface.f_decl_bool("UnsignedSatQ167__3");
        const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If161__2));
        iface.f_switch_context(iface.f_true_branch(v_temp30));
        iface.f_gen_store(v_UnsignedSatQ166__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ167__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp30));
        const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If161__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp31));
        iface.f_gen_store(v_UnsignedSatQ166__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ167__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp31));
        iface.f_gen_store(v_UnsignedSatQ166__3, iface.f_gen_slice(v_If161__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ167__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp30));
        v_SatQ164__2 = iface.f_gen_load(v_UnsignedSatQ166__3);
        v_SatQ165__2 = iface.f_gen_load(v_UnsignedSatQ167__3);
      } else {
        const auto v_SignedSatQ172__3 = iface.f_decl_bv("SignedSatQ172__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ173__3 = iface.f_decl_bool("SignedSatQ173__3");
        const auto v_temp32 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If161__2));
        iface.f_switch_context(iface.f_true_branch(v_temp32));
        iface.f_gen_store(v_SignedSatQ172__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ173__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp32));
        const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If161__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp33));
        iface.f_gen_store(v_SignedSatQ172__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ173__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp33));
        iface.f_gen_store(v_SignedSatQ172__3, iface.f_gen_slice(v_If161__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ173__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp32));
        v_SatQ164__2 = iface.f_gen_load(v_SignedSatQ172__3);
        v_SatQ165__2 = iface.f_gen_load(v_SignedSatQ173__3);
      } // if
      const auto v_temp34 = iface.f_gen_branch(v_SatQ165__2);
      iface.f_switch_context(iface.f_true_branch(v_temp34));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp34));
      auto v_If186__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If186__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If186__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ189__2 = typename Traits::rt_expr{};
      auto v_SatQ190__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ191__3 = iface.f_decl_bv("UnsignedSatQ191__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ192__3 = iface.f_decl_bool("UnsignedSatQ192__3");
        const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If186__2));
        iface.f_switch_context(iface.f_true_branch(v_temp35));
        iface.f_gen_store(v_UnsignedSatQ191__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ192__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp35));
        const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If186__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp36));
        iface.f_gen_store(v_UnsignedSatQ191__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ192__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp36));
        iface.f_gen_store(v_UnsignedSatQ191__3, iface.f_gen_slice(v_If186__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ192__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp35));
        v_SatQ189__2 = iface.f_gen_load(v_UnsignedSatQ191__3);
        v_SatQ190__2 = iface.f_gen_load(v_UnsignedSatQ192__3);
      } else {
        const auto v_SignedSatQ197__3 = iface.f_decl_bv("SignedSatQ197__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ198__3 = iface.f_decl_bool("SignedSatQ198__3");
        const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If186__2));
        iface.f_switch_context(iface.f_true_branch(v_temp37));
        iface.f_gen_store(v_SignedSatQ197__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ198__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp37));
        const auto v_temp38 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If186__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp38));
        iface.f_gen_store(v_SignedSatQ197__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ198__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp38));
        iface.f_gen_store(v_SignedSatQ197__3, iface.f_gen_slice(v_If186__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ198__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp37));
        v_SatQ189__2 = iface.f_gen_load(v_SignedSatQ197__3);
        v_SatQ190__2 = iface.f_gen_load(v_SignedSatQ198__3);
      } // if
      const auto v_temp39 = iface.f_gen_branch(v_SatQ190__2);
      iface.f_switch_context(iface.f_true_branch(v_temp39));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp39));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp211__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp211__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ189__2, iface.f_gen_append_bits(v_SatQ164__2, iface.f_gen_append_bits(v_SatQ139__2, iface.f_gen_append_bits(v_SatQ114__2, iface.f_gen_append_bits(v_SatQ89__2, iface.f_gen_append_bits(v_SatQ64__2, iface.f_gen_append_bits(v_SatQ39__2, v_SatQ13__2))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(v_SatQ189__2, iface.f_gen_append_bits(v_SatQ164__2, iface.f_gen_append_bits(v_SatQ139__2, iface.f_gen_append_bits(v_SatQ114__2, iface.f_gen_append_bits(v_SatQ89__2, iface.f_gen_append_bits(v_SatQ64__2, iface.f_gen_append_bits(v_SatQ39__2, v_SatQ13__2))))))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp229__2 = typename Traits::rt_expr{};
        v_Exp229__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If232__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If232__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } else {
          v_If232__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } // if
        auto v_SatQ235__2 = typename Traits::rt_expr{};
        auto v_SatQ236__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ237__3 = iface.f_decl_bv("UnsignedSatQ237__3", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ238__3 = iface.f_decl_bool("UnsignedSatQ238__3");
          const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000001111111111111111")), v_If232__2));
          iface.f_switch_context(iface.f_true_branch(v_temp40));
          iface.f_gen_store(v_UnsignedSatQ237__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ238__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp40));
          const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If232__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp41));
          iface.f_gen_store(v_UnsignedSatQ237__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ238__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp41));
          iface.f_gen_store(v_UnsignedSatQ237__3, iface.f_gen_slice(v_If232__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ238__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp40));
          v_SatQ235__2 = iface.f_gen_load(v_UnsignedSatQ237__3);
          v_SatQ236__2 = iface.f_gen_load(v_UnsignedSatQ238__3);
        } else {
          const auto v_SignedSatQ243__3 = iface.f_decl_bv("SignedSatQ243__3", iface.bigint_lit("16"));
          const auto v_SignedSatQ244__3 = iface.f_decl_bool("SignedSatQ244__3");
          const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000111111111111111")), v_If232__2));
          iface.f_switch_context(iface.f_true_branch(v_temp42));
          iface.f_gen_store(v_SignedSatQ243__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
          iface.f_gen_store(v_SignedSatQ244__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp42));
          const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If232__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "111111111111111111000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp43));
          iface.f_gen_store(v_SignedSatQ243__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
          iface.f_gen_store(v_SignedSatQ244__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp43));
          iface.f_gen_store(v_SignedSatQ243__3, iface.f_gen_slice(v_If232__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_SignedSatQ244__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp42));
          v_SatQ235__2 = iface.f_gen_load(v_SignedSatQ243__3);
          v_SatQ236__2 = iface.f_gen_load(v_SignedSatQ244__3);
        } // if
        const auto v_temp44 = iface.f_gen_branch(v_SatQ236__2);
        iface.f_switch_context(iface.f_true_branch(v_temp44));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp44));
        auto v_If258__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If258__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp229__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } else {
          v_If258__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp229__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } // if
        auto v_SatQ261__2 = typename Traits::rt_expr{};
        auto v_SatQ262__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ263__3 = iface.f_decl_bv("UnsignedSatQ263__3", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ264__3 = iface.f_decl_bool("UnsignedSatQ264__3");
          const auto v_temp45 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000001111111111111111")), v_If258__2));
          iface.f_switch_context(iface.f_true_branch(v_temp45));
          iface.f_gen_store(v_UnsignedSatQ263__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp45));
          const auto v_temp46 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If258__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp46));
          iface.f_gen_store(v_UnsignedSatQ263__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp46));
          iface.f_gen_store(v_UnsignedSatQ263__3, iface.f_gen_slice(v_If258__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp45));
          v_SatQ261__2 = iface.f_gen_load(v_UnsignedSatQ263__3);
          v_SatQ262__2 = iface.f_gen_load(v_UnsignedSatQ264__3);
        } else {
          const auto v_SignedSatQ269__3 = iface.f_decl_bv("SignedSatQ269__3", iface.bigint_lit("16"));
          const auto v_SignedSatQ270__3 = iface.f_decl_bool("SignedSatQ270__3");
          const auto v_temp47 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000111111111111111")), v_If258__2));
          iface.f_switch_context(iface.f_true_branch(v_temp47));
          iface.f_gen_store(v_SignedSatQ269__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp47));
          const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If258__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "111111111111111111000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp48));
          iface.f_gen_store(v_SignedSatQ269__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp48));
          iface.f_gen_store(v_SignedSatQ269__3, iface.f_gen_slice(v_If258__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp47));
          v_SatQ261__2 = iface.f_gen_load(v_SignedSatQ269__3);
          v_SatQ262__2 = iface.f_gen_load(v_SignedSatQ270__3);
        } // if
        const auto v_temp49 = iface.f_gen_branch(v_SatQ262__2);
        iface.f_switch_context(iface.f_true_branch(v_temp49));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp49));
        auto v_If283__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If283__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp229__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } else {
          v_If283__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp229__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } // if
        auto v_SatQ286__2 = typename Traits::rt_expr{};
        auto v_SatQ287__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ288__3 = iface.f_decl_bv("UnsignedSatQ288__3", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ289__3 = iface.f_decl_bool("UnsignedSatQ289__3");
          const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000001111111111111111")), v_If283__2));
          iface.f_switch_context(iface.f_true_branch(v_temp50));
          iface.f_gen_store(v_UnsignedSatQ288__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ289__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp50));
          const auto v_temp51 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If283__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp51));
          iface.f_gen_store(v_UnsignedSatQ288__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ289__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp51));
          iface.f_gen_store(v_UnsignedSatQ288__3, iface.f_gen_slice(v_If283__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ289__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp50));
          v_SatQ286__2 = iface.f_gen_load(v_UnsignedSatQ288__3);
          v_SatQ287__2 = iface.f_gen_load(v_UnsignedSatQ289__3);
        } else {
          const auto v_SignedSatQ294__3 = iface.f_decl_bv("SignedSatQ294__3", iface.bigint_lit("16"));
          const auto v_SignedSatQ295__3 = iface.f_decl_bool("SignedSatQ295__3");
          const auto v_temp52 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000111111111111111")), v_If283__2));
          iface.f_switch_context(iface.f_true_branch(v_temp52));
          iface.f_gen_store(v_SignedSatQ294__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
          iface.f_gen_store(v_SignedSatQ295__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp52));
          const auto v_temp53 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If283__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "111111111111111111000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp53));
          iface.f_gen_store(v_SignedSatQ294__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
          iface.f_gen_store(v_SignedSatQ295__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp53));
          iface.f_gen_store(v_SignedSatQ294__3, iface.f_gen_slice(v_If283__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_SignedSatQ295__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp52));
          v_SatQ286__2 = iface.f_gen_load(v_SignedSatQ294__3);
          v_SatQ287__2 = iface.f_gen_load(v_SignedSatQ295__3);
        } // if
        const auto v_temp54 = iface.f_gen_branch(v_SatQ287__2);
        iface.f_switch_context(iface.f_true_branch(v_temp54));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp54));
        auto v_If308__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If308__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp229__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } else {
          v_If308__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp229__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } // if
        auto v_SatQ311__2 = typename Traits::rt_expr{};
        auto v_SatQ312__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ313__3 = iface.f_decl_bv("UnsignedSatQ313__3", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ314__3 = iface.f_decl_bool("UnsignedSatQ314__3");
          const auto v_temp55 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000001111111111111111")), v_If308__2));
          iface.f_switch_context(iface.f_true_branch(v_temp55));
          iface.f_gen_store(v_UnsignedSatQ313__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ314__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp55));
          const auto v_temp56 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If308__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp56));
          iface.f_gen_store(v_UnsignedSatQ313__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ314__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp56));
          iface.f_gen_store(v_UnsignedSatQ313__3, iface.f_gen_slice(v_If308__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ314__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp55));
          v_SatQ311__2 = iface.f_gen_load(v_UnsignedSatQ313__3);
          v_SatQ312__2 = iface.f_gen_load(v_UnsignedSatQ314__3);
        } else {
          const auto v_SignedSatQ319__3 = iface.f_decl_bv("SignedSatQ319__3", iface.bigint_lit("16"));
          const auto v_SignedSatQ320__3 = iface.f_decl_bool("SignedSatQ320__3");
          const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000111111111111111")), v_If308__2));
          iface.f_switch_context(iface.f_true_branch(v_temp57));
          iface.f_gen_store(v_SignedSatQ319__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
          iface.f_gen_store(v_SignedSatQ320__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp57));
          const auto v_temp58 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If308__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "111111111111111111000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp58));
          iface.f_gen_store(v_SignedSatQ319__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
          iface.f_gen_store(v_SignedSatQ320__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp58));
          iface.f_gen_store(v_SignedSatQ319__3, iface.f_gen_slice(v_If308__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_SignedSatQ320__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp57));
          v_SatQ311__2 = iface.f_gen_load(v_SignedSatQ319__3);
          v_SatQ312__2 = iface.f_gen_load(v_SignedSatQ320__3);
        } // if
        const auto v_temp59 = iface.f_gen_branch(v_SatQ312__2);
        iface.f_switch_context(iface.f_true_branch(v_temp59));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp59));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp333__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp333__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ311__2, iface.f_gen_append_bits(v_SatQ286__2, iface.f_gen_append_bits(v_SatQ261__2, v_SatQ235__2))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(v_SatQ311__2, iface.f_gen_append_bits(v_SatQ286__2, iface.f_gen_append_bits(v_SatQ261__2, v_SatQ235__2))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp351__2 = typename Traits::rt_expr{};
          v_Exp351__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If354__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If354__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } else {
            v_If354__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } // if
          auto v_SatQ357__2 = typename Traits::rt_expr{};
          auto v_SatQ358__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ359__3 = iface.f_decl_bv("UnsignedSatQ359__3", iface.bigint_lit("32"));
            const auto v_UnsignedSatQ360__3 = iface.f_decl_bool("UnsignedSatQ360__3");
            const auto v_temp60 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000011111111111111111111111111111111")), v_If354__2));
            iface.f_switch_context(iface.f_true_branch(v_temp60));
            iface.f_gen_store(v_UnsignedSatQ359__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ360__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp60));
            const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If354__2, iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp61));
            iface.f_gen_store(v_UnsignedSatQ359__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ360__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp61));
            iface.f_gen_store(v_UnsignedSatQ359__3, iface.f_gen_slice(v_If354__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_UnsignedSatQ360__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp60));
            v_SatQ357__2 = iface.f_gen_load(v_UnsignedSatQ359__3);
            v_SatQ358__2 = iface.f_gen_load(v_UnsignedSatQ360__3);
          } else {
            const auto v_SignedSatQ365__3 = iface.f_decl_bv("SignedSatQ365__3", iface.bigint_lit("32"));
            const auto v_SignedSatQ366__3 = iface.f_decl_bool("SignedSatQ366__3");
            const auto v_temp62 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000001111111111111111111111111111111")), v_If354__2));
            iface.f_switch_context(iface.f_true_branch(v_temp62));
            iface.f_gen_store(v_SignedSatQ365__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ366__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp62));
            const auto v_temp63 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If354__2, iface.f_gen_bit_lit(iface.bits_lit(65U, "11111111111111111111111111111111110000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp63));
            iface.f_gen_store(v_SignedSatQ365__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ366__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp63));
            iface.f_gen_store(v_SignedSatQ365__3, iface.f_gen_slice(v_If354__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_SignedSatQ366__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp62));
            v_SatQ357__2 = iface.f_gen_load(v_SignedSatQ365__3);
            v_SatQ358__2 = iface.f_gen_load(v_SignedSatQ366__3);
          } // if
          const auto v_temp64 = iface.f_gen_branch(v_SatQ358__2);
          iface.f_switch_context(iface.f_true_branch(v_temp64));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp64));
          auto v_If380__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If380__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp351__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } else {
            v_If380__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp351__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } // if
          auto v_SatQ383__2 = typename Traits::rt_expr{};
          auto v_SatQ384__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ385__3 = iface.f_decl_bv("UnsignedSatQ385__3", iface.bigint_lit("32"));
            const auto v_UnsignedSatQ386__3 = iface.f_decl_bool("UnsignedSatQ386__3");
            const auto v_temp65 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000011111111111111111111111111111111")), v_If380__2));
            iface.f_switch_context(iface.f_true_branch(v_temp65));
            iface.f_gen_store(v_UnsignedSatQ385__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ386__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp65));
            const auto v_temp66 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If380__2, iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp66));
            iface.f_gen_store(v_UnsignedSatQ385__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ386__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp66));
            iface.f_gen_store(v_UnsignedSatQ385__3, iface.f_gen_slice(v_If380__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_UnsignedSatQ386__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp65));
            v_SatQ383__2 = iface.f_gen_load(v_UnsignedSatQ385__3);
            v_SatQ384__2 = iface.f_gen_load(v_UnsignedSatQ386__3);
          } else {
            const auto v_SignedSatQ391__3 = iface.f_decl_bv("SignedSatQ391__3", iface.bigint_lit("32"));
            const auto v_SignedSatQ392__3 = iface.f_decl_bool("SignedSatQ392__3");
            const auto v_temp67 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000001111111111111111111111111111111")), v_If380__2));
            iface.f_switch_context(iface.f_true_branch(v_temp67));
            iface.f_gen_store(v_SignedSatQ391__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ392__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp67));
            const auto v_temp68 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If380__2, iface.f_gen_bit_lit(iface.bits_lit(65U, "11111111111111111111111111111111110000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp68));
            iface.f_gen_store(v_SignedSatQ391__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ392__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp68));
            iface.f_gen_store(v_SignedSatQ391__3, iface.f_gen_slice(v_If380__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_SignedSatQ392__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp67));
            v_SatQ383__2 = iface.f_gen_load(v_SignedSatQ391__3);
            v_SatQ384__2 = iface.f_gen_load(v_SignedSatQ392__3);
          } // if
          const auto v_temp69 = iface.f_gen_branch(v_SatQ384__2);
          iface.f_switch_context(iface.f_true_branch(v_temp69));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp69));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp405__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp405__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ383__2, v_SatQ357__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(v_SatQ383__2, v_SatQ357__2), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_If426__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If426__2 = iface.f_gen_ZeroExtend(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If426__2 = iface.f_gen_SignExtend(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } // if
            auto v_SatQ429__2 = typename Traits::rt_expr{};
            auto v_SatQ430__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ431__3 = iface.f_decl_bv("UnsignedSatQ431__3", iface.bigint_lit("64"));
              const auto v_UnsignedSatQ432__3 = iface.f_decl_bool("UnsignedSatQ432__3");
              const auto v_temp70 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If426__2));
              iface.f_switch_context(iface.f_true_branch(v_temp70));
              iface.f_gen_store(v_UnsignedSatQ431__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ432__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp70));
              const auto v_temp71 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If426__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp71));
              iface.f_gen_store(v_UnsignedSatQ431__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ432__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp71));
              iface.f_gen_store(v_UnsignedSatQ431__3, iface.f_gen_slice(v_If426__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
              iface.f_gen_store(v_UnsignedSatQ432__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp70));
              v_SatQ429__2 = iface.f_gen_load(v_UnsignedSatQ431__3);
              v_SatQ430__2 = iface.f_gen_load(v_UnsignedSatQ432__3);
            } else {
              const auto v_SignedSatQ437__3 = iface.f_decl_bv("SignedSatQ437__3", iface.bigint_lit("64"));
              const auto v_SignedSatQ438__3 = iface.f_decl_bool("SignedSatQ438__3");
              const auto v_temp72 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), v_If426__2));
              iface.f_switch_context(iface.f_true_branch(v_temp72));
              iface.f_gen_store(v_SignedSatQ437__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ438__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp72));
              const auto v_temp73 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If426__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp73));
              iface.f_gen_store(v_SignedSatQ437__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ438__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp73));
              iface.f_gen_store(v_SignedSatQ437__3, iface.f_gen_slice(v_If426__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
              iface.f_gen_store(v_SignedSatQ438__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp72));
              v_SatQ429__2 = iface.f_gen_load(v_SignedSatQ437__3);
              v_SatQ430__2 = iface.f_gen_load(v_SignedSatQ438__3);
            } // if
            const auto v_temp74 = iface.f_gen_branch(v_SatQ430__2);
            iface.f_switch_context(iface.f_true_branch(v_temp74));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp74));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp452__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp452__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ429__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ429__2, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_extract_sat_simd


} // namespace aslp
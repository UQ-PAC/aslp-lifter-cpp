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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_extract_sqxtun_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp7__2 = typename Traits::rt_expr{};
      v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      const auto v_UnsignedSatQ10__2 = iface.f_decl_bv("UnsignedSatQ10__2", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ11__2 = iface.f_decl_bool("UnsignedSatQ11__2");
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000011111111")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_UnsignedSatQ10__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ11__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_UnsignedSatQ10__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ11__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_UnsignedSatQ10__2, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ11__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ11__2));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp2));
      const auto v_UnsignedSatQ21__2 = iface.f_decl_bv("UnsignedSatQ21__2", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ22__2 = iface.f_decl_bool("UnsignedSatQ22__2");
      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000011111111")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16"))));
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_UnsignedSatQ21__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ22__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(v_UnsignedSatQ21__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ22__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp4));
      iface.f_gen_store(v_UnsignedSatQ21__2, iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ22__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp3));
      const auto v_temp5 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ22__2));
      iface.f_switch_context(iface.f_true_branch(v_temp5));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp5));
      const auto v_UnsignedSatQ31__2 = iface.f_decl_bv("UnsignedSatQ31__2", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ32__2 = iface.f_decl_bool("UnsignedSatQ32__2");
      const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000011111111")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16"))));
      iface.f_switch_context(iface.f_true_branch(v_temp6));
      iface.f_gen_store(v_UnsignedSatQ31__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ32__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp6));
      const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp7));
      iface.f_gen_store(v_UnsignedSatQ31__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ32__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp7));
      iface.f_gen_store(v_UnsignedSatQ31__2, iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ32__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp6));
      const auto v_temp8 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ32__2));
      iface.f_switch_context(iface.f_true_branch(v_temp8));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp8));
      const auto v_UnsignedSatQ41__2 = iface.f_decl_bv("UnsignedSatQ41__2", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ42__2 = iface.f_decl_bool("UnsignedSatQ42__2");
      const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000011111111")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16"))));
      iface.f_switch_context(iface.f_true_branch(v_temp9));
      iface.f_gen_store(v_UnsignedSatQ41__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ42__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp9));
      const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp10));
      iface.f_gen_store(v_UnsignedSatQ41__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ42__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp10));
      iface.f_gen_store(v_UnsignedSatQ41__2, iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ42__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp9));
      const auto v_temp11 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ42__2));
      iface.f_switch_context(iface.f_true_branch(v_temp11));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp11));
      const auto v_UnsignedSatQ51__2 = iface.f_decl_bv("UnsignedSatQ51__2", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ52__2 = iface.f_decl_bool("UnsignedSatQ52__2");
      const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000011111111")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16"))));
      iface.f_switch_context(iface.f_true_branch(v_temp12));
      iface.f_gen_store(v_UnsignedSatQ51__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ52__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp12));
      const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp13));
      iface.f_gen_store(v_UnsignedSatQ51__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ52__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp13));
      iface.f_gen_store(v_UnsignedSatQ51__2, iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ52__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp12));
      const auto v_temp14 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ52__2));
      iface.f_switch_context(iface.f_true_branch(v_temp14));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp14));
      const auto v_UnsignedSatQ61__2 = iface.f_decl_bv("UnsignedSatQ61__2", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ62__2 = iface.f_decl_bool("UnsignedSatQ62__2");
      const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000011111111")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16"))));
      iface.f_switch_context(iface.f_true_branch(v_temp15));
      iface.f_gen_store(v_UnsignedSatQ61__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ62__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp15));
      const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp16));
      iface.f_gen_store(v_UnsignedSatQ61__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ62__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp16));
      iface.f_gen_store(v_UnsignedSatQ61__2, iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ62__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp15));
      const auto v_temp17 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ62__2));
      iface.f_switch_context(iface.f_true_branch(v_temp17));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp17));
      const auto v_UnsignedSatQ71__2 = iface.f_decl_bv("UnsignedSatQ71__2", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ72__2 = iface.f_decl_bool("UnsignedSatQ72__2");
      const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000011111111")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16"))));
      iface.f_switch_context(iface.f_true_branch(v_temp18));
      iface.f_gen_store(v_UnsignedSatQ71__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ72__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp18));
      const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp19));
      iface.f_gen_store(v_UnsignedSatQ71__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ72__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp19));
      iface.f_gen_store(v_UnsignedSatQ71__2, iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ72__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp18));
      const auto v_temp20 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ72__2));
      iface.f_switch_context(iface.f_true_branch(v_temp20));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp20));
      const auto v_UnsignedSatQ81__2 = iface.f_decl_bv("UnsignedSatQ81__2", iface.bigint_lit("8"));
      const auto v_UnsignedSatQ82__2 = iface.f_decl_bool("UnsignedSatQ82__2");
      const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000011111111")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16"))));
      iface.f_switch_context(iface.f_true_branch(v_temp21));
      iface.f_gen_store(v_UnsignedSatQ81__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
      iface.f_gen_store(v_UnsignedSatQ82__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp21));
      const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
      iface.f_switch_context(iface.f_true_branch(v_temp22));
      iface.f_gen_store(v_UnsignedSatQ81__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
      iface.f_gen_store(v_UnsignedSatQ82__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp22));
      iface.f_gen_store(v_UnsignedSatQ81__2, iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")));
      iface.f_gen_store(v_UnsignedSatQ82__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp21));
      const auto v_temp23 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ82__2));
      iface.f_switch_context(iface.f_true_branch(v_temp23));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp23));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp91__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp91__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ81__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ71__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ61__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ51__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ41__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ31__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ21__2), iface.f_gen_load(v_UnsignedSatQ10__2)))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ81__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ71__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ61__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ51__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ41__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ31__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ21__2), iface.f_gen_load(v_UnsignedSatQ10__2)))))))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp109__2 = typename Traits::rt_expr{};
        v_Exp109__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_UnsignedSatQ112__2 = iface.f_decl_bv("UnsignedSatQ112__2", iface.bigint_lit("16"));
        const auto v_UnsignedSatQ113__2 = iface.f_decl_bool("UnsignedSatQ113__2");
        const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000001111111111111111")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"))));
        iface.f_switch_context(iface.f_true_branch(v_temp24));
        iface.f_gen_store(v_UnsignedSatQ112__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
        iface.f_gen_store(v_UnsignedSatQ113__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp24));
        const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp25));
        iface.f_gen_store(v_UnsignedSatQ112__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
        iface.f_gen_store(v_UnsignedSatQ113__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp25));
        iface.f_gen_store(v_UnsignedSatQ112__2, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
        iface.f_gen_store(v_UnsignedSatQ113__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp24));
        const auto v_temp26 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ113__2));
        iface.f_switch_context(iface.f_true_branch(v_temp26));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp26));
        const auto v_UnsignedSatQ123__2 = iface.f_decl_bv("UnsignedSatQ123__2", iface.bigint_lit("16"));
        const auto v_UnsignedSatQ124__2 = iface.f_decl_bool("UnsignedSatQ124__2");
        const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000001111111111111111")), iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("32"), iface.bigint_lit("32"))));
        iface.f_switch_context(iface.f_true_branch(v_temp27));
        iface.f_gen_store(v_UnsignedSatQ123__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
        iface.f_gen_store(v_UnsignedSatQ124__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp27));
        const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp28));
        iface.f_gen_store(v_UnsignedSatQ123__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
        iface.f_gen_store(v_UnsignedSatQ124__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp28));
        iface.f_gen_store(v_UnsignedSatQ123__2, iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("32"), iface.bigint_lit("16")));
        iface.f_gen_store(v_UnsignedSatQ124__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp27));
        const auto v_temp29 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ124__2));
        iface.f_switch_context(iface.f_true_branch(v_temp29));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp29));
        const auto v_UnsignedSatQ133__2 = iface.f_decl_bv("UnsignedSatQ133__2", iface.bigint_lit("16"));
        const auto v_UnsignedSatQ134__2 = iface.f_decl_bool("UnsignedSatQ134__2");
        const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000001111111111111111")), iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("64"), iface.bigint_lit("32"))));
        iface.f_switch_context(iface.f_true_branch(v_temp30));
        iface.f_gen_store(v_UnsignedSatQ133__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
        iface.f_gen_store(v_UnsignedSatQ134__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp30));
        const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp31));
        iface.f_gen_store(v_UnsignedSatQ133__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
        iface.f_gen_store(v_UnsignedSatQ134__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp31));
        iface.f_gen_store(v_UnsignedSatQ133__2, iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("64"), iface.bigint_lit("16")));
        iface.f_gen_store(v_UnsignedSatQ134__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp30));
        const auto v_temp32 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ134__2));
        iface.f_switch_context(iface.f_true_branch(v_temp32));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp32));
        const auto v_UnsignedSatQ143__2 = iface.f_decl_bv("UnsignedSatQ143__2", iface.bigint_lit("16"));
        const auto v_UnsignedSatQ144__2 = iface.f_decl_bool("UnsignedSatQ144__2");
        const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000001111111111111111")), iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("96"), iface.bigint_lit("32"))));
        iface.f_switch_context(iface.f_true_branch(v_temp33));
        iface.f_gen_store(v_UnsignedSatQ143__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
        iface.f_gen_store(v_UnsignedSatQ144__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp33));
        const auto v_temp34 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp34));
        iface.f_gen_store(v_UnsignedSatQ143__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
        iface.f_gen_store(v_UnsignedSatQ144__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp34));
        iface.f_gen_store(v_UnsignedSatQ143__2, iface.f_gen_slice(v_Exp109__2, iface.bigint_lit("96"), iface.bigint_lit("16")));
        iface.f_gen_store(v_UnsignedSatQ144__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp33));
        const auto v_temp35 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ144__2));
        iface.f_switch_context(iface.f_true_branch(v_temp35));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp35));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp153__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp153__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ143__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ133__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ123__2), iface.f_gen_load(v_UnsignedSatQ112__2)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ143__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ133__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ123__2), iface.f_gen_load(v_UnsignedSatQ112__2)))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp171__2 = typename Traits::rt_expr{};
          v_Exp171__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_UnsignedSatQ174__2 = iface.f_decl_bv("UnsignedSatQ174__2", iface.bigint_lit("32"));
          const auto v_UnsignedSatQ175__2 = iface.f_decl_bool("UnsignedSatQ175__2");
          const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
          iface.f_switch_context(iface.f_true_branch(v_temp36));
          iface.f_gen_store(v_UnsignedSatQ174__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ175__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp36));
          const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp37));
          iface.f_gen_store(v_UnsignedSatQ174__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ175__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp37));
          iface.f_gen_store(v_UnsignedSatQ174__2, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
          iface.f_gen_store(v_UnsignedSatQ175__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp36));
          const auto v_temp38 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ175__2));
          iface.f_switch_context(iface.f_true_branch(v_temp38));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp38));
          const auto v_UnsignedSatQ185__2 = iface.f_decl_bv("UnsignedSatQ185__2", iface.bigint_lit("32"));
          const auto v_UnsignedSatQ186__2 = iface.f_decl_bool("UnsignedSatQ186__2");
          const auto v_temp39 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("64"), iface.bigint_lit("64"))));
          iface.f_switch_context(iface.f_true_branch(v_temp39));
          iface.f_gen_store(v_UnsignedSatQ185__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ186__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp39));
          const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp40));
          iface.f_gen_store(v_UnsignedSatQ185__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ186__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp40));
          iface.f_gen_store(v_UnsignedSatQ185__2, iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("64"), iface.bigint_lit("32")));
          iface.f_gen_store(v_UnsignedSatQ186__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp39));
          const auto v_temp41 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ186__2));
          iface.f_switch_context(iface.f_true_branch(v_temp41));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp41));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp195__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp195__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ185__2), iface.f_gen_load(v_UnsignedSatQ174__2)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ185__2), iface.f_gen_load(v_UnsignedSatQ174__2)), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_UnsignedSatQ216__2 = iface.f_decl_bv("UnsignedSatQ216__2", iface.bigint_lit("64"));
            const auto v_UnsignedSatQ217__2 = iface.f_decl_bool("UnsignedSatQ217__2");
            const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp42));
            iface.f_gen_store(v_UnsignedSatQ216__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ217__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp42));
            const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp43));
            iface.f_gen_store(v_UnsignedSatQ216__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ217__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp43));
            iface.f_gen_store(v_UnsignedSatQ216__2, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            iface.f_gen_store(v_UnsignedSatQ217__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp42));
            const auto v_temp44 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ217__2));
            iface.f_switch_context(iface.f_true_branch(v_temp44));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp44));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp227__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp227__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_UnsignedSatQ216__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ216__2), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_extract_sqxtun_simd


} // namespace aslp
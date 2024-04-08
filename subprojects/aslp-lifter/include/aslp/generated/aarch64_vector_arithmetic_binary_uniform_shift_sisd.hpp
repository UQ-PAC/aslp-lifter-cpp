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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11")))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp8__2 = typename Traits::rt_expr{};
      v_Exp8__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp11__2 = typename Traits::rt_expr{};
      v_Exp11__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
      auto v_result__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_If15__2 = iface.f_decl_bv("If15__2", iface.bigint_lit("129"));
        const auto v_temp0 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_If15__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        iface.f_gen_store(v_If15__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        auto v_If18__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If18__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If18__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If22__2 = iface.f_decl_bv("If22__2", iface.bigint_lit("257"));
        const auto v_temp1 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_If22__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If15__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_If22__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If15__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp1));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_SatQ23__2 = typename Traits::rt_expr{};
          auto v_SatQ24__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ25__3 = iface.f_decl_bv("UnsignedSatQ25__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ26__3 = iface.f_decl_bool("UnsignedSatQ26__3");
            const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If22__2)));
            iface.f_switch_context(iface.f_true_branch(v_temp2));
            iface.f_gen_store(v_UnsignedSatQ25__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ26__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp2));
            const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If22__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp3));
            iface.f_gen_store(v_UnsignedSatQ25__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ26__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp3));
            iface.f_gen_store(v_UnsignedSatQ25__3, iface.f_gen_slice(iface.f_gen_load(v_If22__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ26__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp2));
            v_SatQ23__2 = iface.f_gen_load(v_UnsignedSatQ25__3);
            v_SatQ24__2 = iface.f_gen_load(v_UnsignedSatQ26__3);
          } else {
            const auto v_SignedSatQ31__3 = iface.f_decl_bv("SignedSatQ31__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ32__3 = iface.f_decl_bool("SignedSatQ32__3");
            const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If22__2)));
            iface.f_switch_context(iface.f_true_branch(v_temp4));
            iface.f_gen_store(v_SignedSatQ31__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ32__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp4));
            const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If22__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp5));
            iface.f_gen_store(v_SignedSatQ31__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ32__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp5));
            iface.f_gen_store(v_SignedSatQ31__3, iface.f_gen_slice(iface.f_gen_load(v_If22__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ32__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp4));
            v_SatQ23__2 = iface.f_gen_load(v_SignedSatQ31__3);
            v_SatQ24__2 = iface.f_gen_load(v_SignedSatQ32__3);
          } // if
          v_result__1 = v_SatQ23__2;
          const auto v_temp6 = iface.f_gen_branch(v_SatQ24__2);
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp6));
        } else {
          v_result__1 = iface.f_gen_slice(iface.f_gen_load(v_If22__2), iface.bigint_lit("0"), iface.bigint_lit("8"));
        } // if
      } else {
        auto v_If48__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If48__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If48__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If52__2 = iface.f_decl_bv("If52__2", iface.bigint_lit("136"));
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_If52__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("136"))), iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        iface.f_gen_store(v_If52__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If48__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("136"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_SatQ53__2 = typename Traits::rt_expr{};
          auto v_SatQ54__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ55__3 = iface.f_decl_bv("UnsignedSatQ55__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ56__3 = iface.f_decl_bool("UnsignedSatQ56__3");
            const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If52__2)));
            iface.f_switch_context(iface.f_true_branch(v_temp8));
            iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ56__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp8));
            const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If52__2), iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp9));
            iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ56__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp9));
            iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_slice(iface.f_gen_load(v_If52__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ56__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp8));
            v_SatQ53__2 = iface.f_gen_load(v_UnsignedSatQ55__3);
            v_SatQ54__2 = iface.f_gen_load(v_UnsignedSatQ56__3);
          } else {
            const auto v_SignedSatQ61__3 = iface.f_decl_bv("SignedSatQ61__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ62__3 = iface.f_decl_bool("SignedSatQ62__3");
            const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If52__2)));
            iface.f_switch_context(iface.f_true_branch(v_temp10));
            iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ62__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp10));
            const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If52__2), iface.f_gen_bit_lit(iface.bits_lit(136U, "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp11));
            iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ62__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp11));
            iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_slice(iface.f_gen_load(v_If52__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ62__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp10));
            v_SatQ53__2 = iface.f_gen_load(v_SignedSatQ61__3);
            v_SatQ54__2 = iface.f_gen_load(v_SignedSatQ62__3);
          } // if
          v_result__1 = v_SatQ53__2;
          const auto v_temp12 = iface.f_gen_branch(v_SatQ54__2);
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
        } else {
          v_result__1 = iface.f_gen_slice(iface.f_gen_load(v_If52__2), iface.bigint_lit("0"), iface.bigint_lit("8"));
        } // if
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } // if
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp86__2 = typename Traits::rt_expr{};
        v_Exp86__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp89__2 = typename Traits::rt_expr{};
        v_Exp89__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        auto v_result__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If93__2 = iface.f_decl_bv("If93__2", iface.bigint_lit("129"));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_If93__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          iface.f_gen_store(v_If93__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp13));
          auto v_If96__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If96__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp86__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If96__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp86__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If100__2 = iface.f_decl_bv("If100__2", iface.bigint_lit("257"));
          const auto v_temp14 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp89__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(v_If100__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If96__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If93__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp89__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp14));
          iface.f_gen_store(v_If100__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If96__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If93__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp89__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp14));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ101__2 = typename Traits::rt_expr{};
            auto v_SatQ102__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ103__3 = iface.f_decl_bv("UnsignedSatQ103__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ104__3 = iface.f_decl_bool("UnsignedSatQ104__3");
              const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If100__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp15));
              iface.f_gen_store(v_UnsignedSatQ103__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ104__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp15));
              const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If100__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp16));
              iface.f_gen_store(v_UnsignedSatQ103__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ104__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp16));
              iface.f_gen_store(v_UnsignedSatQ103__3, iface.f_gen_slice(iface.f_gen_load(v_If100__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ104__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp15));
              v_SatQ101__2 = iface.f_gen_load(v_UnsignedSatQ103__3);
              v_SatQ102__2 = iface.f_gen_load(v_UnsignedSatQ104__3);
            } else {
              const auto v_SignedSatQ109__3 = iface.f_decl_bv("SignedSatQ109__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ110__3 = iface.f_decl_bool("SignedSatQ110__3");
              const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If100__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp17));
              iface.f_gen_store(v_SignedSatQ109__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ110__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp17));
              const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If100__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp18));
              iface.f_gen_store(v_SignedSatQ109__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ110__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp18));
              iface.f_gen_store(v_SignedSatQ109__3, iface.f_gen_slice(iface.f_gen_load(v_If100__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ110__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp17));
              v_SatQ101__2 = iface.f_gen_load(v_SignedSatQ109__3);
              v_SatQ102__2 = iface.f_gen_load(v_SignedSatQ110__3);
            } // if
            v_result__1 = v_SatQ101__2;
            const auto v_temp19 = iface.f_gen_branch(v_SatQ102__2);
            iface.f_switch_context(iface.f_true_branch(v_temp19));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp19));
          } else {
            v_result__1 = iface.f_gen_slice(iface.f_gen_load(v_If100__2), iface.bigint_lit("0"), iface.bigint_lit("16"));
          } // if
        } else {
          auto v_If126__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If126__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If126__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If130__2 = iface.f_decl_bv("If130__2", iface.bigint_lit("144"));
          const auto v_temp20 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp89__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp20));
          iface.f_gen_store(v_If130__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If126__2, iface.f_gen_int_lit(iface.bigint_lit("144"))), iface.f_gen_slice(v_Exp89__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp20));
          iface.f_gen_store(v_If130__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If126__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp89__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("144"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp20));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ131__2 = typename Traits::rt_expr{};
            auto v_SatQ132__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ133__3 = iface.f_decl_bv("UnsignedSatQ133__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ134__3 = iface.f_decl_bool("UnsignedSatQ134__3");
              const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If130__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp21));
              iface.f_gen_store(v_UnsignedSatQ133__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ134__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp21));
              const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If130__2), iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp22));
              iface.f_gen_store(v_UnsignedSatQ133__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ134__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp22));
              iface.f_gen_store(v_UnsignedSatQ133__3, iface.f_gen_slice(iface.f_gen_load(v_If130__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ134__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp21));
              v_SatQ131__2 = iface.f_gen_load(v_UnsignedSatQ133__3);
              v_SatQ132__2 = iface.f_gen_load(v_UnsignedSatQ134__3);
            } else {
              const auto v_SignedSatQ139__3 = iface.f_decl_bv("SignedSatQ139__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ140__3 = iface.f_decl_bool("SignedSatQ140__3");
              const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If130__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp23));
              iface.f_gen_store(v_SignedSatQ139__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ140__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp23));
              const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If130__2), iface.f_gen_bit_lit(iface.bits_lit(144U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp24));
              iface.f_gen_store(v_SignedSatQ139__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ140__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp24));
              iface.f_gen_store(v_SignedSatQ139__3, iface.f_gen_slice(iface.f_gen_load(v_If130__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ140__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp23));
              v_SatQ131__2 = iface.f_gen_load(v_SignedSatQ139__3);
              v_SatQ132__2 = iface.f_gen_load(v_SignedSatQ140__3);
            } // if
            v_result__1 = v_SatQ131__2;
            const auto v_temp25 = iface.f_gen_branch(v_SatQ132__2);
            iface.f_switch_context(iface.f_true_branch(v_temp25));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp25));
          } else {
            v_result__1 = iface.f_gen_slice(iface.f_gen_load(v_If130__2), iface.bigint_lit("0"), iface.bigint_lit("16"));
          } // if
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11")))) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp164__2 = typename Traits::rt_expr{};
          v_Exp164__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp167__2 = typename Traits::rt_expr{};
          v_Exp167__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_result__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If171__2 = iface.f_decl_bv("If171__2", iface.bigint_lit("129"));
            const auto v_temp26 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp26));
            iface.f_gen_store(v_If171__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp26));
            iface.f_gen_store(v_If171__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp26));
            auto v_If174__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If174__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp164__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If174__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp164__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            const auto v_If178__2 = iface.f_decl_bv("If178__2", iface.bigint_lit("257"));
            const auto v_temp27 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp167__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp27));
            iface.f_gen_store(v_If178__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If174__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If171__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp167__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp27));
            iface.f_gen_store(v_If178__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If174__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If171__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp167__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp27));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ179__2 = typename Traits::rt_expr{};
              auto v_SatQ180__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ181__3 = iface.f_decl_bv("UnsignedSatQ181__3", iface.bigint_lit("32"));
                const auto v_UnsignedSatQ182__3 = iface.f_decl_bool("UnsignedSatQ182__3");
                const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If178__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp28));
                iface.f_gen_store(v_UnsignedSatQ181__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ182__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp28));
                const auto v_temp29 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If178__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp29));
                iface.f_gen_store(v_UnsignedSatQ181__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ182__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp29));
                iface.f_gen_store(v_UnsignedSatQ181__3, iface.f_gen_slice(iface.f_gen_load(v_If178__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_UnsignedSatQ182__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp28));
                v_SatQ179__2 = iface.f_gen_load(v_UnsignedSatQ181__3);
                v_SatQ180__2 = iface.f_gen_load(v_UnsignedSatQ182__3);
              } else {
                const auto v_SignedSatQ187__3 = iface.f_decl_bv("SignedSatQ187__3", iface.bigint_lit("32"));
                const auto v_SignedSatQ188__3 = iface.f_decl_bool("SignedSatQ188__3");
                const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If178__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp30));
                iface.f_gen_store(v_SignedSatQ187__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ188__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp30));
                const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If178__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp31));
                iface.f_gen_store(v_SignedSatQ187__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ188__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp31));
                iface.f_gen_store(v_SignedSatQ187__3, iface.f_gen_slice(iface.f_gen_load(v_If178__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_SignedSatQ188__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp30));
                v_SatQ179__2 = iface.f_gen_load(v_SignedSatQ187__3);
                v_SatQ180__2 = iface.f_gen_load(v_SignedSatQ188__3);
              } // if
              v_result__1 = v_SatQ179__2;
              const auto v_temp32 = iface.f_gen_branch(v_SatQ180__2);
              iface.f_switch_context(iface.f_true_branch(v_temp32));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp32));
            } else {
              v_result__1 = iface.f_gen_slice(iface.f_gen_load(v_If178__2), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } // if
          } else {
            auto v_If204__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If204__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If204__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            const auto v_If208__2 = iface.f_decl_bv("If208__2", iface.bigint_lit("160"));
            const auto v_temp33 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp167__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp33));
            iface.f_gen_store(v_If208__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If204__2, iface.f_gen_int_lit(iface.bigint_lit("160"))), iface.f_gen_slice(v_Exp167__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp33));
            iface.f_gen_store(v_If208__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If204__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp167__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("160"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp33));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ209__2 = typename Traits::rt_expr{};
              auto v_SatQ210__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ211__3 = iface.f_decl_bv("UnsignedSatQ211__3", iface.bigint_lit("32"));
                const auto v_UnsignedSatQ212__3 = iface.f_decl_bool("UnsignedSatQ212__3");
                const auto v_temp34 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If208__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp34));
                iface.f_gen_store(v_UnsignedSatQ211__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ212__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp34));
                const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If208__2), iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp35));
                iface.f_gen_store(v_UnsignedSatQ211__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ212__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp35));
                iface.f_gen_store(v_UnsignedSatQ211__3, iface.f_gen_slice(iface.f_gen_load(v_If208__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_UnsignedSatQ212__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp34));
                v_SatQ209__2 = iface.f_gen_load(v_UnsignedSatQ211__3);
                v_SatQ210__2 = iface.f_gen_load(v_UnsignedSatQ212__3);
              } else {
                const auto v_SignedSatQ217__3 = iface.f_decl_bv("SignedSatQ217__3", iface.bigint_lit("32"));
                const auto v_SignedSatQ218__3 = iface.f_decl_bool("SignedSatQ218__3");
                const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If208__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp36));
                iface.f_gen_store(v_SignedSatQ217__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ218__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp36));
                const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If208__2), iface.f_gen_bit_lit(iface.bits_lit(160U, "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp37));
                iface.f_gen_store(v_SignedSatQ217__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ218__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp37));
                iface.f_gen_store(v_SignedSatQ217__3, iface.f_gen_slice(iface.f_gen_load(v_If208__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_SignedSatQ218__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp36));
                v_SatQ209__2 = iface.f_gen_load(v_SignedSatQ217__3);
                v_SatQ210__2 = iface.f_gen_load(v_SignedSatQ218__3);
              } // if
              v_result__1 = v_SatQ209__2;
              const auto v_temp38 = iface.f_gen_branch(v_SatQ210__2);
              iface.f_switch_context(iface.f_true_branch(v_temp38));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp38));
            } else {
              v_result__1 = iface.f_gen_slice(iface.f_gen_load(v_If208__2), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11")))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp242__2 = typename Traits::rt_expr{};
            v_Exp242__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp245__2 = typename Traits::rt_expr{};
            v_Exp245__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_result__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If249__2 = iface.f_decl_bv("If249__2", iface.bigint_lit("129"));
              const auto v_temp39 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
              iface.f_switch_context(iface.f_true_branch(v_temp39));
              iface.f_gen_store(v_If249__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_false_branch(v_temp39));
              iface.f_gen_store(v_If249__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp39));
              auto v_If252__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If252__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp242__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If252__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp242__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              const auto v_If256__2 = iface.f_decl_bv("If256__2", iface.bigint_lit("257"));
              const auto v_temp40 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp245__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp40));
              iface.f_gen_store(v_If256__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If252__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If249__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp245__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp40));
              iface.f_gen_store(v_If256__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If252__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If249__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp245__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp40));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ257__2 = typename Traits::rt_expr{};
                auto v_SatQ258__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ259__3 = iface.f_decl_bv("UnsignedSatQ259__3", iface.bigint_lit("64"));
                  const auto v_UnsignedSatQ260__3 = iface.f_decl_bool("UnsignedSatQ260__3");
                  const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If256__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp41));
                  iface.f_gen_store(v_UnsignedSatQ259__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ260__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp41));
                  const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If256__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp42));
                  iface.f_gen_store(v_UnsignedSatQ259__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ260__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp42));
                  iface.f_gen_store(v_UnsignedSatQ259__3, iface.f_gen_slice(iface.f_gen_load(v_If256__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_UnsignedSatQ260__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp41));
                  v_SatQ257__2 = iface.f_gen_load(v_UnsignedSatQ259__3);
                  v_SatQ258__2 = iface.f_gen_load(v_UnsignedSatQ260__3);
                } else {
                  const auto v_SignedSatQ265__3 = iface.f_decl_bv("SignedSatQ265__3", iface.bigint_lit("64"));
                  const auto v_SignedSatQ266__3 = iface.f_decl_bool("SignedSatQ266__3");
                  const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If256__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp43));
                  iface.f_gen_store(v_SignedSatQ265__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ266__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp43));
                  const auto v_temp44 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If256__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp44));
                  iface.f_gen_store(v_SignedSatQ265__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ266__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp44));
                  iface.f_gen_store(v_SignedSatQ265__3, iface.f_gen_slice(iface.f_gen_load(v_If256__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_SignedSatQ266__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp43));
                  v_SatQ257__2 = iface.f_gen_load(v_SignedSatQ265__3);
                  v_SatQ258__2 = iface.f_gen_load(v_SignedSatQ266__3);
                } // if
                v_result__1 = v_SatQ257__2;
                const auto v_temp45 = iface.f_gen_branch(v_SatQ258__2);
                iface.f_switch_context(iface.f_true_branch(v_temp45));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp45));
              } else {
                v_result__1 = iface.f_gen_slice(iface.f_gen_load(v_If256__2), iface.bigint_lit("0"), iface.bigint_lit("64"));
              } // if
            } else {
              auto v_If282__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If282__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If282__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              const auto v_If286__2 = iface.f_decl_bv("If286__2", iface.bigint_lit("192"));
              const auto v_temp46 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp245__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp46));
              iface.f_gen_store(v_If286__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If282__2, iface.f_gen_int_lit(iface.bigint_lit("192"))), iface.f_gen_slice(v_Exp245__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp46));
              iface.f_gen_store(v_If286__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If282__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp245__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("192"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp46));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ287__2 = typename Traits::rt_expr{};
                auto v_SatQ288__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ289__3 = iface.f_decl_bv("UnsignedSatQ289__3", iface.bigint_lit("64"));
                  const auto v_UnsignedSatQ290__3 = iface.f_decl_bool("UnsignedSatQ290__3");
                  const auto v_temp47 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If286__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp47));
                  iface.f_gen_store(v_UnsignedSatQ289__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ290__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp47));
                  const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If286__2), iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp48));
                  iface.f_gen_store(v_UnsignedSatQ289__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ290__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp48));
                  iface.f_gen_store(v_UnsignedSatQ289__3, iface.f_gen_slice(iface.f_gen_load(v_If286__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_UnsignedSatQ290__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp47));
                  v_SatQ287__2 = iface.f_gen_load(v_UnsignedSatQ289__3);
                  v_SatQ288__2 = iface.f_gen_load(v_UnsignedSatQ290__3);
                } else {
                  const auto v_SignedSatQ295__3 = iface.f_decl_bv("SignedSatQ295__3", iface.bigint_lit("64"));
                  const auto v_SignedSatQ296__3 = iface.f_decl_bool("SignedSatQ296__3");
                  const auto v_temp49 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If286__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp49));
                  iface.f_gen_store(v_SignedSatQ295__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ296__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp49));
                  const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If286__2), iface.f_gen_bit_lit(iface.bits_lit(192U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp50));
                  iface.f_gen_store(v_SignedSatQ295__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ296__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp50));
                  iface.f_gen_store(v_SignedSatQ295__3, iface.f_gen_slice(iface.f_gen_load(v_If286__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_SignedSatQ296__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp49));
                  v_SatQ287__2 = iface.f_gen_load(v_SignedSatQ295__3);
                  v_SatQ288__2 = iface.f_gen_load(v_SignedSatQ296__3);
                } // if
                v_result__1 = v_SatQ287__2;
                const auto v_temp51 = iface.f_gen_branch(v_SatQ288__2);
                iface.f_switch_context(iface.f_true_branch(v_temp51));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp51));
              } else {
                v_result__1 = iface.f_gen_slice(iface.f_gen_load(v_If286__2), iface.bigint_lit("0"), iface.bigint_lit("64"));
              } // if
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_shift_sisd


} // namespace aslp
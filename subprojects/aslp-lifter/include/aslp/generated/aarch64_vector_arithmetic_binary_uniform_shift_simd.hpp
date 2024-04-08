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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_shift_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "110"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp7__2 = typename Traits::rt_expr{};
        v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp10__2 = typename Traits::rt_expr{};
        v_Exp10__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
        auto v_round_const__1 = typename Traits::rt_expr{};
        v_round_const__1 = iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If14__2 = iface.f_decl_bv("If14__2", iface.bigint_lit("129"));
          const auto v_temp0 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_store(v_If14__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp0));
          iface.f_gen_store(v_If14__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          v_round_const__1 = iface.f_gen_load(v_If14__2);
          auto v_If17__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If17__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If17__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If21__2 = iface.f_decl_bv("If21__2", iface.bigint_lit("257"));
          const auto v_temp1 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_store(v_If21__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If14__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp1));
          iface.f_gen_store(v_If21__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If14__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp1));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ22__2 = typename Traits::rt_expr{};
            auto v_SatQ23__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ24__3 = iface.f_decl_bv("UnsignedSatQ24__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ25__3 = iface.f_decl_bool("UnsignedSatQ25__3");
              const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If21__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp2));
              iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ25__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp2));
              const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If21__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp3));
              iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ25__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp3));
              iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_slice(iface.f_gen_load(v_If21__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ25__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp2));
              v_SatQ22__2 = iface.f_gen_load(v_UnsignedSatQ24__3);
              v_SatQ23__2 = iface.f_gen_load(v_UnsignedSatQ25__3);
            } else {
              const auto v_SignedSatQ30__3 = iface.f_decl_bv("SignedSatQ30__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ31__3 = iface.f_decl_bool("SignedSatQ31__3");
              const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If21__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp4));
              iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ31__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp4));
              const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If21__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp5));
              iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ31__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp5));
              iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_slice(iface.f_gen_load(v_If21__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ31__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp4));
              v_SatQ22__2 = iface.f_gen_load(v_SignedSatQ30__3);
              v_SatQ23__2 = iface.f_gen_load(v_SignedSatQ31__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("120")), v_SatQ22__2));
            const auto v_temp6 = iface.f_gen_branch(v_SatQ23__2);
            iface.f_switch_context(iface.f_true_branch(v_temp6));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp6));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("120")), iface.f_gen_slice(iface.f_gen_load(v_If21__2), iface.bigint_lit("0"), iface.bigint_lit("8"))));
          } // if
        } else {
          auto v_If47__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If47__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If47__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If51__2 = iface.f_decl_bv("If51__2", iface.bigint_lit("136"));
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_If51__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If47__2, iface.f_gen_int_lit(iface.bigint_lit("136"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          iface.f_gen_store(v_If51__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If47__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("136"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ52__2 = typename Traits::rt_expr{};
            auto v_SatQ53__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ54__3 = iface.f_decl_bv("UnsignedSatQ54__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ55__3 = iface.f_decl_bool("UnsignedSatQ55__3");
              const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If51__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp8));
              iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp8));
              const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If51__2), iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp9));
              iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp9));
              iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_slice(iface.f_gen_load(v_If51__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp8));
              v_SatQ52__2 = iface.f_gen_load(v_UnsignedSatQ54__3);
              v_SatQ53__2 = iface.f_gen_load(v_UnsignedSatQ55__3);
            } else {
              const auto v_SignedSatQ60__3 = iface.f_decl_bv("SignedSatQ60__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ61__3 = iface.f_decl_bool("SignedSatQ61__3");
              const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If51__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp10));
              iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp10));
              const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If51__2), iface.f_gen_bit_lit(iface.bits_lit(136U, "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp11));
              iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp11));
              iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_slice(iface.f_gen_load(v_If51__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp10));
              v_SatQ52__2 = iface.f_gen_load(v_SignedSatQ60__3);
              v_SatQ53__2 = iface.f_gen_load(v_SignedSatQ61__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("120")), v_SatQ52__2));
            const auto v_temp12 = iface.f_gen_branch(v_SatQ53__2);
            iface.f_switch_context(iface.f_true_branch(v_temp12));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp12));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("120")), iface.f_gen_slice(iface.f_gen_load(v_If51__2), iface.bigint_lit("0"), iface.bigint_lit("8"))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If78__2 = iface.f_decl_bv("If78__2", iface.bigint_lit("129"));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_If78__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          iface.f_gen_store(v_If78__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp13));
          v_round_const__1 = iface.f_gen_load(v_If78__2);
          auto v_If81__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If81__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If81__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If85__2 = iface.f_decl_bv("If85__2", iface.bigint_lit("257"));
          const auto v_temp14 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(v_If85__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If81__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If78__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp14));
          iface.f_gen_store(v_If85__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If81__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If78__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp14));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ86__2 = typename Traits::rt_expr{};
            auto v_SatQ87__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ88__3 = iface.f_decl_bv("UnsignedSatQ88__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ89__3 = iface.f_decl_bool("UnsignedSatQ89__3");
              const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If85__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp15));
              iface.f_gen_store(v_UnsignedSatQ88__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ89__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp15));
              const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If85__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp16));
              iface.f_gen_store(v_UnsignedSatQ88__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ89__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp16));
              iface.f_gen_store(v_UnsignedSatQ88__3, iface.f_gen_slice(iface.f_gen_load(v_If85__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ89__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp15));
              v_SatQ86__2 = iface.f_gen_load(v_UnsignedSatQ88__3);
              v_SatQ87__2 = iface.f_gen_load(v_UnsignedSatQ89__3);
            } else {
              const auto v_SignedSatQ94__3 = iface.f_decl_bv("SignedSatQ94__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ95__3 = iface.f_decl_bool("SignedSatQ95__3");
              const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If85__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp17));
              iface.f_gen_store(v_SignedSatQ94__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ95__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp17));
              const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If85__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp18));
              iface.f_gen_store(v_SignedSatQ94__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ95__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp18));
              iface.f_gen_store(v_SignedSatQ94__3, iface.f_gen_slice(iface.f_gen_load(v_If85__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ95__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp17));
              v_SatQ86__2 = iface.f_gen_load(v_SignedSatQ94__3);
              v_SatQ87__2 = iface.f_gen_load(v_SignedSatQ95__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_append_bits(v_SatQ86__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
            const auto v_temp19 = iface.f_gen_branch(v_SatQ87__2);
            iface.f_switch_context(iface.f_true_branch(v_temp19));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp19));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If85__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
          } // if
        } else {
          auto v_If111__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If111__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If111__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If116__2 = iface.f_decl_bv("If116__2", iface.bigint_lit("257"));
          const auto v_temp20 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp20));
          iface.f_gen_store(v_If116__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If111__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp20));
          iface.f_gen_store(v_If116__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If111__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp20));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ117__2 = typename Traits::rt_expr{};
            auto v_SatQ118__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ119__3 = iface.f_decl_bv("UnsignedSatQ119__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ120__3 = iface.f_decl_bool("UnsignedSatQ120__3");
              const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If116__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp21));
              iface.f_gen_store(v_UnsignedSatQ119__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ120__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp21));
              const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If116__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp22));
              iface.f_gen_store(v_UnsignedSatQ119__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ120__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp22));
              iface.f_gen_store(v_UnsignedSatQ119__3, iface.f_gen_slice(iface.f_gen_load(v_If116__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ120__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp21));
              v_SatQ117__2 = iface.f_gen_load(v_UnsignedSatQ119__3);
              v_SatQ118__2 = iface.f_gen_load(v_UnsignedSatQ120__3);
            } else {
              const auto v_SignedSatQ125__3 = iface.f_decl_bv("SignedSatQ125__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ126__3 = iface.f_decl_bool("SignedSatQ126__3");
              const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If116__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp23));
              iface.f_gen_store(v_SignedSatQ125__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ126__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp23));
              const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If116__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp24));
              iface.f_gen_store(v_SignedSatQ125__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ126__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp24));
              iface.f_gen_store(v_SignedSatQ125__3, iface.f_gen_slice(iface.f_gen_load(v_If116__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ126__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp23));
              v_SatQ117__2 = iface.f_gen_load(v_SignedSatQ125__3);
              v_SatQ118__2 = iface.f_gen_load(v_SignedSatQ126__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_append_bits(v_SatQ117__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
            const auto v_temp25 = iface.f_gen_branch(v_SatQ118__2);
            iface.f_switch_context(iface.f_true_branch(v_temp25));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp25));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If116__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If143__2 = iface.f_decl_bv("If143__2", iface.bigint_lit("129"));
          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_If143__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_If143__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp26));
          v_round_const__1 = iface.f_gen_load(v_If143__2);
          auto v_If146__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If146__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If146__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If150__2 = iface.f_decl_bv("If150__2", iface.bigint_lit("257"));
          const auto v_temp27 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_If150__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If143__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          iface.f_gen_store(v_If150__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If143__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ151__2 = typename Traits::rt_expr{};
            auto v_SatQ152__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ153__3 = iface.f_decl_bv("UnsignedSatQ153__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ154__3 = iface.f_decl_bool("UnsignedSatQ154__3");
              const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If150__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp28));
              iface.f_gen_store(v_UnsignedSatQ153__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ154__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp28));
              const auto v_temp29 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If150__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp29));
              iface.f_gen_store(v_UnsignedSatQ153__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ154__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp29));
              iface.f_gen_store(v_UnsignedSatQ153__3, iface.f_gen_slice(iface.f_gen_load(v_If150__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ154__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp28));
              v_SatQ151__2 = iface.f_gen_load(v_UnsignedSatQ153__3);
              v_SatQ152__2 = iface.f_gen_load(v_UnsignedSatQ154__3);
            } else {
              const auto v_SignedSatQ159__3 = iface.f_decl_bv("SignedSatQ159__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ160__3 = iface.f_decl_bool("SignedSatQ160__3");
              const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If150__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp30));
              iface.f_gen_store(v_SignedSatQ159__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ160__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp30));
              const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If150__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp31));
              iface.f_gen_store(v_SignedSatQ159__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ160__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp31));
              iface.f_gen_store(v_SignedSatQ159__3, iface.f_gen_slice(iface.f_gen_load(v_If150__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ160__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp30));
              v_SatQ151__2 = iface.f_gen_load(v_SignedSatQ159__3);
              v_SatQ152__2 = iface.f_gen_load(v_SignedSatQ160__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("104")), iface.f_gen_append_bits(v_SatQ151__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
            const auto v_temp32 = iface.f_gen_branch(v_SatQ152__2);
            iface.f_switch_context(iface.f_true_branch(v_temp32));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp32));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("104")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If150__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
        } else {
          auto v_If176__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If176__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If176__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If181__2 = iface.f_decl_bv("If181__2", iface.bigint_lit("257"));
          const auto v_temp33 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_If181__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If176__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_If181__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If176__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp33));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ182__2 = typename Traits::rt_expr{};
            auto v_SatQ183__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ184__3 = iface.f_decl_bv("UnsignedSatQ184__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ185__3 = iface.f_decl_bool("UnsignedSatQ185__3");
              const auto v_temp34 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If181__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp34));
              iface.f_gen_store(v_UnsignedSatQ184__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ185__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp34));
              const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If181__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp35));
              iface.f_gen_store(v_UnsignedSatQ184__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ185__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp35));
              iface.f_gen_store(v_UnsignedSatQ184__3, iface.f_gen_slice(iface.f_gen_load(v_If181__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ185__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp34));
              v_SatQ182__2 = iface.f_gen_load(v_UnsignedSatQ184__3);
              v_SatQ183__2 = iface.f_gen_load(v_UnsignedSatQ185__3);
            } else {
              const auto v_SignedSatQ190__3 = iface.f_decl_bv("SignedSatQ190__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ191__3 = iface.f_decl_bool("SignedSatQ191__3");
              const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If181__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp36));
              iface.f_gen_store(v_SignedSatQ190__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ191__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp36));
              const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If181__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp37));
              iface.f_gen_store(v_SignedSatQ190__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ191__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp37));
              iface.f_gen_store(v_SignedSatQ190__3, iface.f_gen_slice(iface.f_gen_load(v_If181__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ191__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp36));
              v_SatQ182__2 = iface.f_gen_load(v_SignedSatQ190__3);
              v_SatQ183__2 = iface.f_gen_load(v_SignedSatQ191__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("104")), iface.f_gen_append_bits(v_SatQ182__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
            const auto v_temp38 = iface.f_gen_branch(v_SatQ183__2);
            iface.f_switch_context(iface.f_true_branch(v_temp38));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp38));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("104")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If181__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If208__2 = iface.f_decl_bv("If208__2", iface.bigint_lit("129"));
          const auto v_temp39 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp39));
          iface.f_gen_store(v_If208__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp39));
          iface.f_gen_store(v_If208__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp39));
          v_round_const__1 = iface.f_gen_load(v_If208__2);
          auto v_If211__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If211__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If211__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If215__2 = iface.f_decl_bv("If215__2", iface.bigint_lit("257"));
          const auto v_temp40 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp40));
          iface.f_gen_store(v_If215__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If211__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If208__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp40));
          iface.f_gen_store(v_If215__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If211__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If208__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp40));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ216__2 = typename Traits::rt_expr{};
            auto v_SatQ217__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ218__3 = iface.f_decl_bv("UnsignedSatQ218__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ219__3 = iface.f_decl_bool("UnsignedSatQ219__3");
              const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If215__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp41));
              iface.f_gen_store(v_UnsignedSatQ218__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ219__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp41));
              const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If215__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp42));
              iface.f_gen_store(v_UnsignedSatQ218__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ219__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp42));
              iface.f_gen_store(v_UnsignedSatQ218__3, iface.f_gen_slice(iface.f_gen_load(v_If215__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ219__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp41));
              v_SatQ216__2 = iface.f_gen_load(v_UnsignedSatQ218__3);
              v_SatQ217__2 = iface.f_gen_load(v_UnsignedSatQ219__3);
            } else {
              const auto v_SignedSatQ224__3 = iface.f_decl_bv("SignedSatQ224__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ225__3 = iface.f_decl_bool("SignedSatQ225__3");
              const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If215__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp43));
              iface.f_gen_store(v_SignedSatQ224__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ225__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp43));
              const auto v_temp44 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If215__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp44));
              iface.f_gen_store(v_SignedSatQ224__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ225__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp44));
              iface.f_gen_store(v_SignedSatQ224__3, iface.f_gen_slice(iface.f_gen_load(v_If215__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ225__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp43));
              v_SatQ216__2 = iface.f_gen_load(v_SignedSatQ224__3);
              v_SatQ217__2 = iface.f_gen_load(v_SignedSatQ225__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_SatQ216__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
            const auto v_temp45 = iface.f_gen_branch(v_SatQ217__2);
            iface.f_switch_context(iface.f_true_branch(v_temp45));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp45));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If215__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
          } // if
        } else {
          auto v_If241__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If241__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If241__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If246__2 = iface.f_decl_bv("If246__2", iface.bigint_lit("257"));
          const auto v_temp46 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp46));
          iface.f_gen_store(v_If246__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If241__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp46));
          iface.f_gen_store(v_If246__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If241__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp46));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ247__2 = typename Traits::rt_expr{};
            auto v_SatQ248__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ249__3 = iface.f_decl_bv("UnsignedSatQ249__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ250__3 = iface.f_decl_bool("UnsignedSatQ250__3");
              const auto v_temp47 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If246__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp47));
              iface.f_gen_store(v_UnsignedSatQ249__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ250__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp47));
              const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If246__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp48));
              iface.f_gen_store(v_UnsignedSatQ249__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ250__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp48));
              iface.f_gen_store(v_UnsignedSatQ249__3, iface.f_gen_slice(iface.f_gen_load(v_If246__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ250__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp47));
              v_SatQ247__2 = iface.f_gen_load(v_UnsignedSatQ249__3);
              v_SatQ248__2 = iface.f_gen_load(v_UnsignedSatQ250__3);
            } else {
              const auto v_SignedSatQ255__3 = iface.f_decl_bv("SignedSatQ255__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ256__3 = iface.f_decl_bool("SignedSatQ256__3");
              const auto v_temp49 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If246__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp49));
              iface.f_gen_store(v_SignedSatQ255__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ256__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp49));
              const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If246__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp50));
              iface.f_gen_store(v_SignedSatQ255__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ256__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp50));
              iface.f_gen_store(v_SignedSatQ255__3, iface.f_gen_slice(iface.f_gen_load(v_If246__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ256__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp49));
              v_SatQ247__2 = iface.f_gen_load(v_SignedSatQ255__3);
              v_SatQ248__2 = iface.f_gen_load(v_SignedSatQ256__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_SatQ247__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
            const auto v_temp51 = iface.f_gen_branch(v_SatQ248__2);
            iface.f_switch_context(iface.f_true_branch(v_temp51));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp51));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If246__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If273__2 = iface.f_decl_bv("If273__2", iface.bigint_lit("129"));
          const auto v_temp52 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp52));
          iface.f_gen_store(v_If273__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp52));
          iface.f_gen_store(v_If273__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp52));
          v_round_const__1 = iface.f_gen_load(v_If273__2);
          auto v_If276__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If276__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If276__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If280__2 = iface.f_decl_bv("If280__2", iface.bigint_lit("257"));
          const auto v_temp53 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp53));
          iface.f_gen_store(v_If280__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If276__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If273__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp53));
          iface.f_gen_store(v_If280__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If276__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If273__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp53));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ281__2 = typename Traits::rt_expr{};
            auto v_SatQ282__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ283__3 = iface.f_decl_bv("UnsignedSatQ283__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ284__3 = iface.f_decl_bool("UnsignedSatQ284__3");
              const auto v_temp54 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If280__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp54));
              iface.f_gen_store(v_UnsignedSatQ283__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ284__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp54));
              const auto v_temp55 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If280__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp55));
              iface.f_gen_store(v_UnsignedSatQ283__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ284__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp55));
              iface.f_gen_store(v_UnsignedSatQ283__3, iface.f_gen_slice(iface.f_gen_load(v_If280__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ284__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp54));
              v_SatQ281__2 = iface.f_gen_load(v_UnsignedSatQ283__3);
              v_SatQ282__2 = iface.f_gen_load(v_UnsignedSatQ284__3);
            } else {
              const auto v_SignedSatQ289__3 = iface.f_decl_bv("SignedSatQ289__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ290__3 = iface.f_decl_bool("SignedSatQ290__3");
              const auto v_temp56 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If280__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp56));
              iface.f_gen_store(v_SignedSatQ289__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ290__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp56));
              const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If280__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp57));
              iface.f_gen_store(v_SignedSatQ289__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ290__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp57));
              iface.f_gen_store(v_SignedSatQ289__3, iface.f_gen_slice(iface.f_gen_load(v_If280__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ290__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp56));
              v_SatQ281__2 = iface.f_gen_load(v_SignedSatQ289__3);
              v_SatQ282__2 = iface.f_gen_load(v_SignedSatQ290__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("88")), iface.f_gen_append_bits(v_SatQ281__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            const auto v_temp58 = iface.f_gen_branch(v_SatQ282__2);
            iface.f_switch_context(iface.f_true_branch(v_temp58));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp58));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("88")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If280__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
        } else {
          auto v_If306__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If306__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If306__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If311__2 = iface.f_decl_bv("If311__2", iface.bigint_lit("257"));
          const auto v_temp59 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp59));
          iface.f_gen_store(v_If311__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If306__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp59));
          iface.f_gen_store(v_If311__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If306__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp59));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ312__2 = typename Traits::rt_expr{};
            auto v_SatQ313__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ314__3 = iface.f_decl_bv("UnsignedSatQ314__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ315__3 = iface.f_decl_bool("UnsignedSatQ315__3");
              const auto v_temp60 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If311__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp60));
              iface.f_gen_store(v_UnsignedSatQ314__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ315__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp60));
              const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If311__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp61));
              iface.f_gen_store(v_UnsignedSatQ314__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ315__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp61));
              iface.f_gen_store(v_UnsignedSatQ314__3, iface.f_gen_slice(iface.f_gen_load(v_If311__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ315__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp60));
              v_SatQ312__2 = iface.f_gen_load(v_UnsignedSatQ314__3);
              v_SatQ313__2 = iface.f_gen_load(v_UnsignedSatQ315__3);
            } else {
              const auto v_SignedSatQ320__3 = iface.f_decl_bv("SignedSatQ320__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ321__3 = iface.f_decl_bool("SignedSatQ321__3");
              const auto v_temp62 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If311__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp62));
              iface.f_gen_store(v_SignedSatQ320__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ321__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp62));
              const auto v_temp63 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If311__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp63));
              iface.f_gen_store(v_SignedSatQ320__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ321__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp63));
              iface.f_gen_store(v_SignedSatQ320__3, iface.f_gen_slice(iface.f_gen_load(v_If311__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ321__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp62));
              v_SatQ312__2 = iface.f_gen_load(v_SignedSatQ320__3);
              v_SatQ313__2 = iface.f_gen_load(v_SignedSatQ321__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("88")), iface.f_gen_append_bits(v_SatQ312__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            const auto v_temp64 = iface.f_gen_branch(v_SatQ313__2);
            iface.f_switch_context(iface.f_true_branch(v_temp64));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp64));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("88")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If311__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If338__2 = iface.f_decl_bv("If338__2", iface.bigint_lit("129"));
          const auto v_temp65 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp65));
          iface.f_gen_store(v_If338__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp65));
          iface.f_gen_store(v_If338__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp65));
          v_round_const__1 = iface.f_gen_load(v_If338__2);
          auto v_If341__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If341__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If341__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If345__2 = iface.f_decl_bv("If345__2", iface.bigint_lit("257"));
          const auto v_temp66 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp66));
          iface.f_gen_store(v_If345__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If341__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If338__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp66));
          iface.f_gen_store(v_If345__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If341__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If338__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp66));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ346__2 = typename Traits::rt_expr{};
            auto v_SatQ347__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ348__3 = iface.f_decl_bv("UnsignedSatQ348__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ349__3 = iface.f_decl_bool("UnsignedSatQ349__3");
              const auto v_temp67 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If345__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp67));
              iface.f_gen_store(v_UnsignedSatQ348__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ349__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp67));
              const auto v_temp68 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If345__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp68));
              iface.f_gen_store(v_UnsignedSatQ348__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ349__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp68));
              iface.f_gen_store(v_UnsignedSatQ348__3, iface.f_gen_slice(iface.f_gen_load(v_If345__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ349__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp67));
              v_SatQ346__2 = iface.f_gen_load(v_UnsignedSatQ348__3);
              v_SatQ347__2 = iface.f_gen_load(v_UnsignedSatQ349__3);
            } else {
              const auto v_SignedSatQ354__3 = iface.f_decl_bv("SignedSatQ354__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ355__3 = iface.f_decl_bool("SignedSatQ355__3");
              const auto v_temp69 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If345__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp69));
              iface.f_gen_store(v_SignedSatQ354__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ355__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp69));
              const auto v_temp70 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If345__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp70));
              iface.f_gen_store(v_SignedSatQ354__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ355__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp70));
              iface.f_gen_store(v_SignedSatQ354__3, iface.f_gen_slice(iface.f_gen_load(v_If345__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ355__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp69));
              v_SatQ346__2 = iface.f_gen_load(v_SignedSatQ354__3);
              v_SatQ347__2 = iface.f_gen_load(v_SignedSatQ355__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_SatQ346__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
            const auto v_temp71 = iface.f_gen_branch(v_SatQ347__2);
            iface.f_switch_context(iface.f_true_branch(v_temp71));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp71));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If345__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
          } // if
        } else {
          auto v_If371__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If371__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If371__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If376__2 = iface.f_decl_bv("If376__2", iface.bigint_lit("257"));
          const auto v_temp72 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp72));
          iface.f_gen_store(v_If376__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If371__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp72));
          iface.f_gen_store(v_If376__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If371__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp72));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ377__2 = typename Traits::rt_expr{};
            auto v_SatQ378__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ379__3 = iface.f_decl_bv("UnsignedSatQ379__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ380__3 = iface.f_decl_bool("UnsignedSatQ380__3");
              const auto v_temp73 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If376__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp73));
              iface.f_gen_store(v_UnsignedSatQ379__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ380__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp73));
              const auto v_temp74 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If376__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp74));
              iface.f_gen_store(v_UnsignedSatQ379__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ380__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp74));
              iface.f_gen_store(v_UnsignedSatQ379__3, iface.f_gen_slice(iface.f_gen_load(v_If376__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ380__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp73));
              v_SatQ377__2 = iface.f_gen_load(v_UnsignedSatQ379__3);
              v_SatQ378__2 = iface.f_gen_load(v_UnsignedSatQ380__3);
            } else {
              const auto v_SignedSatQ385__3 = iface.f_decl_bv("SignedSatQ385__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ386__3 = iface.f_decl_bool("SignedSatQ386__3");
              const auto v_temp75 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If376__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp75));
              iface.f_gen_store(v_SignedSatQ385__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ386__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp75));
              const auto v_temp76 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If376__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp76));
              iface.f_gen_store(v_SignedSatQ385__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ386__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp76));
              iface.f_gen_store(v_SignedSatQ385__3, iface.f_gen_slice(iface.f_gen_load(v_If376__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ386__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp75));
              v_SatQ377__2 = iface.f_gen_load(v_SignedSatQ385__3);
              v_SatQ378__2 = iface.f_gen_load(v_SignedSatQ386__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_SatQ377__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
            const auto v_temp77 = iface.f_gen_branch(v_SatQ378__2);
            iface.f_switch_context(iface.f_true_branch(v_temp77));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp77));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If376__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If403__2 = iface.f_decl_bv("If403__2", iface.bigint_lit("129"));
          const auto v_temp78 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp78));
          iface.f_gen_store(v_If403__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp78));
          iface.f_gen_store(v_If403__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp78));
          v_round_const__1 = iface.f_gen_load(v_If403__2);
          auto v_If406__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If406__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If406__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If410__2 = iface.f_decl_bv("If410__2", iface.bigint_lit("257"));
          const auto v_temp79 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp79));
          iface.f_gen_store(v_If410__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If406__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If403__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp79));
          iface.f_gen_store(v_If410__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If406__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If403__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp79));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ411__2 = typename Traits::rt_expr{};
            auto v_SatQ412__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ413__3 = iface.f_decl_bv("UnsignedSatQ413__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ414__3 = iface.f_decl_bool("UnsignedSatQ414__3");
              const auto v_temp80 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If410__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp80));
              iface.f_gen_store(v_UnsignedSatQ413__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp80));
              const auto v_temp81 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If410__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp81));
              iface.f_gen_store(v_UnsignedSatQ413__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp81));
              iface.f_gen_store(v_UnsignedSatQ413__3, iface.f_gen_slice(iface.f_gen_load(v_If410__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp80));
              v_SatQ411__2 = iface.f_gen_load(v_UnsignedSatQ413__3);
              v_SatQ412__2 = iface.f_gen_load(v_UnsignedSatQ414__3);
            } else {
              const auto v_SignedSatQ419__3 = iface.f_decl_bv("SignedSatQ419__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ420__3 = iface.f_decl_bool("SignedSatQ420__3");
              const auto v_temp82 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If410__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp82));
              iface.f_gen_store(v_SignedSatQ419__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp82));
              const auto v_temp83 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If410__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp83));
              iface.f_gen_store(v_SignedSatQ419__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp83));
              iface.f_gen_store(v_SignedSatQ419__3, iface.f_gen_slice(iface.f_gen_load(v_If410__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp82));
              v_SatQ411__2 = iface.f_gen_load(v_SignedSatQ419__3);
              v_SatQ412__2 = iface.f_gen_load(v_SignedSatQ420__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("72")), iface.f_gen_append_bits(v_SatQ411__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
            const auto v_temp84 = iface.f_gen_branch(v_SatQ412__2);
            iface.f_switch_context(iface.f_true_branch(v_temp84));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp84));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("72")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If410__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } // if
        } else {
          auto v_If436__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If436__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If436__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If441__2 = iface.f_decl_bv("If441__2", iface.bigint_lit("257"));
          const auto v_temp85 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp85));
          iface.f_gen_store(v_If441__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If436__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp85));
          iface.f_gen_store(v_If441__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If436__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp85));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ442__2 = typename Traits::rt_expr{};
            auto v_SatQ443__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ444__3 = iface.f_decl_bv("UnsignedSatQ444__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ445__3 = iface.f_decl_bool("UnsignedSatQ445__3");
              const auto v_temp86 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If441__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp86));
              iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ445__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp86));
              const auto v_temp87 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If441__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp87));
              iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ445__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp87));
              iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_slice(iface.f_gen_load(v_If441__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ445__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp86));
              v_SatQ442__2 = iface.f_gen_load(v_UnsignedSatQ444__3);
              v_SatQ443__2 = iface.f_gen_load(v_UnsignedSatQ445__3);
            } else {
              const auto v_SignedSatQ450__3 = iface.f_decl_bv("SignedSatQ450__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ451__3 = iface.f_decl_bool("SignedSatQ451__3");
              const auto v_temp88 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If441__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp88));
              iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ451__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp88));
              const auto v_temp89 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If441__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp89));
              iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ451__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp89));
              iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_slice(iface.f_gen_load(v_If441__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ451__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp88));
              v_SatQ442__2 = iface.f_gen_load(v_SignedSatQ450__3);
              v_SatQ443__2 = iface.f_gen_load(v_SignedSatQ451__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("72")), iface.f_gen_append_bits(v_SatQ442__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
            const auto v_temp90 = iface.f_gen_branch(v_SatQ443__2);
            iface.f_switch_context(iface.f_true_branch(v_temp90));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp90));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("72")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If441__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If468__2 = iface.f_decl_bv("If468__2", iface.bigint_lit("129"));
          const auto v_temp91 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp91));
          iface.f_gen_store(v_If468__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp91));
          iface.f_gen_store(v_If468__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp91));
          v_round_const__1 = iface.f_gen_load(v_If468__2);
          auto v_If471__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If471__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If471__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If475__2 = iface.f_decl_bv("If475__2", iface.bigint_lit("257"));
          const auto v_temp92 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp92));
          iface.f_gen_store(v_If475__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If471__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If468__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp92));
          iface.f_gen_store(v_If475__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If471__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If468__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp92));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ476__2 = typename Traits::rt_expr{};
            auto v_SatQ477__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ478__3 = iface.f_decl_bv("UnsignedSatQ478__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ479__3 = iface.f_decl_bool("UnsignedSatQ479__3");
              const auto v_temp93 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If475__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp93));
              iface.f_gen_store(v_UnsignedSatQ478__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ479__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp93));
              const auto v_temp94 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If475__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp94));
              iface.f_gen_store(v_UnsignedSatQ478__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ479__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp94));
              iface.f_gen_store(v_UnsignedSatQ478__3, iface.f_gen_slice(iface.f_gen_load(v_If475__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ479__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp93));
              v_SatQ476__2 = iface.f_gen_load(v_UnsignedSatQ478__3);
              v_SatQ477__2 = iface.f_gen_load(v_UnsignedSatQ479__3);
            } else {
              const auto v_SignedSatQ484__3 = iface.f_decl_bv("SignedSatQ484__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ485__3 = iface.f_decl_bool("SignedSatQ485__3");
              const auto v_temp95 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If475__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp95));
              iface.f_gen_store(v_SignedSatQ484__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ485__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp95));
              const auto v_temp96 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If475__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp96));
              iface.f_gen_store(v_SignedSatQ484__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ485__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp96));
              iface.f_gen_store(v_SignedSatQ484__3, iface.f_gen_slice(iface.f_gen_load(v_If475__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ485__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp95));
              v_SatQ476__2 = iface.f_gen_load(v_SignedSatQ484__3);
              v_SatQ477__2 = iface.f_gen_load(v_SignedSatQ485__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_SatQ476__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56")))));
            const auto v_temp97 = iface.f_gen_branch(v_SatQ477__2);
            iface.f_switch_context(iface.f_true_branch(v_temp97));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp97));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If475__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56")))));
          } // if
        } else {
          auto v_If501__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If501__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If501__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If506__2 = iface.f_decl_bv("If506__2", iface.bigint_lit("257"));
          const auto v_temp98 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp98));
          iface.f_gen_store(v_If506__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If501__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp98));
          iface.f_gen_store(v_If506__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If501__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp98));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ507__2 = typename Traits::rt_expr{};
            auto v_SatQ508__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ509__3 = iface.f_decl_bv("UnsignedSatQ509__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ510__3 = iface.f_decl_bool("UnsignedSatQ510__3");
              const auto v_temp99 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If506__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp99));
              iface.f_gen_store(v_UnsignedSatQ509__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ510__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp99));
              const auto v_temp100 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If506__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp100));
              iface.f_gen_store(v_UnsignedSatQ509__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ510__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp100));
              iface.f_gen_store(v_UnsignedSatQ509__3, iface.f_gen_slice(iface.f_gen_load(v_If506__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ510__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp99));
              v_SatQ507__2 = iface.f_gen_load(v_UnsignedSatQ509__3);
              v_SatQ508__2 = iface.f_gen_load(v_UnsignedSatQ510__3);
            } else {
              const auto v_SignedSatQ515__3 = iface.f_decl_bv("SignedSatQ515__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ516__3 = iface.f_decl_bool("SignedSatQ516__3");
              const auto v_temp101 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If506__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp101));
              iface.f_gen_store(v_SignedSatQ515__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ516__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp101));
              const auto v_temp102 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If506__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp102));
              iface.f_gen_store(v_SignedSatQ515__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ516__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp102));
              iface.f_gen_store(v_SignedSatQ515__3, iface.f_gen_slice(iface.f_gen_load(v_If506__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ516__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp101));
              v_SatQ507__2 = iface.f_gen_load(v_SignedSatQ515__3);
              v_SatQ508__2 = iface.f_gen_load(v_SignedSatQ516__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_SatQ507__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56")))));
            const auto v_temp103 = iface.f_gen_branch(v_SatQ508__2);
            iface.f_switch_context(iface.f_true_branch(v_temp103));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp103));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If506__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If533__2 = iface.f_decl_bv("If533__2", iface.bigint_lit("129"));
          const auto v_temp104 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp104));
          iface.f_gen_store(v_If533__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp104));
          iface.f_gen_store(v_If533__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp104));
          v_round_const__1 = iface.f_gen_load(v_If533__2);
          auto v_If536__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If536__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If536__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If540__2 = iface.f_decl_bv("If540__2", iface.bigint_lit("257"));
          const auto v_temp105 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp105));
          iface.f_gen_store(v_If540__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If536__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If533__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp105));
          iface.f_gen_store(v_If540__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If536__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If533__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp105));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ541__2 = typename Traits::rt_expr{};
            auto v_SatQ542__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ543__3 = iface.f_decl_bv("UnsignedSatQ543__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ544__3 = iface.f_decl_bool("UnsignedSatQ544__3");
              const auto v_temp106 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If540__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp106));
              iface.f_gen_store(v_UnsignedSatQ543__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ544__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp106));
              const auto v_temp107 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If540__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp107));
              iface.f_gen_store(v_UnsignedSatQ543__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ544__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp107));
              iface.f_gen_store(v_UnsignedSatQ543__3, iface.f_gen_slice(iface.f_gen_load(v_If540__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ544__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp106));
              v_SatQ541__2 = iface.f_gen_load(v_UnsignedSatQ543__3);
              v_SatQ542__2 = iface.f_gen_load(v_UnsignedSatQ544__3);
            } else {
              const auto v_SignedSatQ549__3 = iface.f_decl_bv("SignedSatQ549__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ550__3 = iface.f_decl_bool("SignedSatQ550__3");
              const auto v_temp108 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If540__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp108));
              iface.f_gen_store(v_SignedSatQ549__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ550__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp108));
              const auto v_temp109 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If540__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp109));
              iface.f_gen_store(v_SignedSatQ549__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ550__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp109));
              iface.f_gen_store(v_SignedSatQ549__3, iface.f_gen_slice(iface.f_gen_load(v_If540__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ550__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp108));
              v_SatQ541__2 = iface.f_gen_load(v_SignedSatQ549__3);
              v_SatQ542__2 = iface.f_gen_load(v_SignedSatQ550__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("72"), iface.bigint_lit("56")), iface.f_gen_append_bits(v_SatQ541__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            const auto v_temp110 = iface.f_gen_branch(v_SatQ542__2);
            iface.f_switch_context(iface.f_true_branch(v_temp110));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp110));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("72"), iface.bigint_lit("56")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If540__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          } // if
        } else {
          auto v_If566__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If566__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If566__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If571__2 = iface.f_decl_bv("If571__2", iface.bigint_lit("257"));
          const auto v_temp111 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp111));
          iface.f_gen_store(v_If571__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If566__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp111));
          iface.f_gen_store(v_If571__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If566__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp111));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ572__2 = typename Traits::rt_expr{};
            auto v_SatQ573__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ574__3 = iface.f_decl_bv("UnsignedSatQ574__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ575__3 = iface.f_decl_bool("UnsignedSatQ575__3");
              const auto v_temp112 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If571__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp112));
              iface.f_gen_store(v_UnsignedSatQ574__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp112));
              const auto v_temp113 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If571__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp113));
              iface.f_gen_store(v_UnsignedSatQ574__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp113));
              iface.f_gen_store(v_UnsignedSatQ574__3, iface.f_gen_slice(iface.f_gen_load(v_If571__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp112));
              v_SatQ572__2 = iface.f_gen_load(v_UnsignedSatQ574__3);
              v_SatQ573__2 = iface.f_gen_load(v_UnsignedSatQ575__3);
            } else {
              const auto v_SignedSatQ580__3 = iface.f_decl_bv("SignedSatQ580__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ581__3 = iface.f_decl_bool("SignedSatQ581__3");
              const auto v_temp114 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If571__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp114));
              iface.f_gen_store(v_SignedSatQ580__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp114));
              const auto v_temp115 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If571__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp115));
              iface.f_gen_store(v_SignedSatQ580__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp115));
              iface.f_gen_store(v_SignedSatQ580__3, iface.f_gen_slice(iface.f_gen_load(v_If571__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp114));
              v_SatQ572__2 = iface.f_gen_load(v_SignedSatQ580__3);
              v_SatQ573__2 = iface.f_gen_load(v_SignedSatQ581__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("72"), iface.bigint_lit("56")), iface.f_gen_append_bits(v_SatQ572__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            const auto v_temp116 = iface.f_gen_branch(v_SatQ573__2);
            iface.f_switch_context(iface.f_true_branch(v_temp116));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp116));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("72"), iface.bigint_lit("56")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If571__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If598__2 = iface.f_decl_bv("If598__2", iface.bigint_lit("129"));
          const auto v_temp117 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp117));
          iface.f_gen_store(v_If598__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp117));
          iface.f_gen_store(v_If598__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp117));
          v_round_const__1 = iface.f_gen_load(v_If598__2);
          auto v_If601__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If601__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If601__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If605__2 = iface.f_decl_bv("If605__2", iface.bigint_lit("257"));
          const auto v_temp118 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp118));
          iface.f_gen_store(v_If605__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If601__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If598__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp118));
          iface.f_gen_store(v_If605__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If601__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If598__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp118));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ606__2 = typename Traits::rt_expr{};
            auto v_SatQ607__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ608__3 = iface.f_decl_bv("UnsignedSatQ608__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ609__3 = iface.f_decl_bool("UnsignedSatQ609__3");
              const auto v_temp119 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If605__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp119));
              iface.f_gen_store(v_UnsignedSatQ608__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ609__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp119));
              const auto v_temp120 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If605__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp120));
              iface.f_gen_store(v_UnsignedSatQ608__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ609__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp120));
              iface.f_gen_store(v_UnsignedSatQ608__3, iface.f_gen_slice(iface.f_gen_load(v_If605__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ609__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp119));
              v_SatQ606__2 = iface.f_gen_load(v_UnsignedSatQ608__3);
              v_SatQ607__2 = iface.f_gen_load(v_UnsignedSatQ609__3);
            } else {
              const auto v_SignedSatQ614__3 = iface.f_decl_bv("SignedSatQ614__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ615__3 = iface.f_decl_bool("SignedSatQ615__3");
              const auto v_temp121 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If605__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp121));
              iface.f_gen_store(v_SignedSatQ614__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ615__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp121));
              const auto v_temp122 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If605__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp122));
              iface.f_gen_store(v_SignedSatQ614__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ615__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp122));
              iface.f_gen_store(v_SignedSatQ614__3, iface.f_gen_slice(iface.f_gen_load(v_If605__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ615__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp121));
              v_SatQ606__2 = iface.f_gen_load(v_SignedSatQ614__3);
              v_SatQ607__2 = iface.f_gen_load(v_SignedSatQ615__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_SatQ606__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("72")))));
            const auto v_temp123 = iface.f_gen_branch(v_SatQ607__2);
            iface.f_switch_context(iface.f_true_branch(v_temp123));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp123));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If605__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("72")))));
          } // if
        } else {
          auto v_If631__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If631__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If631__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If636__2 = iface.f_decl_bv("If636__2", iface.bigint_lit("257"));
          const auto v_temp124 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp124));
          iface.f_gen_store(v_If636__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp124));
          iface.f_gen_store(v_If636__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp124));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ637__2 = typename Traits::rt_expr{};
            auto v_SatQ638__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ639__3 = iface.f_decl_bv("UnsignedSatQ639__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ640__3 = iface.f_decl_bool("UnsignedSatQ640__3");
              const auto v_temp125 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If636__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp125));
              iface.f_gen_store(v_UnsignedSatQ639__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ640__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp125));
              const auto v_temp126 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If636__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp126));
              iface.f_gen_store(v_UnsignedSatQ639__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ640__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp126));
              iface.f_gen_store(v_UnsignedSatQ639__3, iface.f_gen_slice(iface.f_gen_load(v_If636__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ640__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp125));
              v_SatQ637__2 = iface.f_gen_load(v_UnsignedSatQ639__3);
              v_SatQ638__2 = iface.f_gen_load(v_UnsignedSatQ640__3);
            } else {
              const auto v_SignedSatQ645__3 = iface.f_decl_bv("SignedSatQ645__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ646__3 = iface.f_decl_bool("SignedSatQ646__3");
              const auto v_temp127 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If636__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp127));
              iface.f_gen_store(v_SignedSatQ645__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ646__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp127));
              const auto v_temp128 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If636__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp128));
              iface.f_gen_store(v_SignedSatQ645__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ646__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp128));
              iface.f_gen_store(v_SignedSatQ645__3, iface.f_gen_slice(iface.f_gen_load(v_If636__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ646__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp127));
              v_SatQ637__2 = iface.f_gen_load(v_SignedSatQ645__3);
              v_SatQ638__2 = iface.f_gen_load(v_SignedSatQ646__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_SatQ637__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("72")))));
            const auto v_temp129 = iface.f_gen_branch(v_SatQ638__2);
            iface.f_switch_context(iface.f_true_branch(v_temp129));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp129));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If636__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("72")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If663__2 = iface.f_decl_bv("If663__2", iface.bigint_lit("129"));
          const auto v_temp130 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp130));
          iface.f_gen_store(v_If663__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp130));
          iface.f_gen_store(v_If663__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp130));
          v_round_const__1 = iface.f_gen_load(v_If663__2);
          auto v_If666__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If666__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If666__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If670__2 = iface.f_decl_bv("If670__2", iface.bigint_lit("257"));
          const auto v_temp131 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp131));
          iface.f_gen_store(v_If670__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If666__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If663__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp131));
          iface.f_gen_store(v_If670__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If666__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If663__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp131));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ671__2 = typename Traits::rt_expr{};
            auto v_SatQ672__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ673__3 = iface.f_decl_bv("UnsignedSatQ673__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ674__3 = iface.f_decl_bool("UnsignedSatQ674__3");
              const auto v_temp132 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If670__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp132));
              iface.f_gen_store(v_UnsignedSatQ673__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ674__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp132));
              const auto v_temp133 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If670__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp133));
              iface.f_gen_store(v_UnsignedSatQ673__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ674__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp133));
              iface.f_gen_store(v_UnsignedSatQ673__3, iface.f_gen_slice(iface.f_gen_load(v_If670__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ674__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp132));
              v_SatQ671__2 = iface.f_gen_load(v_UnsignedSatQ673__3);
              v_SatQ672__2 = iface.f_gen_load(v_UnsignedSatQ674__3);
            } else {
              const auto v_SignedSatQ679__3 = iface.f_decl_bv("SignedSatQ679__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ680__3 = iface.f_decl_bool("SignedSatQ680__3");
              const auto v_temp134 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If670__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp134));
              iface.f_gen_store(v_SignedSatQ679__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ680__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp134));
              const auto v_temp135 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If670__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp135));
              iface.f_gen_store(v_SignedSatQ679__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ680__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp135));
              iface.f_gen_store(v_SignedSatQ679__3, iface.f_gen_slice(iface.f_gen_load(v_If670__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ680__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp134));
              v_SatQ671__2 = iface.f_gen_load(v_SignedSatQ679__3);
              v_SatQ672__2 = iface.f_gen_load(v_SignedSatQ680__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("88"), iface.bigint_lit("40")), iface.f_gen_append_bits(v_SatQ671__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
            const auto v_temp136 = iface.f_gen_branch(v_SatQ672__2);
            iface.f_switch_context(iface.f_true_branch(v_temp136));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp136));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("88"), iface.bigint_lit("40")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If670__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
          } // if
        } else {
          auto v_If696__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If696__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If696__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If701__2 = iface.f_decl_bv("If701__2", iface.bigint_lit("257"));
          const auto v_temp137 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp137));
          iface.f_gen_store(v_If701__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If696__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp137));
          iface.f_gen_store(v_If701__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If696__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp137));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ702__2 = typename Traits::rt_expr{};
            auto v_SatQ703__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ704__3 = iface.f_decl_bv("UnsignedSatQ704__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ705__3 = iface.f_decl_bool("UnsignedSatQ705__3");
              const auto v_temp138 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If701__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp138));
              iface.f_gen_store(v_UnsignedSatQ704__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ705__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp138));
              const auto v_temp139 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If701__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp139));
              iface.f_gen_store(v_UnsignedSatQ704__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ705__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp139));
              iface.f_gen_store(v_UnsignedSatQ704__3, iface.f_gen_slice(iface.f_gen_load(v_If701__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ705__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp138));
              v_SatQ702__2 = iface.f_gen_load(v_UnsignedSatQ704__3);
              v_SatQ703__2 = iface.f_gen_load(v_UnsignedSatQ705__3);
            } else {
              const auto v_SignedSatQ710__3 = iface.f_decl_bv("SignedSatQ710__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ711__3 = iface.f_decl_bool("SignedSatQ711__3");
              const auto v_temp140 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If701__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp140));
              iface.f_gen_store(v_SignedSatQ710__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ711__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp140));
              const auto v_temp141 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If701__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp141));
              iface.f_gen_store(v_SignedSatQ710__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ711__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp141));
              iface.f_gen_store(v_SignedSatQ710__3, iface.f_gen_slice(iface.f_gen_load(v_If701__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ711__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp140));
              v_SatQ702__2 = iface.f_gen_load(v_SignedSatQ710__3);
              v_SatQ703__2 = iface.f_gen_load(v_SignedSatQ711__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("88"), iface.bigint_lit("40")), iface.f_gen_append_bits(v_SatQ702__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
            const auto v_temp142 = iface.f_gen_branch(v_SatQ703__2);
            iface.f_switch_context(iface.f_true_branch(v_temp142));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp142));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("88"), iface.bigint_lit("40")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If701__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If728__2 = iface.f_decl_bv("If728__2", iface.bigint_lit("129"));
          const auto v_temp143 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp143));
          iface.f_gen_store(v_If728__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp143));
          iface.f_gen_store(v_If728__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp143));
          v_round_const__1 = iface.f_gen_load(v_If728__2);
          auto v_If731__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If731__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If731__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If735__2 = iface.f_decl_bv("If735__2", iface.bigint_lit("257"));
          const auto v_temp144 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp144));
          iface.f_gen_store(v_If735__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If731__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If728__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp144));
          iface.f_gen_store(v_If735__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If731__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If728__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp144));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ736__2 = typename Traits::rt_expr{};
            auto v_SatQ737__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ738__3 = iface.f_decl_bv("UnsignedSatQ738__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ739__3 = iface.f_decl_bool("UnsignedSatQ739__3");
              const auto v_temp145 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If735__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp145));
              iface.f_gen_store(v_UnsignedSatQ738__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ739__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp145));
              const auto v_temp146 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If735__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp146));
              iface.f_gen_store(v_UnsignedSatQ738__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ739__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp146));
              iface.f_gen_store(v_UnsignedSatQ738__3, iface.f_gen_slice(iface.f_gen_load(v_If735__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ739__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp145));
              v_SatQ736__2 = iface.f_gen_load(v_UnsignedSatQ738__3);
              v_SatQ737__2 = iface.f_gen_load(v_UnsignedSatQ739__3);
            } else {
              const auto v_SignedSatQ744__3 = iface.f_decl_bv("SignedSatQ744__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ745__3 = iface.f_decl_bool("SignedSatQ745__3");
              const auto v_temp147 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If735__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp147));
              iface.f_gen_store(v_SignedSatQ744__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ745__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp147));
              const auto v_temp148 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If735__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp148));
              iface.f_gen_store(v_SignedSatQ744__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ745__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp148));
              iface.f_gen_store(v_SignedSatQ744__3, iface.f_gen_slice(iface.f_gen_load(v_If735__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ745__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp147));
              v_SatQ736__2 = iface.f_gen_load(v_SignedSatQ744__3);
              v_SatQ737__2 = iface.f_gen_load(v_SignedSatQ745__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ736__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("88")))));
            const auto v_temp149 = iface.f_gen_branch(v_SatQ737__2);
            iface.f_switch_context(iface.f_true_branch(v_temp149));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp149));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If735__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("88")))));
          } // if
        } else {
          auto v_If761__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If761__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If761__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If766__2 = iface.f_decl_bv("If766__2", iface.bigint_lit("257"));
          const auto v_temp150 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp150));
          iface.f_gen_store(v_If766__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If761__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp150));
          iface.f_gen_store(v_If766__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If761__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp150));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ767__2 = typename Traits::rt_expr{};
            auto v_SatQ768__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ769__3 = iface.f_decl_bv("UnsignedSatQ769__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ770__3 = iface.f_decl_bool("UnsignedSatQ770__3");
              const auto v_temp151 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If766__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp151));
              iface.f_gen_store(v_UnsignedSatQ769__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ770__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp151));
              const auto v_temp152 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If766__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp152));
              iface.f_gen_store(v_UnsignedSatQ769__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ770__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp152));
              iface.f_gen_store(v_UnsignedSatQ769__3, iface.f_gen_slice(iface.f_gen_load(v_If766__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ770__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp151));
              v_SatQ767__2 = iface.f_gen_load(v_UnsignedSatQ769__3);
              v_SatQ768__2 = iface.f_gen_load(v_UnsignedSatQ770__3);
            } else {
              const auto v_SignedSatQ775__3 = iface.f_decl_bv("SignedSatQ775__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ776__3 = iface.f_decl_bool("SignedSatQ776__3");
              const auto v_temp153 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If766__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp153));
              iface.f_gen_store(v_SignedSatQ775__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ776__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp153));
              const auto v_temp154 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If766__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp154));
              iface.f_gen_store(v_SignedSatQ775__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ776__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp154));
              iface.f_gen_store(v_SignedSatQ775__3, iface.f_gen_slice(iface.f_gen_load(v_If766__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ776__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp153));
              v_SatQ767__2 = iface.f_gen_load(v_SignedSatQ775__3);
              v_SatQ768__2 = iface.f_gen_load(v_SignedSatQ776__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ767__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("88")))));
            const auto v_temp155 = iface.f_gen_branch(v_SatQ768__2);
            iface.f_switch_context(iface.f_true_branch(v_temp155));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp155));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If766__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("88")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If793__2 = iface.f_decl_bv("If793__2", iface.bigint_lit("129"));
          const auto v_temp156 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp156));
          iface.f_gen_store(v_If793__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp156));
          iface.f_gen_store(v_If793__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp156));
          v_round_const__1 = iface.f_gen_load(v_If793__2);
          auto v_If796__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If796__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If796__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If800__2 = iface.f_decl_bv("If800__2", iface.bigint_lit("257"));
          const auto v_temp157 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp157));
          iface.f_gen_store(v_If800__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If796__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If793__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp157));
          iface.f_gen_store(v_If800__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If796__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If793__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp157));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ801__2 = typename Traits::rt_expr{};
            auto v_SatQ802__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ803__3 = iface.f_decl_bv("UnsignedSatQ803__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ804__3 = iface.f_decl_bool("UnsignedSatQ804__3");
              const auto v_temp158 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If800__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp158));
              iface.f_gen_store(v_UnsignedSatQ803__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ804__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp158));
              const auto v_temp159 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If800__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp159));
              iface.f_gen_store(v_UnsignedSatQ803__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ804__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp159));
              iface.f_gen_store(v_UnsignedSatQ803__3, iface.f_gen_slice(iface.f_gen_load(v_If800__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ804__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp158));
              v_SatQ801__2 = iface.f_gen_load(v_UnsignedSatQ803__3);
              v_SatQ802__2 = iface.f_gen_load(v_UnsignedSatQ804__3);
            } else {
              const auto v_SignedSatQ809__3 = iface.f_decl_bv("SignedSatQ809__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ810__3 = iface.f_decl_bool("SignedSatQ810__3");
              const auto v_temp160 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If800__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp160));
              iface.f_gen_store(v_SignedSatQ809__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ810__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp160));
              const auto v_temp161 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If800__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp161));
              iface.f_gen_store(v_SignedSatQ809__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ810__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp161));
              iface.f_gen_store(v_SignedSatQ809__3, iface.f_gen_slice(iface.f_gen_load(v_If800__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ810__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp160));
              v_SatQ801__2 = iface.f_gen_load(v_SignedSatQ809__3);
              v_SatQ802__2 = iface.f_gen_load(v_SignedSatQ810__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("104"), iface.bigint_lit("24")), iface.f_gen_append_bits(v_SatQ801__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
            const auto v_temp162 = iface.f_gen_branch(v_SatQ802__2);
            iface.f_switch_context(iface.f_true_branch(v_temp162));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp162));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("104"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If800__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
          } // if
        } else {
          auto v_If826__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If826__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If826__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If831__2 = iface.f_decl_bv("If831__2", iface.bigint_lit("257"));
          const auto v_temp163 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp163));
          iface.f_gen_store(v_If831__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If826__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp163));
          iface.f_gen_store(v_If831__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If826__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp163));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ832__2 = typename Traits::rt_expr{};
            auto v_SatQ833__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ834__3 = iface.f_decl_bv("UnsignedSatQ834__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ835__3 = iface.f_decl_bool("UnsignedSatQ835__3");
              const auto v_temp164 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If831__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp164));
              iface.f_gen_store(v_UnsignedSatQ834__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ835__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp164));
              const auto v_temp165 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If831__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp165));
              iface.f_gen_store(v_UnsignedSatQ834__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ835__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp165));
              iface.f_gen_store(v_UnsignedSatQ834__3, iface.f_gen_slice(iface.f_gen_load(v_If831__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ835__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp164));
              v_SatQ832__2 = iface.f_gen_load(v_UnsignedSatQ834__3);
              v_SatQ833__2 = iface.f_gen_load(v_UnsignedSatQ835__3);
            } else {
              const auto v_SignedSatQ840__3 = iface.f_decl_bv("SignedSatQ840__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ841__3 = iface.f_decl_bool("SignedSatQ841__3");
              const auto v_temp166 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If831__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp166));
              iface.f_gen_store(v_SignedSatQ840__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ841__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp166));
              const auto v_temp167 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If831__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp167));
              iface.f_gen_store(v_SignedSatQ840__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ841__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp167));
              iface.f_gen_store(v_SignedSatQ840__3, iface.f_gen_slice(iface.f_gen_load(v_If831__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ841__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp166));
              v_SatQ832__2 = iface.f_gen_load(v_SignedSatQ840__3);
              v_SatQ833__2 = iface.f_gen_load(v_SignedSatQ841__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("104"), iface.bigint_lit("24")), iface.f_gen_append_bits(v_SatQ832__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
            const auto v_temp168 = iface.f_gen_branch(v_SatQ833__2);
            iface.f_switch_context(iface.f_true_branch(v_temp168));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp168));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("104"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If831__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If858__2 = iface.f_decl_bv("If858__2", iface.bigint_lit("129"));
          const auto v_temp169 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp169));
          iface.f_gen_store(v_If858__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp169));
          iface.f_gen_store(v_If858__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp169));
          v_round_const__1 = iface.f_gen_load(v_If858__2);
          auto v_If861__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If861__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If861__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If865__2 = iface.f_decl_bv("If865__2", iface.bigint_lit("257"));
          const auto v_temp170 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp170));
          iface.f_gen_store(v_If865__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If861__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If858__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp170));
          iface.f_gen_store(v_If865__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If861__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If858__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp170));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ866__2 = typename Traits::rt_expr{};
            auto v_SatQ867__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ868__3 = iface.f_decl_bv("UnsignedSatQ868__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ869__3 = iface.f_decl_bool("UnsignedSatQ869__3");
              const auto v_temp171 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If865__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp171));
              iface.f_gen_store(v_UnsignedSatQ868__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ869__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp171));
              const auto v_temp172 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If865__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp172));
              iface.f_gen_store(v_UnsignedSatQ868__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ869__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp172));
              iface.f_gen_store(v_UnsignedSatQ868__3, iface.f_gen_slice(iface.f_gen_load(v_If865__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ869__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp171));
              v_SatQ866__2 = iface.f_gen_load(v_UnsignedSatQ868__3);
              v_SatQ867__2 = iface.f_gen_load(v_UnsignedSatQ869__3);
            } else {
              const auto v_SignedSatQ874__3 = iface.f_decl_bv("SignedSatQ874__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ875__3 = iface.f_decl_bool("SignedSatQ875__3");
              const auto v_temp173 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If865__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp173));
              iface.f_gen_store(v_SignedSatQ874__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ875__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp173));
              const auto v_temp174 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If865__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp174));
              iface.f_gen_store(v_SignedSatQ874__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ875__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp174));
              iface.f_gen_store(v_SignedSatQ874__3, iface.f_gen_slice(iface.f_gen_load(v_If865__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ875__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp173));
              v_SatQ866__2 = iface.f_gen_load(v_SignedSatQ874__3);
              v_SatQ867__2 = iface.f_gen_load(v_SignedSatQ875__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_SatQ866__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("104")))));
            const auto v_temp175 = iface.f_gen_branch(v_SatQ867__2);
            iface.f_switch_context(iface.f_true_branch(v_temp175));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp175));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If865__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("104")))));
          } // if
        } else {
          auto v_If891__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If891__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If891__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If896__2 = iface.f_decl_bv("If896__2", iface.bigint_lit("257"));
          const auto v_temp176 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp176));
          iface.f_gen_store(v_If896__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If891__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp176));
          iface.f_gen_store(v_If896__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If891__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp176));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ897__2 = typename Traits::rt_expr{};
            auto v_SatQ898__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ899__3 = iface.f_decl_bv("UnsignedSatQ899__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ900__3 = iface.f_decl_bool("UnsignedSatQ900__3");
              const auto v_temp177 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If896__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp177));
              iface.f_gen_store(v_UnsignedSatQ899__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ900__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp177));
              const auto v_temp178 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If896__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp178));
              iface.f_gen_store(v_UnsignedSatQ899__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ900__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp178));
              iface.f_gen_store(v_UnsignedSatQ899__3, iface.f_gen_slice(iface.f_gen_load(v_If896__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ900__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp177));
              v_SatQ897__2 = iface.f_gen_load(v_UnsignedSatQ899__3);
              v_SatQ898__2 = iface.f_gen_load(v_UnsignedSatQ900__3);
            } else {
              const auto v_SignedSatQ905__3 = iface.f_decl_bv("SignedSatQ905__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ906__3 = iface.f_decl_bool("SignedSatQ906__3");
              const auto v_temp179 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If896__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp179));
              iface.f_gen_store(v_SignedSatQ905__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ906__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp179));
              const auto v_temp180 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If896__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp180));
              iface.f_gen_store(v_SignedSatQ905__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ906__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp180));
              iface.f_gen_store(v_SignedSatQ905__3, iface.f_gen_slice(iface.f_gen_load(v_If896__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ906__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp179));
              v_SatQ897__2 = iface.f_gen_load(v_SignedSatQ905__3);
              v_SatQ898__2 = iface.f_gen_load(v_SignedSatQ906__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_SatQ897__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("104")))));
            const auto v_temp181 = iface.f_gen_branch(v_SatQ898__2);
            iface.f_switch_context(iface.f_true_branch(v_temp181));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp181));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If896__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("104")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If923__2 = iface.f_decl_bv("If923__2", iface.bigint_lit("129"));
          const auto v_temp182 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp182));
          iface.f_gen_store(v_If923__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp182));
          iface.f_gen_store(v_If923__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp182));
          v_round_const__1 = iface.f_gen_load(v_If923__2);
          auto v_If926__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If926__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If926__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If930__2 = iface.f_decl_bv("If930__2", iface.bigint_lit("257"));
          const auto v_temp183 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp183));
          iface.f_gen_store(v_If930__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If926__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If923__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp183));
          iface.f_gen_store(v_If930__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If926__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If923__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp183));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ931__2 = typename Traits::rt_expr{};
            auto v_SatQ932__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ933__3 = iface.f_decl_bv("UnsignedSatQ933__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ934__3 = iface.f_decl_bool("UnsignedSatQ934__3");
              const auto v_temp184 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If930__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp184));
              iface.f_gen_store(v_UnsignedSatQ933__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ934__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp184));
              const auto v_temp185 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If930__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp185));
              iface.f_gen_store(v_UnsignedSatQ933__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ934__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp185));
              iface.f_gen_store(v_UnsignedSatQ933__3, iface.f_gen_slice(iface.f_gen_load(v_If930__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ934__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp184));
              v_SatQ931__2 = iface.f_gen_load(v_UnsignedSatQ933__3);
              v_SatQ932__2 = iface.f_gen_load(v_UnsignedSatQ934__3);
            } else {
              const auto v_SignedSatQ939__3 = iface.f_decl_bv("SignedSatQ939__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ940__3 = iface.f_decl_bool("SignedSatQ940__3");
              const auto v_temp186 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If930__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp186));
              iface.f_gen_store(v_SignedSatQ939__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ940__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp186));
              const auto v_temp187 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If930__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp187));
              iface.f_gen_store(v_SignedSatQ939__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ940__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp187));
              iface.f_gen_store(v_SignedSatQ939__3, iface.f_gen_slice(iface.f_gen_load(v_If930__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ940__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp186));
              v_SatQ931__2 = iface.f_gen_load(v_SignedSatQ939__3);
              v_SatQ932__2 = iface.f_gen_load(v_SignedSatQ940__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_append_bits(v_SatQ931__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112")))));
            const auto v_temp188 = iface.f_gen_branch(v_SatQ932__2);
            iface.f_switch_context(iface.f_true_branch(v_temp188));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp188));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If930__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112")))));
          } // if
        } else {
          auto v_If956__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If956__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If956__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If961__2 = iface.f_decl_bv("If961__2", iface.bigint_lit("257"));
          const auto v_temp189 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp189));
          iface.f_gen_store(v_If961__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If956__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp189));
          iface.f_gen_store(v_If961__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If956__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp189));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ962__2 = typename Traits::rt_expr{};
            auto v_SatQ963__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ964__3 = iface.f_decl_bv("UnsignedSatQ964__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ965__3 = iface.f_decl_bool("UnsignedSatQ965__3");
              const auto v_temp190 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If961__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp190));
              iface.f_gen_store(v_UnsignedSatQ964__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ965__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp190));
              const auto v_temp191 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If961__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp191));
              iface.f_gen_store(v_UnsignedSatQ964__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ965__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp191));
              iface.f_gen_store(v_UnsignedSatQ964__3, iface.f_gen_slice(iface.f_gen_load(v_If961__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ965__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp190));
              v_SatQ962__2 = iface.f_gen_load(v_UnsignedSatQ964__3);
              v_SatQ963__2 = iface.f_gen_load(v_UnsignedSatQ965__3);
            } else {
              const auto v_SignedSatQ970__3 = iface.f_decl_bv("SignedSatQ970__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ971__3 = iface.f_decl_bool("SignedSatQ971__3");
              const auto v_temp192 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If961__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp192));
              iface.f_gen_store(v_SignedSatQ970__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ971__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp192));
              const auto v_temp193 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If961__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp193));
              iface.f_gen_store(v_SignedSatQ970__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ971__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp193));
              iface.f_gen_store(v_SignedSatQ970__3, iface.f_gen_slice(iface.f_gen_load(v_If961__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ971__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp192));
              v_SatQ962__2 = iface.f_gen_load(v_SignedSatQ970__3);
              v_SatQ963__2 = iface.f_gen_load(v_SignedSatQ971__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_append_bits(v_SatQ962__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112")))));
            const auto v_temp194 = iface.f_gen_branch(v_SatQ963__2);
            iface.f_switch_context(iface.f_true_branch(v_temp194));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp194));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If961__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If988__2 = iface.f_decl_bv("If988__2", iface.bigint_lit("129"));
          const auto v_temp195 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp195));
          iface.f_gen_store(v_If988__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp195));
          iface.f_gen_store(v_If988__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp195));
          auto v_If991__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If991__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If991__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If995__2 = iface.f_decl_bv("If995__2", iface.bigint_lit("257"));
          const auto v_temp196 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp196));
          iface.f_gen_store(v_If995__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If991__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If988__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp196));
          iface.f_gen_store(v_If995__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If991__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If988__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp196));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ996__2 = typename Traits::rt_expr{};
            auto v_SatQ997__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ998__3 = iface.f_decl_bv("UnsignedSatQ998__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ999__3 = iface.f_decl_bool("UnsignedSatQ999__3");
              const auto v_temp197 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If995__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp197));
              iface.f_gen_store(v_UnsignedSatQ998__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ999__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp197));
              const auto v_temp198 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If995__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp198));
              iface.f_gen_store(v_UnsignedSatQ998__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ999__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp198));
              iface.f_gen_store(v_UnsignedSatQ998__3, iface.f_gen_slice(iface.f_gen_load(v_If995__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ999__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp197));
              v_SatQ996__2 = iface.f_gen_load(v_UnsignedSatQ998__3);
              v_SatQ997__2 = iface.f_gen_load(v_UnsignedSatQ999__3);
            } else {
              const auto v_SignedSatQ1004__3 = iface.f_decl_bv("SignedSatQ1004__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1005__3 = iface.f_decl_bool("SignedSatQ1005__3");
              const auto v_temp199 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If995__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp199));
              iface.f_gen_store(v_SignedSatQ1004__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1005__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp199));
              const auto v_temp200 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If995__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp200));
              iface.f_gen_store(v_SignedSatQ1004__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1005__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp200));
              iface.f_gen_store(v_SignedSatQ1004__3, iface.f_gen_slice(iface.f_gen_load(v_If995__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1005__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp199));
              v_SatQ996__2 = iface.f_gen_load(v_SignedSatQ1004__3);
              v_SatQ997__2 = iface.f_gen_load(v_SignedSatQ1005__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ996__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("120"))));
            const auto v_temp201 = iface.f_gen_branch(v_SatQ997__2);
            iface.f_switch_context(iface.f_true_branch(v_temp201));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp201));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If995__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("120"))));
          } // if
        } else {
          auto v_If1021__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1021__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1021__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1026__2 = iface.f_decl_bv("If1026__2", iface.bigint_lit("257"));
          const auto v_temp202 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp202));
          iface.f_gen_store(v_If1026__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1021__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp202));
          iface.f_gen_store(v_If1026__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1021__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp202));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1027__2 = typename Traits::rt_expr{};
            auto v_SatQ1028__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1029__3 = iface.f_decl_bv("UnsignedSatQ1029__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1030__3 = iface.f_decl_bool("UnsignedSatQ1030__3");
              const auto v_temp203 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1026__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp203));
              iface.f_gen_store(v_UnsignedSatQ1029__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1030__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp203));
              const auto v_temp204 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1026__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp204));
              iface.f_gen_store(v_UnsignedSatQ1029__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1030__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp204));
              iface.f_gen_store(v_UnsignedSatQ1029__3, iface.f_gen_slice(iface.f_gen_load(v_If1026__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1030__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp203));
              v_SatQ1027__2 = iface.f_gen_load(v_UnsignedSatQ1029__3);
              v_SatQ1028__2 = iface.f_gen_load(v_UnsignedSatQ1030__3);
            } else {
              const auto v_SignedSatQ1035__3 = iface.f_decl_bv("SignedSatQ1035__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1036__3 = iface.f_decl_bool("SignedSatQ1036__3");
              const auto v_temp205 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1026__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp205));
              iface.f_gen_store(v_SignedSatQ1035__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1036__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp205));
              const auto v_temp206 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1026__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp206));
              iface.f_gen_store(v_SignedSatQ1035__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1036__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp206));
              iface.f_gen_store(v_SignedSatQ1035__3, iface.f_gen_slice(iface.f_gen_load(v_If1026__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1036__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp205));
              v_SatQ1027__2 = iface.f_gen_load(v_SignedSatQ1035__3);
              v_SatQ1028__2 = iface.f_gen_load(v_SignedSatQ1036__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ1027__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("120"))));
            const auto v_temp207 = iface.f_gen_branch(v_SatQ1028__2);
            iface.f_switch_context(iface.f_true_branch(v_temp207));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp207));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1026__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("120"))));
          } // if
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp1058__2 = typename Traits::rt_expr{};
        v_Exp1058__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp1061__2 = typename Traits::rt_expr{};
        v_Exp1061__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
        auto v_round_const__1 = typename Traits::rt_expr{};
        v_round_const__1 = iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If1065__2 = iface.f_decl_bv("If1065__2", iface.bigint_lit("129"));
          const auto v_temp208 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp208));
          iface.f_gen_store(v_If1065__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp208));
          iface.f_gen_store(v_If1065__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp208));
          v_round_const__1 = iface.f_gen_load(v_If1065__2);
          auto v_If1068__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1068__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1068__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1072__2 = iface.f_decl_bv("If1072__2", iface.bigint_lit("257"));
          const auto v_temp209 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp209));
          iface.f_gen_store(v_If1072__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1068__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1065__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp209));
          iface.f_gen_store(v_If1072__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1068__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1065__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp209));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1073__2 = typename Traits::rt_expr{};
            auto v_SatQ1074__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1075__3 = iface.f_decl_bv("UnsignedSatQ1075__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1076__3 = iface.f_decl_bool("UnsignedSatQ1076__3");
              const auto v_temp210 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1072__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp210));
              iface.f_gen_store(v_UnsignedSatQ1075__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1076__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp210));
              const auto v_temp211 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1072__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp211));
              iface.f_gen_store(v_UnsignedSatQ1075__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1076__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp211));
              iface.f_gen_store(v_UnsignedSatQ1075__3, iface.f_gen_slice(iface.f_gen_load(v_If1072__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1076__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp210));
              v_SatQ1073__2 = iface.f_gen_load(v_UnsignedSatQ1075__3);
              v_SatQ1074__2 = iface.f_gen_load(v_UnsignedSatQ1076__3);
            } else {
              const auto v_SignedSatQ1081__3 = iface.f_decl_bv("SignedSatQ1081__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1082__3 = iface.f_decl_bool("SignedSatQ1082__3");
              const auto v_temp212 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1072__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp212));
              iface.f_gen_store(v_SignedSatQ1081__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1082__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp212));
              const auto v_temp213 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1072__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp213));
              iface.f_gen_store(v_SignedSatQ1081__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1082__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp213));
              iface.f_gen_store(v_SignedSatQ1081__3, iface.f_gen_slice(iface.f_gen_load(v_If1072__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1082__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp212));
              v_SatQ1073__2 = iface.f_gen_load(v_SignedSatQ1081__3);
              v_SatQ1074__2 = iface.f_gen_load(v_SignedSatQ1082__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("56")), v_SatQ1073__2));
            const auto v_temp214 = iface.f_gen_branch(v_SatQ1074__2);
            iface.f_switch_context(iface.f_true_branch(v_temp214));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp214));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("56")), iface.f_gen_slice(iface.f_gen_load(v_If1072__2), iface.bigint_lit("0"), iface.bigint_lit("8"))));
          } // if
        } else {
          auto v_If1098__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1098__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1098__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1102__2 = iface.f_decl_bv("If1102__2", iface.bigint_lit("136"));
          const auto v_temp215 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp215));
          iface.f_gen_store(v_If1102__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1098__2, iface.f_gen_int_lit(iface.bigint_lit("136"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp215));
          iface.f_gen_store(v_If1102__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1098__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("136"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp215));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1103__2 = typename Traits::rt_expr{};
            auto v_SatQ1104__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1105__3 = iface.f_decl_bv("UnsignedSatQ1105__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1106__3 = iface.f_decl_bool("UnsignedSatQ1106__3");
              const auto v_temp216 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1102__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp216));
              iface.f_gen_store(v_UnsignedSatQ1105__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1106__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp216));
              const auto v_temp217 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1102__2), iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp217));
              iface.f_gen_store(v_UnsignedSatQ1105__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1106__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp217));
              iface.f_gen_store(v_UnsignedSatQ1105__3, iface.f_gen_slice(iface.f_gen_load(v_If1102__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1106__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp216));
              v_SatQ1103__2 = iface.f_gen_load(v_UnsignedSatQ1105__3);
              v_SatQ1104__2 = iface.f_gen_load(v_UnsignedSatQ1106__3);
            } else {
              const auto v_SignedSatQ1111__3 = iface.f_decl_bv("SignedSatQ1111__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1112__3 = iface.f_decl_bool("SignedSatQ1112__3");
              const auto v_temp218 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(136U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1102__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp218));
              iface.f_gen_store(v_SignedSatQ1111__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1112__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp218));
              const auto v_temp219 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1102__2), iface.f_gen_bit_lit(iface.bits_lit(136U, "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp219));
              iface.f_gen_store(v_SignedSatQ1111__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1112__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp219));
              iface.f_gen_store(v_SignedSatQ1111__3, iface.f_gen_slice(iface.f_gen_load(v_If1102__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1112__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp218));
              v_SatQ1103__2 = iface.f_gen_load(v_SignedSatQ1111__3);
              v_SatQ1104__2 = iface.f_gen_load(v_SignedSatQ1112__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("56")), v_SatQ1103__2));
            const auto v_temp220 = iface.f_gen_branch(v_SatQ1104__2);
            iface.f_switch_context(iface.f_true_branch(v_temp220));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp220));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("56")), iface.f_gen_slice(iface.f_gen_load(v_If1102__2), iface.bigint_lit("0"), iface.bigint_lit("8"))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If1129__2 = iface.f_decl_bv("If1129__2", iface.bigint_lit("129"));
          const auto v_temp221 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp221));
          iface.f_gen_store(v_If1129__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp221));
          iface.f_gen_store(v_If1129__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp221));
          v_round_const__1 = iface.f_gen_load(v_If1129__2);
          auto v_If1132__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1132__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1132__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1136__2 = iface.f_decl_bv("If1136__2", iface.bigint_lit("257"));
          const auto v_temp222 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp222));
          iface.f_gen_store(v_If1136__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1132__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1129__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp222));
          iface.f_gen_store(v_If1136__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1132__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1129__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp222));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1137__2 = typename Traits::rt_expr{};
            auto v_SatQ1138__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1139__3 = iface.f_decl_bv("UnsignedSatQ1139__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1140__3 = iface.f_decl_bool("UnsignedSatQ1140__3");
              const auto v_temp223 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1136__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp223));
              iface.f_gen_store(v_UnsignedSatQ1139__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1140__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp223));
              const auto v_temp224 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1136__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp224));
              iface.f_gen_store(v_UnsignedSatQ1139__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1140__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp224));
              iface.f_gen_store(v_UnsignedSatQ1139__3, iface.f_gen_slice(iface.f_gen_load(v_If1136__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1140__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp223));
              v_SatQ1137__2 = iface.f_gen_load(v_UnsignedSatQ1139__3);
              v_SatQ1138__2 = iface.f_gen_load(v_UnsignedSatQ1140__3);
            } else {
              const auto v_SignedSatQ1145__3 = iface.f_decl_bv("SignedSatQ1145__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1146__3 = iface.f_decl_bool("SignedSatQ1146__3");
              const auto v_temp225 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1136__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp225));
              iface.f_gen_store(v_SignedSatQ1145__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1146__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp225));
              const auto v_temp226 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1136__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp226));
              iface.f_gen_store(v_SignedSatQ1145__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1146__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp226));
              iface.f_gen_store(v_SignedSatQ1145__3, iface.f_gen_slice(iface.f_gen_load(v_If1136__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1146__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp225));
              v_SatQ1137__2 = iface.f_gen_load(v_SignedSatQ1145__3);
              v_SatQ1138__2 = iface.f_gen_load(v_SignedSatQ1146__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_SatQ1137__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
            const auto v_temp227 = iface.f_gen_branch(v_SatQ1138__2);
            iface.f_switch_context(iface.f_true_branch(v_temp227));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp227));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1136__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
          } // if
        } else {
          auto v_If1162__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1162__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1162__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1167__2 = iface.f_decl_bv("If1167__2", iface.bigint_lit("257"));
          const auto v_temp228 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp228));
          iface.f_gen_store(v_If1167__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1162__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp228));
          iface.f_gen_store(v_If1167__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1162__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp228));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1168__2 = typename Traits::rt_expr{};
            auto v_SatQ1169__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1170__3 = iface.f_decl_bv("UnsignedSatQ1170__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1171__3 = iface.f_decl_bool("UnsignedSatQ1171__3");
              const auto v_temp229 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1167__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp229));
              iface.f_gen_store(v_UnsignedSatQ1170__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1171__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp229));
              const auto v_temp230 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1167__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp230));
              iface.f_gen_store(v_UnsignedSatQ1170__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1171__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp230));
              iface.f_gen_store(v_UnsignedSatQ1170__3, iface.f_gen_slice(iface.f_gen_load(v_If1167__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1171__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp229));
              v_SatQ1168__2 = iface.f_gen_load(v_UnsignedSatQ1170__3);
              v_SatQ1169__2 = iface.f_gen_load(v_UnsignedSatQ1171__3);
            } else {
              const auto v_SignedSatQ1176__3 = iface.f_decl_bv("SignedSatQ1176__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1177__3 = iface.f_decl_bool("SignedSatQ1177__3");
              const auto v_temp231 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1167__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp231));
              iface.f_gen_store(v_SignedSatQ1176__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1177__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp231));
              const auto v_temp232 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1167__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp232));
              iface.f_gen_store(v_SignedSatQ1176__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1177__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp232));
              iface.f_gen_store(v_SignedSatQ1176__3, iface.f_gen_slice(iface.f_gen_load(v_If1167__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1177__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp231));
              v_SatQ1168__2 = iface.f_gen_load(v_SignedSatQ1176__3);
              v_SatQ1169__2 = iface.f_gen_load(v_SignedSatQ1177__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_SatQ1168__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
            const auto v_temp233 = iface.f_gen_branch(v_SatQ1169__2);
            iface.f_switch_context(iface.f_true_branch(v_temp233));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp233));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1167__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If1194__2 = iface.f_decl_bv("If1194__2", iface.bigint_lit("129"));
          const auto v_temp234 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp234));
          iface.f_gen_store(v_If1194__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp234));
          iface.f_gen_store(v_If1194__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp234));
          v_round_const__1 = iface.f_gen_load(v_If1194__2);
          auto v_If1197__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1197__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1197__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1201__2 = iface.f_decl_bv("If1201__2", iface.bigint_lit("257"));
          const auto v_temp235 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp235));
          iface.f_gen_store(v_If1201__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1197__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1194__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp235));
          iface.f_gen_store(v_If1201__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1197__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1194__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp235));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1202__2 = typename Traits::rt_expr{};
            auto v_SatQ1203__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1204__3 = iface.f_decl_bv("UnsignedSatQ1204__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1205__3 = iface.f_decl_bool("UnsignedSatQ1205__3");
              const auto v_temp236 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1201__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp236));
              iface.f_gen_store(v_UnsignedSatQ1204__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1205__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp236));
              const auto v_temp237 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1201__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp237));
              iface.f_gen_store(v_UnsignedSatQ1204__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1205__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp237));
              iface.f_gen_store(v_UnsignedSatQ1204__3, iface.f_gen_slice(iface.f_gen_load(v_If1201__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1205__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp236));
              v_SatQ1202__2 = iface.f_gen_load(v_UnsignedSatQ1204__3);
              v_SatQ1203__2 = iface.f_gen_load(v_UnsignedSatQ1205__3);
            } else {
              const auto v_SignedSatQ1210__3 = iface.f_decl_bv("SignedSatQ1210__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1211__3 = iface.f_decl_bool("SignedSatQ1211__3");
              const auto v_temp238 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1201__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp238));
              iface.f_gen_store(v_SignedSatQ1210__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1211__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp238));
              const auto v_temp239 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1201__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp239));
              iface.f_gen_store(v_SignedSatQ1210__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1211__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp239));
              iface.f_gen_store(v_SignedSatQ1210__3, iface.f_gen_slice(iface.f_gen_load(v_If1201__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1211__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp238));
              v_SatQ1202__2 = iface.f_gen_load(v_SignedSatQ1210__3);
              v_SatQ1203__2 = iface.f_gen_load(v_SignedSatQ1211__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("40")), iface.f_gen_append_bits(v_SatQ1202__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
            const auto v_temp240 = iface.f_gen_branch(v_SatQ1203__2);
            iface.f_switch_context(iface.f_true_branch(v_temp240));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp240));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("40")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1201__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
        } else {
          auto v_If1227__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1227__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1227__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1232__2 = iface.f_decl_bv("If1232__2", iface.bigint_lit("257"));
          const auto v_temp241 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp241));
          iface.f_gen_store(v_If1232__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1227__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp241));
          iface.f_gen_store(v_If1232__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1227__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp241));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1233__2 = typename Traits::rt_expr{};
            auto v_SatQ1234__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1235__3 = iface.f_decl_bv("UnsignedSatQ1235__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1236__3 = iface.f_decl_bool("UnsignedSatQ1236__3");
              const auto v_temp242 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1232__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp242));
              iface.f_gen_store(v_UnsignedSatQ1235__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1236__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp242));
              const auto v_temp243 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1232__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp243));
              iface.f_gen_store(v_UnsignedSatQ1235__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1236__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp243));
              iface.f_gen_store(v_UnsignedSatQ1235__3, iface.f_gen_slice(iface.f_gen_load(v_If1232__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1236__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp242));
              v_SatQ1233__2 = iface.f_gen_load(v_UnsignedSatQ1235__3);
              v_SatQ1234__2 = iface.f_gen_load(v_UnsignedSatQ1236__3);
            } else {
              const auto v_SignedSatQ1241__3 = iface.f_decl_bv("SignedSatQ1241__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1242__3 = iface.f_decl_bool("SignedSatQ1242__3");
              const auto v_temp244 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1232__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp244));
              iface.f_gen_store(v_SignedSatQ1241__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1242__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp244));
              const auto v_temp245 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1232__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp245));
              iface.f_gen_store(v_SignedSatQ1241__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1242__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp245));
              iface.f_gen_store(v_SignedSatQ1241__3, iface.f_gen_slice(iface.f_gen_load(v_If1232__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1242__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp244));
              v_SatQ1233__2 = iface.f_gen_load(v_SignedSatQ1241__3);
              v_SatQ1234__2 = iface.f_gen_load(v_SignedSatQ1242__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("40")), iface.f_gen_append_bits(v_SatQ1233__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
            const auto v_temp246 = iface.f_gen_branch(v_SatQ1234__2);
            iface.f_switch_context(iface.f_true_branch(v_temp246));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp246));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("40")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1232__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If1259__2 = iface.f_decl_bv("If1259__2", iface.bigint_lit("129"));
          const auto v_temp247 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp247));
          iface.f_gen_store(v_If1259__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp247));
          iface.f_gen_store(v_If1259__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp247));
          v_round_const__1 = iface.f_gen_load(v_If1259__2);
          auto v_If1262__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1262__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1262__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1266__2 = iface.f_decl_bv("If1266__2", iface.bigint_lit("257"));
          const auto v_temp248 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp248));
          iface.f_gen_store(v_If1266__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1262__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1259__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp248));
          iface.f_gen_store(v_If1266__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1262__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1259__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp248));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1267__2 = typename Traits::rt_expr{};
            auto v_SatQ1268__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1269__3 = iface.f_decl_bv("UnsignedSatQ1269__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1270__3 = iface.f_decl_bool("UnsignedSatQ1270__3");
              const auto v_temp249 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1266__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp249));
              iface.f_gen_store(v_UnsignedSatQ1269__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1270__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp249));
              const auto v_temp250 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1266__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp250));
              iface.f_gen_store(v_UnsignedSatQ1269__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1270__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp250));
              iface.f_gen_store(v_UnsignedSatQ1269__3, iface.f_gen_slice(iface.f_gen_load(v_If1266__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1270__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp249));
              v_SatQ1267__2 = iface.f_gen_load(v_UnsignedSatQ1269__3);
              v_SatQ1268__2 = iface.f_gen_load(v_UnsignedSatQ1270__3);
            } else {
              const auto v_SignedSatQ1275__3 = iface.f_decl_bv("SignedSatQ1275__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1276__3 = iface.f_decl_bool("SignedSatQ1276__3");
              const auto v_temp251 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1266__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp251));
              iface.f_gen_store(v_SignedSatQ1275__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1276__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp251));
              const auto v_temp252 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1266__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp252));
              iface.f_gen_store(v_SignedSatQ1275__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1276__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp252));
              iface.f_gen_store(v_SignedSatQ1275__3, iface.f_gen_slice(iface.f_gen_load(v_If1266__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1276__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp251));
              v_SatQ1267__2 = iface.f_gen_load(v_SignedSatQ1275__3);
              v_SatQ1268__2 = iface.f_gen_load(v_SignedSatQ1276__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ1267__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
            const auto v_temp253 = iface.f_gen_branch(v_SatQ1268__2);
            iface.f_switch_context(iface.f_true_branch(v_temp253));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp253));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1266__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
          } // if
        } else {
          auto v_If1292__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1292__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1292__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1297__2 = iface.f_decl_bv("If1297__2", iface.bigint_lit("257"));
          const auto v_temp254 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp254));
          iface.f_gen_store(v_If1297__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1292__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp254));
          iface.f_gen_store(v_If1297__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1292__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp254));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1298__2 = typename Traits::rt_expr{};
            auto v_SatQ1299__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1300__3 = iface.f_decl_bv("UnsignedSatQ1300__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1301__3 = iface.f_decl_bool("UnsignedSatQ1301__3");
              const auto v_temp255 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1297__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp255));
              iface.f_gen_store(v_UnsignedSatQ1300__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1301__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp255));
              const auto v_temp256 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1297__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp256));
              iface.f_gen_store(v_UnsignedSatQ1300__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1301__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp256));
              iface.f_gen_store(v_UnsignedSatQ1300__3, iface.f_gen_slice(iface.f_gen_load(v_If1297__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1301__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp255));
              v_SatQ1298__2 = iface.f_gen_load(v_UnsignedSatQ1300__3);
              v_SatQ1299__2 = iface.f_gen_load(v_UnsignedSatQ1301__3);
            } else {
              const auto v_SignedSatQ1306__3 = iface.f_decl_bv("SignedSatQ1306__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1307__3 = iface.f_decl_bool("SignedSatQ1307__3");
              const auto v_temp257 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1297__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp257));
              iface.f_gen_store(v_SignedSatQ1306__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1307__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp257));
              const auto v_temp258 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1297__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp258));
              iface.f_gen_store(v_SignedSatQ1306__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1307__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp258));
              iface.f_gen_store(v_SignedSatQ1306__3, iface.f_gen_slice(iface.f_gen_load(v_If1297__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1307__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp257));
              v_SatQ1298__2 = iface.f_gen_load(v_SignedSatQ1306__3);
              v_SatQ1299__2 = iface.f_gen_load(v_SignedSatQ1307__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ1298__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
            const auto v_temp259 = iface.f_gen_branch(v_SatQ1299__2);
            iface.f_switch_context(iface.f_true_branch(v_temp259));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp259));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1297__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If1324__2 = iface.f_decl_bv("If1324__2", iface.bigint_lit("129"));
          const auto v_temp260 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp260));
          iface.f_gen_store(v_If1324__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp260));
          iface.f_gen_store(v_If1324__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp260));
          v_round_const__1 = iface.f_gen_load(v_If1324__2);
          auto v_If1327__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1327__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1327__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1331__2 = iface.f_decl_bv("If1331__2", iface.bigint_lit("257"));
          const auto v_temp261 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp261));
          iface.f_gen_store(v_If1331__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1327__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1324__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp261));
          iface.f_gen_store(v_If1331__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1327__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1324__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp261));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1332__2 = typename Traits::rt_expr{};
            auto v_SatQ1333__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1334__3 = iface.f_decl_bv("UnsignedSatQ1334__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1335__3 = iface.f_decl_bool("UnsignedSatQ1335__3");
              const auto v_temp262 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1331__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp262));
              iface.f_gen_store(v_UnsignedSatQ1334__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1335__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp262));
              const auto v_temp263 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1331__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp263));
              iface.f_gen_store(v_UnsignedSatQ1334__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1335__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp263));
              iface.f_gen_store(v_UnsignedSatQ1334__3, iface.f_gen_slice(iface.f_gen_load(v_If1331__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1335__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp262));
              v_SatQ1332__2 = iface.f_gen_load(v_UnsignedSatQ1334__3);
              v_SatQ1333__2 = iface.f_gen_load(v_UnsignedSatQ1335__3);
            } else {
              const auto v_SignedSatQ1340__3 = iface.f_decl_bv("SignedSatQ1340__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1341__3 = iface.f_decl_bool("SignedSatQ1341__3");
              const auto v_temp264 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1331__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp264));
              iface.f_gen_store(v_SignedSatQ1340__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1341__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp264));
              const auto v_temp265 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1331__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp265));
              iface.f_gen_store(v_SignedSatQ1340__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1341__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp265));
              iface.f_gen_store(v_SignedSatQ1340__3, iface.f_gen_slice(iface.f_gen_load(v_If1331__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1341__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp264));
              v_SatQ1332__2 = iface.f_gen_load(v_SignedSatQ1340__3);
              v_SatQ1333__2 = iface.f_gen_load(v_SignedSatQ1341__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("24")), iface.f_gen_append_bits(v_SatQ1332__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            const auto v_temp266 = iface.f_gen_branch(v_SatQ1333__2);
            iface.f_switch_context(iface.f_true_branch(v_temp266));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp266));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1331__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
        } else {
          auto v_If1357__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1357__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1357__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1362__2 = iface.f_decl_bv("If1362__2", iface.bigint_lit("257"));
          const auto v_temp267 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp267));
          iface.f_gen_store(v_If1362__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1357__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp267));
          iface.f_gen_store(v_If1362__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1357__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp267));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1363__2 = typename Traits::rt_expr{};
            auto v_SatQ1364__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1365__3 = iface.f_decl_bv("UnsignedSatQ1365__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1366__3 = iface.f_decl_bool("UnsignedSatQ1366__3");
              const auto v_temp268 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1362__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp268));
              iface.f_gen_store(v_UnsignedSatQ1365__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1366__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp268));
              const auto v_temp269 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1362__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp269));
              iface.f_gen_store(v_UnsignedSatQ1365__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1366__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp269));
              iface.f_gen_store(v_UnsignedSatQ1365__3, iface.f_gen_slice(iface.f_gen_load(v_If1362__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1366__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp268));
              v_SatQ1363__2 = iface.f_gen_load(v_UnsignedSatQ1365__3);
              v_SatQ1364__2 = iface.f_gen_load(v_UnsignedSatQ1366__3);
            } else {
              const auto v_SignedSatQ1371__3 = iface.f_decl_bv("SignedSatQ1371__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1372__3 = iface.f_decl_bool("SignedSatQ1372__3");
              const auto v_temp270 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1362__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp270));
              iface.f_gen_store(v_SignedSatQ1371__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1372__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp270));
              const auto v_temp271 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1362__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp271));
              iface.f_gen_store(v_SignedSatQ1371__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1372__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp271));
              iface.f_gen_store(v_SignedSatQ1371__3, iface.f_gen_slice(iface.f_gen_load(v_If1362__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1372__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp270));
              v_SatQ1363__2 = iface.f_gen_load(v_SignedSatQ1371__3);
              v_SatQ1364__2 = iface.f_gen_load(v_SignedSatQ1372__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("24")), iface.f_gen_append_bits(v_SatQ1363__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            const auto v_temp272 = iface.f_gen_branch(v_SatQ1364__2);
            iface.f_switch_context(iface.f_true_branch(v_temp272));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp272));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1362__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If1389__2 = iface.f_decl_bv("If1389__2", iface.bigint_lit("129"));
          const auto v_temp273 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp273));
          iface.f_gen_store(v_If1389__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp273));
          iface.f_gen_store(v_If1389__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp273));
          v_round_const__1 = iface.f_gen_load(v_If1389__2);
          auto v_If1392__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1392__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1392__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1396__2 = iface.f_decl_bv("If1396__2", iface.bigint_lit("257"));
          const auto v_temp274 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp274));
          iface.f_gen_store(v_If1396__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1392__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1389__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp274));
          iface.f_gen_store(v_If1396__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1392__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1389__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp274));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1397__2 = typename Traits::rt_expr{};
            auto v_SatQ1398__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1399__3 = iface.f_decl_bv("UnsignedSatQ1399__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1400__3 = iface.f_decl_bool("UnsignedSatQ1400__3");
              const auto v_temp275 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1396__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp275));
              iface.f_gen_store(v_UnsignedSatQ1399__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1400__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp275));
              const auto v_temp276 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1396__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp276));
              iface.f_gen_store(v_UnsignedSatQ1399__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1400__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp276));
              iface.f_gen_store(v_UnsignedSatQ1399__3, iface.f_gen_slice(iface.f_gen_load(v_If1396__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1400__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp275));
              v_SatQ1397__2 = iface.f_gen_load(v_UnsignedSatQ1399__3);
              v_SatQ1398__2 = iface.f_gen_load(v_UnsignedSatQ1400__3);
            } else {
              const auto v_SignedSatQ1405__3 = iface.f_decl_bv("SignedSatQ1405__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1406__3 = iface.f_decl_bool("SignedSatQ1406__3");
              const auto v_temp277 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1396__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp277));
              iface.f_gen_store(v_SignedSatQ1405__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1406__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp277));
              const auto v_temp278 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1396__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp278));
              iface.f_gen_store(v_SignedSatQ1405__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1406__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp278));
              iface.f_gen_store(v_SignedSatQ1405__3, iface.f_gen_slice(iface.f_gen_load(v_If1396__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1406__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp277));
              v_SatQ1397__2 = iface.f_gen_load(v_SignedSatQ1405__3);
              v_SatQ1398__2 = iface.f_gen_load(v_SignedSatQ1406__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_SatQ1397__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
            const auto v_temp279 = iface.f_gen_branch(v_SatQ1398__2);
            iface.f_switch_context(iface.f_true_branch(v_temp279));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp279));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1396__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
          } // if
        } else {
          auto v_If1422__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1422__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1422__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1427__2 = iface.f_decl_bv("If1427__2", iface.bigint_lit("257"));
          const auto v_temp280 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp280));
          iface.f_gen_store(v_If1427__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1422__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp280));
          iface.f_gen_store(v_If1427__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1422__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp280));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1428__2 = typename Traits::rt_expr{};
            auto v_SatQ1429__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1430__3 = iface.f_decl_bv("UnsignedSatQ1430__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1431__3 = iface.f_decl_bool("UnsignedSatQ1431__3");
              const auto v_temp281 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1427__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp281));
              iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1431__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp281));
              const auto v_temp282 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1427__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp282));
              iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1431__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp282));
              iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_slice(iface.f_gen_load(v_If1427__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1431__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp281));
              v_SatQ1428__2 = iface.f_gen_load(v_UnsignedSatQ1430__3);
              v_SatQ1429__2 = iface.f_gen_load(v_UnsignedSatQ1431__3);
            } else {
              const auto v_SignedSatQ1436__3 = iface.f_decl_bv("SignedSatQ1436__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1437__3 = iface.f_decl_bool("SignedSatQ1437__3");
              const auto v_temp283 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1427__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp283));
              iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1437__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp283));
              const auto v_temp284 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1427__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp284));
              iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1437__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp284));
              iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_slice(iface.f_gen_load(v_If1427__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1437__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp283));
              v_SatQ1428__2 = iface.f_gen_load(v_SignedSatQ1436__3);
              v_SatQ1429__2 = iface.f_gen_load(v_SignedSatQ1437__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_SatQ1428__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
            const auto v_temp285 = iface.f_gen_branch(v_SatQ1429__2);
            iface.f_switch_context(iface.f_true_branch(v_temp285));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp285));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1427__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If1454__2 = iface.f_decl_bv("If1454__2", iface.bigint_lit("129"));
          const auto v_temp286 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp286));
          iface.f_gen_store(v_If1454__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp286));
          iface.f_gen_store(v_If1454__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp286));
          v_round_const__1 = iface.f_gen_load(v_If1454__2);
          auto v_If1457__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1457__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1457__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1461__2 = iface.f_decl_bv("If1461__2", iface.bigint_lit("257"));
          const auto v_temp287 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp287));
          iface.f_gen_store(v_If1461__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1457__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1454__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp287));
          iface.f_gen_store(v_If1461__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1457__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1454__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp287));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1462__2 = typename Traits::rt_expr{};
            auto v_SatQ1463__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1464__3 = iface.f_decl_bv("UnsignedSatQ1464__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1465__3 = iface.f_decl_bool("UnsignedSatQ1465__3");
              const auto v_temp288 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1461__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp288));
              iface.f_gen_store(v_UnsignedSatQ1464__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1465__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp288));
              const auto v_temp289 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1461__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp289));
              iface.f_gen_store(v_UnsignedSatQ1464__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1465__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp289));
              iface.f_gen_store(v_UnsignedSatQ1464__3, iface.f_gen_slice(iface.f_gen_load(v_If1461__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1465__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp288));
              v_SatQ1462__2 = iface.f_gen_load(v_UnsignedSatQ1464__3);
              v_SatQ1463__2 = iface.f_gen_load(v_UnsignedSatQ1465__3);
            } else {
              const auto v_SignedSatQ1470__3 = iface.f_decl_bv("SignedSatQ1470__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1471__3 = iface.f_decl_bool("SignedSatQ1471__3");
              const auto v_temp290 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1461__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp290));
              iface.f_gen_store(v_SignedSatQ1470__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1471__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp290));
              const auto v_temp291 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1461__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp291));
              iface.f_gen_store(v_SignedSatQ1470__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1471__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp291));
              iface.f_gen_store(v_SignedSatQ1470__3, iface.f_gen_slice(iface.f_gen_load(v_If1461__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1471__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp290));
              v_SatQ1462__2 = iface.f_gen_load(v_SignedSatQ1470__3);
              v_SatQ1463__2 = iface.f_gen_load(v_SignedSatQ1471__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_append_bits(v_SatQ1462__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
            const auto v_temp292 = iface.f_gen_branch(v_SatQ1463__2);
            iface.f_switch_context(iface.f_true_branch(v_temp292));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp292));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1461__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } // if
        } else {
          auto v_If1487__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1487__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1487__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1492__2 = iface.f_decl_bv("If1492__2", iface.bigint_lit("257"));
          const auto v_temp293 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp293));
          iface.f_gen_store(v_If1492__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1487__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp293));
          iface.f_gen_store(v_If1492__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1487__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp293));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1493__2 = typename Traits::rt_expr{};
            auto v_SatQ1494__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1495__3 = iface.f_decl_bv("UnsignedSatQ1495__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1496__3 = iface.f_decl_bool("UnsignedSatQ1496__3");
              const auto v_temp294 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1492__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp294));
              iface.f_gen_store(v_UnsignedSatQ1495__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1496__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp294));
              const auto v_temp295 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1492__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp295));
              iface.f_gen_store(v_UnsignedSatQ1495__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1496__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp295));
              iface.f_gen_store(v_UnsignedSatQ1495__3, iface.f_gen_slice(iface.f_gen_load(v_If1492__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1496__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp294));
              v_SatQ1493__2 = iface.f_gen_load(v_UnsignedSatQ1495__3);
              v_SatQ1494__2 = iface.f_gen_load(v_UnsignedSatQ1496__3);
            } else {
              const auto v_SignedSatQ1501__3 = iface.f_decl_bv("SignedSatQ1501__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1502__3 = iface.f_decl_bool("SignedSatQ1502__3");
              const auto v_temp296 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1492__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp296));
              iface.f_gen_store(v_SignedSatQ1501__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1502__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp296));
              const auto v_temp297 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1492__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp297));
              iface.f_gen_store(v_SignedSatQ1501__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1502__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp297));
              iface.f_gen_store(v_SignedSatQ1501__3, iface.f_gen_slice(iface.f_gen_load(v_If1492__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1502__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp296));
              v_SatQ1493__2 = iface.f_gen_load(v_SignedSatQ1501__3);
              v_SatQ1494__2 = iface.f_gen_load(v_SignedSatQ1502__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_append_bits(v_SatQ1493__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
            const auto v_temp298 = iface.f_gen_branch(v_SatQ1494__2);
            iface.f_switch_context(iface.f_true_branch(v_temp298));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp298));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1492__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_If1519__2 = iface.f_decl_bv("If1519__2", iface.bigint_lit("129"));
          const auto v_temp299 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
          iface.f_switch_context(iface.f_true_branch(v_temp299));
          iface.f_gen_store(v_If1519__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_false_branch(v_temp299));
          iface.f_gen_store(v_If1519__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp299));
          auto v_If1522__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1522__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1522__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1526__2 = iface.f_decl_bv("If1526__2", iface.bigint_lit("257"));
          const auto v_temp300 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp300));
          iface.f_gen_store(v_If1526__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1522__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1519__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp300));
          iface.f_gen_store(v_If1526__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1522__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1519__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp300));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1527__2 = typename Traits::rt_expr{};
            auto v_SatQ1528__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1529__3 = iface.f_decl_bv("UnsignedSatQ1529__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1530__3 = iface.f_decl_bool("UnsignedSatQ1530__3");
              const auto v_temp301 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1526__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp301));
              iface.f_gen_store(v_UnsignedSatQ1529__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1530__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp301));
              const auto v_temp302 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1526__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp302));
              iface.f_gen_store(v_UnsignedSatQ1529__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1530__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp302));
              iface.f_gen_store(v_UnsignedSatQ1529__3, iface.f_gen_slice(iface.f_gen_load(v_If1526__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1530__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp301));
              v_SatQ1527__2 = iface.f_gen_load(v_UnsignedSatQ1529__3);
              v_SatQ1528__2 = iface.f_gen_load(v_UnsignedSatQ1530__3);
            } else {
              const auto v_SignedSatQ1535__3 = iface.f_decl_bv("SignedSatQ1535__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1536__3 = iface.f_decl_bool("SignedSatQ1536__3");
              const auto v_temp303 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1526__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp303));
              iface.f_gen_store(v_SignedSatQ1535__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1536__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp303));
              const auto v_temp304 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1526__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp304));
              iface.f_gen_store(v_SignedSatQ1535__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1536__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp304));
              iface.f_gen_store(v_SignedSatQ1535__3, iface.f_gen_slice(iface.f_gen_load(v_If1526__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1536__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp303));
              v_SatQ1527__2 = iface.f_gen_load(v_SignedSatQ1535__3);
              v_SatQ1528__2 = iface.f_gen_load(v_SignedSatQ1536__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ1527__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56"))));
            const auto v_temp305 = iface.f_gen_branch(v_SatQ1528__2);
            iface.f_switch_context(iface.f_true_branch(v_temp305));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp305));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1526__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56"))));
          } // if
        } else {
          auto v_If1552__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1552__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If1552__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1058__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          const auto v_If1557__2 = iface.f_decl_bv("If1557__2", iface.bigint_lit("257"));
          const auto v_temp306 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp306));
          iface.f_gen_store(v_If1557__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1552__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_false_branch(v_temp306));
          iface.f_gen_store(v_If1557__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1552__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1061__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp306));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_SatQ1558__2 = typename Traits::rt_expr{};
            auto v_SatQ1559__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1560__3 = iface.f_decl_bv("UnsignedSatQ1560__3", iface.bigint_lit("8"));
              const auto v_UnsignedSatQ1561__3 = iface.f_decl_bool("UnsignedSatQ1561__3");
              const auto v_temp307 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), iface.f_gen_load(v_If1557__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp307));
              iface.f_gen_store(v_UnsignedSatQ1560__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
              iface.f_gen_store(v_UnsignedSatQ1561__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp307));
              const auto v_temp308 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1557__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp308));
              iface.f_gen_store(v_UnsignedSatQ1560__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              iface.f_gen_store(v_UnsignedSatQ1561__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp308));
              iface.f_gen_store(v_UnsignedSatQ1560__3, iface.f_gen_slice(iface.f_gen_load(v_If1557__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_UnsignedSatQ1561__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp307));
              v_SatQ1558__2 = iface.f_gen_load(v_UnsignedSatQ1560__3);
              v_SatQ1559__2 = iface.f_gen_load(v_UnsignedSatQ1561__3);
            } else {
              const auto v_SignedSatQ1566__3 = iface.f_decl_bv("SignedSatQ1566__3", iface.bigint_lit("8"));
              const auto v_SignedSatQ1567__3 = iface.f_decl_bool("SignedSatQ1567__3");
              const auto v_temp309 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), iface.f_gen_load(v_If1557__2)));
              iface.f_switch_context(iface.f_true_branch(v_temp309));
              iface.f_gen_store(v_SignedSatQ1566__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
              iface.f_gen_store(v_SignedSatQ1567__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp309));
              const auto v_temp310 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1557__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp310));
              iface.f_gen_store(v_SignedSatQ1566__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
              iface.f_gen_store(v_SignedSatQ1567__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp310));
              iface.f_gen_store(v_SignedSatQ1566__3, iface.f_gen_slice(iface.f_gen_load(v_If1557__2), iface.bigint_lit("0"), iface.bigint_lit("8")));
              iface.f_gen_store(v_SignedSatQ1567__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp309));
              v_SatQ1558__2 = iface.f_gen_load(v_SignedSatQ1566__3);
              v_SatQ1559__2 = iface.f_gen_load(v_SignedSatQ1567__3);
            } // if
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ1558__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56"))));
            const auto v_temp311 = iface.f_gen_branch(v_SatQ1559__2);
            iface.f_switch_context(iface.f_true_branch(v_temp311));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp311));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1557__2), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56"))));
          } // if
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp1590__2 = typename Traits::rt_expr{};
          v_Exp1590__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp1593__2 = typename Traits::rt_expr{};
          v_Exp1593__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
          auto v_round_const__1 = typename Traits::rt_expr{};
          v_round_const__1 = iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If1597__2 = iface.f_decl_bv("If1597__2", iface.bigint_lit("129"));
            const auto v_temp312 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp312));
            iface.f_gen_store(v_If1597__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp312));
            iface.f_gen_store(v_If1597__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp312));
            v_round_const__1 = iface.f_gen_load(v_If1597__2);
            auto v_If1600__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1600__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1600__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1604__2 = iface.f_decl_bv("If1604__2", iface.bigint_lit("257"));
            const auto v_temp313 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp313));
            iface.f_gen_store(v_If1604__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1600__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1597__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp313));
            iface.f_gen_store(v_If1604__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1600__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1597__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp313));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1605__2 = typename Traits::rt_expr{};
              auto v_SatQ1606__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1607__3 = iface.f_decl_bv("UnsignedSatQ1607__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1608__3 = iface.f_decl_bool("UnsignedSatQ1608__3");
                const auto v_temp314 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1604__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp314));
                iface.f_gen_store(v_UnsignedSatQ1607__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1608__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp314));
                const auto v_temp315 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1604__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp315));
                iface.f_gen_store(v_UnsignedSatQ1607__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1608__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp315));
                iface.f_gen_store(v_UnsignedSatQ1607__3, iface.f_gen_slice(iface.f_gen_load(v_If1604__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1608__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp314));
                v_SatQ1605__2 = iface.f_gen_load(v_UnsignedSatQ1607__3);
                v_SatQ1606__2 = iface.f_gen_load(v_UnsignedSatQ1608__3);
              } else {
                const auto v_SignedSatQ1613__3 = iface.f_decl_bv("SignedSatQ1613__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1614__3 = iface.f_decl_bool("SignedSatQ1614__3");
                const auto v_temp316 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1604__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp316));
                iface.f_gen_store(v_SignedSatQ1613__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1614__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp316));
                const auto v_temp317 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1604__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp317));
                iface.f_gen_store(v_SignedSatQ1613__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1614__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp317));
                iface.f_gen_store(v_SignedSatQ1613__3, iface.f_gen_slice(iface.f_gen_load(v_If1604__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1614__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp316));
                v_SatQ1605__2 = iface.f_gen_load(v_SignedSatQ1613__3);
                v_SatQ1606__2 = iface.f_gen_load(v_SignedSatQ1614__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), v_SatQ1605__2));
              const auto v_temp318 = iface.f_gen_branch(v_SatQ1606__2);
              iface.f_switch_context(iface.f_true_branch(v_temp318));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp318));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_slice(iface.f_gen_load(v_If1604__2), iface.bigint_lit("0"), iface.bigint_lit("16"))));
            } // if
          } else {
            auto v_If1630__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1630__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1630__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1634__2 = iface.f_decl_bv("If1634__2", iface.bigint_lit("144"));
            const auto v_temp319 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp319));
            iface.f_gen_store(v_If1634__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1630__2, iface.f_gen_int_lit(iface.bigint_lit("144"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp319));
            iface.f_gen_store(v_If1634__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1630__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("144"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp319));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1635__2 = typename Traits::rt_expr{};
              auto v_SatQ1636__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1637__3 = iface.f_decl_bv("UnsignedSatQ1637__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1638__3 = iface.f_decl_bool("UnsignedSatQ1638__3");
                const auto v_temp320 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1634__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp320));
                iface.f_gen_store(v_UnsignedSatQ1637__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1638__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp320));
                const auto v_temp321 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1634__2), iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp321));
                iface.f_gen_store(v_UnsignedSatQ1637__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1638__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp321));
                iface.f_gen_store(v_UnsignedSatQ1637__3, iface.f_gen_slice(iface.f_gen_load(v_If1634__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1638__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp320));
                v_SatQ1635__2 = iface.f_gen_load(v_UnsignedSatQ1637__3);
                v_SatQ1636__2 = iface.f_gen_load(v_UnsignedSatQ1638__3);
              } else {
                const auto v_SignedSatQ1643__3 = iface.f_decl_bv("SignedSatQ1643__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1644__3 = iface.f_decl_bool("SignedSatQ1644__3");
                const auto v_temp322 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1634__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp322));
                iface.f_gen_store(v_SignedSatQ1643__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1644__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp322));
                const auto v_temp323 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1634__2), iface.f_gen_bit_lit(iface.bits_lit(144U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp323));
                iface.f_gen_store(v_SignedSatQ1643__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1644__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp323));
                iface.f_gen_store(v_SignedSatQ1643__3, iface.f_gen_slice(iface.f_gen_load(v_If1634__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1644__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp322));
                v_SatQ1635__2 = iface.f_gen_load(v_SignedSatQ1643__3);
                v_SatQ1636__2 = iface.f_gen_load(v_SignedSatQ1644__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), v_SatQ1635__2));
              const auto v_temp324 = iface.f_gen_branch(v_SatQ1636__2);
              iface.f_switch_context(iface.f_true_branch(v_temp324));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp324));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_slice(iface.f_gen_load(v_If1634__2), iface.bigint_lit("0"), iface.bigint_lit("16"))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If1661__2 = iface.f_decl_bv("If1661__2", iface.bigint_lit("129"));
            const auto v_temp325 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp325));
            iface.f_gen_store(v_If1661__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp325));
            iface.f_gen_store(v_If1661__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp325));
            v_round_const__1 = iface.f_gen_load(v_If1661__2);
            auto v_If1664__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1664__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1664__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1668__2 = iface.f_decl_bv("If1668__2", iface.bigint_lit("257"));
            const auto v_temp326 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp326));
            iface.f_gen_store(v_If1668__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1664__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1661__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp326));
            iface.f_gen_store(v_If1668__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1664__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1661__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp326));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1669__2 = typename Traits::rt_expr{};
              auto v_SatQ1670__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1671__3 = iface.f_decl_bv("UnsignedSatQ1671__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1672__3 = iface.f_decl_bool("UnsignedSatQ1672__3");
                const auto v_temp327 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1668__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp327));
                iface.f_gen_store(v_UnsignedSatQ1671__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1672__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp327));
                const auto v_temp328 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1668__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp328));
                iface.f_gen_store(v_UnsignedSatQ1671__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1672__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp328));
                iface.f_gen_store(v_UnsignedSatQ1671__3, iface.f_gen_slice(iface.f_gen_load(v_If1668__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1672__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp327));
                v_SatQ1669__2 = iface.f_gen_load(v_UnsignedSatQ1671__3);
                v_SatQ1670__2 = iface.f_gen_load(v_UnsignedSatQ1672__3);
              } else {
                const auto v_SignedSatQ1677__3 = iface.f_decl_bv("SignedSatQ1677__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1678__3 = iface.f_decl_bool("SignedSatQ1678__3");
                const auto v_temp329 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1668__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp329));
                iface.f_gen_store(v_SignedSatQ1677__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1678__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp329));
                const auto v_temp330 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1668__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp330));
                iface.f_gen_store(v_SignedSatQ1677__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1678__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp330));
                iface.f_gen_store(v_SignedSatQ1677__3, iface.f_gen_slice(iface.f_gen_load(v_If1668__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1678__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp329));
                v_SatQ1669__2 = iface.f_gen_load(v_SignedSatQ1677__3);
                v_SatQ1670__2 = iface.f_gen_load(v_SignedSatQ1678__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_SatQ1669__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
              const auto v_temp331 = iface.f_gen_branch(v_SatQ1670__2);
              iface.f_switch_context(iface.f_true_branch(v_temp331));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp331));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1668__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
            } // if
          } else {
            auto v_If1694__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1694__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1694__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1699__2 = iface.f_decl_bv("If1699__2", iface.bigint_lit("257"));
            const auto v_temp332 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp332));
            iface.f_gen_store(v_If1699__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1694__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp332));
            iface.f_gen_store(v_If1699__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1694__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp332));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1700__2 = typename Traits::rt_expr{};
              auto v_SatQ1701__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1702__3 = iface.f_decl_bv("UnsignedSatQ1702__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1703__3 = iface.f_decl_bool("UnsignedSatQ1703__3");
                const auto v_temp333 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1699__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp333));
                iface.f_gen_store(v_UnsignedSatQ1702__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1703__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp333));
                const auto v_temp334 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1699__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp334));
                iface.f_gen_store(v_UnsignedSatQ1702__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1703__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp334));
                iface.f_gen_store(v_UnsignedSatQ1702__3, iface.f_gen_slice(iface.f_gen_load(v_If1699__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1703__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp333));
                v_SatQ1700__2 = iface.f_gen_load(v_UnsignedSatQ1702__3);
                v_SatQ1701__2 = iface.f_gen_load(v_UnsignedSatQ1703__3);
              } else {
                const auto v_SignedSatQ1708__3 = iface.f_decl_bv("SignedSatQ1708__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1709__3 = iface.f_decl_bool("SignedSatQ1709__3");
                const auto v_temp335 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1699__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp335));
                iface.f_gen_store(v_SignedSatQ1708__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1709__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp335));
                const auto v_temp336 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1699__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp336));
                iface.f_gen_store(v_SignedSatQ1708__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1709__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp336));
                iface.f_gen_store(v_SignedSatQ1708__3, iface.f_gen_slice(iface.f_gen_load(v_If1699__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1709__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp335));
                v_SatQ1700__2 = iface.f_gen_load(v_SignedSatQ1708__3);
                v_SatQ1701__2 = iface.f_gen_load(v_SignedSatQ1709__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_SatQ1700__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
              const auto v_temp337 = iface.f_gen_branch(v_SatQ1701__2);
              iface.f_switch_context(iface.f_true_branch(v_temp337));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp337));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1699__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If1726__2 = iface.f_decl_bv("If1726__2", iface.bigint_lit("129"));
            const auto v_temp338 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp338));
            iface.f_gen_store(v_If1726__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp338));
            iface.f_gen_store(v_If1726__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp338));
            v_round_const__1 = iface.f_gen_load(v_If1726__2);
            auto v_If1729__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1729__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1729__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1733__2 = iface.f_decl_bv("If1733__2", iface.bigint_lit("257"));
            const auto v_temp339 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp339));
            iface.f_gen_store(v_If1733__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1729__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1726__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp339));
            iface.f_gen_store(v_If1733__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1729__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1726__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp339));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1734__2 = typename Traits::rt_expr{};
              auto v_SatQ1735__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1736__3 = iface.f_decl_bv("UnsignedSatQ1736__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1737__3 = iface.f_decl_bool("UnsignedSatQ1737__3");
                const auto v_temp340 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1733__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp340));
                iface.f_gen_store(v_UnsignedSatQ1736__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1737__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp340));
                const auto v_temp341 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1733__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp341));
                iface.f_gen_store(v_UnsignedSatQ1736__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1737__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp341));
                iface.f_gen_store(v_UnsignedSatQ1736__3, iface.f_gen_slice(iface.f_gen_load(v_If1733__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1737__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp340));
                v_SatQ1734__2 = iface.f_gen_load(v_UnsignedSatQ1736__3);
                v_SatQ1735__2 = iface.f_gen_load(v_UnsignedSatQ1737__3);
              } else {
                const auto v_SignedSatQ1742__3 = iface.f_decl_bv("SignedSatQ1742__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1743__3 = iface.f_decl_bool("SignedSatQ1743__3");
                const auto v_temp342 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1733__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp342));
                iface.f_gen_store(v_SignedSatQ1742__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1743__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp342));
                const auto v_temp343 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1733__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp343));
                iface.f_gen_store(v_SignedSatQ1742__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1743__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp343));
                iface.f_gen_store(v_SignedSatQ1742__3, iface.f_gen_slice(iface.f_gen_load(v_If1733__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1743__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp342));
                v_SatQ1734__2 = iface.f_gen_load(v_SignedSatQ1742__3);
                v_SatQ1735__2 = iface.f_gen_load(v_SignedSatQ1743__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_SatQ1734__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
              const auto v_temp344 = iface.f_gen_branch(v_SatQ1735__2);
              iface.f_switch_context(iface.f_true_branch(v_temp344));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp344));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1733__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } // if
          } else {
            auto v_If1759__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1759__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1759__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1764__2 = iface.f_decl_bv("If1764__2", iface.bigint_lit("257"));
            const auto v_temp345 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp345));
            iface.f_gen_store(v_If1764__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1759__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp345));
            iface.f_gen_store(v_If1764__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1759__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp345));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1765__2 = typename Traits::rt_expr{};
              auto v_SatQ1766__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1767__3 = iface.f_decl_bv("UnsignedSatQ1767__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1768__3 = iface.f_decl_bool("UnsignedSatQ1768__3");
                const auto v_temp346 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1764__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp346));
                iface.f_gen_store(v_UnsignedSatQ1767__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1768__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp346));
                const auto v_temp347 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1764__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp347));
                iface.f_gen_store(v_UnsignedSatQ1767__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1768__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp347));
                iface.f_gen_store(v_UnsignedSatQ1767__3, iface.f_gen_slice(iface.f_gen_load(v_If1764__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1768__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp346));
                v_SatQ1765__2 = iface.f_gen_load(v_UnsignedSatQ1767__3);
                v_SatQ1766__2 = iface.f_gen_load(v_UnsignedSatQ1768__3);
              } else {
                const auto v_SignedSatQ1773__3 = iface.f_decl_bv("SignedSatQ1773__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1774__3 = iface.f_decl_bool("SignedSatQ1774__3");
                const auto v_temp348 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1764__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp348));
                iface.f_gen_store(v_SignedSatQ1773__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1774__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp348));
                const auto v_temp349 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1764__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp349));
                iface.f_gen_store(v_SignedSatQ1773__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1774__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp349));
                iface.f_gen_store(v_SignedSatQ1773__3, iface.f_gen_slice(iface.f_gen_load(v_If1764__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1774__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp348));
                v_SatQ1765__2 = iface.f_gen_load(v_SignedSatQ1773__3);
                v_SatQ1766__2 = iface.f_gen_load(v_SignedSatQ1774__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_SatQ1765__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
              const auto v_temp350 = iface.f_gen_branch(v_SatQ1766__2);
              iface.f_switch_context(iface.f_true_branch(v_temp350));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp350));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1764__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If1791__2 = iface.f_decl_bv("If1791__2", iface.bigint_lit("129"));
            const auto v_temp351 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp351));
            iface.f_gen_store(v_If1791__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp351));
            iface.f_gen_store(v_If1791__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp351));
            v_round_const__1 = iface.f_gen_load(v_If1791__2);
            auto v_If1794__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1794__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1794__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1798__2 = iface.f_decl_bv("If1798__2", iface.bigint_lit("257"));
            const auto v_temp352 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp352));
            iface.f_gen_store(v_If1798__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1794__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1791__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp352));
            iface.f_gen_store(v_If1798__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1794__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1791__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp352));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1799__2 = typename Traits::rt_expr{};
              auto v_SatQ1800__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1801__3 = iface.f_decl_bv("UnsignedSatQ1801__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1802__3 = iface.f_decl_bool("UnsignedSatQ1802__3");
                const auto v_temp353 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1798__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp353));
                iface.f_gen_store(v_UnsignedSatQ1801__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1802__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp353));
                const auto v_temp354 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1798__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp354));
                iface.f_gen_store(v_UnsignedSatQ1801__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1802__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp354));
                iface.f_gen_store(v_UnsignedSatQ1801__3, iface.f_gen_slice(iface.f_gen_load(v_If1798__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1802__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp353));
                v_SatQ1799__2 = iface.f_gen_load(v_UnsignedSatQ1801__3);
                v_SatQ1800__2 = iface.f_gen_load(v_UnsignedSatQ1802__3);
              } else {
                const auto v_SignedSatQ1807__3 = iface.f_decl_bv("SignedSatQ1807__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1808__3 = iface.f_decl_bool("SignedSatQ1808__3");
                const auto v_temp355 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1798__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp355));
                iface.f_gen_store(v_SignedSatQ1807__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1808__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp355));
                const auto v_temp356 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1798__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp356));
                iface.f_gen_store(v_SignedSatQ1807__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1808__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp356));
                iface.f_gen_store(v_SignedSatQ1807__3, iface.f_gen_slice(iface.f_gen_load(v_If1798__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1808__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp355));
                v_SatQ1799__2 = iface.f_gen_load(v_SignedSatQ1807__3);
                v_SatQ1800__2 = iface.f_gen_load(v_SignedSatQ1808__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_SatQ1799__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
              const auto v_temp357 = iface.f_gen_branch(v_SatQ1800__2);
              iface.f_switch_context(iface.f_true_branch(v_temp357));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp357));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1798__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
            } // if
          } else {
            auto v_If1824__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1824__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1824__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1829__2 = iface.f_decl_bv("If1829__2", iface.bigint_lit("257"));
            const auto v_temp358 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp358));
            iface.f_gen_store(v_If1829__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1824__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp358));
            iface.f_gen_store(v_If1829__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1824__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp358));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1830__2 = typename Traits::rt_expr{};
              auto v_SatQ1831__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1832__3 = iface.f_decl_bv("UnsignedSatQ1832__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1833__3 = iface.f_decl_bool("UnsignedSatQ1833__3");
                const auto v_temp359 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1829__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp359));
                iface.f_gen_store(v_UnsignedSatQ1832__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1833__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp359));
                const auto v_temp360 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1829__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp360));
                iface.f_gen_store(v_UnsignedSatQ1832__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1833__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp360));
                iface.f_gen_store(v_UnsignedSatQ1832__3, iface.f_gen_slice(iface.f_gen_load(v_If1829__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1833__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp359));
                v_SatQ1830__2 = iface.f_gen_load(v_UnsignedSatQ1832__3);
                v_SatQ1831__2 = iface.f_gen_load(v_UnsignedSatQ1833__3);
              } else {
                const auto v_SignedSatQ1838__3 = iface.f_decl_bv("SignedSatQ1838__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1839__3 = iface.f_decl_bool("SignedSatQ1839__3");
                const auto v_temp361 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1829__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp361));
                iface.f_gen_store(v_SignedSatQ1838__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1839__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp361));
                const auto v_temp362 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1829__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp362));
                iface.f_gen_store(v_SignedSatQ1838__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1839__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp362));
                iface.f_gen_store(v_SignedSatQ1838__3, iface.f_gen_slice(iface.f_gen_load(v_If1829__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1839__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp361));
                v_SatQ1830__2 = iface.f_gen_load(v_SignedSatQ1838__3);
                v_SatQ1831__2 = iface.f_gen_load(v_SignedSatQ1839__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_SatQ1830__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
              const auto v_temp363 = iface.f_gen_branch(v_SatQ1831__2);
              iface.f_switch_context(iface.f_true_branch(v_temp363));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp363));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1829__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If1856__2 = iface.f_decl_bv("If1856__2", iface.bigint_lit("129"));
            const auto v_temp364 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp364));
            iface.f_gen_store(v_If1856__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp364));
            iface.f_gen_store(v_If1856__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp364));
            v_round_const__1 = iface.f_gen_load(v_If1856__2);
            auto v_If1859__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1859__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1859__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1863__2 = iface.f_decl_bv("If1863__2", iface.bigint_lit("257"));
            const auto v_temp365 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp365));
            iface.f_gen_store(v_If1863__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1859__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1856__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp365));
            iface.f_gen_store(v_If1863__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1859__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1856__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp365));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1864__2 = typename Traits::rt_expr{};
              auto v_SatQ1865__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1866__3 = iface.f_decl_bv("UnsignedSatQ1866__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1867__3 = iface.f_decl_bool("UnsignedSatQ1867__3");
                const auto v_temp366 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1863__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp366));
                iface.f_gen_store(v_UnsignedSatQ1866__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1867__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp366));
                const auto v_temp367 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1863__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp367));
                iface.f_gen_store(v_UnsignedSatQ1866__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1867__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp367));
                iface.f_gen_store(v_UnsignedSatQ1866__3, iface.f_gen_slice(iface.f_gen_load(v_If1863__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1867__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp366));
                v_SatQ1864__2 = iface.f_gen_load(v_UnsignedSatQ1866__3);
                v_SatQ1865__2 = iface.f_gen_load(v_UnsignedSatQ1867__3);
              } else {
                const auto v_SignedSatQ1872__3 = iface.f_decl_bv("SignedSatQ1872__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1873__3 = iface.f_decl_bool("SignedSatQ1873__3");
                const auto v_temp368 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1863__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp368));
                iface.f_gen_store(v_SignedSatQ1872__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1873__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp368));
                const auto v_temp369 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1863__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp369));
                iface.f_gen_store(v_SignedSatQ1872__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1873__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp369));
                iface.f_gen_store(v_SignedSatQ1872__3, iface.f_gen_slice(iface.f_gen_load(v_If1863__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1873__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp368));
                v_SatQ1864__2 = iface.f_gen_load(v_SignedSatQ1872__3);
                v_SatQ1865__2 = iface.f_gen_load(v_SignedSatQ1873__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_SatQ1864__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
              const auto v_temp370 = iface.f_gen_branch(v_SatQ1865__2);
              iface.f_switch_context(iface.f_true_branch(v_temp370));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp370));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1863__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } // if
          } else {
            auto v_If1889__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1889__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1889__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1894__2 = iface.f_decl_bv("If1894__2", iface.bigint_lit("257"));
            const auto v_temp371 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp371));
            iface.f_gen_store(v_If1894__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1889__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp371));
            iface.f_gen_store(v_If1894__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1889__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp371));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1895__2 = typename Traits::rt_expr{};
              auto v_SatQ1896__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1897__3 = iface.f_decl_bv("UnsignedSatQ1897__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1898__3 = iface.f_decl_bool("UnsignedSatQ1898__3");
                const auto v_temp372 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1894__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp372));
                iface.f_gen_store(v_UnsignedSatQ1897__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1898__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp372));
                const auto v_temp373 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1894__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp373));
                iface.f_gen_store(v_UnsignedSatQ1897__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1898__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp373));
                iface.f_gen_store(v_UnsignedSatQ1897__3, iface.f_gen_slice(iface.f_gen_load(v_If1894__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1898__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp372));
                v_SatQ1895__2 = iface.f_gen_load(v_UnsignedSatQ1897__3);
                v_SatQ1896__2 = iface.f_gen_load(v_UnsignedSatQ1898__3);
              } else {
                const auto v_SignedSatQ1903__3 = iface.f_decl_bv("SignedSatQ1903__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1904__3 = iface.f_decl_bool("SignedSatQ1904__3");
                const auto v_temp374 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1894__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp374));
                iface.f_gen_store(v_SignedSatQ1903__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1904__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp374));
                const auto v_temp375 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1894__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp375));
                iface.f_gen_store(v_SignedSatQ1903__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1904__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp375));
                iface.f_gen_store(v_SignedSatQ1903__3, iface.f_gen_slice(iface.f_gen_load(v_If1894__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1904__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp374));
                v_SatQ1895__2 = iface.f_gen_load(v_SignedSatQ1903__3);
                v_SatQ1896__2 = iface.f_gen_load(v_SignedSatQ1904__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_SatQ1895__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
              const auto v_temp376 = iface.f_gen_branch(v_SatQ1896__2);
              iface.f_switch_context(iface.f_true_branch(v_temp376));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp376));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1894__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If1921__2 = iface.f_decl_bv("If1921__2", iface.bigint_lit("129"));
            const auto v_temp377 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp377));
            iface.f_gen_store(v_If1921__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp377));
            iface.f_gen_store(v_If1921__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp377));
            v_round_const__1 = iface.f_gen_load(v_If1921__2);
            auto v_If1924__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1924__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1924__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1928__2 = iface.f_decl_bv("If1928__2", iface.bigint_lit("257"));
            const auto v_temp378 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp378));
            iface.f_gen_store(v_If1928__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1924__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1921__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp378));
            iface.f_gen_store(v_If1928__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1924__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1921__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp378));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1929__2 = typename Traits::rt_expr{};
              auto v_SatQ1930__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1931__3 = iface.f_decl_bv("UnsignedSatQ1931__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1932__3 = iface.f_decl_bool("UnsignedSatQ1932__3");
                const auto v_temp379 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1928__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp379));
                iface.f_gen_store(v_UnsignedSatQ1931__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1932__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp379));
                const auto v_temp380 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1928__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp380));
                iface.f_gen_store(v_UnsignedSatQ1931__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1932__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp380));
                iface.f_gen_store(v_UnsignedSatQ1931__3, iface.f_gen_slice(iface.f_gen_load(v_If1928__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1932__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp379));
                v_SatQ1929__2 = iface.f_gen_load(v_UnsignedSatQ1931__3);
                v_SatQ1930__2 = iface.f_gen_load(v_UnsignedSatQ1932__3);
              } else {
                const auto v_SignedSatQ1937__3 = iface.f_decl_bv("SignedSatQ1937__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1938__3 = iface.f_decl_bool("SignedSatQ1938__3");
                const auto v_temp381 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1928__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp381));
                iface.f_gen_store(v_SignedSatQ1937__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1938__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp381));
                const auto v_temp382 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1928__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp382));
                iface.f_gen_store(v_SignedSatQ1937__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1938__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp382));
                iface.f_gen_store(v_SignedSatQ1937__3, iface.f_gen_slice(iface.f_gen_load(v_If1928__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1938__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp381));
                v_SatQ1929__2 = iface.f_gen_load(v_SignedSatQ1937__3);
                v_SatQ1930__2 = iface.f_gen_load(v_SignedSatQ1938__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ1929__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
              const auto v_temp383 = iface.f_gen_branch(v_SatQ1930__2);
              iface.f_switch_context(iface.f_true_branch(v_temp383));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp383));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1928__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
            } // if
          } else {
            auto v_If1954__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1954__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1954__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1959__2 = iface.f_decl_bv("If1959__2", iface.bigint_lit("257"));
            const auto v_temp384 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp384));
            iface.f_gen_store(v_If1959__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1954__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp384));
            iface.f_gen_store(v_If1959__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1954__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp384));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1960__2 = typename Traits::rt_expr{};
              auto v_SatQ1961__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1962__3 = iface.f_decl_bv("UnsignedSatQ1962__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1963__3 = iface.f_decl_bool("UnsignedSatQ1963__3");
                const auto v_temp385 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1959__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp385));
                iface.f_gen_store(v_UnsignedSatQ1962__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1963__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp385));
                const auto v_temp386 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1959__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp386));
                iface.f_gen_store(v_UnsignedSatQ1962__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1963__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp386));
                iface.f_gen_store(v_UnsignedSatQ1962__3, iface.f_gen_slice(iface.f_gen_load(v_If1959__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1963__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp385));
                v_SatQ1960__2 = iface.f_gen_load(v_UnsignedSatQ1962__3);
                v_SatQ1961__2 = iface.f_gen_load(v_UnsignedSatQ1963__3);
              } else {
                const auto v_SignedSatQ1968__3 = iface.f_decl_bv("SignedSatQ1968__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ1969__3 = iface.f_decl_bool("SignedSatQ1969__3");
                const auto v_temp387 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1959__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp387));
                iface.f_gen_store(v_SignedSatQ1968__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ1969__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp387));
                const auto v_temp388 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1959__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp388));
                iface.f_gen_store(v_SignedSatQ1968__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ1969__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp388));
                iface.f_gen_store(v_SignedSatQ1968__3, iface.f_gen_slice(iface.f_gen_load(v_If1959__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ1969__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp387));
                v_SatQ1960__2 = iface.f_gen_load(v_SignedSatQ1968__3);
                v_SatQ1961__2 = iface.f_gen_load(v_SignedSatQ1969__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ1960__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
              const auto v_temp389 = iface.f_gen_branch(v_SatQ1961__2);
              iface.f_switch_context(iface.f_true_branch(v_temp389));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp389));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1959__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If1986__2 = iface.f_decl_bv("If1986__2", iface.bigint_lit("129"));
            const auto v_temp390 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp390));
            iface.f_gen_store(v_If1986__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp390));
            iface.f_gen_store(v_If1986__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp390));
            v_round_const__1 = iface.f_gen_load(v_If1986__2);
            auto v_If1989__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1989__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If1989__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If1993__2 = iface.f_decl_bv("If1993__2", iface.bigint_lit("257"));
            const auto v_temp391 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp391));
            iface.f_gen_store(v_If1993__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1989__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1986__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp391));
            iface.f_gen_store(v_If1993__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1989__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If1986__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp391));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ1994__2 = typename Traits::rt_expr{};
              auto v_SatQ1995__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1996__3 = iface.f_decl_bv("UnsignedSatQ1996__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ1997__3 = iface.f_decl_bool("UnsignedSatQ1997__3");
                const auto v_temp392 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If1993__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp392));
                iface.f_gen_store(v_UnsignedSatQ1996__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1997__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp392));
                const auto v_temp393 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1993__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp393));
                iface.f_gen_store(v_UnsignedSatQ1996__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1997__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp393));
                iface.f_gen_store(v_UnsignedSatQ1996__3, iface.f_gen_slice(iface.f_gen_load(v_If1993__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ1997__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp392));
                v_SatQ1994__2 = iface.f_gen_load(v_UnsignedSatQ1996__3);
                v_SatQ1995__2 = iface.f_gen_load(v_UnsignedSatQ1997__3);
              } else {
                const auto v_SignedSatQ2002__3 = iface.f_decl_bv("SignedSatQ2002__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2003__3 = iface.f_decl_bool("SignedSatQ2003__3");
                const auto v_temp394 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If1993__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp394));
                iface.f_gen_store(v_SignedSatQ2002__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2003__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp394));
                const auto v_temp395 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If1993__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp395));
                iface.f_gen_store(v_SignedSatQ2002__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2003__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp395));
                iface.f_gen_store(v_SignedSatQ2002__3, iface.f_gen_slice(iface.f_gen_load(v_If1993__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2003__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp394));
                v_SatQ1994__2 = iface.f_gen_load(v_SignedSatQ2002__3);
                v_SatQ1995__2 = iface.f_gen_load(v_SignedSatQ2003__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_SatQ1994__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
              const auto v_temp396 = iface.f_gen_branch(v_SatQ1995__2);
              iface.f_switch_context(iface.f_true_branch(v_temp396));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp396));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If1993__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
            } // if
          } else {
            auto v_If2019__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2019__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2019__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2024__2 = iface.f_decl_bv("If2024__2", iface.bigint_lit("257"));
            const auto v_temp397 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp397));
            iface.f_gen_store(v_If2024__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2019__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp397));
            iface.f_gen_store(v_If2024__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2019__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp397));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2025__2 = typename Traits::rt_expr{};
              auto v_SatQ2026__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2027__3 = iface.f_decl_bv("UnsignedSatQ2027__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2028__3 = iface.f_decl_bool("UnsignedSatQ2028__3");
                const auto v_temp398 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2024__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp398));
                iface.f_gen_store(v_UnsignedSatQ2027__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2028__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp398));
                const auto v_temp399 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2024__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp399));
                iface.f_gen_store(v_UnsignedSatQ2027__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2028__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp399));
                iface.f_gen_store(v_UnsignedSatQ2027__3, iface.f_gen_slice(iface.f_gen_load(v_If2024__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2028__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp398));
                v_SatQ2025__2 = iface.f_gen_load(v_UnsignedSatQ2027__3);
                v_SatQ2026__2 = iface.f_gen_load(v_UnsignedSatQ2028__3);
              } else {
                const auto v_SignedSatQ2033__3 = iface.f_decl_bv("SignedSatQ2033__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2034__3 = iface.f_decl_bool("SignedSatQ2034__3");
                const auto v_temp400 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2024__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp400));
                iface.f_gen_store(v_SignedSatQ2033__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2034__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp400));
                const auto v_temp401 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2024__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp401));
                iface.f_gen_store(v_SignedSatQ2033__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2034__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp401));
                iface.f_gen_store(v_SignedSatQ2033__3, iface.f_gen_slice(iface.f_gen_load(v_If2024__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2034__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp400));
                v_SatQ2025__2 = iface.f_gen_load(v_SignedSatQ2033__3);
                v_SatQ2026__2 = iface.f_gen_load(v_SignedSatQ2034__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_SatQ2025__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
              const auto v_temp402 = iface.f_gen_branch(v_SatQ2026__2);
              iface.f_switch_context(iface.f_true_branch(v_temp402));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp402));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2024__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If2051__2 = iface.f_decl_bv("If2051__2", iface.bigint_lit("129"));
            const auto v_temp403 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp403));
            iface.f_gen_store(v_If2051__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp403));
            iface.f_gen_store(v_If2051__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp403));
            auto v_If2054__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2054__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2054__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2058__2 = iface.f_decl_bv("If2058__2", iface.bigint_lit("257"));
            const auto v_temp404 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp404));
            iface.f_gen_store(v_If2058__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2054__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2051__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp404));
            iface.f_gen_store(v_If2058__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2054__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2051__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp404));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2059__2 = typename Traits::rt_expr{};
              auto v_SatQ2060__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2061__3 = iface.f_decl_bv("UnsignedSatQ2061__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2062__3 = iface.f_decl_bool("UnsignedSatQ2062__3");
                const auto v_temp405 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2058__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp405));
                iface.f_gen_store(v_UnsignedSatQ2061__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2062__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp405));
                const auto v_temp406 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2058__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp406));
                iface.f_gen_store(v_UnsignedSatQ2061__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2062__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp406));
                iface.f_gen_store(v_UnsignedSatQ2061__3, iface.f_gen_slice(iface.f_gen_load(v_If2058__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2062__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp405));
                v_SatQ2059__2 = iface.f_gen_load(v_UnsignedSatQ2061__3);
                v_SatQ2060__2 = iface.f_gen_load(v_UnsignedSatQ2062__3);
              } else {
                const auto v_SignedSatQ2067__3 = iface.f_decl_bv("SignedSatQ2067__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2068__3 = iface.f_decl_bool("SignedSatQ2068__3");
                const auto v_temp407 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2058__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp407));
                iface.f_gen_store(v_SignedSatQ2067__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2068__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp407));
                const auto v_temp408 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2058__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp408));
                iface.f_gen_store(v_SignedSatQ2067__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2068__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp408));
                iface.f_gen_store(v_SignedSatQ2067__3, iface.f_gen_slice(iface.f_gen_load(v_If2058__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2068__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp407));
                v_SatQ2059__2 = iface.f_gen_load(v_SignedSatQ2067__3);
                v_SatQ2060__2 = iface.f_gen_load(v_SignedSatQ2068__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2059__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
              const auto v_temp409 = iface.f_gen_branch(v_SatQ2060__2);
              iface.f_switch_context(iface.f_true_branch(v_temp409));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp409));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2058__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
            } // if
          } else {
            auto v_If2084__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2084__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2084__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1590__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2089__2 = iface.f_decl_bv("If2089__2", iface.bigint_lit("257"));
            const auto v_temp410 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp410));
            iface.f_gen_store(v_If2089__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2084__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp410));
            iface.f_gen_store(v_If2089__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2084__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1593__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp410));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2090__2 = typename Traits::rt_expr{};
              auto v_SatQ2091__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2092__3 = iface.f_decl_bv("UnsignedSatQ2092__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2093__3 = iface.f_decl_bool("UnsignedSatQ2093__3");
                const auto v_temp411 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2089__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp411));
                iface.f_gen_store(v_UnsignedSatQ2092__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2093__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp411));
                const auto v_temp412 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2089__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp412));
                iface.f_gen_store(v_UnsignedSatQ2092__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2093__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp412));
                iface.f_gen_store(v_UnsignedSatQ2092__3, iface.f_gen_slice(iface.f_gen_load(v_If2089__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2093__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp411));
                v_SatQ2090__2 = iface.f_gen_load(v_UnsignedSatQ2092__3);
                v_SatQ2091__2 = iface.f_gen_load(v_UnsignedSatQ2093__3);
              } else {
                const auto v_SignedSatQ2098__3 = iface.f_decl_bv("SignedSatQ2098__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2099__3 = iface.f_decl_bool("SignedSatQ2099__3");
                const auto v_temp413 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2089__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp413));
                iface.f_gen_store(v_SignedSatQ2098__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2099__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp413));
                const auto v_temp414 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2089__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp414));
                iface.f_gen_store(v_SignedSatQ2098__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2099__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp414));
                iface.f_gen_store(v_SignedSatQ2098__3, iface.f_gen_slice(iface.f_gen_load(v_If2089__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2099__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp413));
                v_SatQ2090__2 = iface.f_gen_load(v_SignedSatQ2098__3);
                v_SatQ2091__2 = iface.f_gen_load(v_SignedSatQ2099__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2090__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
              const auto v_temp415 = iface.f_gen_branch(v_SatQ2091__2);
              iface.f_switch_context(iface.f_true_branch(v_temp415));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp415));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2089__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp2121__2 = typename Traits::rt_expr{};
          v_Exp2121__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp2124__2 = typename Traits::rt_expr{};
          v_Exp2124__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
          auto v_round_const__1 = typename Traits::rt_expr{};
          v_round_const__1 = iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If2128__2 = iface.f_decl_bv("If2128__2", iface.bigint_lit("129"));
            const auto v_temp416 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp416));
            iface.f_gen_store(v_If2128__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp416));
            iface.f_gen_store(v_If2128__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp416));
            v_round_const__1 = iface.f_gen_load(v_If2128__2);
            auto v_If2131__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2131__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2131__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2135__2 = iface.f_decl_bv("If2135__2", iface.bigint_lit("257"));
            const auto v_temp417 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp417));
            iface.f_gen_store(v_If2135__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2131__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2128__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp417));
            iface.f_gen_store(v_If2135__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2131__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2128__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp417));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2136__2 = typename Traits::rt_expr{};
              auto v_SatQ2137__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2138__3 = iface.f_decl_bv("UnsignedSatQ2138__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2139__3 = iface.f_decl_bool("UnsignedSatQ2139__3");
                const auto v_temp418 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2135__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp418));
                iface.f_gen_store(v_UnsignedSatQ2138__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2139__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp418));
                const auto v_temp419 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2135__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp419));
                iface.f_gen_store(v_UnsignedSatQ2138__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2139__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp419));
                iface.f_gen_store(v_UnsignedSatQ2138__3, iface.f_gen_slice(iface.f_gen_load(v_If2135__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2139__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp418));
                v_SatQ2136__2 = iface.f_gen_load(v_UnsignedSatQ2138__3);
                v_SatQ2137__2 = iface.f_gen_load(v_UnsignedSatQ2139__3);
              } else {
                const auto v_SignedSatQ2144__3 = iface.f_decl_bv("SignedSatQ2144__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2145__3 = iface.f_decl_bool("SignedSatQ2145__3");
                const auto v_temp420 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2135__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp420));
                iface.f_gen_store(v_SignedSatQ2144__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2145__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp420));
                const auto v_temp421 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2135__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp421));
                iface.f_gen_store(v_SignedSatQ2144__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2145__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp421));
                iface.f_gen_store(v_SignedSatQ2144__3, iface.f_gen_slice(iface.f_gen_load(v_If2135__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2145__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp420));
                v_SatQ2136__2 = iface.f_gen_load(v_SignedSatQ2144__3);
                v_SatQ2137__2 = iface.f_gen_load(v_SignedSatQ2145__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), v_SatQ2136__2));
              const auto v_temp422 = iface.f_gen_branch(v_SatQ2137__2);
              iface.f_switch_context(iface.f_true_branch(v_temp422));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp422));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_slice(iface.f_gen_load(v_If2135__2), iface.bigint_lit("0"), iface.bigint_lit("16"))));
            } // if
          } else {
            auto v_If2161__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2161__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2161__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2165__2 = iface.f_decl_bv("If2165__2", iface.bigint_lit("144"));
            const auto v_temp423 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp423));
            iface.f_gen_store(v_If2165__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2161__2, iface.f_gen_int_lit(iface.bigint_lit("144"))), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp423));
            iface.f_gen_store(v_If2165__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2161__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("144"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp423));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2166__2 = typename Traits::rt_expr{};
              auto v_SatQ2167__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2168__3 = iface.f_decl_bv("UnsignedSatQ2168__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2169__3 = iface.f_decl_bool("UnsignedSatQ2169__3");
                const auto v_temp424 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2165__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp424));
                iface.f_gen_store(v_UnsignedSatQ2168__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2169__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp424));
                const auto v_temp425 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2165__2), iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp425));
                iface.f_gen_store(v_UnsignedSatQ2168__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2169__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp425));
                iface.f_gen_store(v_UnsignedSatQ2168__3, iface.f_gen_slice(iface.f_gen_load(v_If2165__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2169__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp424));
                v_SatQ2166__2 = iface.f_gen_load(v_UnsignedSatQ2168__3);
                v_SatQ2167__2 = iface.f_gen_load(v_UnsignedSatQ2169__3);
              } else {
                const auto v_SignedSatQ2174__3 = iface.f_decl_bv("SignedSatQ2174__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2175__3 = iface.f_decl_bool("SignedSatQ2175__3");
                const auto v_temp426 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(144U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2165__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp426));
                iface.f_gen_store(v_SignedSatQ2174__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2175__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp426));
                const auto v_temp427 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2165__2), iface.f_gen_bit_lit(iface.bits_lit(144U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp427));
                iface.f_gen_store(v_SignedSatQ2174__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2175__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp427));
                iface.f_gen_store(v_SignedSatQ2174__3, iface.f_gen_slice(iface.f_gen_load(v_If2165__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2175__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp426));
                v_SatQ2166__2 = iface.f_gen_load(v_SignedSatQ2174__3);
                v_SatQ2167__2 = iface.f_gen_load(v_SignedSatQ2175__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), v_SatQ2166__2));
              const auto v_temp428 = iface.f_gen_branch(v_SatQ2167__2);
              iface.f_switch_context(iface.f_true_branch(v_temp428));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp428));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_slice(iface.f_gen_load(v_If2165__2), iface.bigint_lit("0"), iface.bigint_lit("16"))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If2192__2 = iface.f_decl_bv("If2192__2", iface.bigint_lit("129"));
            const auto v_temp429 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp429));
            iface.f_gen_store(v_If2192__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp429));
            iface.f_gen_store(v_If2192__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp429));
            v_round_const__1 = iface.f_gen_load(v_If2192__2);
            auto v_If2195__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2195__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2195__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2199__2 = iface.f_decl_bv("If2199__2", iface.bigint_lit("257"));
            const auto v_temp430 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp430));
            iface.f_gen_store(v_If2199__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2195__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2192__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp430));
            iface.f_gen_store(v_If2199__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2195__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2192__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp430));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2200__2 = typename Traits::rt_expr{};
              auto v_SatQ2201__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2202__3 = iface.f_decl_bv("UnsignedSatQ2202__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2203__3 = iface.f_decl_bool("UnsignedSatQ2203__3");
                const auto v_temp431 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2199__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp431));
                iface.f_gen_store(v_UnsignedSatQ2202__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2203__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp431));
                const auto v_temp432 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2199__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp432));
                iface.f_gen_store(v_UnsignedSatQ2202__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2203__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp432));
                iface.f_gen_store(v_UnsignedSatQ2202__3, iface.f_gen_slice(iface.f_gen_load(v_If2199__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2203__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp431));
                v_SatQ2200__2 = iface.f_gen_load(v_UnsignedSatQ2202__3);
                v_SatQ2201__2 = iface.f_gen_load(v_UnsignedSatQ2203__3);
              } else {
                const auto v_SignedSatQ2208__3 = iface.f_decl_bv("SignedSatQ2208__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2209__3 = iface.f_decl_bool("SignedSatQ2209__3");
                const auto v_temp433 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2199__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp433));
                iface.f_gen_store(v_SignedSatQ2208__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2209__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp433));
                const auto v_temp434 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2199__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp434));
                iface.f_gen_store(v_SignedSatQ2208__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2209__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp434));
                iface.f_gen_store(v_SignedSatQ2208__3, iface.f_gen_slice(iface.f_gen_load(v_If2199__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2209__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp433));
                v_SatQ2200__2 = iface.f_gen_load(v_SignedSatQ2208__3);
                v_SatQ2201__2 = iface.f_gen_load(v_SignedSatQ2209__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ2200__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
              const auto v_temp435 = iface.f_gen_branch(v_SatQ2201__2);
              iface.f_switch_context(iface.f_true_branch(v_temp435));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp435));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2199__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
            } // if
          } else {
            auto v_If2225__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2225__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2225__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2230__2 = iface.f_decl_bv("If2230__2", iface.bigint_lit("257"));
            const auto v_temp436 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp436));
            iface.f_gen_store(v_If2230__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2225__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp436));
            iface.f_gen_store(v_If2230__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2225__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp436));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2231__2 = typename Traits::rt_expr{};
              auto v_SatQ2232__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2233__3 = iface.f_decl_bv("UnsignedSatQ2233__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2234__3 = iface.f_decl_bool("UnsignedSatQ2234__3");
                const auto v_temp437 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2230__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp437));
                iface.f_gen_store(v_UnsignedSatQ2233__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2234__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp437));
                const auto v_temp438 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2230__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp438));
                iface.f_gen_store(v_UnsignedSatQ2233__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2234__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp438));
                iface.f_gen_store(v_UnsignedSatQ2233__3, iface.f_gen_slice(iface.f_gen_load(v_If2230__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2234__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp437));
                v_SatQ2231__2 = iface.f_gen_load(v_UnsignedSatQ2233__3);
                v_SatQ2232__2 = iface.f_gen_load(v_UnsignedSatQ2234__3);
              } else {
                const auto v_SignedSatQ2239__3 = iface.f_decl_bv("SignedSatQ2239__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2240__3 = iface.f_decl_bool("SignedSatQ2240__3");
                const auto v_temp439 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2230__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp439));
                iface.f_gen_store(v_SignedSatQ2239__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2240__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp439));
                const auto v_temp440 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2230__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp440));
                iface.f_gen_store(v_SignedSatQ2239__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2240__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp440));
                iface.f_gen_store(v_SignedSatQ2239__3, iface.f_gen_slice(iface.f_gen_load(v_If2230__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2240__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp439));
                v_SatQ2231__2 = iface.f_gen_load(v_SignedSatQ2239__3);
                v_SatQ2232__2 = iface.f_gen_load(v_SignedSatQ2240__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ2231__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
              const auto v_temp441 = iface.f_gen_branch(v_SatQ2232__2);
              iface.f_switch_context(iface.f_true_branch(v_temp441));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp441));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2230__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If2257__2 = iface.f_decl_bv("If2257__2", iface.bigint_lit("129"));
            const auto v_temp442 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp442));
            iface.f_gen_store(v_If2257__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp442));
            iface.f_gen_store(v_If2257__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp442));
            v_round_const__1 = iface.f_gen_load(v_If2257__2);
            auto v_If2260__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2260__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2260__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2264__2 = iface.f_decl_bv("If2264__2", iface.bigint_lit("257"));
            const auto v_temp443 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp443));
            iface.f_gen_store(v_If2264__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2260__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2257__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp443));
            iface.f_gen_store(v_If2264__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2260__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2257__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp443));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2265__2 = typename Traits::rt_expr{};
              auto v_SatQ2266__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2267__3 = iface.f_decl_bv("UnsignedSatQ2267__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2268__3 = iface.f_decl_bool("UnsignedSatQ2268__3");
                const auto v_temp444 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2264__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp444));
                iface.f_gen_store(v_UnsignedSatQ2267__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2268__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp444));
                const auto v_temp445 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2264__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp445));
                iface.f_gen_store(v_UnsignedSatQ2267__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2268__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp445));
                iface.f_gen_store(v_UnsignedSatQ2267__3, iface.f_gen_slice(iface.f_gen_load(v_If2264__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2268__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp444));
                v_SatQ2265__2 = iface.f_gen_load(v_UnsignedSatQ2267__3);
                v_SatQ2266__2 = iface.f_gen_load(v_UnsignedSatQ2268__3);
              } else {
                const auto v_SignedSatQ2273__3 = iface.f_decl_bv("SignedSatQ2273__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2274__3 = iface.f_decl_bool("SignedSatQ2274__3");
                const auto v_temp446 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2264__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp446));
                iface.f_gen_store(v_SignedSatQ2273__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2274__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp446));
                const auto v_temp447 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2264__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp447));
                iface.f_gen_store(v_SignedSatQ2273__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2274__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp447));
                iface.f_gen_store(v_SignedSatQ2273__3, iface.f_gen_slice(iface.f_gen_load(v_If2264__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2274__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp446));
                v_SatQ2265__2 = iface.f_gen_load(v_SignedSatQ2273__3);
                v_SatQ2266__2 = iface.f_gen_load(v_SignedSatQ2274__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_SatQ2265__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
              const auto v_temp448 = iface.f_gen_branch(v_SatQ2266__2);
              iface.f_switch_context(iface.f_true_branch(v_temp448));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp448));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2264__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } // if
          } else {
            auto v_If2290__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2290__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2290__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2295__2 = iface.f_decl_bv("If2295__2", iface.bigint_lit("257"));
            const auto v_temp449 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp449));
            iface.f_gen_store(v_If2295__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2290__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp449));
            iface.f_gen_store(v_If2295__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2290__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp449));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2296__2 = typename Traits::rt_expr{};
              auto v_SatQ2297__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2298__3 = iface.f_decl_bv("UnsignedSatQ2298__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2299__3 = iface.f_decl_bool("UnsignedSatQ2299__3");
                const auto v_temp450 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2295__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp450));
                iface.f_gen_store(v_UnsignedSatQ2298__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2299__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp450));
                const auto v_temp451 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2295__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp451));
                iface.f_gen_store(v_UnsignedSatQ2298__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2299__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp451));
                iface.f_gen_store(v_UnsignedSatQ2298__3, iface.f_gen_slice(iface.f_gen_load(v_If2295__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2299__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp450));
                v_SatQ2296__2 = iface.f_gen_load(v_UnsignedSatQ2298__3);
                v_SatQ2297__2 = iface.f_gen_load(v_UnsignedSatQ2299__3);
              } else {
                const auto v_SignedSatQ2304__3 = iface.f_decl_bv("SignedSatQ2304__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2305__3 = iface.f_decl_bool("SignedSatQ2305__3");
                const auto v_temp452 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2295__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp452));
                iface.f_gen_store(v_SignedSatQ2304__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2305__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp452));
                const auto v_temp453 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2295__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp453));
                iface.f_gen_store(v_SignedSatQ2304__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2305__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp453));
                iface.f_gen_store(v_SignedSatQ2304__3, iface.f_gen_slice(iface.f_gen_load(v_If2295__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2305__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp452));
                v_SatQ2296__2 = iface.f_gen_load(v_SignedSatQ2304__3);
                v_SatQ2297__2 = iface.f_gen_load(v_SignedSatQ2305__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_SatQ2296__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
              const auto v_temp454 = iface.f_gen_branch(v_SatQ2297__2);
              iface.f_switch_context(iface.f_true_branch(v_temp454));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp454));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2295__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If2322__2 = iface.f_decl_bv("If2322__2", iface.bigint_lit("129"));
            const auto v_temp455 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
            iface.f_switch_context(iface.f_true_branch(v_temp455));
            iface.f_gen_store(v_If2322__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_false_branch(v_temp455));
            iface.f_gen_store(v_If2322__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp455));
            auto v_If2325__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2325__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2325__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2329__2 = iface.f_decl_bv("If2329__2", iface.bigint_lit("257"));
            const auto v_temp456 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp456));
            iface.f_gen_store(v_If2329__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2325__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2322__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp456));
            iface.f_gen_store(v_If2329__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2325__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2322__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp456));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2330__2 = typename Traits::rt_expr{};
              auto v_SatQ2331__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2332__3 = iface.f_decl_bv("UnsignedSatQ2332__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2333__3 = iface.f_decl_bool("UnsignedSatQ2333__3");
                const auto v_temp457 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2329__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp457));
                iface.f_gen_store(v_UnsignedSatQ2332__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2333__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp457));
                const auto v_temp458 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2329__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp458));
                iface.f_gen_store(v_UnsignedSatQ2332__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2333__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp458));
                iface.f_gen_store(v_UnsignedSatQ2332__3, iface.f_gen_slice(iface.f_gen_load(v_If2329__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2333__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp457));
                v_SatQ2330__2 = iface.f_gen_load(v_UnsignedSatQ2332__3);
                v_SatQ2331__2 = iface.f_gen_load(v_UnsignedSatQ2333__3);
              } else {
                const auto v_SignedSatQ2338__3 = iface.f_decl_bv("SignedSatQ2338__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2339__3 = iface.f_decl_bool("SignedSatQ2339__3");
                const auto v_temp459 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2329__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp459));
                iface.f_gen_store(v_SignedSatQ2338__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2339__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp459));
                const auto v_temp460 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2329__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp460));
                iface.f_gen_store(v_SignedSatQ2338__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2339__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp460));
                iface.f_gen_store(v_SignedSatQ2338__3, iface.f_gen_slice(iface.f_gen_load(v_If2329__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2339__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp459));
                v_SatQ2330__2 = iface.f_gen_load(v_SignedSatQ2338__3);
                v_SatQ2331__2 = iface.f_gen_load(v_SignedSatQ2339__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2330__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
              const auto v_temp461 = iface.f_gen_branch(v_SatQ2331__2);
              iface.f_switch_context(iface.f_true_branch(v_temp461));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp461));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2329__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
            } // if
          } else {
            auto v_If2355__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If2355__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If2355__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2121__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            const auto v_If2360__2 = iface.f_decl_bv("If2360__2", iface.bigint_lit("257"));
            const auto v_temp462 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_true_branch(v_temp462));
            iface.f_gen_store(v_If2360__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2355__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
            iface.f_switch_context(iface.f_false_branch(v_temp462));
            iface.f_gen_store(v_If2360__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2355__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2124__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp462));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_SatQ2361__2 = typename Traits::rt_expr{};
              auto v_SatQ2362__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ2363__3 = iface.f_decl_bv("UnsignedSatQ2363__3", iface.bigint_lit("16"));
                const auto v_UnsignedSatQ2364__3 = iface.f_decl_bool("UnsignedSatQ2364__3");
                const auto v_temp463 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), iface.f_gen_load(v_If2360__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp463));
                iface.f_gen_store(v_UnsignedSatQ2363__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ2364__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp463));
                const auto v_temp464 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2360__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp464));
                iface.f_gen_store(v_UnsignedSatQ2363__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ2364__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp464));
                iface.f_gen_store(v_UnsignedSatQ2363__3, iface.f_gen_slice(iface.f_gen_load(v_If2360__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_UnsignedSatQ2364__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp463));
                v_SatQ2361__2 = iface.f_gen_load(v_UnsignedSatQ2363__3);
                v_SatQ2362__2 = iface.f_gen_load(v_UnsignedSatQ2364__3);
              } else {
                const auto v_SignedSatQ2369__3 = iface.f_decl_bv("SignedSatQ2369__3", iface.bigint_lit("16"));
                const auto v_SignedSatQ2370__3 = iface.f_decl_bool("SignedSatQ2370__3");
                const auto v_temp465 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), iface.f_gen_load(v_If2360__2)));
                iface.f_switch_context(iface.f_true_branch(v_temp465));
                iface.f_gen_store(v_SignedSatQ2369__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
                iface.f_gen_store(v_SignedSatQ2370__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp465));
                const auto v_temp466 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2360__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp466));
                iface.f_gen_store(v_SignedSatQ2369__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
                iface.f_gen_store(v_SignedSatQ2370__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp466));
                iface.f_gen_store(v_SignedSatQ2369__3, iface.f_gen_slice(iface.f_gen_load(v_If2360__2), iface.bigint_lit("0"), iface.bigint_lit("16")));
                iface.f_gen_store(v_SignedSatQ2370__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp465));
                v_SatQ2361__2 = iface.f_gen_load(v_SignedSatQ2369__3);
                v_SatQ2362__2 = iface.f_gen_load(v_SignedSatQ2370__3);
              } // if
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2361__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
              const auto v_temp467 = iface.f_gen_branch(v_SatQ2362__2);
              iface.f_switch_context(iface.f_true_branch(v_temp467));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp467));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2360__2), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp2393__2 = typename Traits::rt_expr{};
            v_Exp2393__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp2396__2 = typename Traits::rt_expr{};
            v_Exp2396__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
            auto v_round_const__1 = typename Traits::rt_expr{};
            v_round_const__1 = iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If2400__2 = iface.f_decl_bv("If2400__2", iface.bigint_lit("129"));
              const auto v_temp468 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
              iface.f_switch_context(iface.f_true_branch(v_temp468));
              iface.f_gen_store(v_If2400__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_false_branch(v_temp468));
              iface.f_gen_store(v_If2400__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp468));
              v_round_const__1 = iface.f_gen_load(v_If2400__2);
              auto v_If2403__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2403__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2403__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2407__2 = iface.f_decl_bv("If2407__2", iface.bigint_lit("257"));
              const auto v_temp469 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp469));
              iface.f_gen_store(v_If2407__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2403__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2400__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp469));
              iface.f_gen_store(v_If2407__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2403__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2400__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp469));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2408__2 = typename Traits::rt_expr{};
                auto v_SatQ2409__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2410__3 = iface.f_decl_bv("UnsignedSatQ2410__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2411__3 = iface.f_decl_bool("UnsignedSatQ2411__3");
                  const auto v_temp470 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2407__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp470));
                  iface.f_gen_store(v_UnsignedSatQ2410__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2411__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp470));
                  const auto v_temp471 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2407__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp471));
                  iface.f_gen_store(v_UnsignedSatQ2410__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2411__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp471));
                  iface.f_gen_store(v_UnsignedSatQ2410__3, iface.f_gen_slice(iface.f_gen_load(v_If2407__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2411__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp470));
                  v_SatQ2408__2 = iface.f_gen_load(v_UnsignedSatQ2410__3);
                  v_SatQ2409__2 = iface.f_gen_load(v_UnsignedSatQ2411__3);
                } else {
                  const auto v_SignedSatQ2416__3 = iface.f_decl_bv("SignedSatQ2416__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2417__3 = iface.f_decl_bool("SignedSatQ2417__3");
                  const auto v_temp472 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2407__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp472));
                  iface.f_gen_store(v_SignedSatQ2416__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2417__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp472));
                  const auto v_temp473 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2407__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp473));
                  iface.f_gen_store(v_SignedSatQ2416__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2417__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp473));
                  iface.f_gen_store(v_SignedSatQ2416__3, iface.f_gen_slice(iface.f_gen_load(v_If2407__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2417__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp472));
                  v_SatQ2408__2 = iface.f_gen_load(v_SignedSatQ2416__3);
                  v_SatQ2409__2 = iface.f_gen_load(v_SignedSatQ2417__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), v_SatQ2408__2));
                const auto v_temp474 = iface.f_gen_branch(v_SatQ2409__2);
                iface.f_switch_context(iface.f_true_branch(v_temp474));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp474));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_slice(iface.f_gen_load(v_If2407__2), iface.bigint_lit("0"), iface.bigint_lit("32"))));
              } // if
            } else {
              auto v_If2433__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2433__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2433__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2437__2 = iface.f_decl_bv("If2437__2", iface.bigint_lit("160"));
              const auto v_temp475 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp475));
              iface.f_gen_store(v_If2437__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2433__2, iface.f_gen_int_lit(iface.bigint_lit("160"))), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp475));
              iface.f_gen_store(v_If2437__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2433__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("160"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp475));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2438__2 = typename Traits::rt_expr{};
                auto v_SatQ2439__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2440__3 = iface.f_decl_bv("UnsignedSatQ2440__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2441__3 = iface.f_decl_bool("UnsignedSatQ2441__3");
                  const auto v_temp476 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2437__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp476));
                  iface.f_gen_store(v_UnsignedSatQ2440__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2441__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp476));
                  const auto v_temp477 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2437__2), iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp477));
                  iface.f_gen_store(v_UnsignedSatQ2440__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2441__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp477));
                  iface.f_gen_store(v_UnsignedSatQ2440__3, iface.f_gen_slice(iface.f_gen_load(v_If2437__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2441__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp476));
                  v_SatQ2438__2 = iface.f_gen_load(v_UnsignedSatQ2440__3);
                  v_SatQ2439__2 = iface.f_gen_load(v_UnsignedSatQ2441__3);
                } else {
                  const auto v_SignedSatQ2446__3 = iface.f_decl_bv("SignedSatQ2446__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2447__3 = iface.f_decl_bool("SignedSatQ2447__3");
                  const auto v_temp478 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2437__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp478));
                  iface.f_gen_store(v_SignedSatQ2446__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2447__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp478));
                  const auto v_temp479 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2437__2), iface.f_gen_bit_lit(iface.bits_lit(160U, "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp479));
                  iface.f_gen_store(v_SignedSatQ2446__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2447__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp479));
                  iface.f_gen_store(v_SignedSatQ2446__3, iface.f_gen_slice(iface.f_gen_load(v_If2437__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2447__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp478));
                  v_SatQ2438__2 = iface.f_gen_load(v_SignedSatQ2446__3);
                  v_SatQ2439__2 = iface.f_gen_load(v_SignedSatQ2447__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), v_SatQ2438__2));
                const auto v_temp480 = iface.f_gen_branch(v_SatQ2439__2);
                iface.f_switch_context(iface.f_true_branch(v_temp480));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp480));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_slice(iface.f_gen_load(v_If2437__2), iface.bigint_lit("0"), iface.bigint_lit("32"))));
              } // if
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If2464__2 = iface.f_decl_bv("If2464__2", iface.bigint_lit("129"));
              const auto v_temp481 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
              iface.f_switch_context(iface.f_true_branch(v_temp481));
              iface.f_gen_store(v_If2464__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_false_branch(v_temp481));
              iface.f_gen_store(v_If2464__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp481));
              v_round_const__1 = iface.f_gen_load(v_If2464__2);
              auto v_If2467__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2467__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2467__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2471__2 = iface.f_decl_bv("If2471__2", iface.bigint_lit("257"));
              const auto v_temp482 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp482));
              iface.f_gen_store(v_If2471__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2467__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2464__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp482));
              iface.f_gen_store(v_If2471__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2467__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2464__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp482));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2472__2 = typename Traits::rt_expr{};
                auto v_SatQ2473__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2474__3 = iface.f_decl_bv("UnsignedSatQ2474__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2475__3 = iface.f_decl_bool("UnsignedSatQ2475__3");
                  const auto v_temp483 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2471__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp483));
                  iface.f_gen_store(v_UnsignedSatQ2474__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2475__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp483));
                  const auto v_temp484 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2471__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp484));
                  iface.f_gen_store(v_UnsignedSatQ2474__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2475__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp484));
                  iface.f_gen_store(v_UnsignedSatQ2474__3, iface.f_gen_slice(iface.f_gen_load(v_If2471__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2475__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp483));
                  v_SatQ2472__2 = iface.f_gen_load(v_UnsignedSatQ2474__3);
                  v_SatQ2473__2 = iface.f_gen_load(v_UnsignedSatQ2475__3);
                } else {
                  const auto v_SignedSatQ2480__3 = iface.f_decl_bv("SignedSatQ2480__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2481__3 = iface.f_decl_bool("SignedSatQ2481__3");
                  const auto v_temp485 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2471__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp485));
                  iface.f_gen_store(v_SignedSatQ2480__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2481__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp485));
                  const auto v_temp486 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2471__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp486));
                  iface.f_gen_store(v_SignedSatQ2480__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2481__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp486));
                  iface.f_gen_store(v_SignedSatQ2480__3, iface.f_gen_slice(iface.f_gen_load(v_If2471__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2481__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp485));
                  v_SatQ2472__2 = iface.f_gen_load(v_SignedSatQ2480__3);
                  v_SatQ2473__2 = iface.f_gen_load(v_SignedSatQ2481__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_SatQ2472__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
                const auto v_temp487 = iface.f_gen_branch(v_SatQ2473__2);
                iface.f_switch_context(iface.f_true_branch(v_temp487));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp487));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2471__2), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
              } // if
            } else {
              auto v_If2497__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2497__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2497__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2502__2 = iface.f_decl_bv("If2502__2", iface.bigint_lit("257"));
              const auto v_temp488 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp488));
              iface.f_gen_store(v_If2502__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2497__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp488));
              iface.f_gen_store(v_If2502__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2497__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp488));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2503__2 = typename Traits::rt_expr{};
                auto v_SatQ2504__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2505__3 = iface.f_decl_bv("UnsignedSatQ2505__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2506__3 = iface.f_decl_bool("UnsignedSatQ2506__3");
                  const auto v_temp489 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2502__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp489));
                  iface.f_gen_store(v_UnsignedSatQ2505__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2506__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp489));
                  const auto v_temp490 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2502__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp490));
                  iface.f_gen_store(v_UnsignedSatQ2505__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2506__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp490));
                  iface.f_gen_store(v_UnsignedSatQ2505__3, iface.f_gen_slice(iface.f_gen_load(v_If2502__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2506__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp489));
                  v_SatQ2503__2 = iface.f_gen_load(v_UnsignedSatQ2505__3);
                  v_SatQ2504__2 = iface.f_gen_load(v_UnsignedSatQ2506__3);
                } else {
                  const auto v_SignedSatQ2511__3 = iface.f_decl_bv("SignedSatQ2511__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2512__3 = iface.f_decl_bool("SignedSatQ2512__3");
                  const auto v_temp491 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2502__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp491));
                  iface.f_gen_store(v_SignedSatQ2511__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2512__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp491));
                  const auto v_temp492 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2502__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp492));
                  iface.f_gen_store(v_SignedSatQ2511__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2512__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp492));
                  iface.f_gen_store(v_SignedSatQ2511__3, iface.f_gen_slice(iface.f_gen_load(v_If2502__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2512__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp491));
                  v_SatQ2503__2 = iface.f_gen_load(v_SignedSatQ2511__3);
                  v_SatQ2504__2 = iface.f_gen_load(v_SignedSatQ2512__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_SatQ2503__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
                const auto v_temp493 = iface.f_gen_branch(v_SatQ2504__2);
                iface.f_switch_context(iface.f_true_branch(v_temp493));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp493));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2502__2), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
              } // if
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If2529__2 = iface.f_decl_bv("If2529__2", iface.bigint_lit("129"));
              const auto v_temp494 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
              iface.f_switch_context(iface.f_true_branch(v_temp494));
              iface.f_gen_store(v_If2529__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_false_branch(v_temp494));
              iface.f_gen_store(v_If2529__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp494));
              v_round_const__1 = iface.f_gen_load(v_If2529__2);
              auto v_If2532__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2532__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2532__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2536__2 = iface.f_decl_bv("If2536__2", iface.bigint_lit("257"));
              const auto v_temp495 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp495));
              iface.f_gen_store(v_If2536__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2532__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2529__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp495));
              iface.f_gen_store(v_If2536__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2532__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2529__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp495));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2537__2 = typename Traits::rt_expr{};
                auto v_SatQ2538__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2539__3 = iface.f_decl_bv("UnsignedSatQ2539__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2540__3 = iface.f_decl_bool("UnsignedSatQ2540__3");
                  const auto v_temp496 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2536__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp496));
                  iface.f_gen_store(v_UnsignedSatQ2539__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2540__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp496));
                  const auto v_temp497 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2536__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp497));
                  iface.f_gen_store(v_UnsignedSatQ2539__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2540__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp497));
                  iface.f_gen_store(v_UnsignedSatQ2539__3, iface.f_gen_slice(iface.f_gen_load(v_If2536__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2540__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp496));
                  v_SatQ2537__2 = iface.f_gen_load(v_UnsignedSatQ2539__3);
                  v_SatQ2538__2 = iface.f_gen_load(v_UnsignedSatQ2540__3);
                } else {
                  const auto v_SignedSatQ2545__3 = iface.f_decl_bv("SignedSatQ2545__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2546__3 = iface.f_decl_bool("SignedSatQ2546__3");
                  const auto v_temp498 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2536__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp498));
                  iface.f_gen_store(v_SignedSatQ2545__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2546__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp498));
                  const auto v_temp499 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2536__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp499));
                  iface.f_gen_store(v_SignedSatQ2545__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2546__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp499));
                  iface.f_gen_store(v_SignedSatQ2545__3, iface.f_gen_slice(iface.f_gen_load(v_If2536__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2546__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp498));
                  v_SatQ2537__2 = iface.f_gen_load(v_SignedSatQ2545__3);
                  v_SatQ2538__2 = iface.f_gen_load(v_SignedSatQ2546__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ2537__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
                const auto v_temp500 = iface.f_gen_branch(v_SatQ2538__2);
                iface.f_switch_context(iface.f_true_branch(v_temp500));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp500));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2536__2), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
              } // if
            } else {
              auto v_If2562__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2562__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2562__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2567__2 = iface.f_decl_bv("If2567__2", iface.bigint_lit("257"));
              const auto v_temp501 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp501));
              iface.f_gen_store(v_If2567__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2562__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp501));
              iface.f_gen_store(v_If2567__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2562__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp501));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2568__2 = typename Traits::rt_expr{};
                auto v_SatQ2569__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2570__3 = iface.f_decl_bv("UnsignedSatQ2570__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2571__3 = iface.f_decl_bool("UnsignedSatQ2571__3");
                  const auto v_temp502 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2567__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp502));
                  iface.f_gen_store(v_UnsignedSatQ2570__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2571__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp502));
                  const auto v_temp503 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2567__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp503));
                  iface.f_gen_store(v_UnsignedSatQ2570__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2571__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp503));
                  iface.f_gen_store(v_UnsignedSatQ2570__3, iface.f_gen_slice(iface.f_gen_load(v_If2567__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2571__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp502));
                  v_SatQ2568__2 = iface.f_gen_load(v_UnsignedSatQ2570__3);
                  v_SatQ2569__2 = iface.f_gen_load(v_UnsignedSatQ2571__3);
                } else {
                  const auto v_SignedSatQ2576__3 = iface.f_decl_bv("SignedSatQ2576__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2577__3 = iface.f_decl_bool("SignedSatQ2577__3");
                  const auto v_temp504 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2567__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp504));
                  iface.f_gen_store(v_SignedSatQ2576__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2577__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp504));
                  const auto v_temp505 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2567__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp505));
                  iface.f_gen_store(v_SignedSatQ2576__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2577__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp505));
                  iface.f_gen_store(v_SignedSatQ2576__3, iface.f_gen_slice(iface.f_gen_load(v_If2567__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2577__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp504));
                  v_SatQ2568__2 = iface.f_gen_load(v_SignedSatQ2576__3);
                  v_SatQ2569__2 = iface.f_gen_load(v_SignedSatQ2577__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_SatQ2568__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
                const auto v_temp506 = iface.f_gen_branch(v_SatQ2569__2);
                iface.f_switch_context(iface.f_true_branch(v_temp506));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp506));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2567__2), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
              } // if
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If2594__2 = iface.f_decl_bv("If2594__2", iface.bigint_lit("129"));
              const auto v_temp507 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
              iface.f_switch_context(iface.f_true_branch(v_temp507));
              iface.f_gen_store(v_If2594__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_false_branch(v_temp507));
              iface.f_gen_store(v_If2594__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp507));
              auto v_If2597__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2597__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2597__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2601__2 = iface.f_decl_bv("If2601__2", iface.bigint_lit("257"));
              const auto v_temp508 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp508));
              iface.f_gen_store(v_If2601__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2597__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2594__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp508));
              iface.f_gen_store(v_If2601__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2597__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2594__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp508));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2602__2 = typename Traits::rt_expr{};
                auto v_SatQ2603__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2604__3 = iface.f_decl_bv("UnsignedSatQ2604__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2605__3 = iface.f_decl_bool("UnsignedSatQ2605__3");
                  const auto v_temp509 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2601__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp509));
                  iface.f_gen_store(v_UnsignedSatQ2604__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2605__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp509));
                  const auto v_temp510 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2601__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp510));
                  iface.f_gen_store(v_UnsignedSatQ2604__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2605__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp510));
                  iface.f_gen_store(v_UnsignedSatQ2604__3, iface.f_gen_slice(iface.f_gen_load(v_If2601__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2605__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp509));
                  v_SatQ2602__2 = iface.f_gen_load(v_UnsignedSatQ2604__3);
                  v_SatQ2603__2 = iface.f_gen_load(v_UnsignedSatQ2605__3);
                } else {
                  const auto v_SignedSatQ2610__3 = iface.f_decl_bv("SignedSatQ2610__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2611__3 = iface.f_decl_bool("SignedSatQ2611__3");
                  const auto v_temp511 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2601__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp511));
                  iface.f_gen_store(v_SignedSatQ2610__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2611__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp511));
                  const auto v_temp512 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2601__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp512));
                  iface.f_gen_store(v_SignedSatQ2610__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2611__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp512));
                  iface.f_gen_store(v_SignedSatQ2610__3, iface.f_gen_slice(iface.f_gen_load(v_If2601__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2611__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp511));
                  v_SatQ2602__2 = iface.f_gen_load(v_SignedSatQ2610__3);
                  v_SatQ2603__2 = iface.f_gen_load(v_SignedSatQ2611__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2602__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
                const auto v_temp513 = iface.f_gen_branch(v_SatQ2603__2);
                iface.f_switch_context(iface.f_true_branch(v_temp513));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp513));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2601__2), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
              } // if
            } else {
              auto v_If2627__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2627__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2627__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2393__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2632__2 = iface.f_decl_bv("If2632__2", iface.bigint_lit("257"));
              const auto v_temp514 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp514));
              iface.f_gen_store(v_If2632__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2627__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp514));
              iface.f_gen_store(v_If2632__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2627__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2396__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp514));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2633__2 = typename Traits::rt_expr{};
                auto v_SatQ2634__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2635__3 = iface.f_decl_bv("UnsignedSatQ2635__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2636__3 = iface.f_decl_bool("UnsignedSatQ2636__3");
                  const auto v_temp515 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2632__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp515));
                  iface.f_gen_store(v_UnsignedSatQ2635__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2636__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp515));
                  const auto v_temp516 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2632__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp516));
                  iface.f_gen_store(v_UnsignedSatQ2635__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2636__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp516));
                  iface.f_gen_store(v_UnsignedSatQ2635__3, iface.f_gen_slice(iface.f_gen_load(v_If2632__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2636__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp515));
                  v_SatQ2633__2 = iface.f_gen_load(v_UnsignedSatQ2635__3);
                  v_SatQ2634__2 = iface.f_gen_load(v_UnsignedSatQ2636__3);
                } else {
                  const auto v_SignedSatQ2641__3 = iface.f_decl_bv("SignedSatQ2641__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2642__3 = iface.f_decl_bool("SignedSatQ2642__3");
                  const auto v_temp517 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2632__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp517));
                  iface.f_gen_store(v_SignedSatQ2641__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2642__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp517));
                  const auto v_temp518 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2632__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp518));
                  iface.f_gen_store(v_SignedSatQ2641__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2642__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp518));
                  iface.f_gen_store(v_SignedSatQ2641__3, iface.f_gen_slice(iface.f_gen_load(v_If2632__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2642__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp517));
                  v_SatQ2633__2 = iface.f_gen_load(v_SignedSatQ2641__3);
                  v_SatQ2634__2 = iface.f_gen_load(v_SignedSatQ2642__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2633__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
                const auto v_temp519 = iface.f_gen_branch(v_SatQ2634__2);
                iface.f_switch_context(iface.f_true_branch(v_temp519));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp519));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2632__2), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
              } // if
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp2664__2 = typename Traits::rt_expr{};
            v_Exp2664__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp2667__2 = typename Traits::rt_expr{};
            v_Exp2667__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
            auto v_round_const__1 = typename Traits::rt_expr{};
            v_round_const__1 = iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If2671__2 = iface.f_decl_bv("If2671__2", iface.bigint_lit("129"));
              const auto v_temp520 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
              iface.f_switch_context(iface.f_true_branch(v_temp520));
              iface.f_gen_store(v_If2671__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_false_branch(v_temp520));
              iface.f_gen_store(v_If2671__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp520));
              v_round_const__1 = iface.f_gen_load(v_If2671__2);
              auto v_If2674__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2674__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2664__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2674__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2664__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2678__2 = iface.f_decl_bv("If2678__2", iface.bigint_lit("257"));
              const auto v_temp521 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp521));
              iface.f_gen_store(v_If2678__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2674__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2671__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp521));
              iface.f_gen_store(v_If2678__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2674__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2671__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp521));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2679__2 = typename Traits::rt_expr{};
                auto v_SatQ2680__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2681__3 = iface.f_decl_bv("UnsignedSatQ2681__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2682__3 = iface.f_decl_bool("UnsignedSatQ2682__3");
                  const auto v_temp522 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2678__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp522));
                  iface.f_gen_store(v_UnsignedSatQ2681__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2682__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp522));
                  const auto v_temp523 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2678__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp523));
                  iface.f_gen_store(v_UnsignedSatQ2681__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2682__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp523));
                  iface.f_gen_store(v_UnsignedSatQ2681__3, iface.f_gen_slice(iface.f_gen_load(v_If2678__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2682__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp522));
                  v_SatQ2679__2 = iface.f_gen_load(v_UnsignedSatQ2681__3);
                  v_SatQ2680__2 = iface.f_gen_load(v_UnsignedSatQ2682__3);
                } else {
                  const auto v_SignedSatQ2687__3 = iface.f_decl_bv("SignedSatQ2687__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2688__3 = iface.f_decl_bool("SignedSatQ2688__3");
                  const auto v_temp524 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2678__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp524));
                  iface.f_gen_store(v_SignedSatQ2687__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2688__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp524));
                  const auto v_temp525 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2678__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp525));
                  iface.f_gen_store(v_SignedSatQ2687__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2688__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp525));
                  iface.f_gen_store(v_SignedSatQ2687__3, iface.f_gen_slice(iface.f_gen_load(v_If2678__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2688__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp524));
                  v_SatQ2679__2 = iface.f_gen_load(v_SignedSatQ2687__3);
                  v_SatQ2680__2 = iface.f_gen_load(v_SignedSatQ2688__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), v_SatQ2679__2));
                const auto v_temp526 = iface.f_gen_branch(v_SatQ2680__2);
                iface.f_switch_context(iface.f_true_branch(v_temp526));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp526));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_If2678__2), iface.bigint_lit("0"), iface.bigint_lit("32"))));
              } // if
            } else {
              auto v_If2704__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2704__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2704__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2708__2 = iface.f_decl_bv("If2708__2", iface.bigint_lit("160"));
              const auto v_temp527 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp527));
              iface.f_gen_store(v_If2708__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2704__2, iface.f_gen_int_lit(iface.bigint_lit("160"))), iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp527));
              iface.f_gen_store(v_If2708__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2704__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("160"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp527));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2709__2 = typename Traits::rt_expr{};
                auto v_SatQ2710__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2711__3 = iface.f_decl_bv("UnsignedSatQ2711__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2712__3 = iface.f_decl_bool("UnsignedSatQ2712__3");
                  const auto v_temp528 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2708__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp528));
                  iface.f_gen_store(v_UnsignedSatQ2711__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2712__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp528));
                  const auto v_temp529 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2708__2), iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp529));
                  iface.f_gen_store(v_UnsignedSatQ2711__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2712__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp529));
                  iface.f_gen_store(v_UnsignedSatQ2711__3, iface.f_gen_slice(iface.f_gen_load(v_If2708__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2712__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp528));
                  v_SatQ2709__2 = iface.f_gen_load(v_UnsignedSatQ2711__3);
                  v_SatQ2710__2 = iface.f_gen_load(v_UnsignedSatQ2712__3);
                } else {
                  const auto v_SignedSatQ2717__3 = iface.f_decl_bv("SignedSatQ2717__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2718__3 = iface.f_decl_bool("SignedSatQ2718__3");
                  const auto v_temp530 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(160U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2708__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp530));
                  iface.f_gen_store(v_SignedSatQ2717__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2718__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp530));
                  const auto v_temp531 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2708__2), iface.f_gen_bit_lit(iface.bits_lit(160U, "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp531));
                  iface.f_gen_store(v_SignedSatQ2717__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2718__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp531));
                  iface.f_gen_store(v_SignedSatQ2717__3, iface.f_gen_slice(iface.f_gen_load(v_If2708__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2718__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp530));
                  v_SatQ2709__2 = iface.f_gen_load(v_SignedSatQ2717__3);
                  v_SatQ2710__2 = iface.f_gen_load(v_SignedSatQ2718__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), v_SatQ2709__2));
                const auto v_temp532 = iface.f_gen_branch(v_SatQ2710__2);
                iface.f_switch_context(iface.f_true_branch(v_temp532));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp532));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_If2708__2), iface.bigint_lit("0"), iface.bigint_lit("32"))));
              } // if
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If2735__2 = iface.f_decl_bv("If2735__2", iface.bigint_lit("129"));
              const auto v_temp533 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
              iface.f_switch_context(iface.f_true_branch(v_temp533));
              iface.f_gen_store(v_If2735__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_false_branch(v_temp533));
              iface.f_gen_store(v_If2735__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp533));
              auto v_If2738__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2738__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2664__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2738__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2664__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2742__2 = iface.f_decl_bv("If2742__2", iface.bigint_lit("257"));
              const auto v_temp534 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp534));
              iface.f_gen_store(v_If2742__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2738__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2735__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp534));
              iface.f_gen_store(v_If2742__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2738__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2735__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp534));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2743__2 = typename Traits::rt_expr{};
                auto v_SatQ2744__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2745__3 = iface.f_decl_bv("UnsignedSatQ2745__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2746__3 = iface.f_decl_bool("UnsignedSatQ2746__3");
                  const auto v_temp535 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2742__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp535));
                  iface.f_gen_store(v_UnsignedSatQ2745__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2746__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp535));
                  const auto v_temp536 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2742__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp536));
                  iface.f_gen_store(v_UnsignedSatQ2745__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2746__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp536));
                  iface.f_gen_store(v_UnsignedSatQ2745__3, iface.f_gen_slice(iface.f_gen_load(v_If2742__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2746__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp535));
                  v_SatQ2743__2 = iface.f_gen_load(v_UnsignedSatQ2745__3);
                  v_SatQ2744__2 = iface.f_gen_load(v_UnsignedSatQ2746__3);
                } else {
                  const auto v_SignedSatQ2751__3 = iface.f_decl_bv("SignedSatQ2751__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2752__3 = iface.f_decl_bool("SignedSatQ2752__3");
                  const auto v_temp537 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2742__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp537));
                  iface.f_gen_store(v_SignedSatQ2751__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2752__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp537));
                  const auto v_temp538 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2742__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp538));
                  iface.f_gen_store(v_SignedSatQ2751__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2752__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp538));
                  iface.f_gen_store(v_SignedSatQ2751__3, iface.f_gen_slice(iface.f_gen_load(v_If2742__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2752__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp537));
                  v_SatQ2743__2 = iface.f_gen_load(v_SignedSatQ2751__3);
                  v_SatQ2744__2 = iface.f_gen_load(v_SignedSatQ2752__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2743__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
                const auto v_temp539 = iface.f_gen_branch(v_SatQ2744__2);
                iface.f_switch_context(iface.f_true_branch(v_temp539));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp539));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2742__2), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
              } // if
            } else {
              auto v_If2768__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If2768__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2664__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If2768__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2664__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              const auto v_If2773__2 = iface.f_decl_bv("If2773__2", iface.bigint_lit("257"));
              const auto v_temp540 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_true_branch(v_temp540));
              iface.f_gen_store(v_If2773__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2768__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
              iface.f_switch_context(iface.f_false_branch(v_temp540));
              iface.f_gen_store(v_If2773__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2768__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2667__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp540));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_SatQ2774__2 = typename Traits::rt_expr{};
                auto v_SatQ2775__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ2776__3 = iface.f_decl_bv("UnsignedSatQ2776__3", iface.bigint_lit("32"));
                  const auto v_UnsignedSatQ2777__3 = iface.f_decl_bool("UnsignedSatQ2777__3");
                  const auto v_temp541 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), iface.f_gen_load(v_If2773__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp541));
                  iface.f_gen_store(v_UnsignedSatQ2776__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ2777__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp541));
                  const auto v_temp542 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2773__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp542));
                  iface.f_gen_store(v_UnsignedSatQ2776__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ2777__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp542));
                  iface.f_gen_store(v_UnsignedSatQ2776__3, iface.f_gen_slice(iface.f_gen_load(v_If2773__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_UnsignedSatQ2777__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp541));
                  v_SatQ2774__2 = iface.f_gen_load(v_UnsignedSatQ2776__3);
                  v_SatQ2775__2 = iface.f_gen_load(v_UnsignedSatQ2777__3);
                } else {
                  const auto v_SignedSatQ2782__3 = iface.f_decl_bv("SignedSatQ2782__3", iface.bigint_lit("32"));
                  const auto v_SignedSatQ2783__3 = iface.f_decl_bool("SignedSatQ2783__3");
                  const auto v_temp543 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), iface.f_gen_load(v_If2773__2)));
                  iface.f_switch_context(iface.f_true_branch(v_temp543));
                  iface.f_gen_store(v_SignedSatQ2782__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ2783__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp543));
                  const auto v_temp544 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2773__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp544));
                  iface.f_gen_store(v_SignedSatQ2782__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ2783__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp544));
                  iface.f_gen_store(v_SignedSatQ2782__3, iface.f_gen_slice(iface.f_gen_load(v_If2773__2), iface.bigint_lit("0"), iface.bigint_lit("32")));
                  iface.f_gen_store(v_SignedSatQ2783__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp543));
                  v_SatQ2774__2 = iface.f_gen_load(v_SignedSatQ2782__3);
                  v_SatQ2775__2 = iface.f_gen_load(v_SignedSatQ2783__3);
                } // if
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2774__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
                const auto v_temp545 = iface.f_gen_branch(v_SatQ2775__2);
                iface.f_switch_context(iface.f_true_branch(v_temp545));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp545));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2773__2), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
              } // if
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp2806__2 = typename Traits::rt_expr{};
              v_Exp2806__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp2809__2 = typename Traits::rt_expr{};
              v_Exp2809__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
              auto v_round_const__1 = typename Traits::rt_expr{};
              v_round_const__1 = iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_If2813__2 = iface.f_decl_bv("If2813__2", iface.bigint_lit("129"));
                const auto v_temp546 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
                iface.f_switch_context(iface.f_true_branch(v_temp546));
                iface.f_gen_store(v_If2813__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
                iface.f_switch_context(iface.f_false_branch(v_temp546));
                iface.f_gen_store(v_If2813__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp546));
                v_round_const__1 = iface.f_gen_load(v_If2813__2);
                auto v_If2816__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If2816__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2806__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If2816__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2806__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                const auto v_If2820__2 = iface.f_decl_bv("If2820__2", iface.bigint_lit("257"));
                const auto v_temp547 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_true_branch(v_temp547));
                iface.f_gen_store(v_If2820__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2816__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2813__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_false_branch(v_temp547));
                iface.f_gen_store(v_If2820__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2816__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2813__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp547));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_SatQ2821__2 = typename Traits::rt_expr{};
                  auto v_SatQ2822__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    const auto v_UnsignedSatQ2823__3 = iface.f_decl_bv("UnsignedSatQ2823__3", iface.bigint_lit("64"));
                    const auto v_UnsignedSatQ2824__3 = iface.f_decl_bool("UnsignedSatQ2824__3");
                    const auto v_temp548 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2820__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp548));
                    iface.f_gen_store(v_UnsignedSatQ2823__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_UnsignedSatQ2824__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp548));
                    const auto v_temp549 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2820__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp549));
                    iface.f_gen_store(v_UnsignedSatQ2823__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_UnsignedSatQ2824__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp549));
                    iface.f_gen_store(v_UnsignedSatQ2823__3, iface.f_gen_slice(iface.f_gen_load(v_If2820__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_UnsignedSatQ2824__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp548));
                    v_SatQ2821__2 = iface.f_gen_load(v_UnsignedSatQ2823__3);
                    v_SatQ2822__2 = iface.f_gen_load(v_UnsignedSatQ2824__3);
                  } else {
                    const auto v_SignedSatQ2829__3 = iface.f_decl_bv("SignedSatQ2829__3", iface.bigint_lit("64"));
                    const auto v_SignedSatQ2830__3 = iface.f_decl_bool("SignedSatQ2830__3");
                    const auto v_temp550 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2820__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp550));
                    iface.f_gen_store(v_SignedSatQ2829__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_SignedSatQ2830__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp550));
                    const auto v_temp551 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2820__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp551));
                    iface.f_gen_store(v_SignedSatQ2829__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_SignedSatQ2830__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp551));
                    iface.f_gen_store(v_SignedSatQ2829__3, iface.f_gen_slice(iface.f_gen_load(v_If2820__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_SignedSatQ2830__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp550));
                    v_SatQ2821__2 = iface.f_gen_load(v_SignedSatQ2829__3);
                    v_SatQ2822__2 = iface.f_gen_load(v_SignedSatQ2830__3);
                  } // if
                  iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), v_SatQ2821__2));
                  const auto v_temp552 = iface.f_gen_branch(v_SatQ2822__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp552));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp552));
                } else {
                  iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_load(v_If2820__2), iface.bigint_lit("0"), iface.bigint_lit("64"))));
                } // if
              } else {
                auto v_If2846__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If2846__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If2846__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                const auto v_If2850__2 = iface.f_decl_bv("If2850__2", iface.bigint_lit("192"));
                const auto v_temp553 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_true_branch(v_temp553));
                iface.f_gen_store(v_If2850__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2846__2, iface.f_gen_int_lit(iface.bigint_lit("192"))), iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_false_branch(v_temp553));
                iface.f_gen_store(v_If2850__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2846__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("192"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp553));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_SatQ2851__2 = typename Traits::rt_expr{};
                  auto v_SatQ2852__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    const auto v_UnsignedSatQ2853__3 = iface.f_decl_bv("UnsignedSatQ2853__3", iface.bigint_lit("64"));
                    const auto v_UnsignedSatQ2854__3 = iface.f_decl_bool("UnsignedSatQ2854__3");
                    const auto v_temp554 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2850__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp554));
                    iface.f_gen_store(v_UnsignedSatQ2853__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_UnsignedSatQ2854__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp554));
                    const auto v_temp555 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2850__2), iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp555));
                    iface.f_gen_store(v_UnsignedSatQ2853__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_UnsignedSatQ2854__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp555));
                    iface.f_gen_store(v_UnsignedSatQ2853__3, iface.f_gen_slice(iface.f_gen_load(v_If2850__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_UnsignedSatQ2854__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp554));
                    v_SatQ2851__2 = iface.f_gen_load(v_UnsignedSatQ2853__3);
                    v_SatQ2852__2 = iface.f_gen_load(v_UnsignedSatQ2854__3);
                  } else {
                    const auto v_SignedSatQ2859__3 = iface.f_decl_bv("SignedSatQ2859__3", iface.bigint_lit("64"));
                    const auto v_SignedSatQ2860__3 = iface.f_decl_bool("SignedSatQ2860__3");
                    const auto v_temp556 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2850__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp556));
                    iface.f_gen_store(v_SignedSatQ2859__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_SignedSatQ2860__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp556));
                    const auto v_temp557 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2850__2), iface.f_gen_bit_lit(iface.bits_lit(192U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp557));
                    iface.f_gen_store(v_SignedSatQ2859__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_SignedSatQ2860__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp557));
                    iface.f_gen_store(v_SignedSatQ2859__3, iface.f_gen_slice(iface.f_gen_load(v_If2850__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_SignedSatQ2860__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp556));
                    v_SatQ2851__2 = iface.f_gen_load(v_SignedSatQ2859__3);
                    v_SatQ2852__2 = iface.f_gen_load(v_SignedSatQ2860__3);
                  } // if
                  iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), v_SatQ2851__2));
                  const auto v_temp558 = iface.f_gen_branch(v_SatQ2852__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp558));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp558));
                } else {
                  iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_load(v_If2850__2), iface.bigint_lit("0"), iface.bigint_lit("64"))));
                } // if
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_If2877__2 = iface.f_decl_bv("If2877__2", iface.bigint_lit("129"));
                const auto v_temp559 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
                iface.f_switch_context(iface.f_true_branch(v_temp559));
                iface.f_gen_store(v_If2877__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
                iface.f_switch_context(iface.f_false_branch(v_temp559));
                iface.f_gen_store(v_If2877__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp559));
                auto v_If2880__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If2880__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2806__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If2880__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2806__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                const auto v_If2884__2 = iface.f_decl_bv("If2884__2", iface.bigint_lit("257"));
                const auto v_temp560 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_true_branch(v_temp560));
                iface.f_gen_store(v_If2884__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2880__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2877__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_false_branch(v_temp560));
                iface.f_gen_store(v_If2884__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2880__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2877__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp560));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_SatQ2885__2 = typename Traits::rt_expr{};
                  auto v_SatQ2886__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    const auto v_UnsignedSatQ2887__3 = iface.f_decl_bv("UnsignedSatQ2887__3", iface.bigint_lit("64"));
                    const auto v_UnsignedSatQ2888__3 = iface.f_decl_bool("UnsignedSatQ2888__3");
                    const auto v_temp561 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2884__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp561));
                    iface.f_gen_store(v_UnsignedSatQ2887__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_UnsignedSatQ2888__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp561));
                    const auto v_temp562 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2884__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp562));
                    iface.f_gen_store(v_UnsignedSatQ2887__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_UnsignedSatQ2888__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp562));
                    iface.f_gen_store(v_UnsignedSatQ2887__3, iface.f_gen_slice(iface.f_gen_load(v_If2884__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_UnsignedSatQ2888__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp561));
                    v_SatQ2885__2 = iface.f_gen_load(v_UnsignedSatQ2887__3);
                    v_SatQ2886__2 = iface.f_gen_load(v_UnsignedSatQ2888__3);
                  } else {
                    const auto v_SignedSatQ2893__3 = iface.f_decl_bv("SignedSatQ2893__3", iface.bigint_lit("64"));
                    const auto v_SignedSatQ2894__3 = iface.f_decl_bool("SignedSatQ2894__3");
                    const auto v_temp563 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2884__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp563));
                    iface.f_gen_store(v_SignedSatQ2893__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_SignedSatQ2894__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp563));
                    const auto v_temp564 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2884__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp564));
                    iface.f_gen_store(v_SignedSatQ2893__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_SignedSatQ2894__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp564));
                    iface.f_gen_store(v_SignedSatQ2893__3, iface.f_gen_slice(iface.f_gen_load(v_If2884__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_SignedSatQ2894__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp563));
                    v_SatQ2885__2 = iface.f_gen_load(v_SignedSatQ2893__3);
                    v_SatQ2886__2 = iface.f_gen_load(v_SignedSatQ2894__3);
                  } // if
                  iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2885__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
                  const auto v_temp565 = iface.f_gen_branch(v_SatQ2886__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp565));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp565));
                } else {
                  iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2884__2), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
                } // if
              } else {
                auto v_If2910__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If2910__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2806__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If2910__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2806__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                const auto v_If2915__2 = iface.f_decl_bv("If2915__2", iface.bigint_lit("257"));
                const auto v_temp566 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_true_branch(v_temp566));
                iface.f_gen_store(v_If2915__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2910__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_false_branch(v_temp566));
                iface.f_gen_store(v_If2915__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2910__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(v_round_const__1, iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2809__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp566));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_SatQ2916__2 = typename Traits::rt_expr{};
                  auto v_SatQ2917__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    const auto v_UnsignedSatQ2918__3 = iface.f_decl_bv("UnsignedSatQ2918__3", iface.bigint_lit("64"));
                    const auto v_UnsignedSatQ2919__3 = iface.f_decl_bool("UnsignedSatQ2919__3");
                    const auto v_temp567 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2915__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp567));
                    iface.f_gen_store(v_UnsignedSatQ2918__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_UnsignedSatQ2919__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp567));
                    const auto v_temp568 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2915__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp568));
                    iface.f_gen_store(v_UnsignedSatQ2918__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_UnsignedSatQ2919__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp568));
                    iface.f_gen_store(v_UnsignedSatQ2918__3, iface.f_gen_slice(iface.f_gen_load(v_If2915__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_UnsignedSatQ2919__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp567));
                    v_SatQ2916__2 = iface.f_gen_load(v_UnsignedSatQ2918__3);
                    v_SatQ2917__2 = iface.f_gen_load(v_UnsignedSatQ2919__3);
                  } else {
                    const auto v_SignedSatQ2924__3 = iface.f_decl_bv("SignedSatQ2924__3", iface.bigint_lit("64"));
                    const auto v_SignedSatQ2925__3 = iface.f_decl_bool("SignedSatQ2925__3");
                    const auto v_temp569 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2915__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp569));
                    iface.f_gen_store(v_SignedSatQ2924__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_SignedSatQ2925__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp569));
                    const auto v_temp570 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2915__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp570));
                    iface.f_gen_store(v_SignedSatQ2924__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_SignedSatQ2925__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp570));
                    iface.f_gen_store(v_SignedSatQ2924__3, iface.f_gen_slice(iface.f_gen_load(v_If2915__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_SignedSatQ2925__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp569));
                    v_SatQ2916__2 = iface.f_gen_load(v_SignedSatQ2924__3);
                    v_SatQ2917__2 = iface.f_gen_load(v_SignedSatQ2925__3);
                  } // if
                  iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_SatQ2916__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
                  const auto v_temp571 = iface.f_gen_branch(v_SatQ2917__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp571));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp571));
                } else {
                  iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_If2915__2), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
                } // if
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp2947__2 = typename Traits::rt_expr{};
              v_Exp2947__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp2950__2 = typename Traits::rt_expr{};
              v_Exp2950__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_If2954__2 = iface.f_decl_bv("If2954__2", iface.bigint_lit("129"));
                const auto v_temp572 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(9U, "000000000")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))));
                iface.f_switch_context(iface.f_true_branch(v_temp572));
                iface.f_gen_store(v_If2954__2, iface.f_gen_ZeroExtend(iface.f_gen_lsl_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001")), iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
                iface.f_switch_context(iface.f_false_branch(v_temp572));
                iface.f_gen_store(v_If2954__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_bit_lit(iface.bits_lit(2U, "01")), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001"))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("129"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp572));
                auto v_If2957__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If2957__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2947__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If2957__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2947__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                const auto v_If2961__2 = iface.f_decl_bv("If2961__2", iface.bigint_lit("257"));
                const auto v_temp573 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2950__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_true_branch(v_temp573));
                iface.f_gen_store(v_If2961__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2957__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2954__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_int_lit(iface.bigint_lit("257"))), iface.f_gen_slice(v_Exp2950__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_false_branch(v_temp573));
                iface.f_gen_store(v_If2961__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If2957__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_SignExtend(iface.f_gen_load(v_If2954__2), iface.f_gen_int_lit(iface.bigint_lit("130")))), iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2950__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("257"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp573));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_SatQ2962__2 = typename Traits::rt_expr{};
                  auto v_SatQ2963__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    const auto v_UnsignedSatQ2964__3 = iface.f_decl_bv("UnsignedSatQ2964__3", iface.bigint_lit("64"));
                    const auto v_UnsignedSatQ2965__3 = iface.f_decl_bool("UnsignedSatQ2965__3");
                    const auto v_temp574 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2961__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp574));
                    iface.f_gen_store(v_UnsignedSatQ2964__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_UnsignedSatQ2965__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp574));
                    const auto v_temp575 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2961__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp575));
                    iface.f_gen_store(v_UnsignedSatQ2964__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_UnsignedSatQ2965__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp575));
                    iface.f_gen_store(v_UnsignedSatQ2964__3, iface.f_gen_slice(iface.f_gen_load(v_If2961__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_UnsignedSatQ2965__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp574));
                    v_SatQ2962__2 = iface.f_gen_load(v_UnsignedSatQ2964__3);
                    v_SatQ2963__2 = iface.f_gen_load(v_UnsignedSatQ2965__3);
                  } else {
                    const auto v_SignedSatQ2970__3 = iface.f_decl_bv("SignedSatQ2970__3", iface.bigint_lit("64"));
                    const auto v_SignedSatQ2971__3 = iface.f_decl_bool("SignedSatQ2971__3");
                    const auto v_temp576 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(257U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2961__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp576));
                    iface.f_gen_store(v_SignedSatQ2970__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_SignedSatQ2971__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp576));
                    const auto v_temp577 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2961__2), iface.f_gen_bit_lit(iface.bits_lit(257U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp577));
                    iface.f_gen_store(v_SignedSatQ2970__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_SignedSatQ2971__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp577));
                    iface.f_gen_store(v_SignedSatQ2970__3, iface.f_gen_slice(iface.f_gen_load(v_If2961__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_SignedSatQ2971__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp576));
                    v_SatQ2962__2 = iface.f_gen_load(v_SignedSatQ2970__3);
                    v_SatQ2963__2 = iface.f_gen_load(v_SignedSatQ2971__3);
                  } // if
                  iface.f_gen_store(v_result__1, v_SatQ2962__2);
                  const auto v_temp578 = iface.f_gen_branch(v_SatQ2963__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp578));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp578));
                } else {
                  iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_load(v_If2961__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } // if
              } else {
                auto v_If2987__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If2987__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If2987__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                const auto v_If2991__2 = iface.f_decl_bv("If2991__2", iface.bigint_lit("192"));
                const auto v_temp579 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp2950__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_true_branch(v_temp579));
                iface.f_gen_store(v_If2991__2, iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2987__2, iface.f_gen_int_lit(iface.bigint_lit("192"))), iface.f_gen_slice(v_Exp2950__2, iface.bigint_lit("0"), iface.bigint_lit("8"))));
                iface.f_switch_context(iface.f_false_branch(v_temp579));
                iface.f_gen_store(v_If2991__2, iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2987__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2950__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")))), iface.f_gen_bit_lit(iface.bits_lit(9U, "000000001")))), iface.f_gen_int_lit(iface.bigint_lit("192"))));
                iface.f_switch_context(iface.f_merge_branch(v_temp579));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_SatQ2992__2 = typename Traits::rt_expr{};
                  auto v_SatQ2993__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    const auto v_UnsignedSatQ2994__3 = iface.f_decl_bv("UnsignedSatQ2994__3", iface.bigint_lit("64"));
                    const auto v_UnsignedSatQ2995__3 = iface.f_decl_bool("UnsignedSatQ2995__3");
                    const auto v_temp580 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2991__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp580));
                    iface.f_gen_store(v_UnsignedSatQ2994__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_UnsignedSatQ2995__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp580));
                    const auto v_temp581 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2991__2), iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp581));
                    iface.f_gen_store(v_UnsignedSatQ2994__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_UnsignedSatQ2995__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp581));
                    iface.f_gen_store(v_UnsignedSatQ2994__3, iface.f_gen_slice(iface.f_gen_load(v_If2991__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_UnsignedSatQ2995__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp580));
                    v_SatQ2992__2 = iface.f_gen_load(v_UnsignedSatQ2994__3);
                    v_SatQ2993__2 = iface.f_gen_load(v_UnsignedSatQ2995__3);
                  } else {
                    const auto v_SignedSatQ3000__3 = iface.f_decl_bv("SignedSatQ3000__3", iface.bigint_lit("64"));
                    const auto v_SignedSatQ3001__3 = iface.f_decl_bool("SignedSatQ3001__3");
                    const auto v_temp582 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(192U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_load(v_If2991__2)));
                    iface.f_switch_context(iface.f_true_branch(v_temp582));
                    iface.f_gen_store(v_SignedSatQ3000__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                    iface.f_gen_store(v_SignedSatQ3001__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp582));
                    const auto v_temp583 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_load(v_If2991__2), iface.f_gen_bit_lit(iface.bits_lit(192U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp583));
                    iface.f_gen_store(v_SignedSatQ3000__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                    iface.f_gen_store(v_SignedSatQ3001__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp583));
                    iface.f_gen_store(v_SignedSatQ3000__3, iface.f_gen_slice(iface.f_gen_load(v_If2991__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    iface.f_gen_store(v_SignedSatQ3001__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp582));
                    v_SatQ2992__2 = iface.f_gen_load(v_SignedSatQ3000__3);
                    v_SatQ2993__2 = iface.f_gen_load(v_SignedSatQ3001__3);
                  } // if
                  iface.f_gen_store(v_result__1, v_SatQ2992__2);
                  const auto v_temp584 = iface.f_gen_branch(v_SatQ2993__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp584));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp584));
                } else {
                  iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_load(v_If2991__2), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } // if
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_shift_simd


} // namespace aslp
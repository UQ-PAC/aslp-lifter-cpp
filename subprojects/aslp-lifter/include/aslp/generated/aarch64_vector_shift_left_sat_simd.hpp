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
void aslp_lifter<Traits>::f_aarch64_vector_shift_left_sat_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0000"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      auto v_HighestSetBit3__2 = iface.bits_zero(iface.bigint_lit("3"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_HighestSetBit3__2 = iface.bits_lit(3U, "011");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_HighestSetBit3__2 = iface.bits_lit(3U, "010");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit3__2 = iface.bits_lit(3U, "001");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit3__2 = iface.bits_lit(3U, "000");
            } else {
              v_HighestSetBit3__2 = iface.bits_lit(3U, "111");
            } // if
          } // if
        } // if
      } // if
      if (iface.f_eq_bits(v_HighestSetBit3__2, iface.bits_lit(3U, "000"))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_src_unsigned__1 = true;
          auto v_dst_unsigned__1 = true;
          if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
              v_src_unsigned__1 = false;
              v_dst_unsigned__1 = true;
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                v_src_unsigned__1 = false;
                v_dst_unsigned__1 = false;
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                  v_src_unsigned__1 = true;
                  v_dst_unsigned__1 = true;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp9__2 = typename Traits::rt_expr{};
          v_Exp9__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If13__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If13__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If13__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If17__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If17__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If13__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If17__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If13__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ19__2 = typename Traits::rt_expr{};
          auto v_SatQ20__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ21__3 = iface.f_decl_bv("UnsignedSatQ21__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ22__3 = iface.f_decl_bool("UnsignedSatQ22__3");
            const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If17__2));
            iface.f_switch_context(iface.f_true_branch(v_temp0));
            iface.f_gen_store(v_UnsignedSatQ21__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp0));
            const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If17__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp1));
            iface.f_gen_store(v_UnsignedSatQ21__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp1));
            iface.f_gen_store(v_UnsignedSatQ21__3, iface.f_gen_slice(v_If17__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp0));
            v_SatQ19__2 = iface.f_gen_load(v_UnsignedSatQ21__3);
            v_SatQ20__2 = iface.f_gen_load(v_UnsignedSatQ22__3);
          } else {
            const auto v_SignedSatQ27__3 = iface.f_decl_bv("SignedSatQ27__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ28__3 = iface.f_decl_bool("SignedSatQ28__3");
            const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If17__2));
            iface.f_switch_context(iface.f_true_branch(v_temp2));
            iface.f_gen_store(v_SignedSatQ27__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp2));
            const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If17__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp3));
            iface.f_gen_store(v_SignedSatQ27__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp3));
            iface.f_gen_store(v_SignedSatQ27__3, iface.f_gen_slice(v_If17__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp2));
            v_SatQ19__2 = iface.f_gen_load(v_SignedSatQ27__3);
            v_SatQ20__2 = iface.f_gen_load(v_SignedSatQ28__3);
          } // if
          const auto v_temp4 = iface.f_gen_branch(v_SatQ20__2);
          iface.f_switch_context(iface.f_true_branch(v_temp4));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp4));
          auto v_If42__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If42__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If42__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If46__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If46__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If42__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If46__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If42__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ47__2 = typename Traits::rt_expr{};
          auto v_SatQ48__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ49__3 = iface.f_decl_bv("UnsignedSatQ49__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ50__3 = iface.f_decl_bool("UnsignedSatQ50__3");
            const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If46__2));
            iface.f_switch_context(iface.f_true_branch(v_temp5));
            iface.f_gen_store(v_UnsignedSatQ49__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ50__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp5));
            const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If46__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp6));
            iface.f_gen_store(v_UnsignedSatQ49__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ50__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp6));
            iface.f_gen_store(v_UnsignedSatQ49__3, iface.f_gen_slice(v_If46__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ50__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp5));
            v_SatQ47__2 = iface.f_gen_load(v_UnsignedSatQ49__3);
            v_SatQ48__2 = iface.f_gen_load(v_UnsignedSatQ50__3);
          } else {
            const auto v_SignedSatQ55__3 = iface.f_decl_bv("SignedSatQ55__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ56__3 = iface.f_decl_bool("SignedSatQ56__3");
            const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If46__2));
            iface.f_switch_context(iface.f_true_branch(v_temp7));
            iface.f_gen_store(v_SignedSatQ55__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ56__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp7));
            const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If46__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp8));
            iface.f_gen_store(v_SignedSatQ55__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ56__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp8));
            iface.f_gen_store(v_SignedSatQ55__3, iface.f_gen_slice(v_If46__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ56__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp7));
            v_SatQ47__2 = iface.f_gen_load(v_SignedSatQ55__3);
            v_SatQ48__2 = iface.f_gen_load(v_SignedSatQ56__3);
          } // if
          const auto v_temp9 = iface.f_gen_branch(v_SatQ48__2);
          iface.f_switch_context(iface.f_true_branch(v_temp9));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp9));
          auto v_If69__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If69__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If69__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If73__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If73__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If69__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If73__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If69__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ74__2 = typename Traits::rt_expr{};
          auto v_SatQ75__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ76__3 = iface.f_decl_bv("UnsignedSatQ76__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ77__3 = iface.f_decl_bool("UnsignedSatQ77__3");
            const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If73__2));
            iface.f_switch_context(iface.f_true_branch(v_temp10));
            iface.f_gen_store(v_UnsignedSatQ76__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ77__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp10));
            const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If73__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp11));
            iface.f_gen_store(v_UnsignedSatQ76__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ77__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp11));
            iface.f_gen_store(v_UnsignedSatQ76__3, iface.f_gen_slice(v_If73__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ77__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp10));
            v_SatQ74__2 = iface.f_gen_load(v_UnsignedSatQ76__3);
            v_SatQ75__2 = iface.f_gen_load(v_UnsignedSatQ77__3);
          } else {
            const auto v_SignedSatQ82__3 = iface.f_decl_bv("SignedSatQ82__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ83__3 = iface.f_decl_bool("SignedSatQ83__3");
            const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If73__2));
            iface.f_switch_context(iface.f_true_branch(v_temp12));
            iface.f_gen_store(v_SignedSatQ82__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ83__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp12));
            const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If73__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp13));
            iface.f_gen_store(v_SignedSatQ82__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ83__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp13));
            iface.f_gen_store(v_SignedSatQ82__3, iface.f_gen_slice(v_If73__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ83__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp12));
            v_SatQ74__2 = iface.f_gen_load(v_SignedSatQ82__3);
            v_SatQ75__2 = iface.f_gen_load(v_SignedSatQ83__3);
          } // if
          const auto v_temp14 = iface.f_gen_branch(v_SatQ75__2);
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp14));
          auto v_If96__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If96__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If96__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If100__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If100__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If96__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If100__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If96__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ101__2 = typename Traits::rt_expr{};
          auto v_SatQ102__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ103__3 = iface.f_decl_bv("UnsignedSatQ103__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ104__3 = iface.f_decl_bool("UnsignedSatQ104__3");
            const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If100__2));
            iface.f_switch_context(iface.f_true_branch(v_temp15));
            iface.f_gen_store(v_UnsignedSatQ103__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ104__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp15));
            const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If100__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp16));
            iface.f_gen_store(v_UnsignedSatQ103__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ104__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp16));
            iface.f_gen_store(v_UnsignedSatQ103__3, iface.f_gen_slice(v_If100__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ104__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp15));
            v_SatQ101__2 = iface.f_gen_load(v_UnsignedSatQ103__3);
            v_SatQ102__2 = iface.f_gen_load(v_UnsignedSatQ104__3);
          } else {
            const auto v_SignedSatQ109__3 = iface.f_decl_bv("SignedSatQ109__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ110__3 = iface.f_decl_bool("SignedSatQ110__3");
            const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If100__2));
            iface.f_switch_context(iface.f_true_branch(v_temp17));
            iface.f_gen_store(v_SignedSatQ109__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ110__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp17));
            const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If100__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp18));
            iface.f_gen_store(v_SignedSatQ109__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ110__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp18));
            iface.f_gen_store(v_SignedSatQ109__3, iface.f_gen_slice(v_If100__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ110__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp17));
            v_SatQ101__2 = iface.f_gen_load(v_SignedSatQ109__3);
            v_SatQ102__2 = iface.f_gen_load(v_SignedSatQ110__3);
          } // if
          const auto v_temp19 = iface.f_gen_branch(v_SatQ102__2);
          iface.f_switch_context(iface.f_true_branch(v_temp19));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp19));
          auto v_If123__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If123__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If123__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If127__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If127__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If123__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If127__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If123__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ128__2 = typename Traits::rt_expr{};
          auto v_SatQ129__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ130__3 = iface.f_decl_bv("UnsignedSatQ130__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ131__3 = iface.f_decl_bool("UnsignedSatQ131__3");
            const auto v_temp20 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If127__2));
            iface.f_switch_context(iface.f_true_branch(v_temp20));
            iface.f_gen_store(v_UnsignedSatQ130__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ131__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp20));
            const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If127__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp21));
            iface.f_gen_store(v_UnsignedSatQ130__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ131__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp21));
            iface.f_gen_store(v_UnsignedSatQ130__3, iface.f_gen_slice(v_If127__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ131__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp20));
            v_SatQ128__2 = iface.f_gen_load(v_UnsignedSatQ130__3);
            v_SatQ129__2 = iface.f_gen_load(v_UnsignedSatQ131__3);
          } else {
            const auto v_SignedSatQ136__3 = iface.f_decl_bv("SignedSatQ136__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ137__3 = iface.f_decl_bool("SignedSatQ137__3");
            const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If127__2));
            iface.f_switch_context(iface.f_true_branch(v_temp22));
            iface.f_gen_store(v_SignedSatQ136__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ137__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp22));
            const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If127__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp23));
            iface.f_gen_store(v_SignedSatQ136__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ137__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp23));
            iface.f_gen_store(v_SignedSatQ136__3, iface.f_gen_slice(v_If127__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ137__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp22));
            v_SatQ128__2 = iface.f_gen_load(v_SignedSatQ136__3);
            v_SatQ129__2 = iface.f_gen_load(v_SignedSatQ137__3);
          } // if
          const auto v_temp24 = iface.f_gen_branch(v_SatQ129__2);
          iface.f_switch_context(iface.f_true_branch(v_temp24));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp24));
          auto v_If150__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If150__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If150__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If154__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If154__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If150__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If154__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If150__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ155__2 = typename Traits::rt_expr{};
          auto v_SatQ156__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ157__3 = iface.f_decl_bv("UnsignedSatQ157__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ158__3 = iface.f_decl_bool("UnsignedSatQ158__3");
            const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If154__2));
            iface.f_switch_context(iface.f_true_branch(v_temp25));
            iface.f_gen_store(v_UnsignedSatQ157__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ158__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp25));
            const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If154__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp26));
            iface.f_gen_store(v_UnsignedSatQ157__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ158__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp26));
            iface.f_gen_store(v_UnsignedSatQ157__3, iface.f_gen_slice(v_If154__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ158__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp25));
            v_SatQ155__2 = iface.f_gen_load(v_UnsignedSatQ157__3);
            v_SatQ156__2 = iface.f_gen_load(v_UnsignedSatQ158__3);
          } else {
            const auto v_SignedSatQ163__3 = iface.f_decl_bv("SignedSatQ163__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ164__3 = iface.f_decl_bool("SignedSatQ164__3");
            const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If154__2));
            iface.f_switch_context(iface.f_true_branch(v_temp27));
            iface.f_gen_store(v_SignedSatQ163__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ164__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp27));
            const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If154__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp28));
            iface.f_gen_store(v_SignedSatQ163__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ164__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp28));
            iface.f_gen_store(v_SignedSatQ163__3, iface.f_gen_slice(v_If154__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ164__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp27));
            v_SatQ155__2 = iface.f_gen_load(v_SignedSatQ163__3);
            v_SatQ156__2 = iface.f_gen_load(v_SignedSatQ164__3);
          } // if
          const auto v_temp29 = iface.f_gen_branch(v_SatQ156__2);
          iface.f_switch_context(iface.f_true_branch(v_temp29));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp29));
          auto v_If177__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If177__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If177__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If181__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If181__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If177__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If181__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If177__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ182__2 = typename Traits::rt_expr{};
          auto v_SatQ183__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ184__3 = iface.f_decl_bv("UnsignedSatQ184__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ185__3 = iface.f_decl_bool("UnsignedSatQ185__3");
            const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If181__2));
            iface.f_switch_context(iface.f_true_branch(v_temp30));
            iface.f_gen_store(v_UnsignedSatQ184__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ185__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp30));
            const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If181__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp31));
            iface.f_gen_store(v_UnsignedSatQ184__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ185__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp31));
            iface.f_gen_store(v_UnsignedSatQ184__3, iface.f_gen_slice(v_If181__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ185__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp30));
            v_SatQ182__2 = iface.f_gen_load(v_UnsignedSatQ184__3);
            v_SatQ183__2 = iface.f_gen_load(v_UnsignedSatQ185__3);
          } else {
            const auto v_SignedSatQ190__3 = iface.f_decl_bv("SignedSatQ190__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ191__3 = iface.f_decl_bool("SignedSatQ191__3");
            const auto v_temp32 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If181__2));
            iface.f_switch_context(iface.f_true_branch(v_temp32));
            iface.f_gen_store(v_SignedSatQ190__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ191__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp32));
            const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If181__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp33));
            iface.f_gen_store(v_SignedSatQ190__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ191__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp33));
            iface.f_gen_store(v_SignedSatQ190__3, iface.f_gen_slice(v_If181__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ191__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp32));
            v_SatQ182__2 = iface.f_gen_load(v_SignedSatQ190__3);
            v_SatQ183__2 = iface.f_gen_load(v_SignedSatQ191__3);
          } // if
          const auto v_temp34 = iface.f_gen_branch(v_SatQ183__2);
          iface.f_switch_context(iface.f_true_branch(v_temp34));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp34));
          auto v_If204__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If204__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If204__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If208__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If208__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If204__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If208__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If204__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ209__2 = typename Traits::rt_expr{};
          auto v_SatQ210__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ211__3 = iface.f_decl_bv("UnsignedSatQ211__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ212__3 = iface.f_decl_bool("UnsignedSatQ212__3");
            const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If208__2));
            iface.f_switch_context(iface.f_true_branch(v_temp35));
            iface.f_gen_store(v_UnsignedSatQ211__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ212__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp35));
            const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If208__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp36));
            iface.f_gen_store(v_UnsignedSatQ211__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ212__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp36));
            iface.f_gen_store(v_UnsignedSatQ211__3, iface.f_gen_slice(v_If208__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ212__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp35));
            v_SatQ209__2 = iface.f_gen_load(v_UnsignedSatQ211__3);
            v_SatQ210__2 = iface.f_gen_load(v_UnsignedSatQ212__3);
          } else {
            const auto v_SignedSatQ217__3 = iface.f_decl_bv("SignedSatQ217__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ218__3 = iface.f_decl_bool("SignedSatQ218__3");
            const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If208__2));
            iface.f_switch_context(iface.f_true_branch(v_temp37));
            iface.f_gen_store(v_SignedSatQ217__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ218__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp37));
            const auto v_temp38 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If208__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp38));
            iface.f_gen_store(v_SignedSatQ217__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ218__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp38));
            iface.f_gen_store(v_SignedSatQ217__3, iface.f_gen_slice(v_If208__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ218__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp37));
            v_SatQ209__2 = iface.f_gen_load(v_SignedSatQ217__3);
            v_SatQ210__2 = iface.f_gen_load(v_SignedSatQ218__3);
          } // if
          const auto v_temp39 = iface.f_gen_branch(v_SatQ210__2);
          iface.f_switch_context(iface.f_true_branch(v_temp39));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp39));
          auto v_If231__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If231__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If231__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If235__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If235__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If231__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If235__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If231__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ236__2 = typename Traits::rt_expr{};
          auto v_SatQ237__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ238__3 = iface.f_decl_bv("UnsignedSatQ238__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ239__3 = iface.f_decl_bool("UnsignedSatQ239__3");
            const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If235__2));
            iface.f_switch_context(iface.f_true_branch(v_temp40));
            iface.f_gen_store(v_UnsignedSatQ238__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ239__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp40));
            const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If235__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp41));
            iface.f_gen_store(v_UnsignedSatQ238__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ239__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp41));
            iface.f_gen_store(v_UnsignedSatQ238__3, iface.f_gen_slice(v_If235__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ239__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp40));
            v_SatQ236__2 = iface.f_gen_load(v_UnsignedSatQ238__3);
            v_SatQ237__2 = iface.f_gen_load(v_UnsignedSatQ239__3);
          } else {
            const auto v_SignedSatQ244__3 = iface.f_decl_bv("SignedSatQ244__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ245__3 = iface.f_decl_bool("SignedSatQ245__3");
            const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If235__2));
            iface.f_switch_context(iface.f_true_branch(v_temp42));
            iface.f_gen_store(v_SignedSatQ244__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ245__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp42));
            const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If235__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp43));
            iface.f_gen_store(v_SignedSatQ244__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ245__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp43));
            iface.f_gen_store(v_SignedSatQ244__3, iface.f_gen_slice(v_If235__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ245__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp42));
            v_SatQ236__2 = iface.f_gen_load(v_SignedSatQ244__3);
            v_SatQ237__2 = iface.f_gen_load(v_SignedSatQ245__3);
          } // if
          const auto v_temp44 = iface.f_gen_branch(v_SatQ237__2);
          iface.f_switch_context(iface.f_true_branch(v_temp44));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp44));
          auto v_If258__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If258__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If258__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If262__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If262__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If262__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If258__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ263__2 = typename Traits::rt_expr{};
          auto v_SatQ264__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ265__3 = iface.f_decl_bv("UnsignedSatQ265__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ266__3 = iface.f_decl_bool("UnsignedSatQ266__3");
            const auto v_temp45 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If262__2));
            iface.f_switch_context(iface.f_true_branch(v_temp45));
            iface.f_gen_store(v_UnsignedSatQ265__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ266__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp45));
            const auto v_temp46 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If262__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp46));
            iface.f_gen_store(v_UnsignedSatQ265__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ266__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp46));
            iface.f_gen_store(v_UnsignedSatQ265__3, iface.f_gen_slice(v_If262__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ266__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp45));
            v_SatQ263__2 = iface.f_gen_load(v_UnsignedSatQ265__3);
            v_SatQ264__2 = iface.f_gen_load(v_UnsignedSatQ266__3);
          } else {
            const auto v_SignedSatQ271__3 = iface.f_decl_bv("SignedSatQ271__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ272__3 = iface.f_decl_bool("SignedSatQ272__3");
            const auto v_temp47 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If262__2));
            iface.f_switch_context(iface.f_true_branch(v_temp47));
            iface.f_gen_store(v_SignedSatQ271__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ272__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp47));
            const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If262__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp48));
            iface.f_gen_store(v_SignedSatQ271__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ272__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp48));
            iface.f_gen_store(v_SignedSatQ271__3, iface.f_gen_slice(v_If262__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ272__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp47));
            v_SatQ263__2 = iface.f_gen_load(v_SignedSatQ271__3);
            v_SatQ264__2 = iface.f_gen_load(v_SignedSatQ272__3);
          } // if
          const auto v_temp49 = iface.f_gen_branch(v_SatQ264__2);
          iface.f_switch_context(iface.f_true_branch(v_temp49));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp49));
          auto v_If285__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If285__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If285__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If289__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If289__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If285__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If289__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If285__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ290__2 = typename Traits::rt_expr{};
          auto v_SatQ291__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ292__3 = iface.f_decl_bv("UnsignedSatQ292__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ293__3 = iface.f_decl_bool("UnsignedSatQ293__3");
            const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If289__2));
            iface.f_switch_context(iface.f_true_branch(v_temp50));
            iface.f_gen_store(v_UnsignedSatQ292__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ293__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp50));
            const auto v_temp51 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If289__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp51));
            iface.f_gen_store(v_UnsignedSatQ292__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ293__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp51));
            iface.f_gen_store(v_UnsignedSatQ292__3, iface.f_gen_slice(v_If289__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ293__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp50));
            v_SatQ290__2 = iface.f_gen_load(v_UnsignedSatQ292__3);
            v_SatQ291__2 = iface.f_gen_load(v_UnsignedSatQ293__3);
          } else {
            const auto v_SignedSatQ298__3 = iface.f_decl_bv("SignedSatQ298__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ299__3 = iface.f_decl_bool("SignedSatQ299__3");
            const auto v_temp52 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If289__2));
            iface.f_switch_context(iface.f_true_branch(v_temp52));
            iface.f_gen_store(v_SignedSatQ298__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ299__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp52));
            const auto v_temp53 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If289__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp53));
            iface.f_gen_store(v_SignedSatQ298__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ299__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp53));
            iface.f_gen_store(v_SignedSatQ298__3, iface.f_gen_slice(v_If289__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ299__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp52));
            v_SatQ290__2 = iface.f_gen_load(v_SignedSatQ298__3);
            v_SatQ291__2 = iface.f_gen_load(v_SignedSatQ299__3);
          } // if
          const auto v_temp54 = iface.f_gen_branch(v_SatQ291__2);
          iface.f_switch_context(iface.f_true_branch(v_temp54));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp54));
          auto v_If312__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If312__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If312__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If316__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If316__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If312__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If316__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If312__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ317__2 = typename Traits::rt_expr{};
          auto v_SatQ318__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ319__3 = iface.f_decl_bv("UnsignedSatQ319__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ320__3 = iface.f_decl_bool("UnsignedSatQ320__3");
            const auto v_temp55 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If316__2));
            iface.f_switch_context(iface.f_true_branch(v_temp55));
            iface.f_gen_store(v_UnsignedSatQ319__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ320__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp55));
            const auto v_temp56 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If316__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp56));
            iface.f_gen_store(v_UnsignedSatQ319__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ320__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp56));
            iface.f_gen_store(v_UnsignedSatQ319__3, iface.f_gen_slice(v_If316__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ320__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp55));
            v_SatQ317__2 = iface.f_gen_load(v_UnsignedSatQ319__3);
            v_SatQ318__2 = iface.f_gen_load(v_UnsignedSatQ320__3);
          } else {
            const auto v_SignedSatQ325__3 = iface.f_decl_bv("SignedSatQ325__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ326__3 = iface.f_decl_bool("SignedSatQ326__3");
            const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If316__2));
            iface.f_switch_context(iface.f_true_branch(v_temp57));
            iface.f_gen_store(v_SignedSatQ325__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ326__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp57));
            const auto v_temp58 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If316__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp58));
            iface.f_gen_store(v_SignedSatQ325__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ326__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp58));
            iface.f_gen_store(v_SignedSatQ325__3, iface.f_gen_slice(v_If316__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ326__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp57));
            v_SatQ317__2 = iface.f_gen_load(v_SignedSatQ325__3);
            v_SatQ318__2 = iface.f_gen_load(v_SignedSatQ326__3);
          } // if
          const auto v_temp59 = iface.f_gen_branch(v_SatQ318__2);
          iface.f_switch_context(iface.f_true_branch(v_temp59));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp59));
          auto v_If339__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If339__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If339__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If343__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If343__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If339__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If343__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If339__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ344__2 = typename Traits::rt_expr{};
          auto v_SatQ345__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ346__3 = iface.f_decl_bv("UnsignedSatQ346__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ347__3 = iface.f_decl_bool("UnsignedSatQ347__3");
            const auto v_temp60 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If343__2));
            iface.f_switch_context(iface.f_true_branch(v_temp60));
            iface.f_gen_store(v_UnsignedSatQ346__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ347__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp60));
            const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If343__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp61));
            iface.f_gen_store(v_UnsignedSatQ346__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ347__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp61));
            iface.f_gen_store(v_UnsignedSatQ346__3, iface.f_gen_slice(v_If343__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ347__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp60));
            v_SatQ344__2 = iface.f_gen_load(v_UnsignedSatQ346__3);
            v_SatQ345__2 = iface.f_gen_load(v_UnsignedSatQ347__3);
          } else {
            const auto v_SignedSatQ352__3 = iface.f_decl_bv("SignedSatQ352__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ353__3 = iface.f_decl_bool("SignedSatQ353__3");
            const auto v_temp62 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If343__2));
            iface.f_switch_context(iface.f_true_branch(v_temp62));
            iface.f_gen_store(v_SignedSatQ352__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ353__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp62));
            const auto v_temp63 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If343__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp63));
            iface.f_gen_store(v_SignedSatQ352__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ353__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp63));
            iface.f_gen_store(v_SignedSatQ352__3, iface.f_gen_slice(v_If343__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ353__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp62));
            v_SatQ344__2 = iface.f_gen_load(v_SignedSatQ352__3);
            v_SatQ345__2 = iface.f_gen_load(v_SignedSatQ353__3);
          } // if
          const auto v_temp64 = iface.f_gen_branch(v_SatQ345__2);
          iface.f_switch_context(iface.f_true_branch(v_temp64));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp64));
          auto v_If366__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If366__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If366__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If370__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If370__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If366__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If370__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If366__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ371__2 = typename Traits::rt_expr{};
          auto v_SatQ372__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ373__3 = iface.f_decl_bv("UnsignedSatQ373__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ374__3 = iface.f_decl_bool("UnsignedSatQ374__3");
            const auto v_temp65 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If370__2));
            iface.f_switch_context(iface.f_true_branch(v_temp65));
            iface.f_gen_store(v_UnsignedSatQ373__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ374__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp65));
            const auto v_temp66 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If370__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp66));
            iface.f_gen_store(v_UnsignedSatQ373__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ374__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp66));
            iface.f_gen_store(v_UnsignedSatQ373__3, iface.f_gen_slice(v_If370__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ374__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp65));
            v_SatQ371__2 = iface.f_gen_load(v_UnsignedSatQ373__3);
            v_SatQ372__2 = iface.f_gen_load(v_UnsignedSatQ374__3);
          } else {
            const auto v_SignedSatQ379__3 = iface.f_decl_bv("SignedSatQ379__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ380__3 = iface.f_decl_bool("SignedSatQ380__3");
            const auto v_temp67 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If370__2));
            iface.f_switch_context(iface.f_true_branch(v_temp67));
            iface.f_gen_store(v_SignedSatQ379__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ380__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp67));
            const auto v_temp68 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If370__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp68));
            iface.f_gen_store(v_SignedSatQ379__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ380__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp68));
            iface.f_gen_store(v_SignedSatQ379__3, iface.f_gen_slice(v_If370__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ380__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp67));
            v_SatQ371__2 = iface.f_gen_load(v_SignedSatQ379__3);
            v_SatQ372__2 = iface.f_gen_load(v_SignedSatQ380__3);
          } // if
          const auto v_temp69 = iface.f_gen_branch(v_SatQ372__2);
          iface.f_switch_context(iface.f_true_branch(v_temp69));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp69));
          auto v_If393__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If393__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If393__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If397__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If397__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If393__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If397__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If393__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ398__2 = typename Traits::rt_expr{};
          auto v_SatQ399__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ400__3 = iface.f_decl_bv("UnsignedSatQ400__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ401__3 = iface.f_decl_bool("UnsignedSatQ401__3");
            const auto v_temp70 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If397__2));
            iface.f_switch_context(iface.f_true_branch(v_temp70));
            iface.f_gen_store(v_UnsignedSatQ400__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ401__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp70));
            const auto v_temp71 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If397__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp71));
            iface.f_gen_store(v_UnsignedSatQ400__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ401__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp71));
            iface.f_gen_store(v_UnsignedSatQ400__3, iface.f_gen_slice(v_If397__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ401__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp70));
            v_SatQ398__2 = iface.f_gen_load(v_UnsignedSatQ400__3);
            v_SatQ399__2 = iface.f_gen_load(v_UnsignedSatQ401__3);
          } else {
            const auto v_SignedSatQ406__3 = iface.f_decl_bv("SignedSatQ406__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ407__3 = iface.f_decl_bool("SignedSatQ407__3");
            const auto v_temp72 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If397__2));
            iface.f_switch_context(iface.f_true_branch(v_temp72));
            iface.f_gen_store(v_SignedSatQ406__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ407__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp72));
            const auto v_temp73 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If397__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp73));
            iface.f_gen_store(v_SignedSatQ406__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ407__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp73));
            iface.f_gen_store(v_SignedSatQ406__3, iface.f_gen_slice(v_If397__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ407__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp72));
            v_SatQ398__2 = iface.f_gen_load(v_SignedSatQ406__3);
            v_SatQ399__2 = iface.f_gen_load(v_SignedSatQ407__3);
          } // if
          const auto v_temp74 = iface.f_gen_branch(v_SatQ399__2);
          iface.f_switch_context(iface.f_true_branch(v_temp74));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp74));
          auto v_If420__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If420__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If420__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If424__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If424__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If420__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If424__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If420__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ425__2 = typename Traits::rt_expr{};
          auto v_SatQ426__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ427__3 = iface.f_decl_bv("UnsignedSatQ427__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ428__3 = iface.f_decl_bool("UnsignedSatQ428__3");
            const auto v_temp75 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If424__2));
            iface.f_switch_context(iface.f_true_branch(v_temp75));
            iface.f_gen_store(v_UnsignedSatQ427__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ428__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp75));
            const auto v_temp76 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If424__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp76));
            iface.f_gen_store(v_UnsignedSatQ427__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ428__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp76));
            iface.f_gen_store(v_UnsignedSatQ427__3, iface.f_gen_slice(v_If424__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ428__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp75));
            v_SatQ425__2 = iface.f_gen_load(v_UnsignedSatQ427__3);
            v_SatQ426__2 = iface.f_gen_load(v_UnsignedSatQ428__3);
          } else {
            const auto v_SignedSatQ433__3 = iface.f_decl_bv("SignedSatQ433__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ434__3 = iface.f_decl_bool("SignedSatQ434__3");
            const auto v_temp77 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If424__2));
            iface.f_switch_context(iface.f_true_branch(v_temp77));
            iface.f_gen_store(v_SignedSatQ433__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ434__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp77));
            const auto v_temp78 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If424__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp78));
            iface.f_gen_store(v_SignedSatQ433__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ434__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp78));
            iface.f_gen_store(v_SignedSatQ433__3, iface.f_gen_slice(v_If424__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ434__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp77));
            v_SatQ425__2 = iface.f_gen_load(v_SignedSatQ433__3);
            v_SatQ426__2 = iface.f_gen_load(v_SignedSatQ434__3);
          } // if
          const auto v_temp79 = iface.f_gen_branch(v_SatQ426__2);
          iface.f_switch_context(iface.f_true_branch(v_temp79));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp79));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ425__2, iface.f_gen_append_bits(v_SatQ398__2, iface.f_gen_append_bits(v_SatQ371__2, iface.f_gen_append_bits(v_SatQ344__2, iface.f_gen_append_bits(v_SatQ317__2, iface.f_gen_append_bits(v_SatQ290__2, iface.f_gen_append_bits(v_SatQ263__2, iface.f_gen_append_bits(v_SatQ236__2, iface.f_gen_append_bits(v_SatQ209__2, iface.f_gen_append_bits(v_SatQ182__2, iface.f_gen_append_bits(v_SatQ155__2, iface.f_gen_append_bits(v_SatQ128__2, iface.f_gen_append_bits(v_SatQ101__2, iface.f_gen_append_bits(v_SatQ74__2, iface.f_gen_append_bits(v_SatQ47__2, v_SatQ19__2))))))))))))))));
        } else {
          auto v_src_unsigned__1 = true;
          auto v_dst_unsigned__1 = true;
          if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
              v_src_unsigned__1 = false;
              v_dst_unsigned__1 = true;
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                v_src_unsigned__1 = false;
                v_dst_unsigned__1 = false;
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                  v_src_unsigned__1 = true;
                  v_dst_unsigned__1 = true;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp453__2 = typename Traits::rt_expr{};
          v_Exp453__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If457__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If457__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If457__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If461__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If461__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If457__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If461__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If457__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ463__2 = typename Traits::rt_expr{};
          auto v_SatQ464__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ465__3 = iface.f_decl_bv("UnsignedSatQ465__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ466__3 = iface.f_decl_bool("UnsignedSatQ466__3");
            const auto v_temp80 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If461__2));
            iface.f_switch_context(iface.f_true_branch(v_temp80));
            iface.f_gen_store(v_UnsignedSatQ465__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ466__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp80));
            const auto v_temp81 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If461__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp81));
            iface.f_gen_store(v_UnsignedSatQ465__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ466__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp81));
            iface.f_gen_store(v_UnsignedSatQ465__3, iface.f_gen_slice(v_If461__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ466__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp80));
            v_SatQ463__2 = iface.f_gen_load(v_UnsignedSatQ465__3);
            v_SatQ464__2 = iface.f_gen_load(v_UnsignedSatQ466__3);
          } else {
            const auto v_SignedSatQ471__3 = iface.f_decl_bv("SignedSatQ471__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ472__3 = iface.f_decl_bool("SignedSatQ472__3");
            const auto v_temp82 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If461__2));
            iface.f_switch_context(iface.f_true_branch(v_temp82));
            iface.f_gen_store(v_SignedSatQ471__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ472__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp82));
            const auto v_temp83 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If461__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp83));
            iface.f_gen_store(v_SignedSatQ471__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ472__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp83));
            iface.f_gen_store(v_SignedSatQ471__3, iface.f_gen_slice(v_If461__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ472__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp82));
            v_SatQ463__2 = iface.f_gen_load(v_SignedSatQ471__3);
            v_SatQ464__2 = iface.f_gen_load(v_SignedSatQ472__3);
          } // if
          const auto v_temp84 = iface.f_gen_branch(v_SatQ464__2);
          iface.f_switch_context(iface.f_true_branch(v_temp84));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp84));
          auto v_If486__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If486__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If486__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If490__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If490__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If486__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If490__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If486__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ491__2 = typename Traits::rt_expr{};
          auto v_SatQ492__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ493__3 = iface.f_decl_bv("UnsignedSatQ493__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ494__3 = iface.f_decl_bool("UnsignedSatQ494__3");
            const auto v_temp85 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If490__2));
            iface.f_switch_context(iface.f_true_branch(v_temp85));
            iface.f_gen_store(v_UnsignedSatQ493__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ494__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp85));
            const auto v_temp86 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If490__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp86));
            iface.f_gen_store(v_UnsignedSatQ493__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ494__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp86));
            iface.f_gen_store(v_UnsignedSatQ493__3, iface.f_gen_slice(v_If490__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ494__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp85));
            v_SatQ491__2 = iface.f_gen_load(v_UnsignedSatQ493__3);
            v_SatQ492__2 = iface.f_gen_load(v_UnsignedSatQ494__3);
          } else {
            const auto v_SignedSatQ499__3 = iface.f_decl_bv("SignedSatQ499__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ500__3 = iface.f_decl_bool("SignedSatQ500__3");
            const auto v_temp87 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If490__2));
            iface.f_switch_context(iface.f_true_branch(v_temp87));
            iface.f_gen_store(v_SignedSatQ499__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ500__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp87));
            const auto v_temp88 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If490__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp88));
            iface.f_gen_store(v_SignedSatQ499__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ500__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp88));
            iface.f_gen_store(v_SignedSatQ499__3, iface.f_gen_slice(v_If490__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ500__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp87));
            v_SatQ491__2 = iface.f_gen_load(v_SignedSatQ499__3);
            v_SatQ492__2 = iface.f_gen_load(v_SignedSatQ500__3);
          } // if
          const auto v_temp89 = iface.f_gen_branch(v_SatQ492__2);
          iface.f_switch_context(iface.f_true_branch(v_temp89));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp89));
          auto v_If513__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If513__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If513__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If517__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If517__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If513__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If517__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If513__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ518__2 = typename Traits::rt_expr{};
          auto v_SatQ519__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ520__3 = iface.f_decl_bv("UnsignedSatQ520__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ521__3 = iface.f_decl_bool("UnsignedSatQ521__3");
            const auto v_temp90 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If517__2));
            iface.f_switch_context(iface.f_true_branch(v_temp90));
            iface.f_gen_store(v_UnsignedSatQ520__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ521__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp90));
            const auto v_temp91 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If517__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp91));
            iface.f_gen_store(v_UnsignedSatQ520__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ521__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp91));
            iface.f_gen_store(v_UnsignedSatQ520__3, iface.f_gen_slice(v_If517__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ521__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp90));
            v_SatQ518__2 = iface.f_gen_load(v_UnsignedSatQ520__3);
            v_SatQ519__2 = iface.f_gen_load(v_UnsignedSatQ521__3);
          } else {
            const auto v_SignedSatQ526__3 = iface.f_decl_bv("SignedSatQ526__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ527__3 = iface.f_decl_bool("SignedSatQ527__3");
            const auto v_temp92 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If517__2));
            iface.f_switch_context(iface.f_true_branch(v_temp92));
            iface.f_gen_store(v_SignedSatQ526__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ527__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp92));
            const auto v_temp93 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If517__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp93));
            iface.f_gen_store(v_SignedSatQ526__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ527__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp93));
            iface.f_gen_store(v_SignedSatQ526__3, iface.f_gen_slice(v_If517__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ527__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp92));
            v_SatQ518__2 = iface.f_gen_load(v_SignedSatQ526__3);
            v_SatQ519__2 = iface.f_gen_load(v_SignedSatQ527__3);
          } // if
          const auto v_temp94 = iface.f_gen_branch(v_SatQ519__2);
          iface.f_switch_context(iface.f_true_branch(v_temp94));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp94));
          auto v_If540__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If540__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If540__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If544__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If544__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If540__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If544__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If540__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ545__2 = typename Traits::rt_expr{};
          auto v_SatQ546__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ547__3 = iface.f_decl_bv("UnsignedSatQ547__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ548__3 = iface.f_decl_bool("UnsignedSatQ548__3");
            const auto v_temp95 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If544__2));
            iface.f_switch_context(iface.f_true_branch(v_temp95));
            iface.f_gen_store(v_UnsignedSatQ547__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ548__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp95));
            const auto v_temp96 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If544__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp96));
            iface.f_gen_store(v_UnsignedSatQ547__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ548__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp96));
            iface.f_gen_store(v_UnsignedSatQ547__3, iface.f_gen_slice(v_If544__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ548__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp95));
            v_SatQ545__2 = iface.f_gen_load(v_UnsignedSatQ547__3);
            v_SatQ546__2 = iface.f_gen_load(v_UnsignedSatQ548__3);
          } else {
            const auto v_SignedSatQ553__3 = iface.f_decl_bv("SignedSatQ553__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ554__3 = iface.f_decl_bool("SignedSatQ554__3");
            const auto v_temp97 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If544__2));
            iface.f_switch_context(iface.f_true_branch(v_temp97));
            iface.f_gen_store(v_SignedSatQ553__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ554__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp97));
            const auto v_temp98 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If544__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp98));
            iface.f_gen_store(v_SignedSatQ553__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ554__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp98));
            iface.f_gen_store(v_SignedSatQ553__3, iface.f_gen_slice(v_If544__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ554__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp97));
            v_SatQ545__2 = iface.f_gen_load(v_SignedSatQ553__3);
            v_SatQ546__2 = iface.f_gen_load(v_SignedSatQ554__3);
          } // if
          const auto v_temp99 = iface.f_gen_branch(v_SatQ546__2);
          iface.f_switch_context(iface.f_true_branch(v_temp99));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp99));
          auto v_If567__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If567__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If567__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If571__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If571__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If567__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If571__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If567__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ572__2 = typename Traits::rt_expr{};
          auto v_SatQ573__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ574__3 = iface.f_decl_bv("UnsignedSatQ574__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ575__3 = iface.f_decl_bool("UnsignedSatQ575__3");
            const auto v_temp100 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If571__2));
            iface.f_switch_context(iface.f_true_branch(v_temp100));
            iface.f_gen_store(v_UnsignedSatQ574__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp100));
            const auto v_temp101 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If571__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp101));
            iface.f_gen_store(v_UnsignedSatQ574__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp101));
            iface.f_gen_store(v_UnsignedSatQ574__3, iface.f_gen_slice(v_If571__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp100));
            v_SatQ572__2 = iface.f_gen_load(v_UnsignedSatQ574__3);
            v_SatQ573__2 = iface.f_gen_load(v_UnsignedSatQ575__3);
          } else {
            const auto v_SignedSatQ580__3 = iface.f_decl_bv("SignedSatQ580__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ581__3 = iface.f_decl_bool("SignedSatQ581__3");
            const auto v_temp102 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If571__2));
            iface.f_switch_context(iface.f_true_branch(v_temp102));
            iface.f_gen_store(v_SignedSatQ580__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp102));
            const auto v_temp103 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If571__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp103));
            iface.f_gen_store(v_SignedSatQ580__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp103));
            iface.f_gen_store(v_SignedSatQ580__3, iface.f_gen_slice(v_If571__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp102));
            v_SatQ572__2 = iface.f_gen_load(v_SignedSatQ580__3);
            v_SatQ573__2 = iface.f_gen_load(v_SignedSatQ581__3);
          } // if
          const auto v_temp104 = iface.f_gen_branch(v_SatQ573__2);
          iface.f_switch_context(iface.f_true_branch(v_temp104));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp104));
          auto v_If594__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If594__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If594__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If598__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If598__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If594__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If598__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If594__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ599__2 = typename Traits::rt_expr{};
          auto v_SatQ600__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ601__3 = iface.f_decl_bv("UnsignedSatQ601__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ602__3 = iface.f_decl_bool("UnsignedSatQ602__3");
            const auto v_temp105 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If598__2));
            iface.f_switch_context(iface.f_true_branch(v_temp105));
            iface.f_gen_store(v_UnsignedSatQ601__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ602__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp105));
            const auto v_temp106 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If598__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp106));
            iface.f_gen_store(v_UnsignedSatQ601__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ602__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp106));
            iface.f_gen_store(v_UnsignedSatQ601__3, iface.f_gen_slice(v_If598__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ602__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp105));
            v_SatQ599__2 = iface.f_gen_load(v_UnsignedSatQ601__3);
            v_SatQ600__2 = iface.f_gen_load(v_UnsignedSatQ602__3);
          } else {
            const auto v_SignedSatQ607__3 = iface.f_decl_bv("SignedSatQ607__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ608__3 = iface.f_decl_bool("SignedSatQ608__3");
            const auto v_temp107 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If598__2));
            iface.f_switch_context(iface.f_true_branch(v_temp107));
            iface.f_gen_store(v_SignedSatQ607__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ608__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp107));
            const auto v_temp108 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If598__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp108));
            iface.f_gen_store(v_SignedSatQ607__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ608__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp108));
            iface.f_gen_store(v_SignedSatQ607__3, iface.f_gen_slice(v_If598__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ608__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp107));
            v_SatQ599__2 = iface.f_gen_load(v_SignedSatQ607__3);
            v_SatQ600__2 = iface.f_gen_load(v_SignedSatQ608__3);
          } // if
          const auto v_temp109 = iface.f_gen_branch(v_SatQ600__2);
          iface.f_switch_context(iface.f_true_branch(v_temp109));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp109));
          auto v_If621__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If621__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If621__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If625__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If625__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If621__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If625__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If621__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ626__2 = typename Traits::rt_expr{};
          auto v_SatQ627__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ628__3 = iface.f_decl_bv("UnsignedSatQ628__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ629__3 = iface.f_decl_bool("UnsignedSatQ629__3");
            const auto v_temp110 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If625__2));
            iface.f_switch_context(iface.f_true_branch(v_temp110));
            iface.f_gen_store(v_UnsignedSatQ628__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ629__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp110));
            const auto v_temp111 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If625__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp111));
            iface.f_gen_store(v_UnsignedSatQ628__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ629__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp111));
            iface.f_gen_store(v_UnsignedSatQ628__3, iface.f_gen_slice(v_If625__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ629__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp110));
            v_SatQ626__2 = iface.f_gen_load(v_UnsignedSatQ628__3);
            v_SatQ627__2 = iface.f_gen_load(v_UnsignedSatQ629__3);
          } else {
            const auto v_SignedSatQ634__3 = iface.f_decl_bv("SignedSatQ634__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ635__3 = iface.f_decl_bool("SignedSatQ635__3");
            const auto v_temp112 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If625__2));
            iface.f_switch_context(iface.f_true_branch(v_temp112));
            iface.f_gen_store(v_SignedSatQ634__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ635__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp112));
            const auto v_temp113 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If625__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp113));
            iface.f_gen_store(v_SignedSatQ634__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ635__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp113));
            iface.f_gen_store(v_SignedSatQ634__3, iface.f_gen_slice(v_If625__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ635__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp112));
            v_SatQ626__2 = iface.f_gen_load(v_SignedSatQ634__3);
            v_SatQ627__2 = iface.f_gen_load(v_SignedSatQ635__3);
          } // if
          const auto v_temp114 = iface.f_gen_branch(v_SatQ627__2);
          iface.f_switch_context(iface.f_true_branch(v_temp114));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp114));
          auto v_If648__2 = typename Traits::rt_expr{};
          if (v_src_unsigned__1) {
            v_If648__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If648__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If652__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
            v_If652__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If648__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
          } else {
            v_If652__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If648__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_SatQ653__2 = typename Traits::rt_expr{};
          auto v_SatQ654__2 = typename Traits::rt_expr{};
          if (v_dst_unsigned__1) {
            const auto v_UnsignedSatQ655__3 = iface.f_decl_bv("UnsignedSatQ655__3", iface.bigint_lit("8"));
            const auto v_UnsignedSatQ656__3 = iface.f_decl_bool("UnsignedSatQ656__3");
            const auto v_temp115 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If652__2));
            iface.f_switch_context(iface.f_true_branch(v_temp115));
            iface.f_gen_store(v_UnsignedSatQ655__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
            iface.f_gen_store(v_UnsignedSatQ656__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp115));
            const auto v_temp116 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If652__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp116));
            iface.f_gen_store(v_UnsignedSatQ655__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            iface.f_gen_store(v_UnsignedSatQ656__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp116));
            iface.f_gen_store(v_UnsignedSatQ655__3, iface.f_gen_slice(v_If652__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_UnsignedSatQ656__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp115));
            v_SatQ653__2 = iface.f_gen_load(v_UnsignedSatQ655__3);
            v_SatQ654__2 = iface.f_gen_load(v_UnsignedSatQ656__3);
          } else {
            const auto v_SignedSatQ661__3 = iface.f_decl_bv("SignedSatQ661__3", iface.bigint_lit("8"));
            const auto v_SignedSatQ662__3 = iface.f_decl_bool("SignedSatQ662__3");
            const auto v_temp117 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If652__2));
            iface.f_switch_context(iface.f_true_branch(v_temp117));
            iface.f_gen_store(v_SignedSatQ661__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
            iface.f_gen_store(v_SignedSatQ662__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp117));
            const auto v_temp118 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If652__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp118));
            iface.f_gen_store(v_SignedSatQ661__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
            iface.f_gen_store(v_SignedSatQ662__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp118));
            iface.f_gen_store(v_SignedSatQ661__3, iface.f_gen_slice(v_If652__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
            iface.f_gen_store(v_SignedSatQ662__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp117));
            v_SatQ653__2 = iface.f_gen_load(v_SignedSatQ661__3);
            v_SatQ654__2 = iface.f_gen_load(v_SignedSatQ662__3);
          } // if
          const auto v_temp119 = iface.f_gen_branch(v_SatQ654__2);
          iface.f_switch_context(iface.f_true_branch(v_temp119));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp119));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ653__2, iface.f_gen_append_bits(v_SatQ626__2, iface.f_gen_append_bits(v_SatQ599__2, iface.f_gen_append_bits(v_SatQ572__2, iface.f_gen_append_bits(v_SatQ545__2, iface.f_gen_append_bits(v_SatQ518__2, iface.f_gen_append_bits(v_SatQ491__2, v_SatQ463__2))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        auto v_HighestSetBit678__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_HighestSetBit678__2 = iface.bits_lit(3U, "011");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit678__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit678__2 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit678__2 = iface.bits_lit(3U, "000");
              } else {
                v_HighestSetBit678__2 = iface.bits_lit(3U, "111");
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_HighestSetBit678__2, iface.bits_lit(3U, "001"))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_src_unsigned__1 = true;
            auto v_dst_unsigned__1 = true;
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                v_src_unsigned__1 = false;
                v_dst_unsigned__1 = true;
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                  v_src_unsigned__1 = false;
                  v_dst_unsigned__1 = false;
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                    v_src_unsigned__1 = true;
                    v_dst_unsigned__1 = true;
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp684__2 = typename Traits::rt_expr{};
            v_Exp684__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If688__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If688__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If688__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If692__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If692__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If688__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If692__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If688__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ694__2 = typename Traits::rt_expr{};
            auto v_SatQ695__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ696__3 = iface.f_decl_bv("UnsignedSatQ696__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ697__3 = iface.f_decl_bool("UnsignedSatQ697__3");
              const auto v_temp120 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If692__2));
              iface.f_switch_context(iface.f_true_branch(v_temp120));
              iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ697__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp120));
              const auto v_temp121 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If692__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp121));
              iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ697__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp121));
              iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_slice(v_If692__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ697__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp120));
              v_SatQ694__2 = iface.f_gen_load(v_UnsignedSatQ696__3);
              v_SatQ695__2 = iface.f_gen_load(v_UnsignedSatQ697__3);
            } else {
              const auto v_SignedSatQ702__3 = iface.f_decl_bv("SignedSatQ702__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ703__3 = iface.f_decl_bool("SignedSatQ703__3");
              const auto v_temp122 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If692__2));
              iface.f_switch_context(iface.f_true_branch(v_temp122));
              iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ703__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp122));
              const auto v_temp123 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If692__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp123));
              iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ703__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp123));
              iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_slice(v_If692__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ703__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp122));
              v_SatQ694__2 = iface.f_gen_load(v_SignedSatQ702__3);
              v_SatQ695__2 = iface.f_gen_load(v_SignedSatQ703__3);
            } // if
            const auto v_temp124 = iface.f_gen_branch(v_SatQ695__2);
            iface.f_switch_context(iface.f_true_branch(v_temp124));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp124));
            auto v_If717__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If717__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If717__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If721__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If721__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If717__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If721__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If717__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ722__2 = typename Traits::rt_expr{};
            auto v_SatQ723__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ724__3 = iface.f_decl_bv("UnsignedSatQ724__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ725__3 = iface.f_decl_bool("UnsignedSatQ725__3");
              const auto v_temp125 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If721__2));
              iface.f_switch_context(iface.f_true_branch(v_temp125));
              iface.f_gen_store(v_UnsignedSatQ724__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ725__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp125));
              const auto v_temp126 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If721__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp126));
              iface.f_gen_store(v_UnsignedSatQ724__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ725__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp126));
              iface.f_gen_store(v_UnsignedSatQ724__3, iface.f_gen_slice(v_If721__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ725__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp125));
              v_SatQ722__2 = iface.f_gen_load(v_UnsignedSatQ724__3);
              v_SatQ723__2 = iface.f_gen_load(v_UnsignedSatQ725__3);
            } else {
              const auto v_SignedSatQ730__3 = iface.f_decl_bv("SignedSatQ730__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ731__3 = iface.f_decl_bool("SignedSatQ731__3");
              const auto v_temp127 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If721__2));
              iface.f_switch_context(iface.f_true_branch(v_temp127));
              iface.f_gen_store(v_SignedSatQ730__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ731__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp127));
              const auto v_temp128 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If721__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp128));
              iface.f_gen_store(v_SignedSatQ730__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ731__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp128));
              iface.f_gen_store(v_SignedSatQ730__3, iface.f_gen_slice(v_If721__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ731__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp127));
              v_SatQ722__2 = iface.f_gen_load(v_SignedSatQ730__3);
              v_SatQ723__2 = iface.f_gen_load(v_SignedSatQ731__3);
            } // if
            const auto v_temp129 = iface.f_gen_branch(v_SatQ723__2);
            iface.f_switch_context(iface.f_true_branch(v_temp129));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp129));
            auto v_If744__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If744__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If744__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If748__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If748__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If744__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If748__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If744__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ749__2 = typename Traits::rt_expr{};
            auto v_SatQ750__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ751__3 = iface.f_decl_bv("UnsignedSatQ751__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ752__3 = iface.f_decl_bool("UnsignedSatQ752__3");
              const auto v_temp130 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If748__2));
              iface.f_switch_context(iface.f_true_branch(v_temp130));
              iface.f_gen_store(v_UnsignedSatQ751__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ752__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp130));
              const auto v_temp131 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If748__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp131));
              iface.f_gen_store(v_UnsignedSatQ751__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ752__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp131));
              iface.f_gen_store(v_UnsignedSatQ751__3, iface.f_gen_slice(v_If748__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ752__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp130));
              v_SatQ749__2 = iface.f_gen_load(v_UnsignedSatQ751__3);
              v_SatQ750__2 = iface.f_gen_load(v_UnsignedSatQ752__3);
            } else {
              const auto v_SignedSatQ757__3 = iface.f_decl_bv("SignedSatQ757__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ758__3 = iface.f_decl_bool("SignedSatQ758__3");
              const auto v_temp132 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If748__2));
              iface.f_switch_context(iface.f_true_branch(v_temp132));
              iface.f_gen_store(v_SignedSatQ757__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ758__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp132));
              const auto v_temp133 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If748__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp133));
              iface.f_gen_store(v_SignedSatQ757__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ758__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp133));
              iface.f_gen_store(v_SignedSatQ757__3, iface.f_gen_slice(v_If748__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ758__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp132));
              v_SatQ749__2 = iface.f_gen_load(v_SignedSatQ757__3);
              v_SatQ750__2 = iface.f_gen_load(v_SignedSatQ758__3);
            } // if
            const auto v_temp134 = iface.f_gen_branch(v_SatQ750__2);
            iface.f_switch_context(iface.f_true_branch(v_temp134));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp134));
            auto v_If771__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If771__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If771__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If775__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If775__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If771__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If775__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If771__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ776__2 = typename Traits::rt_expr{};
            auto v_SatQ777__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ778__3 = iface.f_decl_bv("UnsignedSatQ778__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ779__3 = iface.f_decl_bool("UnsignedSatQ779__3");
              const auto v_temp135 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If775__2));
              iface.f_switch_context(iface.f_true_branch(v_temp135));
              iface.f_gen_store(v_UnsignedSatQ778__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ779__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp135));
              const auto v_temp136 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If775__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp136));
              iface.f_gen_store(v_UnsignedSatQ778__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ779__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp136));
              iface.f_gen_store(v_UnsignedSatQ778__3, iface.f_gen_slice(v_If775__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ779__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp135));
              v_SatQ776__2 = iface.f_gen_load(v_UnsignedSatQ778__3);
              v_SatQ777__2 = iface.f_gen_load(v_UnsignedSatQ779__3);
            } else {
              const auto v_SignedSatQ784__3 = iface.f_decl_bv("SignedSatQ784__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ785__3 = iface.f_decl_bool("SignedSatQ785__3");
              const auto v_temp137 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If775__2));
              iface.f_switch_context(iface.f_true_branch(v_temp137));
              iface.f_gen_store(v_SignedSatQ784__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ785__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp137));
              const auto v_temp138 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If775__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp138));
              iface.f_gen_store(v_SignedSatQ784__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ785__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp138));
              iface.f_gen_store(v_SignedSatQ784__3, iface.f_gen_slice(v_If775__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ785__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp137));
              v_SatQ776__2 = iface.f_gen_load(v_SignedSatQ784__3);
              v_SatQ777__2 = iface.f_gen_load(v_SignedSatQ785__3);
            } // if
            const auto v_temp139 = iface.f_gen_branch(v_SatQ777__2);
            iface.f_switch_context(iface.f_true_branch(v_temp139));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp139));
            auto v_If798__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If798__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If798__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If802__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If802__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If798__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If802__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If798__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ803__2 = typename Traits::rt_expr{};
            auto v_SatQ804__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ805__3 = iface.f_decl_bv("UnsignedSatQ805__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ806__3 = iface.f_decl_bool("UnsignedSatQ806__3");
              const auto v_temp140 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If802__2));
              iface.f_switch_context(iface.f_true_branch(v_temp140));
              iface.f_gen_store(v_UnsignedSatQ805__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ806__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp140));
              const auto v_temp141 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If802__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp141));
              iface.f_gen_store(v_UnsignedSatQ805__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ806__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp141));
              iface.f_gen_store(v_UnsignedSatQ805__3, iface.f_gen_slice(v_If802__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ806__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp140));
              v_SatQ803__2 = iface.f_gen_load(v_UnsignedSatQ805__3);
              v_SatQ804__2 = iface.f_gen_load(v_UnsignedSatQ806__3);
            } else {
              const auto v_SignedSatQ811__3 = iface.f_decl_bv("SignedSatQ811__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ812__3 = iface.f_decl_bool("SignedSatQ812__3");
              const auto v_temp142 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If802__2));
              iface.f_switch_context(iface.f_true_branch(v_temp142));
              iface.f_gen_store(v_SignedSatQ811__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ812__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp142));
              const auto v_temp143 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If802__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp143));
              iface.f_gen_store(v_SignedSatQ811__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ812__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp143));
              iface.f_gen_store(v_SignedSatQ811__3, iface.f_gen_slice(v_If802__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ812__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp142));
              v_SatQ803__2 = iface.f_gen_load(v_SignedSatQ811__3);
              v_SatQ804__2 = iface.f_gen_load(v_SignedSatQ812__3);
            } // if
            const auto v_temp144 = iface.f_gen_branch(v_SatQ804__2);
            iface.f_switch_context(iface.f_true_branch(v_temp144));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp144));
            auto v_If825__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If825__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If825__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If829__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If829__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If825__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If829__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If825__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ830__2 = typename Traits::rt_expr{};
            auto v_SatQ831__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ832__3 = iface.f_decl_bv("UnsignedSatQ832__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ833__3 = iface.f_decl_bool("UnsignedSatQ833__3");
              const auto v_temp145 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If829__2));
              iface.f_switch_context(iface.f_true_branch(v_temp145));
              iface.f_gen_store(v_UnsignedSatQ832__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ833__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp145));
              const auto v_temp146 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If829__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp146));
              iface.f_gen_store(v_UnsignedSatQ832__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ833__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp146));
              iface.f_gen_store(v_UnsignedSatQ832__3, iface.f_gen_slice(v_If829__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ833__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp145));
              v_SatQ830__2 = iface.f_gen_load(v_UnsignedSatQ832__3);
              v_SatQ831__2 = iface.f_gen_load(v_UnsignedSatQ833__3);
            } else {
              const auto v_SignedSatQ838__3 = iface.f_decl_bv("SignedSatQ838__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ839__3 = iface.f_decl_bool("SignedSatQ839__3");
              const auto v_temp147 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If829__2));
              iface.f_switch_context(iface.f_true_branch(v_temp147));
              iface.f_gen_store(v_SignedSatQ838__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ839__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp147));
              const auto v_temp148 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If829__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp148));
              iface.f_gen_store(v_SignedSatQ838__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ839__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp148));
              iface.f_gen_store(v_SignedSatQ838__3, iface.f_gen_slice(v_If829__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ839__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp147));
              v_SatQ830__2 = iface.f_gen_load(v_SignedSatQ838__3);
              v_SatQ831__2 = iface.f_gen_load(v_SignedSatQ839__3);
            } // if
            const auto v_temp149 = iface.f_gen_branch(v_SatQ831__2);
            iface.f_switch_context(iface.f_true_branch(v_temp149));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp149));
            auto v_If852__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If852__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If852__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If856__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If856__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If852__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If856__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If852__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ857__2 = typename Traits::rt_expr{};
            auto v_SatQ858__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ859__3 = iface.f_decl_bv("UnsignedSatQ859__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ860__3 = iface.f_decl_bool("UnsignedSatQ860__3");
              const auto v_temp150 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If856__2));
              iface.f_switch_context(iface.f_true_branch(v_temp150));
              iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ860__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp150));
              const auto v_temp151 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If856__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp151));
              iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ860__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp151));
              iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_slice(v_If856__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ860__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp150));
              v_SatQ857__2 = iface.f_gen_load(v_UnsignedSatQ859__3);
              v_SatQ858__2 = iface.f_gen_load(v_UnsignedSatQ860__3);
            } else {
              const auto v_SignedSatQ865__3 = iface.f_decl_bv("SignedSatQ865__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ866__3 = iface.f_decl_bool("SignedSatQ866__3");
              const auto v_temp152 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If856__2));
              iface.f_switch_context(iface.f_true_branch(v_temp152));
              iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ866__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp152));
              const auto v_temp153 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If856__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp153));
              iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ866__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp153));
              iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_slice(v_If856__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ866__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp152));
              v_SatQ857__2 = iface.f_gen_load(v_SignedSatQ865__3);
              v_SatQ858__2 = iface.f_gen_load(v_SignedSatQ866__3);
            } // if
            const auto v_temp154 = iface.f_gen_branch(v_SatQ858__2);
            iface.f_switch_context(iface.f_true_branch(v_temp154));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp154));
            auto v_If879__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If879__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If879__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp684__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If883__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If883__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If879__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If883__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If879__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ884__2 = typename Traits::rt_expr{};
            auto v_SatQ885__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ886__3 = iface.f_decl_bv("UnsignedSatQ886__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ887__3 = iface.f_decl_bool("UnsignedSatQ887__3");
              const auto v_temp155 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If883__2));
              iface.f_switch_context(iface.f_true_branch(v_temp155));
              iface.f_gen_store(v_UnsignedSatQ886__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ887__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp155));
              const auto v_temp156 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If883__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp156));
              iface.f_gen_store(v_UnsignedSatQ886__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ887__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp156));
              iface.f_gen_store(v_UnsignedSatQ886__3, iface.f_gen_slice(v_If883__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ887__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp155));
              v_SatQ884__2 = iface.f_gen_load(v_UnsignedSatQ886__3);
              v_SatQ885__2 = iface.f_gen_load(v_UnsignedSatQ887__3);
            } else {
              const auto v_SignedSatQ892__3 = iface.f_decl_bv("SignedSatQ892__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ893__3 = iface.f_decl_bool("SignedSatQ893__3");
              const auto v_temp157 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If883__2));
              iface.f_switch_context(iface.f_true_branch(v_temp157));
              iface.f_gen_store(v_SignedSatQ892__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ893__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp157));
              const auto v_temp158 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If883__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp158));
              iface.f_gen_store(v_SignedSatQ892__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ893__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp158));
              iface.f_gen_store(v_SignedSatQ892__3, iface.f_gen_slice(v_If883__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ893__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp157));
              v_SatQ884__2 = iface.f_gen_load(v_SignedSatQ892__3);
              v_SatQ885__2 = iface.f_gen_load(v_SignedSatQ893__3);
            } // if
            const auto v_temp159 = iface.f_gen_branch(v_SatQ885__2);
            iface.f_switch_context(iface.f_true_branch(v_temp159));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp159));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ884__2, iface.f_gen_append_bits(v_SatQ857__2, iface.f_gen_append_bits(v_SatQ830__2, iface.f_gen_append_bits(v_SatQ803__2, iface.f_gen_append_bits(v_SatQ776__2, iface.f_gen_append_bits(v_SatQ749__2, iface.f_gen_append_bits(v_SatQ722__2, v_SatQ694__2))))))));
          } else {
            auto v_src_unsigned__1 = true;
            auto v_dst_unsigned__1 = true;
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                v_src_unsigned__1 = false;
                v_dst_unsigned__1 = true;
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                  v_src_unsigned__1 = false;
                  v_dst_unsigned__1 = false;
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                    v_src_unsigned__1 = true;
                    v_dst_unsigned__1 = true;
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp912__2 = typename Traits::rt_expr{};
            v_Exp912__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If916__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If916__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If916__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If920__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If920__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If916__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If920__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If916__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ922__2 = typename Traits::rt_expr{};
            auto v_SatQ923__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ924__3 = iface.f_decl_bv("UnsignedSatQ924__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ925__3 = iface.f_decl_bool("UnsignedSatQ925__3");
              const auto v_temp160 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If920__2));
              iface.f_switch_context(iface.f_true_branch(v_temp160));
              iface.f_gen_store(v_UnsignedSatQ924__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ925__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp160));
              const auto v_temp161 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If920__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp161));
              iface.f_gen_store(v_UnsignedSatQ924__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ925__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp161));
              iface.f_gen_store(v_UnsignedSatQ924__3, iface.f_gen_slice(v_If920__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ925__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp160));
              v_SatQ922__2 = iface.f_gen_load(v_UnsignedSatQ924__3);
              v_SatQ923__2 = iface.f_gen_load(v_UnsignedSatQ925__3);
            } else {
              const auto v_SignedSatQ930__3 = iface.f_decl_bv("SignedSatQ930__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ931__3 = iface.f_decl_bool("SignedSatQ931__3");
              const auto v_temp162 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If920__2));
              iface.f_switch_context(iface.f_true_branch(v_temp162));
              iface.f_gen_store(v_SignedSatQ930__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ931__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp162));
              const auto v_temp163 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If920__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp163));
              iface.f_gen_store(v_SignedSatQ930__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ931__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp163));
              iface.f_gen_store(v_SignedSatQ930__3, iface.f_gen_slice(v_If920__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ931__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp162));
              v_SatQ922__2 = iface.f_gen_load(v_SignedSatQ930__3);
              v_SatQ923__2 = iface.f_gen_load(v_SignedSatQ931__3);
            } // if
            const auto v_temp164 = iface.f_gen_branch(v_SatQ923__2);
            iface.f_switch_context(iface.f_true_branch(v_temp164));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp164));
            auto v_If945__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If945__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp912__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If945__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp912__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If949__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If949__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If945__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If949__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If945__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ950__2 = typename Traits::rt_expr{};
            auto v_SatQ951__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ952__3 = iface.f_decl_bv("UnsignedSatQ952__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ953__3 = iface.f_decl_bool("UnsignedSatQ953__3");
              const auto v_temp165 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If949__2));
              iface.f_switch_context(iface.f_true_branch(v_temp165));
              iface.f_gen_store(v_UnsignedSatQ952__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ953__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp165));
              const auto v_temp166 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If949__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp166));
              iface.f_gen_store(v_UnsignedSatQ952__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ953__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp166));
              iface.f_gen_store(v_UnsignedSatQ952__3, iface.f_gen_slice(v_If949__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ953__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp165));
              v_SatQ950__2 = iface.f_gen_load(v_UnsignedSatQ952__3);
              v_SatQ951__2 = iface.f_gen_load(v_UnsignedSatQ953__3);
            } else {
              const auto v_SignedSatQ958__3 = iface.f_decl_bv("SignedSatQ958__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ959__3 = iface.f_decl_bool("SignedSatQ959__3");
              const auto v_temp167 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If949__2));
              iface.f_switch_context(iface.f_true_branch(v_temp167));
              iface.f_gen_store(v_SignedSatQ958__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ959__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp167));
              const auto v_temp168 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If949__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp168));
              iface.f_gen_store(v_SignedSatQ958__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ959__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp168));
              iface.f_gen_store(v_SignedSatQ958__3, iface.f_gen_slice(v_If949__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ959__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp167));
              v_SatQ950__2 = iface.f_gen_load(v_SignedSatQ958__3);
              v_SatQ951__2 = iface.f_gen_load(v_SignedSatQ959__3);
            } // if
            const auto v_temp169 = iface.f_gen_branch(v_SatQ951__2);
            iface.f_switch_context(iface.f_true_branch(v_temp169));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp169));
            auto v_If972__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If972__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp912__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If972__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp912__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If976__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If976__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If972__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If976__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If972__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ977__2 = typename Traits::rt_expr{};
            auto v_SatQ978__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ979__3 = iface.f_decl_bv("UnsignedSatQ979__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ980__3 = iface.f_decl_bool("UnsignedSatQ980__3");
              const auto v_temp170 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If976__2));
              iface.f_switch_context(iface.f_true_branch(v_temp170));
              iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ980__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp170));
              const auto v_temp171 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If976__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp171));
              iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ980__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp171));
              iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_slice(v_If976__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ980__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp170));
              v_SatQ977__2 = iface.f_gen_load(v_UnsignedSatQ979__3);
              v_SatQ978__2 = iface.f_gen_load(v_UnsignedSatQ980__3);
            } else {
              const auto v_SignedSatQ985__3 = iface.f_decl_bv("SignedSatQ985__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ986__3 = iface.f_decl_bool("SignedSatQ986__3");
              const auto v_temp172 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If976__2));
              iface.f_switch_context(iface.f_true_branch(v_temp172));
              iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ986__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp172));
              const auto v_temp173 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If976__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp173));
              iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ986__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp173));
              iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_slice(v_If976__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ986__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp172));
              v_SatQ977__2 = iface.f_gen_load(v_SignedSatQ985__3);
              v_SatQ978__2 = iface.f_gen_load(v_SignedSatQ986__3);
            } // if
            const auto v_temp174 = iface.f_gen_branch(v_SatQ978__2);
            iface.f_switch_context(iface.f_true_branch(v_temp174));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp174));
            auto v_If999__2 = typename Traits::rt_expr{};
            if (v_src_unsigned__1) {
              v_If999__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp912__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If999__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp912__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If1003__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
              v_If1003__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If999__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
            } else {
              v_If1003__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If999__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_SatQ1004__2 = typename Traits::rt_expr{};
            auto v_SatQ1005__2 = typename Traits::rt_expr{};
            if (v_dst_unsigned__1) {
              const auto v_UnsignedSatQ1006__3 = iface.f_decl_bv("UnsignedSatQ1006__3", iface.bigint_lit("16"));
              const auto v_UnsignedSatQ1007__3 = iface.f_decl_bool("UnsignedSatQ1007__3");
              const auto v_temp175 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If1003__2));
              iface.f_switch_context(iface.f_true_branch(v_temp175));
              iface.f_gen_store(v_UnsignedSatQ1006__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1007__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp175));
              const auto v_temp176 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1003__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp176));
              iface.f_gen_store(v_UnsignedSatQ1006__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1007__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp176));
              iface.f_gen_store(v_UnsignedSatQ1006__3, iface.f_gen_slice(v_If1003__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_UnsignedSatQ1007__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp175));
              v_SatQ1004__2 = iface.f_gen_load(v_UnsignedSatQ1006__3);
              v_SatQ1005__2 = iface.f_gen_load(v_UnsignedSatQ1007__3);
            } else {
              const auto v_SignedSatQ1012__3 = iface.f_decl_bv("SignedSatQ1012__3", iface.bigint_lit("16"));
              const auto v_SignedSatQ1013__3 = iface.f_decl_bool("SignedSatQ1013__3");
              const auto v_temp177 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If1003__2));
              iface.f_switch_context(iface.f_true_branch(v_temp177));
              iface.f_gen_store(v_SignedSatQ1012__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
              iface.f_gen_store(v_SignedSatQ1013__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp177));
              const auto v_temp178 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1003__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp178));
              iface.f_gen_store(v_SignedSatQ1012__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
              iface.f_gen_store(v_SignedSatQ1013__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp178));
              iface.f_gen_store(v_SignedSatQ1012__3, iface.f_gen_slice(v_If1003__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
              iface.f_gen_store(v_SignedSatQ1013__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp177));
              v_SatQ1004__2 = iface.f_gen_load(v_SignedSatQ1012__3);
              v_SatQ1005__2 = iface.f_gen_load(v_SignedSatQ1013__3);
            } // if
            const auto v_temp179 = iface.f_gen_branch(v_SatQ1005__2);
            iface.f_switch_context(iface.f_true_branch(v_temp179));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp179));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ1004__2, iface.f_gen_append_bits(v_SatQ977__2, iface.f_gen_append_bits(v_SatQ950__2, v_SatQ922__2))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          auto v_HighestSetBit1029__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit1029__2 = iface.bits_lit(3U, "011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit1029__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit1029__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit1029__2 = iface.bits_lit(3U, "000");
                } else {
                  v_HighestSetBit1029__2 = iface.bits_lit(3U, "111");
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(v_HighestSetBit1029__2, iface.bits_lit(3U, "010"))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_src_unsigned__1 = true;
              auto v_dst_unsigned__1 = true;
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                  v_src_unsigned__1 = false;
                  v_dst_unsigned__1 = true;
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                    v_src_unsigned__1 = false;
                    v_dst_unsigned__1 = false;
                  } else {
                    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                      v_src_unsigned__1 = true;
                      v_dst_unsigned__1 = true;
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp1035__2 = typename Traits::rt_expr{};
              v_Exp1035__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If1039__2 = typename Traits::rt_expr{};
              if (v_src_unsigned__1) {
                v_If1039__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If1039__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If1043__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")))) {
                v_If1043__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1039__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))));
              } else {
                v_If1043__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1039__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
              } // if
              auto v_SatQ1045__2 = typename Traits::rt_expr{};
              auto v_SatQ1046__2 = typename Traits::rt_expr{};
              if (v_dst_unsigned__1) {
                const auto v_UnsignedSatQ1047__3 = iface.f_decl_bv("UnsignedSatQ1047__3", iface.bigint_lit("32"));
                const auto v_UnsignedSatQ1048__3 = iface.f_decl_bool("UnsignedSatQ1048__3");
                const auto v_temp180 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If1043__2));
                iface.f_switch_context(iface.f_true_branch(v_temp180));
                iface.f_gen_store(v_UnsignedSatQ1047__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1048__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp180));
                const auto v_temp181 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1043__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp181));
                iface.f_gen_store(v_UnsignedSatQ1047__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1048__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp181));
                iface.f_gen_store(v_UnsignedSatQ1047__3, iface.f_gen_slice(v_If1043__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_UnsignedSatQ1048__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp180));
                v_SatQ1045__2 = iface.f_gen_load(v_UnsignedSatQ1047__3);
                v_SatQ1046__2 = iface.f_gen_load(v_UnsignedSatQ1048__3);
              } else {
                const auto v_SignedSatQ1053__3 = iface.f_decl_bv("SignedSatQ1053__3", iface.bigint_lit("32"));
                const auto v_SignedSatQ1054__3 = iface.f_decl_bool("SignedSatQ1054__3");
                const auto v_temp182 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If1043__2));
                iface.f_switch_context(iface.f_true_branch(v_temp182));
                iface.f_gen_store(v_SignedSatQ1053__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1054__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp182));
                const auto v_temp183 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1043__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp183));
                iface.f_gen_store(v_SignedSatQ1053__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1054__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp183));
                iface.f_gen_store(v_SignedSatQ1053__3, iface.f_gen_slice(v_If1043__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_SignedSatQ1054__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp182));
                v_SatQ1045__2 = iface.f_gen_load(v_SignedSatQ1053__3);
                v_SatQ1046__2 = iface.f_gen_load(v_SignedSatQ1054__3);
              } // if
              const auto v_temp184 = iface.f_gen_branch(v_SatQ1046__2);
              iface.f_switch_context(iface.f_true_branch(v_temp184));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp184));
              auto v_If1068__2 = typename Traits::rt_expr{};
              if (v_src_unsigned__1) {
                v_If1068__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1035__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If1068__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1035__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If1072__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")))) {
                v_If1072__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1068__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))));
              } else {
                v_If1072__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1068__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
              } // if
              auto v_SatQ1073__2 = typename Traits::rt_expr{};
              auto v_SatQ1074__2 = typename Traits::rt_expr{};
              if (v_dst_unsigned__1) {
                const auto v_UnsignedSatQ1075__3 = iface.f_decl_bv("UnsignedSatQ1075__3", iface.bigint_lit("32"));
                const auto v_UnsignedSatQ1076__3 = iface.f_decl_bool("UnsignedSatQ1076__3");
                const auto v_temp185 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If1072__2));
                iface.f_switch_context(iface.f_true_branch(v_temp185));
                iface.f_gen_store(v_UnsignedSatQ1075__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1076__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp185));
                const auto v_temp186 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1072__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp186));
                iface.f_gen_store(v_UnsignedSatQ1075__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1076__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp186));
                iface.f_gen_store(v_UnsignedSatQ1075__3, iface.f_gen_slice(v_If1072__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_UnsignedSatQ1076__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp185));
                v_SatQ1073__2 = iface.f_gen_load(v_UnsignedSatQ1075__3);
                v_SatQ1074__2 = iface.f_gen_load(v_UnsignedSatQ1076__3);
              } else {
                const auto v_SignedSatQ1081__3 = iface.f_decl_bv("SignedSatQ1081__3", iface.bigint_lit("32"));
                const auto v_SignedSatQ1082__3 = iface.f_decl_bool("SignedSatQ1082__3");
                const auto v_temp187 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If1072__2));
                iface.f_switch_context(iface.f_true_branch(v_temp187));
                iface.f_gen_store(v_SignedSatQ1081__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1082__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp187));
                const auto v_temp188 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1072__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp188));
                iface.f_gen_store(v_SignedSatQ1081__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1082__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp188));
                iface.f_gen_store(v_SignedSatQ1081__3, iface.f_gen_slice(v_If1072__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_SignedSatQ1082__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp187));
                v_SatQ1073__2 = iface.f_gen_load(v_SignedSatQ1081__3);
                v_SatQ1074__2 = iface.f_gen_load(v_SignedSatQ1082__3);
              } // if
              const auto v_temp189 = iface.f_gen_branch(v_SatQ1074__2);
              iface.f_switch_context(iface.f_true_branch(v_temp189));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp189));
              auto v_If1095__2 = typename Traits::rt_expr{};
              if (v_src_unsigned__1) {
                v_If1095__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1035__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If1095__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1035__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If1099__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")))) {
                v_If1099__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1095__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))));
              } else {
                v_If1099__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1095__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
              } // if
              auto v_SatQ1100__2 = typename Traits::rt_expr{};
              auto v_SatQ1101__2 = typename Traits::rt_expr{};
              if (v_dst_unsigned__1) {
                const auto v_UnsignedSatQ1102__3 = iface.f_decl_bv("UnsignedSatQ1102__3", iface.bigint_lit("32"));
                const auto v_UnsignedSatQ1103__3 = iface.f_decl_bool("UnsignedSatQ1103__3");
                const auto v_temp190 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If1099__2));
                iface.f_switch_context(iface.f_true_branch(v_temp190));
                iface.f_gen_store(v_UnsignedSatQ1102__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1103__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp190));
                const auto v_temp191 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1099__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp191));
                iface.f_gen_store(v_UnsignedSatQ1102__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1103__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp191));
                iface.f_gen_store(v_UnsignedSatQ1102__3, iface.f_gen_slice(v_If1099__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_UnsignedSatQ1103__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp190));
                v_SatQ1100__2 = iface.f_gen_load(v_UnsignedSatQ1102__3);
                v_SatQ1101__2 = iface.f_gen_load(v_UnsignedSatQ1103__3);
              } else {
                const auto v_SignedSatQ1108__3 = iface.f_decl_bv("SignedSatQ1108__3", iface.bigint_lit("32"));
                const auto v_SignedSatQ1109__3 = iface.f_decl_bool("SignedSatQ1109__3");
                const auto v_temp192 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If1099__2));
                iface.f_switch_context(iface.f_true_branch(v_temp192));
                iface.f_gen_store(v_SignedSatQ1108__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1109__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp192));
                const auto v_temp193 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1099__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp193));
                iface.f_gen_store(v_SignedSatQ1108__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1109__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp193));
                iface.f_gen_store(v_SignedSatQ1108__3, iface.f_gen_slice(v_If1099__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_SignedSatQ1109__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp192));
                v_SatQ1100__2 = iface.f_gen_load(v_SignedSatQ1108__3);
                v_SatQ1101__2 = iface.f_gen_load(v_SignedSatQ1109__3);
              } // if
              const auto v_temp194 = iface.f_gen_branch(v_SatQ1101__2);
              iface.f_switch_context(iface.f_true_branch(v_temp194));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp194));
              auto v_If1122__2 = typename Traits::rt_expr{};
              if (v_src_unsigned__1) {
                v_If1122__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1035__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If1122__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1035__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If1126__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")))) {
                v_If1126__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1122__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))));
              } else {
                v_If1126__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1122__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
              } // if
              auto v_SatQ1127__2 = typename Traits::rt_expr{};
              auto v_SatQ1128__2 = typename Traits::rt_expr{};
              if (v_dst_unsigned__1) {
                const auto v_UnsignedSatQ1129__3 = iface.f_decl_bv("UnsignedSatQ1129__3", iface.bigint_lit("32"));
                const auto v_UnsignedSatQ1130__3 = iface.f_decl_bool("UnsignedSatQ1130__3");
                const auto v_temp195 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If1126__2));
                iface.f_switch_context(iface.f_true_branch(v_temp195));
                iface.f_gen_store(v_UnsignedSatQ1129__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1130__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp195));
                const auto v_temp196 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1126__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp196));
                iface.f_gen_store(v_UnsignedSatQ1129__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1130__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp196));
                iface.f_gen_store(v_UnsignedSatQ1129__3, iface.f_gen_slice(v_If1126__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_UnsignedSatQ1130__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp195));
                v_SatQ1127__2 = iface.f_gen_load(v_UnsignedSatQ1129__3);
                v_SatQ1128__2 = iface.f_gen_load(v_UnsignedSatQ1130__3);
              } else {
                const auto v_SignedSatQ1135__3 = iface.f_decl_bv("SignedSatQ1135__3", iface.bigint_lit("32"));
                const auto v_SignedSatQ1136__3 = iface.f_decl_bool("SignedSatQ1136__3");
                const auto v_temp197 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If1126__2));
                iface.f_switch_context(iface.f_true_branch(v_temp197));
                iface.f_gen_store(v_SignedSatQ1135__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1136__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp197));
                const auto v_temp198 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1126__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp198));
                iface.f_gen_store(v_SignedSatQ1135__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1136__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp198));
                iface.f_gen_store(v_SignedSatQ1135__3, iface.f_gen_slice(v_If1126__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_SignedSatQ1136__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp197));
                v_SatQ1127__2 = iface.f_gen_load(v_SignedSatQ1135__3);
                v_SatQ1128__2 = iface.f_gen_load(v_SignedSatQ1136__3);
              } // if
              const auto v_temp199 = iface.f_gen_branch(v_SatQ1128__2);
              iface.f_switch_context(iface.f_true_branch(v_temp199));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp199));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ1127__2, iface.f_gen_append_bits(v_SatQ1100__2, iface.f_gen_append_bits(v_SatQ1073__2, v_SatQ1045__2))));
            } else {
              auto v_src_unsigned__1 = true;
              auto v_dst_unsigned__1 = true;
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                  v_src_unsigned__1 = false;
                  v_dst_unsigned__1 = true;
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                    v_src_unsigned__1 = false;
                    v_dst_unsigned__1 = false;
                  } else {
                    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                      v_src_unsigned__1 = true;
                      v_dst_unsigned__1 = true;
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp1155__2 = typename Traits::rt_expr{};
              v_Exp1155__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If1159__2 = typename Traits::rt_expr{};
              if (v_src_unsigned__1) {
                v_If1159__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If1159__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If1163__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")))) {
                v_If1163__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1159__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))));
              } else {
                v_If1163__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1159__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
              } // if
              auto v_SatQ1165__2 = typename Traits::rt_expr{};
              auto v_SatQ1166__2 = typename Traits::rt_expr{};
              if (v_dst_unsigned__1) {
                const auto v_UnsignedSatQ1167__3 = iface.f_decl_bv("UnsignedSatQ1167__3", iface.bigint_lit("32"));
                const auto v_UnsignedSatQ1168__3 = iface.f_decl_bool("UnsignedSatQ1168__3");
                const auto v_temp200 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If1163__2));
                iface.f_switch_context(iface.f_true_branch(v_temp200));
                iface.f_gen_store(v_UnsignedSatQ1167__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1168__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp200));
                const auto v_temp201 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1163__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp201));
                iface.f_gen_store(v_UnsignedSatQ1167__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1168__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp201));
                iface.f_gen_store(v_UnsignedSatQ1167__3, iface.f_gen_slice(v_If1163__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_UnsignedSatQ1168__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp200));
                v_SatQ1165__2 = iface.f_gen_load(v_UnsignedSatQ1167__3);
                v_SatQ1166__2 = iface.f_gen_load(v_UnsignedSatQ1168__3);
              } else {
                const auto v_SignedSatQ1173__3 = iface.f_decl_bv("SignedSatQ1173__3", iface.bigint_lit("32"));
                const auto v_SignedSatQ1174__3 = iface.f_decl_bool("SignedSatQ1174__3");
                const auto v_temp202 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If1163__2));
                iface.f_switch_context(iface.f_true_branch(v_temp202));
                iface.f_gen_store(v_SignedSatQ1173__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1174__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp202));
                const auto v_temp203 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1163__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp203));
                iface.f_gen_store(v_SignedSatQ1173__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1174__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp203));
                iface.f_gen_store(v_SignedSatQ1173__3, iface.f_gen_slice(v_If1163__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_SignedSatQ1174__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp202));
                v_SatQ1165__2 = iface.f_gen_load(v_SignedSatQ1173__3);
                v_SatQ1166__2 = iface.f_gen_load(v_SignedSatQ1174__3);
              } // if
              const auto v_temp204 = iface.f_gen_branch(v_SatQ1166__2);
              iface.f_switch_context(iface.f_true_branch(v_temp204));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp204));
              auto v_If1188__2 = typename Traits::rt_expr{};
              if (v_src_unsigned__1) {
                v_If1188__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1155__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If1188__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1155__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If1192__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")))) {
                v_If1192__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1188__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))));
              } else {
                v_If1192__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1188__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
              } // if
              auto v_SatQ1193__2 = typename Traits::rt_expr{};
              auto v_SatQ1194__2 = typename Traits::rt_expr{};
              if (v_dst_unsigned__1) {
                const auto v_UnsignedSatQ1195__3 = iface.f_decl_bv("UnsignedSatQ1195__3", iface.bigint_lit("32"));
                const auto v_UnsignedSatQ1196__3 = iface.f_decl_bool("UnsignedSatQ1196__3");
                const auto v_temp205 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If1192__2));
                iface.f_switch_context(iface.f_true_branch(v_temp205));
                iface.f_gen_store(v_UnsignedSatQ1195__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1196__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp205));
                const auto v_temp206 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1192__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp206));
                iface.f_gen_store(v_UnsignedSatQ1195__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1196__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp206));
                iface.f_gen_store(v_UnsignedSatQ1195__3, iface.f_gen_slice(v_If1192__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_UnsignedSatQ1196__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp205));
                v_SatQ1193__2 = iface.f_gen_load(v_UnsignedSatQ1195__3);
                v_SatQ1194__2 = iface.f_gen_load(v_UnsignedSatQ1196__3);
              } else {
                const auto v_SignedSatQ1201__3 = iface.f_decl_bv("SignedSatQ1201__3", iface.bigint_lit("32"));
                const auto v_SignedSatQ1202__3 = iface.f_decl_bool("SignedSatQ1202__3");
                const auto v_temp207 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If1192__2));
                iface.f_switch_context(iface.f_true_branch(v_temp207));
                iface.f_gen_store(v_SignedSatQ1201__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1202__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp207));
                const auto v_temp208 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1192__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp208));
                iface.f_gen_store(v_SignedSatQ1201__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1202__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp208));
                iface.f_gen_store(v_SignedSatQ1201__3, iface.f_gen_slice(v_If1192__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
                iface.f_gen_store(v_SignedSatQ1202__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp207));
                v_SatQ1193__2 = iface.f_gen_load(v_SignedSatQ1201__3);
                v_SatQ1194__2 = iface.f_gen_load(v_SignedSatQ1202__3);
              } // if
              const auto v_temp209 = iface.f_gen_branch(v_SatQ1194__2);
              iface.f_switch_context(iface.f_true_branch(v_temp209));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp209));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ1193__2, v_SatQ1165__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            auto v_HighestSetBit1218__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit1218__2 = iface.bits_lit(3U, "011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit1218__2 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit1218__2 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit1218__2 = iface.bits_lit(3U, "000");
                  } else {
                    v_HighestSetBit1218__2 = iface.bits_lit(3U, "111");
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(v_HighestSetBit1218__2, iface.bits_lit(3U, "011"))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_src_unsigned__1 = true;
                auto v_dst_unsigned__1 = true;
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                    v_src_unsigned__1 = false;
                    v_dst_unsigned__1 = true;
                  } else {
                    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                      v_src_unsigned__1 = false;
                      v_dst_unsigned__1 = false;
                    } else {
                      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                        v_src_unsigned__1 = true;
                        v_dst_unsigned__1 = true;
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp1224__2 = typename Traits::rt_expr{};
                v_Exp1224__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                auto v_If1228__2 = typename Traits::rt_expr{};
                if (v_src_unsigned__1) {
                  v_If1228__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If1228__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If1232__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")))) {
                  v_If1232__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1228__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))));
                } else {
                  v_If1232__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1228__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_SatQ1234__2 = typename Traits::rt_expr{};
                auto v_SatQ1235__2 = typename Traits::rt_expr{};
                if (v_dst_unsigned__1) {
                  const auto v_UnsignedSatQ1236__3 = iface.f_decl_bv("UnsignedSatQ1236__3", iface.bigint_lit("64"));
                  const auto v_UnsignedSatQ1237__3 = iface.f_decl_bool("UnsignedSatQ1237__3");
                  const auto v_temp210 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If1232__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp210));
                  iface.f_gen_store(v_UnsignedSatQ1236__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ1237__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp210));
                  const auto v_temp211 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1232__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp211));
                  iface.f_gen_store(v_UnsignedSatQ1236__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ1237__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp211));
                  iface.f_gen_store(v_UnsignedSatQ1236__3, iface.f_gen_slice(v_If1232__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_UnsignedSatQ1237__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp210));
                  v_SatQ1234__2 = iface.f_gen_load(v_UnsignedSatQ1236__3);
                  v_SatQ1235__2 = iface.f_gen_load(v_UnsignedSatQ1237__3);
                } else {
                  const auto v_SignedSatQ1242__3 = iface.f_decl_bv("SignedSatQ1242__3", iface.bigint_lit("64"));
                  const auto v_SignedSatQ1243__3 = iface.f_decl_bool("SignedSatQ1243__3");
                  const auto v_temp212 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), v_If1232__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp212));
                  iface.f_gen_store(v_SignedSatQ1242__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ1243__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp212));
                  const auto v_temp213 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1232__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp213));
                  iface.f_gen_store(v_SignedSatQ1242__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ1243__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp213));
                  iface.f_gen_store(v_SignedSatQ1242__3, iface.f_gen_slice(v_If1232__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_SignedSatQ1243__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp212));
                  v_SatQ1234__2 = iface.f_gen_load(v_SignedSatQ1242__3);
                  v_SatQ1235__2 = iface.f_gen_load(v_SignedSatQ1243__3);
                } // if
                const auto v_temp214 = iface.f_gen_branch(v_SatQ1235__2);
                iface.f_switch_context(iface.f_true_branch(v_temp214));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp214));
                auto v_If1257__2 = typename Traits::rt_expr{};
                if (v_src_unsigned__1) {
                  v_If1257__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1224__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If1257__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1224__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If1261__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")))) {
                  v_If1261__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1257__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))));
                } else {
                  v_If1261__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1257__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_SatQ1262__2 = typename Traits::rt_expr{};
                auto v_SatQ1263__2 = typename Traits::rt_expr{};
                if (v_dst_unsigned__1) {
                  const auto v_UnsignedSatQ1264__3 = iface.f_decl_bv("UnsignedSatQ1264__3", iface.bigint_lit("64"));
                  const auto v_UnsignedSatQ1265__3 = iface.f_decl_bool("UnsignedSatQ1265__3");
                  const auto v_temp215 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If1261__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp215));
                  iface.f_gen_store(v_UnsignedSatQ1264__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ1265__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp215));
                  const auto v_temp216 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1261__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp216));
                  iface.f_gen_store(v_UnsignedSatQ1264__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ1265__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp216));
                  iface.f_gen_store(v_UnsignedSatQ1264__3, iface.f_gen_slice(v_If1261__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_UnsignedSatQ1265__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp215));
                  v_SatQ1262__2 = iface.f_gen_load(v_UnsignedSatQ1264__3);
                  v_SatQ1263__2 = iface.f_gen_load(v_UnsignedSatQ1265__3);
                } else {
                  const auto v_SignedSatQ1270__3 = iface.f_decl_bv("SignedSatQ1270__3", iface.bigint_lit("64"));
                  const auto v_SignedSatQ1271__3 = iface.f_decl_bool("SignedSatQ1271__3");
                  const auto v_temp217 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), v_If1261__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp217));
                  iface.f_gen_store(v_SignedSatQ1270__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ1271__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp217));
                  const auto v_temp218 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1261__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp218));
                  iface.f_gen_store(v_SignedSatQ1270__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ1271__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp218));
                  iface.f_gen_store(v_SignedSatQ1270__3, iface.f_gen_slice(v_If1261__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_SignedSatQ1271__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp217));
                  v_SatQ1262__2 = iface.f_gen_load(v_SignedSatQ1270__3);
                  v_SatQ1263__2 = iface.f_gen_load(v_SignedSatQ1271__3);
                } // if
                const auto v_temp219 = iface.f_gen_branch(v_SatQ1263__2);
                iface.f_switch_context(iface.f_true_branch(v_temp219));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp219));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ1262__2, v_SatQ1234__2));
              } else {
                auto v_src_unsigned__1 = true;
                auto v_dst_unsigned__1 = true;
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                    v_src_unsigned__1 = false;
                    v_dst_unsigned__1 = true;
                  } else {
                    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                      v_src_unsigned__1 = false;
                      v_dst_unsigned__1 = false;
                    } else {
                      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                        v_src_unsigned__1 = true;
                        v_dst_unsigned__1 = true;
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_If1294__2 = typename Traits::rt_expr{};
                if (v_src_unsigned__1) {
                  v_If1294__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If1294__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If1298__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")))) {
                  v_If1298__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1294__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))));
                } else {
                  v_If1298__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1294__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_SatQ1300__2 = typename Traits::rt_expr{};
                auto v_SatQ1301__2 = typename Traits::rt_expr{};
                if (v_dst_unsigned__1) {
                  const auto v_UnsignedSatQ1302__3 = iface.f_decl_bv("UnsignedSatQ1302__3", iface.bigint_lit("64"));
                  const auto v_UnsignedSatQ1303__3 = iface.f_decl_bool("UnsignedSatQ1303__3");
                  const auto v_temp220 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If1298__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp220));
                  iface.f_gen_store(v_UnsignedSatQ1302__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_UnsignedSatQ1303__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp220));
                  const auto v_temp221 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1298__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp221));
                  iface.f_gen_store(v_UnsignedSatQ1302__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_UnsignedSatQ1303__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp221));
                  iface.f_gen_store(v_UnsignedSatQ1302__3, iface.f_gen_slice(v_If1298__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_UnsignedSatQ1303__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp220));
                  v_SatQ1300__2 = iface.f_gen_load(v_UnsignedSatQ1302__3);
                  v_SatQ1301__2 = iface.f_gen_load(v_UnsignedSatQ1303__3);
                } else {
                  const auto v_SignedSatQ1308__3 = iface.f_decl_bv("SignedSatQ1308__3", iface.bigint_lit("64"));
                  const auto v_SignedSatQ1309__3 = iface.f_decl_bool("SignedSatQ1309__3");
                  const auto v_temp222 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), v_If1298__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp222));
                  iface.f_gen_store(v_SignedSatQ1308__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                  iface.f_gen_store(v_SignedSatQ1309__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp222));
                  const auto v_temp223 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1298__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp223));
                  iface.f_gen_store(v_SignedSatQ1308__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                  iface.f_gen_store(v_SignedSatQ1309__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp223));
                  iface.f_gen_store(v_SignedSatQ1308__3, iface.f_gen_slice(v_If1298__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                  iface.f_gen_store(v_SignedSatQ1309__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp222));
                  v_SatQ1300__2 = iface.f_gen_load(v_SignedSatQ1308__3);
                  v_SatQ1301__2 = iface.f_gen_load(v_SignedSatQ1309__3);
                } // if
                const auto v_temp224 = iface.f_gen_branch(v_SatQ1301__2);
                iface.f_switch_context(iface.f_true_branch(v_temp224));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp224));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ1300__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } // if
            } else {
              auto v_HighestSetBit1326__2 = iface.bits_zero(iface.bigint_lit("3"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit1326__2 = iface.bits_lit(3U, "011");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit1326__2 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit1326__2 = iface.bits_lit(3U, "001");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                      v_HighestSetBit1326__2 = iface.bits_lit(3U, "000");
                    } else {
                      v_HighestSetBit1326__2 = iface.bits_lit(3U, "111");
                    } // if
                  } // if
                } // if
              } // if
              if (iface.f_eq_bits(v_HighestSetBit1326__2, iface.bits_lit(3U, "111"))) {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_src_unsigned__1 = true;
                  auto v_dst_unsigned__1 = true;
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } else {
                    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                      v_src_unsigned__1 = false;
                      v_dst_unsigned__1 = true;
                    } else {
                      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                        v_src_unsigned__1 = false;
                        v_dst_unsigned__1 = false;
                      } else {
                        if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                          v_src_unsigned__1 = true;
                          v_dst_unsigned__1 = true;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  auto v_Exp1332__2 = typename Traits::rt_expr{};
                  v_Exp1332__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  auto v_If1336__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1336__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1336__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1340__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1340__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1336__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1340__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1336__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1342__2 = typename Traits::rt_expr{};
                  auto v_SatQ1343__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1344__3 = iface.f_decl_bv("UnsignedSatQ1344__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1345__3 = iface.f_decl_bool("UnsignedSatQ1345__3");
                    const auto v_temp225 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1340__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp225));
                    iface.f_gen_store(v_UnsignedSatQ1344__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1345__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp225));
                    const auto v_temp226 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1340__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp226));
                    iface.f_gen_store(v_UnsignedSatQ1344__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1345__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp226));
                    iface.f_gen_store(v_UnsignedSatQ1344__3, iface.f_gen_slice(v_If1340__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1345__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp225));
                    v_SatQ1342__2 = iface.f_gen_load(v_UnsignedSatQ1344__3);
                    v_SatQ1343__2 = iface.f_gen_load(v_UnsignedSatQ1345__3);
                  } else {
                    const auto v_SignedSatQ1350__3 = iface.f_decl_bv("SignedSatQ1350__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1351__3 = iface.f_decl_bool("SignedSatQ1351__3");
                    const auto v_temp227 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1340__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp227));
                    iface.f_gen_store(v_SignedSatQ1350__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1351__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp227));
                    const auto v_temp228 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1340__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp228));
                    iface.f_gen_store(v_SignedSatQ1350__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1351__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp228));
                    iface.f_gen_store(v_SignedSatQ1350__3, iface.f_gen_slice(v_If1340__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1351__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp227));
                    v_SatQ1342__2 = iface.f_gen_load(v_SignedSatQ1350__3);
                    v_SatQ1343__2 = iface.f_gen_load(v_SignedSatQ1351__3);
                  } // if
                  const auto v_temp229 = iface.f_gen_branch(v_SatQ1343__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp229));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp229));
                  auto v_If1365__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1365__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1365__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1369__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1369__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1365__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1369__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1365__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1370__2 = typename Traits::rt_expr{};
                  auto v_SatQ1371__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1372__3 = iface.f_decl_bv("UnsignedSatQ1372__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1373__3 = iface.f_decl_bool("UnsignedSatQ1373__3");
                    const auto v_temp230 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1369__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp230));
                    iface.f_gen_store(v_UnsignedSatQ1372__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1373__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp230));
                    const auto v_temp231 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1369__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp231));
                    iface.f_gen_store(v_UnsignedSatQ1372__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1373__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp231));
                    iface.f_gen_store(v_UnsignedSatQ1372__3, iface.f_gen_slice(v_If1369__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1373__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp230));
                    v_SatQ1370__2 = iface.f_gen_load(v_UnsignedSatQ1372__3);
                    v_SatQ1371__2 = iface.f_gen_load(v_UnsignedSatQ1373__3);
                  } else {
                    const auto v_SignedSatQ1378__3 = iface.f_decl_bv("SignedSatQ1378__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1379__3 = iface.f_decl_bool("SignedSatQ1379__3");
                    const auto v_temp232 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1369__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp232));
                    iface.f_gen_store(v_SignedSatQ1378__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1379__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp232));
                    const auto v_temp233 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1369__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp233));
                    iface.f_gen_store(v_SignedSatQ1378__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1379__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp233));
                    iface.f_gen_store(v_SignedSatQ1378__3, iface.f_gen_slice(v_If1369__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1379__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp232));
                    v_SatQ1370__2 = iface.f_gen_load(v_SignedSatQ1378__3);
                    v_SatQ1371__2 = iface.f_gen_load(v_SignedSatQ1379__3);
                  } // if
                  const auto v_temp234 = iface.f_gen_branch(v_SatQ1371__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp234));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp234));
                  auto v_If1392__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1392__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1392__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1396__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1396__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1392__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1396__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1392__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1397__2 = typename Traits::rt_expr{};
                  auto v_SatQ1398__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1399__3 = iface.f_decl_bv("UnsignedSatQ1399__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1400__3 = iface.f_decl_bool("UnsignedSatQ1400__3");
                    const auto v_temp235 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1396__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp235));
                    iface.f_gen_store(v_UnsignedSatQ1399__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1400__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp235));
                    const auto v_temp236 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1396__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp236));
                    iface.f_gen_store(v_UnsignedSatQ1399__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1400__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp236));
                    iface.f_gen_store(v_UnsignedSatQ1399__3, iface.f_gen_slice(v_If1396__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1400__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp235));
                    v_SatQ1397__2 = iface.f_gen_load(v_UnsignedSatQ1399__3);
                    v_SatQ1398__2 = iface.f_gen_load(v_UnsignedSatQ1400__3);
                  } else {
                    const auto v_SignedSatQ1405__3 = iface.f_decl_bv("SignedSatQ1405__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1406__3 = iface.f_decl_bool("SignedSatQ1406__3");
                    const auto v_temp237 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1396__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp237));
                    iface.f_gen_store(v_SignedSatQ1405__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1406__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp237));
                    const auto v_temp238 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1396__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp238));
                    iface.f_gen_store(v_SignedSatQ1405__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1406__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp238));
                    iface.f_gen_store(v_SignedSatQ1405__3, iface.f_gen_slice(v_If1396__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1406__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp237));
                    v_SatQ1397__2 = iface.f_gen_load(v_SignedSatQ1405__3);
                    v_SatQ1398__2 = iface.f_gen_load(v_SignedSatQ1406__3);
                  } // if
                  const auto v_temp239 = iface.f_gen_branch(v_SatQ1398__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp239));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp239));
                  auto v_If1419__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1419__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1419__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1423__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1423__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1419__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1423__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1419__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1424__2 = typename Traits::rt_expr{};
                  auto v_SatQ1425__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1426__3 = iface.f_decl_bv("UnsignedSatQ1426__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1427__3 = iface.f_decl_bool("UnsignedSatQ1427__3");
                    const auto v_temp240 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1423__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp240));
                    iface.f_gen_store(v_UnsignedSatQ1426__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1427__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp240));
                    const auto v_temp241 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1423__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp241));
                    iface.f_gen_store(v_UnsignedSatQ1426__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1427__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp241));
                    iface.f_gen_store(v_UnsignedSatQ1426__3, iface.f_gen_slice(v_If1423__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1427__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp240));
                    v_SatQ1424__2 = iface.f_gen_load(v_UnsignedSatQ1426__3);
                    v_SatQ1425__2 = iface.f_gen_load(v_UnsignedSatQ1427__3);
                  } else {
                    const auto v_SignedSatQ1432__3 = iface.f_decl_bv("SignedSatQ1432__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1433__3 = iface.f_decl_bool("SignedSatQ1433__3");
                    const auto v_temp242 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1423__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp242));
                    iface.f_gen_store(v_SignedSatQ1432__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1433__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp242));
                    const auto v_temp243 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1423__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp243));
                    iface.f_gen_store(v_SignedSatQ1432__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1433__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp243));
                    iface.f_gen_store(v_SignedSatQ1432__3, iface.f_gen_slice(v_If1423__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1433__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp242));
                    v_SatQ1424__2 = iface.f_gen_load(v_SignedSatQ1432__3);
                    v_SatQ1425__2 = iface.f_gen_load(v_SignedSatQ1433__3);
                  } // if
                  const auto v_temp244 = iface.f_gen_branch(v_SatQ1425__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp244));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp244));
                  auto v_If1446__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1446__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1446__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1450__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1450__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1446__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1450__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1446__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1451__2 = typename Traits::rt_expr{};
                  auto v_SatQ1452__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1453__3 = iface.f_decl_bv("UnsignedSatQ1453__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1454__3 = iface.f_decl_bool("UnsignedSatQ1454__3");
                    const auto v_temp245 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1450__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp245));
                    iface.f_gen_store(v_UnsignedSatQ1453__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1454__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp245));
                    const auto v_temp246 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1450__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp246));
                    iface.f_gen_store(v_UnsignedSatQ1453__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1454__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp246));
                    iface.f_gen_store(v_UnsignedSatQ1453__3, iface.f_gen_slice(v_If1450__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1454__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp245));
                    v_SatQ1451__2 = iface.f_gen_load(v_UnsignedSatQ1453__3);
                    v_SatQ1452__2 = iface.f_gen_load(v_UnsignedSatQ1454__3);
                  } else {
                    const auto v_SignedSatQ1459__3 = iface.f_decl_bv("SignedSatQ1459__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1460__3 = iface.f_decl_bool("SignedSatQ1460__3");
                    const auto v_temp247 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1450__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp247));
                    iface.f_gen_store(v_SignedSatQ1459__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1460__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp247));
                    const auto v_temp248 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1450__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp248));
                    iface.f_gen_store(v_SignedSatQ1459__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1460__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp248));
                    iface.f_gen_store(v_SignedSatQ1459__3, iface.f_gen_slice(v_If1450__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1460__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp247));
                    v_SatQ1451__2 = iface.f_gen_load(v_SignedSatQ1459__3);
                    v_SatQ1452__2 = iface.f_gen_load(v_SignedSatQ1460__3);
                  } // if
                  const auto v_temp249 = iface.f_gen_branch(v_SatQ1452__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp249));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp249));
                  auto v_If1473__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1473__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1473__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1477__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1477__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1473__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1477__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1473__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1478__2 = typename Traits::rt_expr{};
                  auto v_SatQ1479__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1480__3 = iface.f_decl_bv("UnsignedSatQ1480__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1481__3 = iface.f_decl_bool("UnsignedSatQ1481__3");
                    const auto v_temp250 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1477__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp250));
                    iface.f_gen_store(v_UnsignedSatQ1480__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1481__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp250));
                    const auto v_temp251 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1477__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp251));
                    iface.f_gen_store(v_UnsignedSatQ1480__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1481__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp251));
                    iface.f_gen_store(v_UnsignedSatQ1480__3, iface.f_gen_slice(v_If1477__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1481__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp250));
                    v_SatQ1478__2 = iface.f_gen_load(v_UnsignedSatQ1480__3);
                    v_SatQ1479__2 = iface.f_gen_load(v_UnsignedSatQ1481__3);
                  } else {
                    const auto v_SignedSatQ1486__3 = iface.f_decl_bv("SignedSatQ1486__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1487__3 = iface.f_decl_bool("SignedSatQ1487__3");
                    const auto v_temp252 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1477__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp252));
                    iface.f_gen_store(v_SignedSatQ1486__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1487__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp252));
                    const auto v_temp253 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1477__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp253));
                    iface.f_gen_store(v_SignedSatQ1486__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1487__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp253));
                    iface.f_gen_store(v_SignedSatQ1486__3, iface.f_gen_slice(v_If1477__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1487__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp252));
                    v_SatQ1478__2 = iface.f_gen_load(v_SignedSatQ1486__3);
                    v_SatQ1479__2 = iface.f_gen_load(v_SignedSatQ1487__3);
                  } // if
                  const auto v_temp254 = iface.f_gen_branch(v_SatQ1479__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp254));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp254));
                  auto v_If1500__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1500__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1500__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1504__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1504__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1500__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1504__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1500__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1505__2 = typename Traits::rt_expr{};
                  auto v_SatQ1506__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1507__3 = iface.f_decl_bv("UnsignedSatQ1507__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1508__3 = iface.f_decl_bool("UnsignedSatQ1508__3");
                    const auto v_temp255 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1504__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp255));
                    iface.f_gen_store(v_UnsignedSatQ1507__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1508__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp255));
                    const auto v_temp256 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1504__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp256));
                    iface.f_gen_store(v_UnsignedSatQ1507__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1508__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp256));
                    iface.f_gen_store(v_UnsignedSatQ1507__3, iface.f_gen_slice(v_If1504__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1508__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp255));
                    v_SatQ1505__2 = iface.f_gen_load(v_UnsignedSatQ1507__3);
                    v_SatQ1506__2 = iface.f_gen_load(v_UnsignedSatQ1508__3);
                  } else {
                    const auto v_SignedSatQ1513__3 = iface.f_decl_bv("SignedSatQ1513__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1514__3 = iface.f_decl_bool("SignedSatQ1514__3");
                    const auto v_temp257 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1504__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp257));
                    iface.f_gen_store(v_SignedSatQ1513__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1514__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp257));
                    const auto v_temp258 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1504__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp258));
                    iface.f_gen_store(v_SignedSatQ1513__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1514__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp258));
                    iface.f_gen_store(v_SignedSatQ1513__3, iface.f_gen_slice(v_If1504__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1514__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp257));
                    v_SatQ1505__2 = iface.f_gen_load(v_SignedSatQ1513__3);
                    v_SatQ1506__2 = iface.f_gen_load(v_SignedSatQ1514__3);
                  } // if
                  const auto v_temp259 = iface.f_gen_branch(v_SatQ1506__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp259));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp259));
                  auto v_If1527__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1527__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1527__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1531__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1531__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1527__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1531__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1527__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1532__2 = typename Traits::rt_expr{};
                  auto v_SatQ1533__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1534__3 = iface.f_decl_bv("UnsignedSatQ1534__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1535__3 = iface.f_decl_bool("UnsignedSatQ1535__3");
                    const auto v_temp260 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1531__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp260));
                    iface.f_gen_store(v_UnsignedSatQ1534__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1535__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp260));
                    const auto v_temp261 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1531__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp261));
                    iface.f_gen_store(v_UnsignedSatQ1534__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1535__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp261));
                    iface.f_gen_store(v_UnsignedSatQ1534__3, iface.f_gen_slice(v_If1531__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1535__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp260));
                    v_SatQ1532__2 = iface.f_gen_load(v_UnsignedSatQ1534__3);
                    v_SatQ1533__2 = iface.f_gen_load(v_UnsignedSatQ1535__3);
                  } else {
                    const auto v_SignedSatQ1540__3 = iface.f_decl_bv("SignedSatQ1540__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1541__3 = iface.f_decl_bool("SignedSatQ1541__3");
                    const auto v_temp262 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1531__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp262));
                    iface.f_gen_store(v_SignedSatQ1540__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1541__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp262));
                    const auto v_temp263 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1531__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp263));
                    iface.f_gen_store(v_SignedSatQ1540__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1541__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp263));
                    iface.f_gen_store(v_SignedSatQ1540__3, iface.f_gen_slice(v_If1531__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1541__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp262));
                    v_SatQ1532__2 = iface.f_gen_load(v_SignedSatQ1540__3);
                    v_SatQ1533__2 = iface.f_gen_load(v_SignedSatQ1541__3);
                  } // if
                  const auto v_temp264 = iface.f_gen_branch(v_SatQ1533__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp264));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp264));
                  auto v_If1554__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1554__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1554__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1558__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1558__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1554__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1558__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1554__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1559__2 = typename Traits::rt_expr{};
                  auto v_SatQ1560__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1561__3 = iface.f_decl_bv("UnsignedSatQ1561__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1562__3 = iface.f_decl_bool("UnsignedSatQ1562__3");
                    const auto v_temp265 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1558__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp265));
                    iface.f_gen_store(v_UnsignedSatQ1561__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1562__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp265));
                    const auto v_temp266 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1558__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp266));
                    iface.f_gen_store(v_UnsignedSatQ1561__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1562__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp266));
                    iface.f_gen_store(v_UnsignedSatQ1561__3, iface.f_gen_slice(v_If1558__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1562__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp265));
                    v_SatQ1559__2 = iface.f_gen_load(v_UnsignedSatQ1561__3);
                    v_SatQ1560__2 = iface.f_gen_load(v_UnsignedSatQ1562__3);
                  } else {
                    const auto v_SignedSatQ1567__3 = iface.f_decl_bv("SignedSatQ1567__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1568__3 = iface.f_decl_bool("SignedSatQ1568__3");
                    const auto v_temp267 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1558__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp267));
                    iface.f_gen_store(v_SignedSatQ1567__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1568__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp267));
                    const auto v_temp268 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1558__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp268));
                    iface.f_gen_store(v_SignedSatQ1567__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1568__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp268));
                    iface.f_gen_store(v_SignedSatQ1567__3, iface.f_gen_slice(v_If1558__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1568__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp267));
                    v_SatQ1559__2 = iface.f_gen_load(v_SignedSatQ1567__3);
                    v_SatQ1560__2 = iface.f_gen_load(v_SignedSatQ1568__3);
                  } // if
                  const auto v_temp269 = iface.f_gen_branch(v_SatQ1560__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp269));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp269));
                  auto v_If1581__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1581__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1581__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1585__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1585__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1581__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1585__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1581__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1586__2 = typename Traits::rt_expr{};
                  auto v_SatQ1587__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1588__3 = iface.f_decl_bv("UnsignedSatQ1588__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1589__3 = iface.f_decl_bool("UnsignedSatQ1589__3");
                    const auto v_temp270 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1585__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp270));
                    iface.f_gen_store(v_UnsignedSatQ1588__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1589__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp270));
                    const auto v_temp271 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1585__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp271));
                    iface.f_gen_store(v_UnsignedSatQ1588__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1589__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp271));
                    iface.f_gen_store(v_UnsignedSatQ1588__3, iface.f_gen_slice(v_If1585__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1589__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp270));
                    v_SatQ1586__2 = iface.f_gen_load(v_UnsignedSatQ1588__3);
                    v_SatQ1587__2 = iface.f_gen_load(v_UnsignedSatQ1589__3);
                  } else {
                    const auto v_SignedSatQ1594__3 = iface.f_decl_bv("SignedSatQ1594__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1595__3 = iface.f_decl_bool("SignedSatQ1595__3");
                    const auto v_temp272 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1585__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp272));
                    iface.f_gen_store(v_SignedSatQ1594__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1595__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp272));
                    const auto v_temp273 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1585__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp273));
                    iface.f_gen_store(v_SignedSatQ1594__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1595__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp273));
                    iface.f_gen_store(v_SignedSatQ1594__3, iface.f_gen_slice(v_If1585__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1595__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp272));
                    v_SatQ1586__2 = iface.f_gen_load(v_SignedSatQ1594__3);
                    v_SatQ1587__2 = iface.f_gen_load(v_SignedSatQ1595__3);
                  } // if
                  const auto v_temp274 = iface.f_gen_branch(v_SatQ1587__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp274));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp274));
                  auto v_If1608__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1608__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1608__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1612__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1612__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1608__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1612__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1608__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1613__2 = typename Traits::rt_expr{};
                  auto v_SatQ1614__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1615__3 = iface.f_decl_bv("UnsignedSatQ1615__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1616__3 = iface.f_decl_bool("UnsignedSatQ1616__3");
                    const auto v_temp275 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1612__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp275));
                    iface.f_gen_store(v_UnsignedSatQ1615__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1616__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp275));
                    const auto v_temp276 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1612__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp276));
                    iface.f_gen_store(v_UnsignedSatQ1615__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1616__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp276));
                    iface.f_gen_store(v_UnsignedSatQ1615__3, iface.f_gen_slice(v_If1612__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1616__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp275));
                    v_SatQ1613__2 = iface.f_gen_load(v_UnsignedSatQ1615__3);
                    v_SatQ1614__2 = iface.f_gen_load(v_UnsignedSatQ1616__3);
                  } else {
                    const auto v_SignedSatQ1621__3 = iface.f_decl_bv("SignedSatQ1621__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1622__3 = iface.f_decl_bool("SignedSatQ1622__3");
                    const auto v_temp277 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1612__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp277));
                    iface.f_gen_store(v_SignedSatQ1621__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1622__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp277));
                    const auto v_temp278 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1612__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp278));
                    iface.f_gen_store(v_SignedSatQ1621__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1622__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp278));
                    iface.f_gen_store(v_SignedSatQ1621__3, iface.f_gen_slice(v_If1612__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1622__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp277));
                    v_SatQ1613__2 = iface.f_gen_load(v_SignedSatQ1621__3);
                    v_SatQ1614__2 = iface.f_gen_load(v_SignedSatQ1622__3);
                  } // if
                  const auto v_temp279 = iface.f_gen_branch(v_SatQ1614__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp279));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp279));
                  auto v_If1635__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1635__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1635__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1639__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1639__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1635__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1639__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1635__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1640__2 = typename Traits::rt_expr{};
                  auto v_SatQ1641__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1642__3 = iface.f_decl_bv("UnsignedSatQ1642__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1643__3 = iface.f_decl_bool("UnsignedSatQ1643__3");
                    const auto v_temp280 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1639__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp280));
                    iface.f_gen_store(v_UnsignedSatQ1642__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1643__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp280));
                    const auto v_temp281 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1639__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp281));
                    iface.f_gen_store(v_UnsignedSatQ1642__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1643__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp281));
                    iface.f_gen_store(v_UnsignedSatQ1642__3, iface.f_gen_slice(v_If1639__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1643__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp280));
                    v_SatQ1640__2 = iface.f_gen_load(v_UnsignedSatQ1642__3);
                    v_SatQ1641__2 = iface.f_gen_load(v_UnsignedSatQ1643__3);
                  } else {
                    const auto v_SignedSatQ1648__3 = iface.f_decl_bv("SignedSatQ1648__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1649__3 = iface.f_decl_bool("SignedSatQ1649__3");
                    const auto v_temp282 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1639__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp282));
                    iface.f_gen_store(v_SignedSatQ1648__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1649__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp282));
                    const auto v_temp283 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1639__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp283));
                    iface.f_gen_store(v_SignedSatQ1648__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1649__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp283));
                    iface.f_gen_store(v_SignedSatQ1648__3, iface.f_gen_slice(v_If1639__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1649__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp282));
                    v_SatQ1640__2 = iface.f_gen_load(v_SignedSatQ1648__3);
                    v_SatQ1641__2 = iface.f_gen_load(v_SignedSatQ1649__3);
                  } // if
                  const auto v_temp284 = iface.f_gen_branch(v_SatQ1641__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp284));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp284));
                  auto v_If1662__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1662__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1662__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1666__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1666__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1662__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1666__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1662__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1667__2 = typename Traits::rt_expr{};
                  auto v_SatQ1668__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1669__3 = iface.f_decl_bv("UnsignedSatQ1669__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1670__3 = iface.f_decl_bool("UnsignedSatQ1670__3");
                    const auto v_temp285 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1666__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp285));
                    iface.f_gen_store(v_UnsignedSatQ1669__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1670__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp285));
                    const auto v_temp286 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1666__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp286));
                    iface.f_gen_store(v_UnsignedSatQ1669__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1670__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp286));
                    iface.f_gen_store(v_UnsignedSatQ1669__3, iface.f_gen_slice(v_If1666__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1670__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp285));
                    v_SatQ1667__2 = iface.f_gen_load(v_UnsignedSatQ1669__3);
                    v_SatQ1668__2 = iface.f_gen_load(v_UnsignedSatQ1670__3);
                  } else {
                    const auto v_SignedSatQ1675__3 = iface.f_decl_bv("SignedSatQ1675__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1676__3 = iface.f_decl_bool("SignedSatQ1676__3");
                    const auto v_temp287 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1666__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp287));
                    iface.f_gen_store(v_SignedSatQ1675__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1676__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp287));
                    const auto v_temp288 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1666__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp288));
                    iface.f_gen_store(v_SignedSatQ1675__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1676__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp288));
                    iface.f_gen_store(v_SignedSatQ1675__3, iface.f_gen_slice(v_If1666__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1676__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp287));
                    v_SatQ1667__2 = iface.f_gen_load(v_SignedSatQ1675__3);
                    v_SatQ1668__2 = iface.f_gen_load(v_SignedSatQ1676__3);
                  } // if
                  const auto v_temp289 = iface.f_gen_branch(v_SatQ1668__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp289));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp289));
                  auto v_If1689__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1689__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1689__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1693__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1693__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1689__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1693__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1689__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1694__2 = typename Traits::rt_expr{};
                  auto v_SatQ1695__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1696__3 = iface.f_decl_bv("UnsignedSatQ1696__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1697__3 = iface.f_decl_bool("UnsignedSatQ1697__3");
                    const auto v_temp290 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1693__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp290));
                    iface.f_gen_store(v_UnsignedSatQ1696__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1697__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp290));
                    const auto v_temp291 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1693__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp291));
                    iface.f_gen_store(v_UnsignedSatQ1696__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1697__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp291));
                    iface.f_gen_store(v_UnsignedSatQ1696__3, iface.f_gen_slice(v_If1693__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1697__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp290));
                    v_SatQ1694__2 = iface.f_gen_load(v_UnsignedSatQ1696__3);
                    v_SatQ1695__2 = iface.f_gen_load(v_UnsignedSatQ1697__3);
                  } else {
                    const auto v_SignedSatQ1702__3 = iface.f_decl_bv("SignedSatQ1702__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1703__3 = iface.f_decl_bool("SignedSatQ1703__3");
                    const auto v_temp292 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1693__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp292));
                    iface.f_gen_store(v_SignedSatQ1702__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1703__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp292));
                    const auto v_temp293 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1693__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp293));
                    iface.f_gen_store(v_SignedSatQ1702__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1703__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp293));
                    iface.f_gen_store(v_SignedSatQ1702__3, iface.f_gen_slice(v_If1693__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1703__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp292));
                    v_SatQ1694__2 = iface.f_gen_load(v_SignedSatQ1702__3);
                    v_SatQ1695__2 = iface.f_gen_load(v_SignedSatQ1703__3);
                  } // if
                  const auto v_temp294 = iface.f_gen_branch(v_SatQ1695__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp294));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp294));
                  auto v_If1716__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1716__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1716__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1720__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1720__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1716__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1720__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1716__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1721__2 = typename Traits::rt_expr{};
                  auto v_SatQ1722__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1723__3 = iface.f_decl_bv("UnsignedSatQ1723__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1724__3 = iface.f_decl_bool("UnsignedSatQ1724__3");
                    const auto v_temp295 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1720__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp295));
                    iface.f_gen_store(v_UnsignedSatQ1723__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1724__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp295));
                    const auto v_temp296 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1720__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp296));
                    iface.f_gen_store(v_UnsignedSatQ1723__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1724__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp296));
                    iface.f_gen_store(v_UnsignedSatQ1723__3, iface.f_gen_slice(v_If1720__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1724__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp295));
                    v_SatQ1721__2 = iface.f_gen_load(v_UnsignedSatQ1723__3);
                    v_SatQ1722__2 = iface.f_gen_load(v_UnsignedSatQ1724__3);
                  } else {
                    const auto v_SignedSatQ1729__3 = iface.f_decl_bv("SignedSatQ1729__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1730__3 = iface.f_decl_bool("SignedSatQ1730__3");
                    const auto v_temp297 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1720__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp297));
                    iface.f_gen_store(v_SignedSatQ1729__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1730__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp297));
                    const auto v_temp298 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1720__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp298));
                    iface.f_gen_store(v_SignedSatQ1729__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1730__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp298));
                    iface.f_gen_store(v_SignedSatQ1729__3, iface.f_gen_slice(v_If1720__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1730__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp297));
                    v_SatQ1721__2 = iface.f_gen_load(v_SignedSatQ1729__3);
                    v_SatQ1722__2 = iface.f_gen_load(v_SignedSatQ1730__3);
                  } // if
                  const auto v_temp299 = iface.f_gen_branch(v_SatQ1722__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp299));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp299));
                  auto v_If1743__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1743__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1743__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1747__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1747__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1743__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1747__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1743__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1748__2 = typename Traits::rt_expr{};
                  auto v_SatQ1749__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1750__3 = iface.f_decl_bv("UnsignedSatQ1750__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1751__3 = iface.f_decl_bool("UnsignedSatQ1751__3");
                    const auto v_temp300 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1747__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp300));
                    iface.f_gen_store(v_UnsignedSatQ1750__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1751__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp300));
                    const auto v_temp301 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1747__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp301));
                    iface.f_gen_store(v_UnsignedSatQ1750__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1751__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp301));
                    iface.f_gen_store(v_UnsignedSatQ1750__3, iface.f_gen_slice(v_If1747__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1751__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp300));
                    v_SatQ1748__2 = iface.f_gen_load(v_UnsignedSatQ1750__3);
                    v_SatQ1749__2 = iface.f_gen_load(v_UnsignedSatQ1751__3);
                  } else {
                    const auto v_SignedSatQ1756__3 = iface.f_decl_bv("SignedSatQ1756__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1757__3 = iface.f_decl_bool("SignedSatQ1757__3");
                    const auto v_temp302 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1747__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp302));
                    iface.f_gen_store(v_SignedSatQ1756__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1757__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp302));
                    const auto v_temp303 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1747__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp303));
                    iface.f_gen_store(v_SignedSatQ1756__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1757__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp303));
                    iface.f_gen_store(v_SignedSatQ1756__3, iface.f_gen_slice(v_If1747__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1757__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp302));
                    v_SatQ1748__2 = iface.f_gen_load(v_SignedSatQ1756__3);
                    v_SatQ1749__2 = iface.f_gen_load(v_SignedSatQ1757__3);
                  } // if
                  const auto v_temp304 = iface.f_gen_branch(v_SatQ1749__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp304));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp304));
                  auto v_If1770__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1770__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("64"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1770__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("64"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1774__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1774__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1770__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1774__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1770__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1775__2 = typename Traits::rt_expr{};
                  auto v_SatQ1776__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1777__3 = iface.f_decl_bv("UnsignedSatQ1777__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1778__3 = iface.f_decl_bool("UnsignedSatQ1778__3");
                    const auto v_temp305 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1774__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp305));
                    iface.f_gen_store(v_UnsignedSatQ1777__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1778__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp305));
                    const auto v_temp306 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1774__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp306));
                    iface.f_gen_store(v_UnsignedSatQ1777__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1778__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp306));
                    iface.f_gen_store(v_UnsignedSatQ1777__3, iface.f_gen_slice(v_If1774__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1778__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp305));
                    v_SatQ1775__2 = iface.f_gen_load(v_UnsignedSatQ1777__3);
                    v_SatQ1776__2 = iface.f_gen_load(v_UnsignedSatQ1778__3);
                  } else {
                    const auto v_SignedSatQ1783__3 = iface.f_decl_bv("SignedSatQ1783__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1784__3 = iface.f_decl_bool("SignedSatQ1784__3");
                    const auto v_temp307 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1774__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp307));
                    iface.f_gen_store(v_SignedSatQ1783__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1784__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp307));
                    const auto v_temp308 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1774__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp308));
                    iface.f_gen_store(v_SignedSatQ1783__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1784__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp308));
                    iface.f_gen_store(v_SignedSatQ1783__3, iface.f_gen_slice(v_If1774__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1784__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp307));
                    v_SatQ1775__2 = iface.f_gen_load(v_SignedSatQ1783__3);
                    v_SatQ1776__2 = iface.f_gen_load(v_SignedSatQ1784__3);
                  } // if
                  const auto v_temp309 = iface.f_gen_branch(v_SatQ1776__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp309));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp309));
                  auto v_If1797__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1797__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("68"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1797__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("68"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1801__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1801__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1797__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1801__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1797__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1802__2 = typename Traits::rt_expr{};
                  auto v_SatQ1803__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1804__3 = iface.f_decl_bv("UnsignedSatQ1804__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1805__3 = iface.f_decl_bool("UnsignedSatQ1805__3");
                    const auto v_temp310 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1801__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp310));
                    iface.f_gen_store(v_UnsignedSatQ1804__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1805__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp310));
                    const auto v_temp311 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1801__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp311));
                    iface.f_gen_store(v_UnsignedSatQ1804__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1805__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp311));
                    iface.f_gen_store(v_UnsignedSatQ1804__3, iface.f_gen_slice(v_If1801__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1805__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp310));
                    v_SatQ1802__2 = iface.f_gen_load(v_UnsignedSatQ1804__3);
                    v_SatQ1803__2 = iface.f_gen_load(v_UnsignedSatQ1805__3);
                  } else {
                    const auto v_SignedSatQ1810__3 = iface.f_decl_bv("SignedSatQ1810__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1811__3 = iface.f_decl_bool("SignedSatQ1811__3");
                    const auto v_temp312 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1801__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp312));
                    iface.f_gen_store(v_SignedSatQ1810__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1811__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp312));
                    const auto v_temp313 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1801__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp313));
                    iface.f_gen_store(v_SignedSatQ1810__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1811__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp313));
                    iface.f_gen_store(v_SignedSatQ1810__3, iface.f_gen_slice(v_If1801__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1811__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp312));
                    v_SatQ1802__2 = iface.f_gen_load(v_SignedSatQ1810__3);
                    v_SatQ1803__2 = iface.f_gen_load(v_SignedSatQ1811__3);
                  } // if
                  const auto v_temp314 = iface.f_gen_branch(v_SatQ1803__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp314));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp314));
                  auto v_If1824__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1824__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("72"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1824__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("72"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1828__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1828__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1824__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1828__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1824__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1829__2 = typename Traits::rt_expr{};
                  auto v_SatQ1830__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1831__3 = iface.f_decl_bv("UnsignedSatQ1831__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1832__3 = iface.f_decl_bool("UnsignedSatQ1832__3");
                    const auto v_temp315 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1828__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp315));
                    iface.f_gen_store(v_UnsignedSatQ1831__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1832__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp315));
                    const auto v_temp316 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1828__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp316));
                    iface.f_gen_store(v_UnsignedSatQ1831__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1832__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp316));
                    iface.f_gen_store(v_UnsignedSatQ1831__3, iface.f_gen_slice(v_If1828__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1832__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp315));
                    v_SatQ1829__2 = iface.f_gen_load(v_UnsignedSatQ1831__3);
                    v_SatQ1830__2 = iface.f_gen_load(v_UnsignedSatQ1832__3);
                  } else {
                    const auto v_SignedSatQ1837__3 = iface.f_decl_bv("SignedSatQ1837__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1838__3 = iface.f_decl_bool("SignedSatQ1838__3");
                    const auto v_temp317 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1828__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp317));
                    iface.f_gen_store(v_SignedSatQ1837__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1838__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp317));
                    const auto v_temp318 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1828__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp318));
                    iface.f_gen_store(v_SignedSatQ1837__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1838__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp318));
                    iface.f_gen_store(v_SignedSatQ1837__3, iface.f_gen_slice(v_If1828__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1838__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp317));
                    v_SatQ1829__2 = iface.f_gen_load(v_SignedSatQ1837__3);
                    v_SatQ1830__2 = iface.f_gen_load(v_SignedSatQ1838__3);
                  } // if
                  const auto v_temp319 = iface.f_gen_branch(v_SatQ1830__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp319));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp319));
                  auto v_If1851__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1851__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("76"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1851__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("76"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1855__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1855__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1851__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1855__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1851__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1856__2 = typename Traits::rt_expr{};
                  auto v_SatQ1857__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1858__3 = iface.f_decl_bv("UnsignedSatQ1858__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1859__3 = iface.f_decl_bool("UnsignedSatQ1859__3");
                    const auto v_temp320 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1855__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp320));
                    iface.f_gen_store(v_UnsignedSatQ1858__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1859__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp320));
                    const auto v_temp321 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1855__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp321));
                    iface.f_gen_store(v_UnsignedSatQ1858__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1859__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp321));
                    iface.f_gen_store(v_UnsignedSatQ1858__3, iface.f_gen_slice(v_If1855__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1859__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp320));
                    v_SatQ1856__2 = iface.f_gen_load(v_UnsignedSatQ1858__3);
                    v_SatQ1857__2 = iface.f_gen_load(v_UnsignedSatQ1859__3);
                  } else {
                    const auto v_SignedSatQ1864__3 = iface.f_decl_bv("SignedSatQ1864__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1865__3 = iface.f_decl_bool("SignedSatQ1865__3");
                    const auto v_temp322 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1855__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp322));
                    iface.f_gen_store(v_SignedSatQ1864__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1865__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp322));
                    const auto v_temp323 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1855__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp323));
                    iface.f_gen_store(v_SignedSatQ1864__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1865__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp323));
                    iface.f_gen_store(v_SignedSatQ1864__3, iface.f_gen_slice(v_If1855__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1865__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp322));
                    v_SatQ1856__2 = iface.f_gen_load(v_SignedSatQ1864__3);
                    v_SatQ1857__2 = iface.f_gen_load(v_SignedSatQ1865__3);
                  } // if
                  const auto v_temp324 = iface.f_gen_branch(v_SatQ1857__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp324));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp324));
                  auto v_If1878__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1878__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("80"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1878__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("80"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1882__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1882__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1878__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1882__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1878__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1883__2 = typename Traits::rt_expr{};
                  auto v_SatQ1884__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1885__3 = iface.f_decl_bv("UnsignedSatQ1885__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1886__3 = iface.f_decl_bool("UnsignedSatQ1886__3");
                    const auto v_temp325 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1882__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp325));
                    iface.f_gen_store(v_UnsignedSatQ1885__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1886__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp325));
                    const auto v_temp326 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1882__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp326));
                    iface.f_gen_store(v_UnsignedSatQ1885__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1886__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp326));
                    iface.f_gen_store(v_UnsignedSatQ1885__3, iface.f_gen_slice(v_If1882__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1886__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp325));
                    v_SatQ1883__2 = iface.f_gen_load(v_UnsignedSatQ1885__3);
                    v_SatQ1884__2 = iface.f_gen_load(v_UnsignedSatQ1886__3);
                  } else {
                    const auto v_SignedSatQ1891__3 = iface.f_decl_bv("SignedSatQ1891__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1892__3 = iface.f_decl_bool("SignedSatQ1892__3");
                    const auto v_temp327 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1882__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp327));
                    iface.f_gen_store(v_SignedSatQ1891__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1892__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp327));
                    const auto v_temp328 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1882__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp328));
                    iface.f_gen_store(v_SignedSatQ1891__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1892__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp328));
                    iface.f_gen_store(v_SignedSatQ1891__3, iface.f_gen_slice(v_If1882__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1892__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp327));
                    v_SatQ1883__2 = iface.f_gen_load(v_SignedSatQ1891__3);
                    v_SatQ1884__2 = iface.f_gen_load(v_SignedSatQ1892__3);
                  } // if
                  const auto v_temp329 = iface.f_gen_branch(v_SatQ1884__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp329));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp329));
                  auto v_If1905__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1905__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("84"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1905__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("84"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1909__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1909__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1905__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1909__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1905__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1910__2 = typename Traits::rt_expr{};
                  auto v_SatQ1911__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1912__3 = iface.f_decl_bv("UnsignedSatQ1912__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1913__3 = iface.f_decl_bool("UnsignedSatQ1913__3");
                    const auto v_temp330 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1909__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp330));
                    iface.f_gen_store(v_UnsignedSatQ1912__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1913__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp330));
                    const auto v_temp331 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1909__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp331));
                    iface.f_gen_store(v_UnsignedSatQ1912__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1913__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp331));
                    iface.f_gen_store(v_UnsignedSatQ1912__3, iface.f_gen_slice(v_If1909__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1913__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp330));
                    v_SatQ1910__2 = iface.f_gen_load(v_UnsignedSatQ1912__3);
                    v_SatQ1911__2 = iface.f_gen_load(v_UnsignedSatQ1913__3);
                  } else {
                    const auto v_SignedSatQ1918__3 = iface.f_decl_bv("SignedSatQ1918__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1919__3 = iface.f_decl_bool("SignedSatQ1919__3");
                    const auto v_temp332 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1909__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp332));
                    iface.f_gen_store(v_SignedSatQ1918__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1919__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp332));
                    const auto v_temp333 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1909__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp333));
                    iface.f_gen_store(v_SignedSatQ1918__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1919__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp333));
                    iface.f_gen_store(v_SignedSatQ1918__3, iface.f_gen_slice(v_If1909__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1919__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp332));
                    v_SatQ1910__2 = iface.f_gen_load(v_SignedSatQ1918__3);
                    v_SatQ1911__2 = iface.f_gen_load(v_SignedSatQ1919__3);
                  } // if
                  const auto v_temp334 = iface.f_gen_branch(v_SatQ1911__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp334));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp334));
                  auto v_If1932__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1932__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("88"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1932__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("88"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1936__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1936__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1932__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1936__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1932__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1937__2 = typename Traits::rt_expr{};
                  auto v_SatQ1938__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1939__3 = iface.f_decl_bv("UnsignedSatQ1939__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1940__3 = iface.f_decl_bool("UnsignedSatQ1940__3");
                    const auto v_temp335 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1936__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp335));
                    iface.f_gen_store(v_UnsignedSatQ1939__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1940__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp335));
                    const auto v_temp336 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1936__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp336));
                    iface.f_gen_store(v_UnsignedSatQ1939__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1940__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp336));
                    iface.f_gen_store(v_UnsignedSatQ1939__3, iface.f_gen_slice(v_If1936__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1940__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp335));
                    v_SatQ1937__2 = iface.f_gen_load(v_UnsignedSatQ1939__3);
                    v_SatQ1938__2 = iface.f_gen_load(v_UnsignedSatQ1940__3);
                  } else {
                    const auto v_SignedSatQ1945__3 = iface.f_decl_bv("SignedSatQ1945__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1946__3 = iface.f_decl_bool("SignedSatQ1946__3");
                    const auto v_temp337 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1936__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp337));
                    iface.f_gen_store(v_SignedSatQ1945__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1946__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp337));
                    const auto v_temp338 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1936__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp338));
                    iface.f_gen_store(v_SignedSatQ1945__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1946__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp338));
                    iface.f_gen_store(v_SignedSatQ1945__3, iface.f_gen_slice(v_If1936__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1946__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp337));
                    v_SatQ1937__2 = iface.f_gen_load(v_SignedSatQ1945__3);
                    v_SatQ1938__2 = iface.f_gen_load(v_SignedSatQ1946__3);
                  } // if
                  const auto v_temp339 = iface.f_gen_branch(v_SatQ1938__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp339));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp339));
                  auto v_If1959__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1959__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("92"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1959__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("92"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1963__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1963__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1959__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1963__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1959__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1964__2 = typename Traits::rt_expr{};
                  auto v_SatQ1965__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1966__3 = iface.f_decl_bv("UnsignedSatQ1966__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1967__3 = iface.f_decl_bool("UnsignedSatQ1967__3");
                    const auto v_temp340 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1963__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp340));
                    iface.f_gen_store(v_UnsignedSatQ1966__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1967__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp340));
                    const auto v_temp341 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1963__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp341));
                    iface.f_gen_store(v_UnsignedSatQ1966__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1967__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp341));
                    iface.f_gen_store(v_UnsignedSatQ1966__3, iface.f_gen_slice(v_If1963__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1967__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp340));
                    v_SatQ1964__2 = iface.f_gen_load(v_UnsignedSatQ1966__3);
                    v_SatQ1965__2 = iface.f_gen_load(v_UnsignedSatQ1967__3);
                  } else {
                    const auto v_SignedSatQ1972__3 = iface.f_decl_bv("SignedSatQ1972__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ1973__3 = iface.f_decl_bool("SignedSatQ1973__3");
                    const auto v_temp342 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1963__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp342));
                    iface.f_gen_store(v_SignedSatQ1972__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ1973__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp342));
                    const auto v_temp343 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1963__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp343));
                    iface.f_gen_store(v_SignedSatQ1972__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ1973__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp343));
                    iface.f_gen_store(v_SignedSatQ1972__3, iface.f_gen_slice(v_If1963__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ1973__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp342));
                    v_SatQ1964__2 = iface.f_gen_load(v_SignedSatQ1972__3);
                    v_SatQ1965__2 = iface.f_gen_load(v_SignedSatQ1973__3);
                  } // if
                  const auto v_temp344 = iface.f_gen_branch(v_SatQ1965__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp344));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp344));
                  auto v_If1986__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If1986__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("96"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1986__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("96"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1990__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If1990__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If1986__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If1990__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If1986__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ1991__2 = typename Traits::rt_expr{};
                  auto v_SatQ1992__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ1993__3 = iface.f_decl_bv("UnsignedSatQ1993__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ1994__3 = iface.f_decl_bool("UnsignedSatQ1994__3");
                    const auto v_temp345 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If1990__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp345));
                    iface.f_gen_store(v_UnsignedSatQ1993__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ1994__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp345));
                    const auto v_temp346 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1990__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp346));
                    iface.f_gen_store(v_UnsignedSatQ1993__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ1994__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp346));
                    iface.f_gen_store(v_UnsignedSatQ1993__3, iface.f_gen_slice(v_If1990__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ1994__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp345));
                    v_SatQ1991__2 = iface.f_gen_load(v_UnsignedSatQ1993__3);
                    v_SatQ1992__2 = iface.f_gen_load(v_UnsignedSatQ1994__3);
                  } else {
                    const auto v_SignedSatQ1999__3 = iface.f_decl_bv("SignedSatQ1999__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2000__3 = iface.f_decl_bool("SignedSatQ2000__3");
                    const auto v_temp347 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If1990__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp347));
                    iface.f_gen_store(v_SignedSatQ1999__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2000__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp347));
                    const auto v_temp348 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If1990__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp348));
                    iface.f_gen_store(v_SignedSatQ1999__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2000__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp348));
                    iface.f_gen_store(v_SignedSatQ1999__3, iface.f_gen_slice(v_If1990__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2000__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp347));
                    v_SatQ1991__2 = iface.f_gen_load(v_SignedSatQ1999__3);
                    v_SatQ1992__2 = iface.f_gen_load(v_SignedSatQ2000__3);
                  } // if
                  const auto v_temp349 = iface.f_gen_branch(v_SatQ1992__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp349));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp349));
                  auto v_If2013__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2013__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("100"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2013__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("100"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2017__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2017__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2013__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2017__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2013__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2018__2 = typename Traits::rt_expr{};
                  auto v_SatQ2019__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2020__3 = iface.f_decl_bv("UnsignedSatQ2020__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2021__3 = iface.f_decl_bool("UnsignedSatQ2021__3");
                    const auto v_temp350 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2017__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp350));
                    iface.f_gen_store(v_UnsignedSatQ2020__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2021__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp350));
                    const auto v_temp351 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2017__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp351));
                    iface.f_gen_store(v_UnsignedSatQ2020__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2021__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp351));
                    iface.f_gen_store(v_UnsignedSatQ2020__3, iface.f_gen_slice(v_If2017__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2021__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp350));
                    v_SatQ2018__2 = iface.f_gen_load(v_UnsignedSatQ2020__3);
                    v_SatQ2019__2 = iface.f_gen_load(v_UnsignedSatQ2021__3);
                  } else {
                    const auto v_SignedSatQ2026__3 = iface.f_decl_bv("SignedSatQ2026__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2027__3 = iface.f_decl_bool("SignedSatQ2027__3");
                    const auto v_temp352 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2017__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp352));
                    iface.f_gen_store(v_SignedSatQ2026__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2027__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp352));
                    const auto v_temp353 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2017__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp353));
                    iface.f_gen_store(v_SignedSatQ2026__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2027__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp353));
                    iface.f_gen_store(v_SignedSatQ2026__3, iface.f_gen_slice(v_If2017__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2027__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp352));
                    v_SatQ2018__2 = iface.f_gen_load(v_SignedSatQ2026__3);
                    v_SatQ2019__2 = iface.f_gen_load(v_SignedSatQ2027__3);
                  } // if
                  const auto v_temp354 = iface.f_gen_branch(v_SatQ2019__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp354));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp354));
                  auto v_If2040__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2040__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("104"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2040__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("104"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2044__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2044__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2040__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2044__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2040__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2045__2 = typename Traits::rt_expr{};
                  auto v_SatQ2046__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2047__3 = iface.f_decl_bv("UnsignedSatQ2047__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2048__3 = iface.f_decl_bool("UnsignedSatQ2048__3");
                    const auto v_temp355 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2044__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp355));
                    iface.f_gen_store(v_UnsignedSatQ2047__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2048__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp355));
                    const auto v_temp356 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2044__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp356));
                    iface.f_gen_store(v_UnsignedSatQ2047__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2048__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp356));
                    iface.f_gen_store(v_UnsignedSatQ2047__3, iface.f_gen_slice(v_If2044__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2048__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp355));
                    v_SatQ2045__2 = iface.f_gen_load(v_UnsignedSatQ2047__3);
                    v_SatQ2046__2 = iface.f_gen_load(v_UnsignedSatQ2048__3);
                  } else {
                    const auto v_SignedSatQ2053__3 = iface.f_decl_bv("SignedSatQ2053__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2054__3 = iface.f_decl_bool("SignedSatQ2054__3");
                    const auto v_temp357 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2044__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp357));
                    iface.f_gen_store(v_SignedSatQ2053__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2054__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp357));
                    const auto v_temp358 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2044__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp358));
                    iface.f_gen_store(v_SignedSatQ2053__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2054__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp358));
                    iface.f_gen_store(v_SignedSatQ2053__3, iface.f_gen_slice(v_If2044__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2054__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp357));
                    v_SatQ2045__2 = iface.f_gen_load(v_SignedSatQ2053__3);
                    v_SatQ2046__2 = iface.f_gen_load(v_SignedSatQ2054__3);
                  } // if
                  const auto v_temp359 = iface.f_gen_branch(v_SatQ2046__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp359));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp359));
                  auto v_If2067__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2067__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("108"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2067__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("108"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2071__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2071__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2067__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2071__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2067__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2072__2 = typename Traits::rt_expr{};
                  auto v_SatQ2073__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2074__3 = iface.f_decl_bv("UnsignedSatQ2074__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2075__3 = iface.f_decl_bool("UnsignedSatQ2075__3");
                    const auto v_temp360 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2071__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp360));
                    iface.f_gen_store(v_UnsignedSatQ2074__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2075__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp360));
                    const auto v_temp361 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2071__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp361));
                    iface.f_gen_store(v_UnsignedSatQ2074__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2075__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp361));
                    iface.f_gen_store(v_UnsignedSatQ2074__3, iface.f_gen_slice(v_If2071__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2075__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp360));
                    v_SatQ2072__2 = iface.f_gen_load(v_UnsignedSatQ2074__3);
                    v_SatQ2073__2 = iface.f_gen_load(v_UnsignedSatQ2075__3);
                  } else {
                    const auto v_SignedSatQ2080__3 = iface.f_decl_bv("SignedSatQ2080__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2081__3 = iface.f_decl_bool("SignedSatQ2081__3");
                    const auto v_temp362 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2071__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp362));
                    iface.f_gen_store(v_SignedSatQ2080__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2081__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp362));
                    const auto v_temp363 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2071__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp363));
                    iface.f_gen_store(v_SignedSatQ2080__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2081__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp363));
                    iface.f_gen_store(v_SignedSatQ2080__3, iface.f_gen_slice(v_If2071__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2081__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp362));
                    v_SatQ2072__2 = iface.f_gen_load(v_SignedSatQ2080__3);
                    v_SatQ2073__2 = iface.f_gen_load(v_SignedSatQ2081__3);
                  } // if
                  const auto v_temp364 = iface.f_gen_branch(v_SatQ2073__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp364));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp364));
                  auto v_If2094__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2094__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("112"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2094__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("112"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2098__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2098__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2094__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2098__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2094__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2099__2 = typename Traits::rt_expr{};
                  auto v_SatQ2100__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2101__3 = iface.f_decl_bv("UnsignedSatQ2101__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2102__3 = iface.f_decl_bool("UnsignedSatQ2102__3");
                    const auto v_temp365 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2098__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp365));
                    iface.f_gen_store(v_UnsignedSatQ2101__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2102__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp365));
                    const auto v_temp366 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2098__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp366));
                    iface.f_gen_store(v_UnsignedSatQ2101__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2102__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp366));
                    iface.f_gen_store(v_UnsignedSatQ2101__3, iface.f_gen_slice(v_If2098__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2102__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp365));
                    v_SatQ2099__2 = iface.f_gen_load(v_UnsignedSatQ2101__3);
                    v_SatQ2100__2 = iface.f_gen_load(v_UnsignedSatQ2102__3);
                  } else {
                    const auto v_SignedSatQ2107__3 = iface.f_decl_bv("SignedSatQ2107__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2108__3 = iface.f_decl_bool("SignedSatQ2108__3");
                    const auto v_temp367 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2098__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp367));
                    iface.f_gen_store(v_SignedSatQ2107__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2108__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp367));
                    const auto v_temp368 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2098__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp368));
                    iface.f_gen_store(v_SignedSatQ2107__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2108__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp368));
                    iface.f_gen_store(v_SignedSatQ2107__3, iface.f_gen_slice(v_If2098__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2108__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp367));
                    v_SatQ2099__2 = iface.f_gen_load(v_SignedSatQ2107__3);
                    v_SatQ2100__2 = iface.f_gen_load(v_SignedSatQ2108__3);
                  } // if
                  const auto v_temp369 = iface.f_gen_branch(v_SatQ2100__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp369));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp369));
                  auto v_If2121__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2121__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("116"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2121__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("116"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2125__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2125__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2121__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2125__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2121__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2126__2 = typename Traits::rt_expr{};
                  auto v_SatQ2127__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2128__3 = iface.f_decl_bv("UnsignedSatQ2128__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2129__3 = iface.f_decl_bool("UnsignedSatQ2129__3");
                    const auto v_temp370 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2125__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp370));
                    iface.f_gen_store(v_UnsignedSatQ2128__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2129__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp370));
                    const auto v_temp371 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2125__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp371));
                    iface.f_gen_store(v_UnsignedSatQ2128__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2129__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp371));
                    iface.f_gen_store(v_UnsignedSatQ2128__3, iface.f_gen_slice(v_If2125__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2129__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp370));
                    v_SatQ2126__2 = iface.f_gen_load(v_UnsignedSatQ2128__3);
                    v_SatQ2127__2 = iface.f_gen_load(v_UnsignedSatQ2129__3);
                  } else {
                    const auto v_SignedSatQ2134__3 = iface.f_decl_bv("SignedSatQ2134__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2135__3 = iface.f_decl_bool("SignedSatQ2135__3");
                    const auto v_temp372 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2125__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp372));
                    iface.f_gen_store(v_SignedSatQ2134__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2135__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp372));
                    const auto v_temp373 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2125__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp373));
                    iface.f_gen_store(v_SignedSatQ2134__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2135__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp373));
                    iface.f_gen_store(v_SignedSatQ2134__3, iface.f_gen_slice(v_If2125__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2135__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp372));
                    v_SatQ2126__2 = iface.f_gen_load(v_SignedSatQ2134__3);
                    v_SatQ2127__2 = iface.f_gen_load(v_SignedSatQ2135__3);
                  } // if
                  const auto v_temp374 = iface.f_gen_branch(v_SatQ2127__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp374));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp374));
                  auto v_If2148__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2148__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("120"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2148__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("120"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2152__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2152__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2148__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2152__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2148__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2153__2 = typename Traits::rt_expr{};
                  auto v_SatQ2154__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2155__3 = iface.f_decl_bv("UnsignedSatQ2155__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2156__3 = iface.f_decl_bool("UnsignedSatQ2156__3");
                    const auto v_temp375 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2152__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp375));
                    iface.f_gen_store(v_UnsignedSatQ2155__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2156__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp375));
                    const auto v_temp376 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2152__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp376));
                    iface.f_gen_store(v_UnsignedSatQ2155__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2156__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp376));
                    iface.f_gen_store(v_UnsignedSatQ2155__3, iface.f_gen_slice(v_If2152__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2156__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp375));
                    v_SatQ2153__2 = iface.f_gen_load(v_UnsignedSatQ2155__3);
                    v_SatQ2154__2 = iface.f_gen_load(v_UnsignedSatQ2156__3);
                  } else {
                    const auto v_SignedSatQ2161__3 = iface.f_decl_bv("SignedSatQ2161__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2162__3 = iface.f_decl_bool("SignedSatQ2162__3");
                    const auto v_temp377 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2152__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp377));
                    iface.f_gen_store(v_SignedSatQ2161__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2162__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp377));
                    const auto v_temp378 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2152__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp378));
                    iface.f_gen_store(v_SignedSatQ2161__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2162__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp378));
                    iface.f_gen_store(v_SignedSatQ2161__3, iface.f_gen_slice(v_If2152__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2162__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp377));
                    v_SatQ2153__2 = iface.f_gen_load(v_SignedSatQ2161__3);
                    v_SatQ2154__2 = iface.f_gen_load(v_SignedSatQ2162__3);
                  } // if
                  const auto v_temp379 = iface.f_gen_branch(v_SatQ2154__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp379));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp379));
                  auto v_If2175__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2175__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("124"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2175__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1332__2, iface.bigint_lit("124"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2179__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2179__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2175__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2179__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2175__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2180__2 = typename Traits::rt_expr{};
                  auto v_SatQ2181__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2182__3 = iface.f_decl_bv("UnsignedSatQ2182__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2183__3 = iface.f_decl_bool("UnsignedSatQ2183__3");
                    const auto v_temp380 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2179__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp380));
                    iface.f_gen_store(v_UnsignedSatQ2182__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2183__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp380));
                    const auto v_temp381 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2179__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp381));
                    iface.f_gen_store(v_UnsignedSatQ2182__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2183__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp381));
                    iface.f_gen_store(v_UnsignedSatQ2182__3, iface.f_gen_slice(v_If2179__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2183__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp380));
                    v_SatQ2180__2 = iface.f_gen_load(v_UnsignedSatQ2182__3);
                    v_SatQ2181__2 = iface.f_gen_load(v_UnsignedSatQ2183__3);
                  } else {
                    const auto v_SignedSatQ2188__3 = iface.f_decl_bv("SignedSatQ2188__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2189__3 = iface.f_decl_bool("SignedSatQ2189__3");
                    const auto v_temp382 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2179__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp382));
                    iface.f_gen_store(v_SignedSatQ2188__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2189__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp382));
                    const auto v_temp383 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2179__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp383));
                    iface.f_gen_store(v_SignedSatQ2188__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2189__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp383));
                    iface.f_gen_store(v_SignedSatQ2188__3, iface.f_gen_slice(v_If2179__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2189__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp382));
                    v_SatQ2180__2 = iface.f_gen_load(v_SignedSatQ2188__3);
                    v_SatQ2181__2 = iface.f_gen_load(v_SignedSatQ2189__3);
                  } // if
                  const auto v_temp384 = iface.f_gen_branch(v_SatQ2181__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp384));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp384));
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ2180__2, iface.f_gen_append_bits(v_SatQ2153__2, iface.f_gen_append_bits(v_SatQ2126__2, iface.f_gen_append_bits(v_SatQ2099__2, iface.f_gen_append_bits(v_SatQ2072__2, iface.f_gen_append_bits(v_SatQ2045__2, iface.f_gen_append_bits(v_SatQ2018__2, iface.f_gen_append_bits(v_SatQ1991__2, iface.f_gen_append_bits(v_SatQ1964__2, iface.f_gen_append_bits(v_SatQ1937__2, iface.f_gen_append_bits(v_SatQ1910__2, iface.f_gen_append_bits(v_SatQ1883__2, iface.f_gen_append_bits(v_SatQ1856__2, iface.f_gen_append_bits(v_SatQ1829__2, iface.f_gen_append_bits(v_SatQ1802__2, iface.f_gen_append_bits(v_SatQ1775__2, iface.f_gen_append_bits(v_SatQ1748__2, iface.f_gen_append_bits(v_SatQ1721__2, iface.f_gen_append_bits(v_SatQ1694__2, iface.f_gen_append_bits(v_SatQ1667__2, iface.f_gen_append_bits(v_SatQ1640__2, iface.f_gen_append_bits(v_SatQ1613__2, iface.f_gen_append_bits(v_SatQ1586__2, iface.f_gen_append_bits(v_SatQ1559__2, iface.f_gen_append_bits(v_SatQ1532__2, iface.f_gen_append_bits(v_SatQ1505__2, iface.f_gen_append_bits(v_SatQ1478__2, iface.f_gen_append_bits(v_SatQ1451__2, iface.f_gen_append_bits(v_SatQ1424__2, iface.f_gen_append_bits(v_SatQ1397__2, iface.f_gen_append_bits(v_SatQ1370__2, v_SatQ1342__2))))))))))))))))))))))))))))))));
                } else {
                  auto v_src_unsigned__1 = true;
                  auto v_dst_unsigned__1 = true;
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } else {
                    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                      v_src_unsigned__1 = false;
                      v_dst_unsigned__1 = true;
                    } else {
                      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                        v_src_unsigned__1 = false;
                        v_dst_unsigned__1 = false;
                      } else {
                        if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                          v_src_unsigned__1 = true;
                          v_dst_unsigned__1 = true;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  auto v_Exp2208__2 = typename Traits::rt_expr{};
                  v_Exp2208__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  auto v_If2212__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2212__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2212__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2216__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2216__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2212__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2216__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2212__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2218__2 = typename Traits::rt_expr{};
                  auto v_SatQ2219__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2220__3 = iface.f_decl_bv("UnsignedSatQ2220__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2221__3 = iface.f_decl_bool("UnsignedSatQ2221__3");
                    const auto v_temp385 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2216__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp385));
                    iface.f_gen_store(v_UnsignedSatQ2220__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2221__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp385));
                    const auto v_temp386 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2216__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp386));
                    iface.f_gen_store(v_UnsignedSatQ2220__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2221__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp386));
                    iface.f_gen_store(v_UnsignedSatQ2220__3, iface.f_gen_slice(v_If2216__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2221__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp385));
                    v_SatQ2218__2 = iface.f_gen_load(v_UnsignedSatQ2220__3);
                    v_SatQ2219__2 = iface.f_gen_load(v_UnsignedSatQ2221__3);
                  } else {
                    const auto v_SignedSatQ2226__3 = iface.f_decl_bv("SignedSatQ2226__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2227__3 = iface.f_decl_bool("SignedSatQ2227__3");
                    const auto v_temp387 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2216__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp387));
                    iface.f_gen_store(v_SignedSatQ2226__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2227__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp387));
                    const auto v_temp388 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2216__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp388));
                    iface.f_gen_store(v_SignedSatQ2226__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2227__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp388));
                    iface.f_gen_store(v_SignedSatQ2226__3, iface.f_gen_slice(v_If2216__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2227__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp387));
                    v_SatQ2218__2 = iface.f_gen_load(v_SignedSatQ2226__3);
                    v_SatQ2219__2 = iface.f_gen_load(v_SignedSatQ2227__3);
                  } // if
                  const auto v_temp389 = iface.f_gen_branch(v_SatQ2219__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp389));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp389));
                  auto v_If2241__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2241__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2241__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2245__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2245__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2241__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2245__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2241__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2246__2 = typename Traits::rt_expr{};
                  auto v_SatQ2247__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2248__3 = iface.f_decl_bv("UnsignedSatQ2248__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2249__3 = iface.f_decl_bool("UnsignedSatQ2249__3");
                    const auto v_temp390 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2245__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp390));
                    iface.f_gen_store(v_UnsignedSatQ2248__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2249__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp390));
                    const auto v_temp391 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2245__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp391));
                    iface.f_gen_store(v_UnsignedSatQ2248__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2249__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp391));
                    iface.f_gen_store(v_UnsignedSatQ2248__3, iface.f_gen_slice(v_If2245__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2249__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp390));
                    v_SatQ2246__2 = iface.f_gen_load(v_UnsignedSatQ2248__3);
                    v_SatQ2247__2 = iface.f_gen_load(v_UnsignedSatQ2249__3);
                  } else {
                    const auto v_SignedSatQ2254__3 = iface.f_decl_bv("SignedSatQ2254__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2255__3 = iface.f_decl_bool("SignedSatQ2255__3");
                    const auto v_temp392 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2245__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp392));
                    iface.f_gen_store(v_SignedSatQ2254__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2255__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp392));
                    const auto v_temp393 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2245__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp393));
                    iface.f_gen_store(v_SignedSatQ2254__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2255__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp393));
                    iface.f_gen_store(v_SignedSatQ2254__3, iface.f_gen_slice(v_If2245__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2255__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp392));
                    v_SatQ2246__2 = iface.f_gen_load(v_SignedSatQ2254__3);
                    v_SatQ2247__2 = iface.f_gen_load(v_SignedSatQ2255__3);
                  } // if
                  const auto v_temp394 = iface.f_gen_branch(v_SatQ2247__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp394));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp394));
                  auto v_If2268__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2268__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2268__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2272__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2272__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2268__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2272__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2268__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2273__2 = typename Traits::rt_expr{};
                  auto v_SatQ2274__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2275__3 = iface.f_decl_bv("UnsignedSatQ2275__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2276__3 = iface.f_decl_bool("UnsignedSatQ2276__3");
                    const auto v_temp395 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2272__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp395));
                    iface.f_gen_store(v_UnsignedSatQ2275__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2276__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp395));
                    const auto v_temp396 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2272__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp396));
                    iface.f_gen_store(v_UnsignedSatQ2275__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2276__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp396));
                    iface.f_gen_store(v_UnsignedSatQ2275__3, iface.f_gen_slice(v_If2272__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2276__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp395));
                    v_SatQ2273__2 = iface.f_gen_load(v_UnsignedSatQ2275__3);
                    v_SatQ2274__2 = iface.f_gen_load(v_UnsignedSatQ2276__3);
                  } else {
                    const auto v_SignedSatQ2281__3 = iface.f_decl_bv("SignedSatQ2281__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2282__3 = iface.f_decl_bool("SignedSatQ2282__3");
                    const auto v_temp397 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2272__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp397));
                    iface.f_gen_store(v_SignedSatQ2281__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2282__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp397));
                    const auto v_temp398 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2272__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp398));
                    iface.f_gen_store(v_SignedSatQ2281__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2282__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp398));
                    iface.f_gen_store(v_SignedSatQ2281__3, iface.f_gen_slice(v_If2272__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2282__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp397));
                    v_SatQ2273__2 = iface.f_gen_load(v_SignedSatQ2281__3);
                    v_SatQ2274__2 = iface.f_gen_load(v_SignedSatQ2282__3);
                  } // if
                  const auto v_temp399 = iface.f_gen_branch(v_SatQ2274__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp399));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp399));
                  auto v_If2295__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2295__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2295__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2299__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2299__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2295__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2299__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2295__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2300__2 = typename Traits::rt_expr{};
                  auto v_SatQ2301__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2302__3 = iface.f_decl_bv("UnsignedSatQ2302__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2303__3 = iface.f_decl_bool("UnsignedSatQ2303__3");
                    const auto v_temp400 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2299__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp400));
                    iface.f_gen_store(v_UnsignedSatQ2302__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2303__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp400));
                    const auto v_temp401 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2299__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp401));
                    iface.f_gen_store(v_UnsignedSatQ2302__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2303__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp401));
                    iface.f_gen_store(v_UnsignedSatQ2302__3, iface.f_gen_slice(v_If2299__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2303__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp400));
                    v_SatQ2300__2 = iface.f_gen_load(v_UnsignedSatQ2302__3);
                    v_SatQ2301__2 = iface.f_gen_load(v_UnsignedSatQ2303__3);
                  } else {
                    const auto v_SignedSatQ2308__3 = iface.f_decl_bv("SignedSatQ2308__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2309__3 = iface.f_decl_bool("SignedSatQ2309__3");
                    const auto v_temp402 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2299__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp402));
                    iface.f_gen_store(v_SignedSatQ2308__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2309__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp402));
                    const auto v_temp403 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2299__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp403));
                    iface.f_gen_store(v_SignedSatQ2308__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2309__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp403));
                    iface.f_gen_store(v_SignedSatQ2308__3, iface.f_gen_slice(v_If2299__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2309__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp402));
                    v_SatQ2300__2 = iface.f_gen_load(v_SignedSatQ2308__3);
                    v_SatQ2301__2 = iface.f_gen_load(v_SignedSatQ2309__3);
                  } // if
                  const auto v_temp404 = iface.f_gen_branch(v_SatQ2301__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp404));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp404));
                  auto v_If2322__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2322__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2322__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2326__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2326__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2322__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2326__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2322__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2327__2 = typename Traits::rt_expr{};
                  auto v_SatQ2328__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2329__3 = iface.f_decl_bv("UnsignedSatQ2329__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2330__3 = iface.f_decl_bool("UnsignedSatQ2330__3");
                    const auto v_temp405 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2326__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp405));
                    iface.f_gen_store(v_UnsignedSatQ2329__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2330__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp405));
                    const auto v_temp406 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2326__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp406));
                    iface.f_gen_store(v_UnsignedSatQ2329__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2330__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp406));
                    iface.f_gen_store(v_UnsignedSatQ2329__3, iface.f_gen_slice(v_If2326__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2330__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp405));
                    v_SatQ2327__2 = iface.f_gen_load(v_UnsignedSatQ2329__3);
                    v_SatQ2328__2 = iface.f_gen_load(v_UnsignedSatQ2330__3);
                  } else {
                    const auto v_SignedSatQ2335__3 = iface.f_decl_bv("SignedSatQ2335__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2336__3 = iface.f_decl_bool("SignedSatQ2336__3");
                    const auto v_temp407 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2326__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp407));
                    iface.f_gen_store(v_SignedSatQ2335__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2336__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp407));
                    const auto v_temp408 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2326__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp408));
                    iface.f_gen_store(v_SignedSatQ2335__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2336__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp408));
                    iface.f_gen_store(v_SignedSatQ2335__3, iface.f_gen_slice(v_If2326__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2336__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp407));
                    v_SatQ2327__2 = iface.f_gen_load(v_SignedSatQ2335__3);
                    v_SatQ2328__2 = iface.f_gen_load(v_SignedSatQ2336__3);
                  } // if
                  const auto v_temp409 = iface.f_gen_branch(v_SatQ2328__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp409));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp409));
                  auto v_If2349__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2349__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2349__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2353__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2353__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2349__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2353__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2349__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2354__2 = typename Traits::rt_expr{};
                  auto v_SatQ2355__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2356__3 = iface.f_decl_bv("UnsignedSatQ2356__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2357__3 = iface.f_decl_bool("UnsignedSatQ2357__3");
                    const auto v_temp410 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2353__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp410));
                    iface.f_gen_store(v_UnsignedSatQ2356__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2357__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp410));
                    const auto v_temp411 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2353__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp411));
                    iface.f_gen_store(v_UnsignedSatQ2356__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2357__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp411));
                    iface.f_gen_store(v_UnsignedSatQ2356__3, iface.f_gen_slice(v_If2353__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2357__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp410));
                    v_SatQ2354__2 = iface.f_gen_load(v_UnsignedSatQ2356__3);
                    v_SatQ2355__2 = iface.f_gen_load(v_UnsignedSatQ2357__3);
                  } else {
                    const auto v_SignedSatQ2362__3 = iface.f_decl_bv("SignedSatQ2362__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2363__3 = iface.f_decl_bool("SignedSatQ2363__3");
                    const auto v_temp412 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2353__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp412));
                    iface.f_gen_store(v_SignedSatQ2362__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2363__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp412));
                    const auto v_temp413 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2353__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp413));
                    iface.f_gen_store(v_SignedSatQ2362__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2363__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp413));
                    iface.f_gen_store(v_SignedSatQ2362__3, iface.f_gen_slice(v_If2353__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2363__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp412));
                    v_SatQ2354__2 = iface.f_gen_load(v_SignedSatQ2362__3);
                    v_SatQ2355__2 = iface.f_gen_load(v_SignedSatQ2363__3);
                  } // if
                  const auto v_temp414 = iface.f_gen_branch(v_SatQ2355__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp414));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp414));
                  auto v_If2376__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2376__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2376__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2380__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2380__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2376__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2380__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2376__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2381__2 = typename Traits::rt_expr{};
                  auto v_SatQ2382__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2383__3 = iface.f_decl_bv("UnsignedSatQ2383__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2384__3 = iface.f_decl_bool("UnsignedSatQ2384__3");
                    const auto v_temp415 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2380__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp415));
                    iface.f_gen_store(v_UnsignedSatQ2383__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2384__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp415));
                    const auto v_temp416 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2380__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp416));
                    iface.f_gen_store(v_UnsignedSatQ2383__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2384__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp416));
                    iface.f_gen_store(v_UnsignedSatQ2383__3, iface.f_gen_slice(v_If2380__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2384__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp415));
                    v_SatQ2381__2 = iface.f_gen_load(v_UnsignedSatQ2383__3);
                    v_SatQ2382__2 = iface.f_gen_load(v_UnsignedSatQ2384__3);
                  } else {
                    const auto v_SignedSatQ2389__3 = iface.f_decl_bv("SignedSatQ2389__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2390__3 = iface.f_decl_bool("SignedSatQ2390__3");
                    const auto v_temp417 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2380__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp417));
                    iface.f_gen_store(v_SignedSatQ2389__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2390__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp417));
                    const auto v_temp418 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2380__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp418));
                    iface.f_gen_store(v_SignedSatQ2389__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2390__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp418));
                    iface.f_gen_store(v_SignedSatQ2389__3, iface.f_gen_slice(v_If2380__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2390__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp417));
                    v_SatQ2381__2 = iface.f_gen_load(v_SignedSatQ2389__3);
                    v_SatQ2382__2 = iface.f_gen_load(v_SignedSatQ2390__3);
                  } // if
                  const auto v_temp419 = iface.f_gen_branch(v_SatQ2382__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp419));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp419));
                  auto v_If2403__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2403__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2403__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2407__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2407__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2403__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2407__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2403__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2408__2 = typename Traits::rt_expr{};
                  auto v_SatQ2409__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2410__3 = iface.f_decl_bv("UnsignedSatQ2410__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2411__3 = iface.f_decl_bool("UnsignedSatQ2411__3");
                    const auto v_temp420 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2407__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp420));
                    iface.f_gen_store(v_UnsignedSatQ2410__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2411__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp420));
                    const auto v_temp421 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2407__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp421));
                    iface.f_gen_store(v_UnsignedSatQ2410__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2411__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp421));
                    iface.f_gen_store(v_UnsignedSatQ2410__3, iface.f_gen_slice(v_If2407__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2411__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp420));
                    v_SatQ2408__2 = iface.f_gen_load(v_UnsignedSatQ2410__3);
                    v_SatQ2409__2 = iface.f_gen_load(v_UnsignedSatQ2411__3);
                  } else {
                    const auto v_SignedSatQ2416__3 = iface.f_decl_bv("SignedSatQ2416__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2417__3 = iface.f_decl_bool("SignedSatQ2417__3");
                    const auto v_temp422 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2407__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp422));
                    iface.f_gen_store(v_SignedSatQ2416__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2417__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp422));
                    const auto v_temp423 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2407__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp423));
                    iface.f_gen_store(v_SignedSatQ2416__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2417__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp423));
                    iface.f_gen_store(v_SignedSatQ2416__3, iface.f_gen_slice(v_If2407__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2417__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp422));
                    v_SatQ2408__2 = iface.f_gen_load(v_SignedSatQ2416__3);
                    v_SatQ2409__2 = iface.f_gen_load(v_SignedSatQ2417__3);
                  } // if
                  const auto v_temp424 = iface.f_gen_branch(v_SatQ2409__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp424));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp424));
                  auto v_If2430__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2430__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2430__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2434__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2434__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2430__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2434__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2430__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2435__2 = typename Traits::rt_expr{};
                  auto v_SatQ2436__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2437__3 = iface.f_decl_bv("UnsignedSatQ2437__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2438__3 = iface.f_decl_bool("UnsignedSatQ2438__3");
                    const auto v_temp425 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2434__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp425));
                    iface.f_gen_store(v_UnsignedSatQ2437__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2438__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp425));
                    const auto v_temp426 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2434__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp426));
                    iface.f_gen_store(v_UnsignedSatQ2437__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2438__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp426));
                    iface.f_gen_store(v_UnsignedSatQ2437__3, iface.f_gen_slice(v_If2434__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2438__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp425));
                    v_SatQ2435__2 = iface.f_gen_load(v_UnsignedSatQ2437__3);
                    v_SatQ2436__2 = iface.f_gen_load(v_UnsignedSatQ2438__3);
                  } else {
                    const auto v_SignedSatQ2443__3 = iface.f_decl_bv("SignedSatQ2443__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2444__3 = iface.f_decl_bool("SignedSatQ2444__3");
                    const auto v_temp427 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2434__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp427));
                    iface.f_gen_store(v_SignedSatQ2443__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2444__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp427));
                    const auto v_temp428 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2434__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp428));
                    iface.f_gen_store(v_SignedSatQ2443__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2444__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp428));
                    iface.f_gen_store(v_SignedSatQ2443__3, iface.f_gen_slice(v_If2434__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2444__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp427));
                    v_SatQ2435__2 = iface.f_gen_load(v_SignedSatQ2443__3);
                    v_SatQ2436__2 = iface.f_gen_load(v_SignedSatQ2444__3);
                  } // if
                  const auto v_temp429 = iface.f_gen_branch(v_SatQ2436__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp429));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp429));
                  auto v_If2457__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2457__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2457__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2461__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2461__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2457__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2461__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2457__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2462__2 = typename Traits::rt_expr{};
                  auto v_SatQ2463__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2464__3 = iface.f_decl_bv("UnsignedSatQ2464__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2465__3 = iface.f_decl_bool("UnsignedSatQ2465__3");
                    const auto v_temp430 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2461__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp430));
                    iface.f_gen_store(v_UnsignedSatQ2464__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2465__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp430));
                    const auto v_temp431 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2461__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp431));
                    iface.f_gen_store(v_UnsignedSatQ2464__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2465__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp431));
                    iface.f_gen_store(v_UnsignedSatQ2464__3, iface.f_gen_slice(v_If2461__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2465__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp430));
                    v_SatQ2462__2 = iface.f_gen_load(v_UnsignedSatQ2464__3);
                    v_SatQ2463__2 = iface.f_gen_load(v_UnsignedSatQ2465__3);
                  } else {
                    const auto v_SignedSatQ2470__3 = iface.f_decl_bv("SignedSatQ2470__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2471__3 = iface.f_decl_bool("SignedSatQ2471__3");
                    const auto v_temp432 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2461__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp432));
                    iface.f_gen_store(v_SignedSatQ2470__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2471__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp432));
                    const auto v_temp433 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2461__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp433));
                    iface.f_gen_store(v_SignedSatQ2470__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2471__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp433));
                    iface.f_gen_store(v_SignedSatQ2470__3, iface.f_gen_slice(v_If2461__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2471__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp432));
                    v_SatQ2462__2 = iface.f_gen_load(v_SignedSatQ2470__3);
                    v_SatQ2463__2 = iface.f_gen_load(v_SignedSatQ2471__3);
                  } // if
                  const auto v_temp434 = iface.f_gen_branch(v_SatQ2463__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp434));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp434));
                  auto v_If2484__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2484__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2484__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2488__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2488__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2484__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2488__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2484__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2489__2 = typename Traits::rt_expr{};
                  auto v_SatQ2490__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2491__3 = iface.f_decl_bv("UnsignedSatQ2491__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2492__3 = iface.f_decl_bool("UnsignedSatQ2492__3");
                    const auto v_temp435 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2488__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp435));
                    iface.f_gen_store(v_UnsignedSatQ2491__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2492__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp435));
                    const auto v_temp436 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2488__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp436));
                    iface.f_gen_store(v_UnsignedSatQ2491__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2492__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp436));
                    iface.f_gen_store(v_UnsignedSatQ2491__3, iface.f_gen_slice(v_If2488__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2492__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp435));
                    v_SatQ2489__2 = iface.f_gen_load(v_UnsignedSatQ2491__3);
                    v_SatQ2490__2 = iface.f_gen_load(v_UnsignedSatQ2492__3);
                  } else {
                    const auto v_SignedSatQ2497__3 = iface.f_decl_bv("SignedSatQ2497__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2498__3 = iface.f_decl_bool("SignedSatQ2498__3");
                    const auto v_temp437 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2488__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp437));
                    iface.f_gen_store(v_SignedSatQ2497__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2498__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp437));
                    const auto v_temp438 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2488__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp438));
                    iface.f_gen_store(v_SignedSatQ2497__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2498__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp438));
                    iface.f_gen_store(v_SignedSatQ2497__3, iface.f_gen_slice(v_If2488__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2498__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp437));
                    v_SatQ2489__2 = iface.f_gen_load(v_SignedSatQ2497__3);
                    v_SatQ2490__2 = iface.f_gen_load(v_SignedSatQ2498__3);
                  } // if
                  const auto v_temp439 = iface.f_gen_branch(v_SatQ2490__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp439));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp439));
                  auto v_If2511__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2511__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2511__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2515__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2515__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2511__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2515__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2511__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2516__2 = typename Traits::rt_expr{};
                  auto v_SatQ2517__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2518__3 = iface.f_decl_bv("UnsignedSatQ2518__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2519__3 = iface.f_decl_bool("UnsignedSatQ2519__3");
                    const auto v_temp440 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2515__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp440));
                    iface.f_gen_store(v_UnsignedSatQ2518__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2519__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp440));
                    const auto v_temp441 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2515__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp441));
                    iface.f_gen_store(v_UnsignedSatQ2518__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2519__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp441));
                    iface.f_gen_store(v_UnsignedSatQ2518__3, iface.f_gen_slice(v_If2515__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2519__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp440));
                    v_SatQ2516__2 = iface.f_gen_load(v_UnsignedSatQ2518__3);
                    v_SatQ2517__2 = iface.f_gen_load(v_UnsignedSatQ2519__3);
                  } else {
                    const auto v_SignedSatQ2524__3 = iface.f_decl_bv("SignedSatQ2524__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2525__3 = iface.f_decl_bool("SignedSatQ2525__3");
                    const auto v_temp442 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2515__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp442));
                    iface.f_gen_store(v_SignedSatQ2524__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2525__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp442));
                    const auto v_temp443 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2515__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp443));
                    iface.f_gen_store(v_SignedSatQ2524__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2525__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp443));
                    iface.f_gen_store(v_SignedSatQ2524__3, iface.f_gen_slice(v_If2515__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2525__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp442));
                    v_SatQ2516__2 = iface.f_gen_load(v_SignedSatQ2524__3);
                    v_SatQ2517__2 = iface.f_gen_load(v_SignedSatQ2525__3);
                  } // if
                  const auto v_temp444 = iface.f_gen_branch(v_SatQ2517__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp444));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp444));
                  auto v_If2538__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2538__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2538__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2542__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2542__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2538__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2542__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2538__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2543__2 = typename Traits::rt_expr{};
                  auto v_SatQ2544__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2545__3 = iface.f_decl_bv("UnsignedSatQ2545__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2546__3 = iface.f_decl_bool("UnsignedSatQ2546__3");
                    const auto v_temp445 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2542__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp445));
                    iface.f_gen_store(v_UnsignedSatQ2545__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2546__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp445));
                    const auto v_temp446 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2542__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp446));
                    iface.f_gen_store(v_UnsignedSatQ2545__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2546__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp446));
                    iface.f_gen_store(v_UnsignedSatQ2545__3, iface.f_gen_slice(v_If2542__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2546__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp445));
                    v_SatQ2543__2 = iface.f_gen_load(v_UnsignedSatQ2545__3);
                    v_SatQ2544__2 = iface.f_gen_load(v_UnsignedSatQ2546__3);
                  } else {
                    const auto v_SignedSatQ2551__3 = iface.f_decl_bv("SignedSatQ2551__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2552__3 = iface.f_decl_bool("SignedSatQ2552__3");
                    const auto v_temp447 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2542__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp447));
                    iface.f_gen_store(v_SignedSatQ2551__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2552__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp447));
                    const auto v_temp448 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2542__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp448));
                    iface.f_gen_store(v_SignedSatQ2551__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2552__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp448));
                    iface.f_gen_store(v_SignedSatQ2551__3, iface.f_gen_slice(v_If2542__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2552__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp447));
                    v_SatQ2543__2 = iface.f_gen_load(v_SignedSatQ2551__3);
                    v_SatQ2544__2 = iface.f_gen_load(v_SignedSatQ2552__3);
                  } // if
                  const auto v_temp449 = iface.f_gen_branch(v_SatQ2544__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp449));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp449));
                  auto v_If2565__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2565__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2565__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2569__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2569__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2565__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2569__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2565__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2570__2 = typename Traits::rt_expr{};
                  auto v_SatQ2571__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2572__3 = iface.f_decl_bv("UnsignedSatQ2572__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2573__3 = iface.f_decl_bool("UnsignedSatQ2573__3");
                    const auto v_temp450 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2569__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp450));
                    iface.f_gen_store(v_UnsignedSatQ2572__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2573__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp450));
                    const auto v_temp451 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2569__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp451));
                    iface.f_gen_store(v_UnsignedSatQ2572__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2573__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp451));
                    iface.f_gen_store(v_UnsignedSatQ2572__3, iface.f_gen_slice(v_If2569__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2573__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp450));
                    v_SatQ2570__2 = iface.f_gen_load(v_UnsignedSatQ2572__3);
                    v_SatQ2571__2 = iface.f_gen_load(v_UnsignedSatQ2573__3);
                  } else {
                    const auto v_SignedSatQ2578__3 = iface.f_decl_bv("SignedSatQ2578__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2579__3 = iface.f_decl_bool("SignedSatQ2579__3");
                    const auto v_temp452 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2569__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp452));
                    iface.f_gen_store(v_SignedSatQ2578__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2579__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp452));
                    const auto v_temp453 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2569__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp453));
                    iface.f_gen_store(v_SignedSatQ2578__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2579__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp453));
                    iface.f_gen_store(v_SignedSatQ2578__3, iface.f_gen_slice(v_If2569__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2579__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp452));
                    v_SatQ2570__2 = iface.f_gen_load(v_SignedSatQ2578__3);
                    v_SatQ2571__2 = iface.f_gen_load(v_SignedSatQ2579__3);
                  } // if
                  const auto v_temp454 = iface.f_gen_branch(v_SatQ2571__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp454));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp454));
                  auto v_If2592__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2592__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2592__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2596__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2596__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2592__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2596__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2592__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2597__2 = typename Traits::rt_expr{};
                  auto v_SatQ2598__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2599__3 = iface.f_decl_bv("UnsignedSatQ2599__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2600__3 = iface.f_decl_bool("UnsignedSatQ2600__3");
                    const auto v_temp455 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2596__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp455));
                    iface.f_gen_store(v_UnsignedSatQ2599__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2600__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp455));
                    const auto v_temp456 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2596__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp456));
                    iface.f_gen_store(v_UnsignedSatQ2599__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2600__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp456));
                    iface.f_gen_store(v_UnsignedSatQ2599__3, iface.f_gen_slice(v_If2596__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2600__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp455));
                    v_SatQ2597__2 = iface.f_gen_load(v_UnsignedSatQ2599__3);
                    v_SatQ2598__2 = iface.f_gen_load(v_UnsignedSatQ2600__3);
                  } else {
                    const auto v_SignedSatQ2605__3 = iface.f_decl_bv("SignedSatQ2605__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2606__3 = iface.f_decl_bool("SignedSatQ2606__3");
                    const auto v_temp457 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2596__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp457));
                    iface.f_gen_store(v_SignedSatQ2605__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2606__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp457));
                    const auto v_temp458 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2596__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp458));
                    iface.f_gen_store(v_SignedSatQ2605__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2606__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp458));
                    iface.f_gen_store(v_SignedSatQ2605__3, iface.f_gen_slice(v_If2596__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2606__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp457));
                    v_SatQ2597__2 = iface.f_gen_load(v_SignedSatQ2605__3);
                    v_SatQ2598__2 = iface.f_gen_load(v_SignedSatQ2606__3);
                  } // if
                  const auto v_temp459 = iface.f_gen_branch(v_SatQ2598__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp459));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp459));
                  auto v_If2619__2 = typename Traits::rt_expr{};
                  if (v_src_unsigned__1) {
                    v_If2619__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If2619__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp2208__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If2623__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                    v_If2623__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If2619__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                  } else {
                    v_If2623__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If2619__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                  } // if
                  auto v_SatQ2624__2 = typename Traits::rt_expr{};
                  auto v_SatQ2625__2 = typename Traits::rt_expr{};
                  if (v_dst_unsigned__1) {
                    const auto v_UnsignedSatQ2626__3 = iface.f_decl_bv("UnsignedSatQ2626__3", iface.bigint_lit("4"));
                    const auto v_UnsignedSatQ2627__3 = iface.f_decl_bool("UnsignedSatQ2627__3");
                    const auto v_temp460 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If2623__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp460));
                    iface.f_gen_store(v_UnsignedSatQ2626__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                    iface.f_gen_store(v_UnsignedSatQ2627__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp460));
                    const auto v_temp461 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2623__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp461));
                    iface.f_gen_store(v_UnsignedSatQ2626__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                    iface.f_gen_store(v_UnsignedSatQ2627__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp461));
                    iface.f_gen_store(v_UnsignedSatQ2626__3, iface.f_gen_slice(v_If2623__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_UnsignedSatQ2627__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp460));
                    v_SatQ2624__2 = iface.f_gen_load(v_UnsignedSatQ2626__3);
                    v_SatQ2625__2 = iface.f_gen_load(v_UnsignedSatQ2627__3);
                  } else {
                    const auto v_SignedSatQ2632__3 = iface.f_decl_bv("SignedSatQ2632__3", iface.bigint_lit("4"));
                    const auto v_SignedSatQ2633__3 = iface.f_decl_bool("SignedSatQ2633__3");
                    const auto v_temp462 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If2623__2));
                    iface.f_switch_context(iface.f_true_branch(v_temp462));
                    iface.f_gen_store(v_SignedSatQ2632__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                    iface.f_gen_store(v_SignedSatQ2633__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp462));
                    const auto v_temp463 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If2623__2, iface.f_gen_bit_lit(iface.bits_lit(128U, "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp463));
                    iface.f_gen_store(v_SignedSatQ2632__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                    iface.f_gen_store(v_SignedSatQ2633__3, iface.f_gen_bool_lit(true));
                    iface.f_switch_context(iface.f_false_branch(v_temp463));
                    iface.f_gen_store(v_SignedSatQ2632__3, iface.f_gen_slice(v_If2623__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                    iface.f_gen_store(v_SignedSatQ2633__3, iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp462));
                    v_SatQ2624__2 = iface.f_gen_load(v_SignedSatQ2632__3);
                    v_SatQ2625__2 = iface.f_gen_load(v_SignedSatQ2633__3);
                  } // if
                  const auto v_temp464 = iface.f_gen_branch(v_SatQ2625__2);
                  iface.f_switch_context(iface.f_true_branch(v_temp464));
                  iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp464));
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ2624__2, iface.f_gen_append_bits(v_SatQ2597__2, iface.f_gen_append_bits(v_SatQ2570__2, iface.f_gen_append_bits(v_SatQ2543__2, iface.f_gen_append_bits(v_SatQ2516__2, iface.f_gen_append_bits(v_SatQ2489__2, iface.f_gen_append_bits(v_SatQ2462__2, iface.f_gen_append_bits(v_SatQ2435__2, iface.f_gen_append_bits(v_SatQ2408__2, iface.f_gen_append_bits(v_SatQ2381__2, iface.f_gen_append_bits(v_SatQ2354__2, iface.f_gen_append_bits(v_SatQ2327__2, iface.f_gen_append_bits(v_SatQ2300__2, iface.f_gen_append_bits(v_SatQ2273__2, iface.f_gen_append_bits(v_SatQ2246__2, v_SatQ2218__2))))))))))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                } // if
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_shift_left_sat_simd


} // namespace aslp
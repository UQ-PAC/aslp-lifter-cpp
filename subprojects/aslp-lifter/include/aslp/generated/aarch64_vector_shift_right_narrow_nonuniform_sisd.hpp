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
void aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_nonuniform_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0000"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
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
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp9__2 = typename Traits::rt_expr{};
        v_Exp9__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If10__1 = iface.bits_zero(iface.bigint_lit("17"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_If12__2 = iface.bits_zero(iface.bigint_lit("17"));
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
            v_If12__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(16U, "0000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("17"));
          } else {
            v_If12__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("17"));
          } // if
          v_If10__1 = v_If12__2;
        } else {
          v_If10__1 = iface.bits_lit(17U, "00000000000000000");
        } // if
        auto v_If16__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If16__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If16__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ17__2 = iface.f_decl_bv("UnsignedSatQ17__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ18__2 = iface.f_decl_bool("UnsignedSatQ18__2");
        const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If16__2));
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_UnsignedSatQ17__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ18__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If16__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_UnsignedSatQ17__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ18__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_UnsignedSatQ17__2, iface.f_gen_slice(v_If16__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ18__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ18__2));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_UnsignedSatQ17__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        auto v_HighestSetBit32__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_HighestSetBit32__2 = iface.bits_lit(3U, "011");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit32__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit32__2 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit32__2 = iface.bits_lit(3U, "000");
              } else {
                v_HighestSetBit32__2 = iface.bits_lit(3U, "111");
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_HighestSetBit32__2, iface.bits_lit(3U, "001"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp38__2 = typename Traits::rt_expr{};
          v_Exp38__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If39__1 = iface.bits_zero(iface.bigint_lit("33"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_If41__2 = iface.bits_zero(iface.bigint_lit("33"));
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
              v_If41__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(32U, "00000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
            } else {
              v_If41__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
            } // if
            v_If39__1 = v_If41__2;
          } else {
            v_If39__1 = iface.bits_lit(33U, "000000000000000000000000000000000");
          } // if
          auto v_If45__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If45__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp38__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If39__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If45__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp38__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If39__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          const auto v_UnsignedSatQ46__2 = iface.f_decl_bv("UnsignedSatQ46__2", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ47__2 = iface.f_decl_bool("UnsignedSatQ47__2");
          const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If45__2));
          iface.f_switch_context(iface.f_true_branch(v_temp3));
          iface.f_gen_store(v_UnsignedSatQ46__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ47__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp3));
          const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If45__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp4));
          iface.f_gen_store(v_UnsignedSatQ46__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ47__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp4));
          iface.f_gen_store(v_UnsignedSatQ46__2, iface.f_gen_slice(v_If45__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ47__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp3));
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ47__2));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp5));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_UnsignedSatQ46__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          auto v_HighestSetBit61__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit61__2 = iface.bits_lit(3U, "011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit61__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit61__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit61__2 = iface.bits_lit(3U, "000");
                } else {
                  v_HighestSetBit61__2 = iface.bits_lit(3U, "111");
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(v_HighestSetBit61__2, iface.bits_lit(3U, "010"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp67__2 = typename Traits::rt_expr{};
            v_Exp67__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If68__1 = iface.bits_zero(iface.bigint_lit("65"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_If70__2 = iface.bits_zero(iface.bigint_lit("65"));
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                v_If70__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
              } else {
                v_If70__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
              } // if
              v_If68__1 = v_If70__2;
            } else {
              v_If68__1 = iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000");
            } // if
            auto v_If74__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If74__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp67__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If68__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If74__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp67__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If68__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            const auto v_UnsignedSatQ75__2 = iface.f_decl_bv("UnsignedSatQ75__2", iface.bigint_lit("32"));
            const auto v_UnsignedSatQ76__2 = iface.f_decl_bool("UnsignedSatQ76__2");
            const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If74__2));
            iface.f_switch_context(iface.f_true_branch(v_temp6));
            iface.f_gen_store(v_UnsignedSatQ75__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ76__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp6));
            const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If74__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp7));
            iface.f_gen_store(v_UnsignedSatQ75__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ76__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp7));
            iface.f_gen_store(v_UnsignedSatQ75__2, iface.f_gen_slice(v_If74__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_UnsignedSatQ76__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp6));
            const auto v_temp8 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ76__2));
            iface.f_switch_context(iface.f_true_branch(v_temp8));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp8));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_UnsignedSatQ75__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            auto v_HighestSetBit90__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit90__2 = iface.bits_lit(3U, "011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit90__2 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit90__2 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit90__2 = iface.bits_lit(3U, "000");
                  } else {
                    v_HighestSetBit90__2 = iface.bits_lit(3U, "111");
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(v_HighestSetBit90__2, iface.bits_lit(3U, "011"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp96__2 = typename Traits::rt_expr{};
              v_Exp96__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If97__1 = iface.bits_zero(iface.bigint_lit("129"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_If99__2 = iface.bits_zero(iface.bigint_lit("129"));
                if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9")))) {
                  v_If99__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bigint_lit("129"));
                } else {
                  v_If99__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))), iface.bigint_lit("129"));
                } // if
                v_If97__1 = v_If99__2;
              } else {
                v_If97__1 = iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
              } // if
              auto v_If103__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9")))) {
                v_If103__2 = iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp96__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If97__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))));
              } else {
                v_If103__2 = iface.f_gen_lsl_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp96__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If97__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))));
              } // if
              const auto v_UnsignedSatQ104__2 = iface.f_decl_bv("UnsignedSatQ104__2", iface.bigint_lit("64"));
              const auto v_UnsignedSatQ105__2 = iface.f_decl_bool("UnsignedSatQ105__2");
              const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If103__2));
              iface.f_switch_context(iface.f_true_branch(v_temp9));
              iface.f_gen_store(v_UnsignedSatQ104__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ105__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp9));
              const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If103__2, iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp10));
              iface.f_gen_store(v_UnsignedSatQ104__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ105__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp10));
              iface.f_gen_store(v_UnsignedSatQ104__2, iface.f_gen_slice(v_If103__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
              iface.f_gen_store(v_UnsignedSatQ105__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp9));
              const auto v_temp11 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ105__2));
              iface.f_switch_context(iface.f_true_branch(v_temp11));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp11));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_UnsignedSatQ104__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_shift_right_narrow_nonuniform_sisd


} // namespace aslp
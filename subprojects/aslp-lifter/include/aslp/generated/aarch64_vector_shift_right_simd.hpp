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
void aslp_lifter<Traits>::f_aarch64_vector_shift_right_simd(typename Traits::bits v_enc) {
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
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp9__2 = typename Traits::rt_expr{};
          v_Exp9__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If10__1 = iface.bits_zero(iface.bigint_lit("17"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
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
          auto v_If13__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_If13__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_If13__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_If20__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If20__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If20__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If24__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If24__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If20__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If24__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If20__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If30__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If30__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If30__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If34__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If34__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If30__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If34__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If30__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If39__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If39__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If39__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If43__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If43__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If39__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If43__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If39__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If48__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If48__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If48__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If52__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If52__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If52__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If57__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If57__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If57__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If61__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If61__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If57__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If61__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If57__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If66__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If66__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If66__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If70__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If70__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If66__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If70__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If66__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If75__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If75__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If75__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If79__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If79__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If75__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If79__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If75__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If84__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If84__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If84__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If88__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If88__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If84__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If88__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If84__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If93__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If93__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If93__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If97__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If97__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If93__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If97__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If93__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If102__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If102__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If102__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If106__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If106__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If102__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If106__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If102__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If111__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If111__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If111__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If115__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If115__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If111__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If115__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If111__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If120__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If120__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If120__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If124__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If124__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If120__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If124__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If120__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If129__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If129__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If129__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If133__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If133__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If129__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If133__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If129__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If138__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If138__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If138__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If142__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If142__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If142__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If147__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If147__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If147__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If151__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If151__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If147__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If151__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If147__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If156__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If156__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If156__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If160__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If160__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If156__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If160__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If156__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_slice(v_If160__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_slice(v_If151__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_slice(v_If142__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_slice(v_If133__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_slice(v_If124__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_slice(v_If115__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_slice(v_If106__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_slice(v_If97__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_slice(v_If88__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_slice(v_If79__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_slice(v_If70__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_slice(v_If61__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_slice(v_If52__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_slice(v_If43__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_slice(v_If34__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If13__1, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(v_If24__2, iface.bigint_lit("0"), iface.bigint_lit("8")))))))))))))))))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp171__2 = typename Traits::rt_expr{};
          v_Exp171__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If172__1 = iface.bits_zero(iface.bigint_lit("17"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_If174__2 = iface.bits_zero(iface.bigint_lit("17"));
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
              v_If174__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(16U, "0000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("17"));
            } else {
              v_If174__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("17"));
            } // if
            v_If172__1 = v_If174__2;
          } else {
            v_If172__1 = iface.bits_lit(17U, "00000000000000000");
          } // if
          auto v_If175__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_If175__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            v_If175__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_If182__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If182__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If182__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If186__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If186__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If182__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If186__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If182__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If192__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If192__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If192__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If196__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If196__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If192__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If196__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If192__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If201__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If201__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If201__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If205__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If205__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If201__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If205__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If201__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If210__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If210__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If210__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If214__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If214__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If210__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If214__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If210__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If219__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If219__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If219__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If223__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If223__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If219__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If223__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If219__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If228__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If228__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If228__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If232__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If232__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If232__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If237__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If237__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If237__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If241__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If241__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If237__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If241__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If237__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_If246__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If246__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If246__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp171__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If250__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If250__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If246__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If250__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If246__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If172__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If175__1, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_slice(v_If250__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If175__1, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_slice(v_If241__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If175__1, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_slice(v_If232__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If175__1, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_slice(v_If223__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If175__1, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_slice(v_If214__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If175__1, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_slice(v_If205__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If175__1, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_slice(v_If196__2, iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If175__1, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(v_If186__2, iface.bigint_lit("0"), iface.bigint_lit("8")))))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        auto v_HighestSetBit258__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_HighestSetBit258__2 = iface.bits_lit(3U, "011");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit258__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit258__2 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit258__2 = iface.bits_lit(3U, "000");
              } else {
                v_HighestSetBit258__2 = iface.bits_lit(3U, "111");
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_HighestSetBit258__2, iface.bits_lit(3U, "001"))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp264__2 = typename Traits::rt_expr{};
            v_Exp264__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If265__1 = iface.bits_zero(iface.bigint_lit("33"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_If267__2 = iface.bits_zero(iface.bigint_lit("33"));
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                v_If267__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(32U, "00000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
              } else {
                v_If267__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
              } // if
              v_If265__1 = v_If267__2;
            } else {
              v_If265__1 = iface.bits_lit(33U, "000000000000000000000000000000000");
            } // if
            auto v_If268__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_If268__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_If268__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            auto v_If275__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If275__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If275__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If279__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If279__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If275__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If279__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If275__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If285__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If285__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If285__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If289__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If289__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If285__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If289__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If285__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If294__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If294__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If294__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If298__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If298__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If294__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If298__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If294__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If303__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If303__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If303__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If307__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If307__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If303__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If307__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If303__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If312__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If312__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If312__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If316__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If316__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If312__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If316__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If312__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If321__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If321__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If321__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If325__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If325__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If321__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If325__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If321__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If330__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If330__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If330__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If334__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If334__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If330__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If334__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If330__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If339__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If339__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If339__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp264__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If343__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If343__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If339__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If343__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If339__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If265__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If268__1, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_If343__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If268__1, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_If334__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If268__1, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_If325__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If268__1, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_If316__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If268__1, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_If307__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If268__1, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_If298__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If268__1, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_If289__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If268__1, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_If279__2, iface.bigint_lit("0"), iface.bigint_lit("16")))))))))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp354__2 = typename Traits::rt_expr{};
            v_Exp354__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If355__1 = iface.bits_zero(iface.bigint_lit("33"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_If357__2 = iface.bits_zero(iface.bigint_lit("33"));
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                v_If357__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(32U, "00000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
              } else {
                v_If357__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
              } // if
              v_If355__1 = v_If357__2;
            } else {
              v_If355__1 = iface.bits_lit(33U, "000000000000000000000000000000000");
            } // if
            auto v_If358__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_If358__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              v_If358__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            auto v_If365__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If365__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp354__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If365__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp354__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If369__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If369__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If365__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If355__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If369__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If365__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If355__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If375__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If375__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp354__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If375__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp354__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If379__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If379__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If375__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If355__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If379__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If375__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If355__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If384__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If384__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp354__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If384__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp354__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If388__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If388__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If384__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If355__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If388__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If384__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If355__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_If393__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If393__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp354__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If393__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp354__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If397__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If397__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If393__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If355__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If397__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If393__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If355__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If358__1, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_If397__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If358__1, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_If388__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If358__1, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_If379__2, iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If358__1, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_If369__2, iface.bigint_lit("0"), iface.bigint_lit("16")))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          auto v_HighestSetBit405__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit405__2 = iface.bits_lit(3U, "011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit405__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit405__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit405__2 = iface.bits_lit(3U, "000");
                } else {
                  v_HighestSetBit405__2 = iface.bits_lit(3U, "111");
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(v_HighestSetBit405__2, iface.bits_lit(3U, "010"))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp411__2 = typename Traits::rt_expr{};
              v_Exp411__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If412__1 = iface.bits_zero(iface.bigint_lit("65"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_If414__2 = iface.bits_zero(iface.bigint_lit("65"));
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                  v_If414__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
                } else {
                  v_If414__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
                } // if
                v_If412__1 = v_If414__2;
              } else {
                v_If412__1 = iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000");
              } // if
              auto v_If415__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                v_If415__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_If415__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              auto v_If422__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If422__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If422__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If426__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                v_If426__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If422__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If412__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
              } else {
                v_If426__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If422__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If412__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
              } // if
              auto v_If432__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If432__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If432__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If436__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                v_If436__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If432__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If412__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
              } else {
                v_If436__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If432__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If412__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
              } // if
              auto v_If441__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If441__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If441__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If445__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                v_If445__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If441__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If412__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
              } else {
                v_If445__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If441__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If412__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
              } // if
              auto v_If450__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If450__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If450__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If454__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                v_If454__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If450__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If412__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
              } else {
                v_If454__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If450__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If412__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If415__1, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(v_If454__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If415__1, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(v_If445__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If415__1, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_If436__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If415__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_If426__2, iface.bigint_lit("0"), iface.bigint_lit("32")))))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp465__2 = typename Traits::rt_expr{};
              v_Exp465__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If466__1 = iface.bits_zero(iface.bigint_lit("65"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_If468__2 = iface.bits_zero(iface.bigint_lit("65"));
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                  v_If468__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
                } else {
                  v_If468__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
                } // if
                v_If466__1 = v_If468__2;
              } else {
                v_If466__1 = iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000");
              } // if
              auto v_If469__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                v_If469__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
              } else {
                v_If469__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              auto v_If476__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If476__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp465__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If476__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp465__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If480__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                v_If480__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If476__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If466__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
              } else {
                v_If480__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If476__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If466__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
              } // if
              auto v_If486__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If486__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp465__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If486__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp465__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If490__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                v_If490__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If486__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If466__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
              } else {
                v_If490__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If486__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If466__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If469__1, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_If490__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If469__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_If480__2, iface.bigint_lit("0"), iface.bigint_lit("32")))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            auto v_HighestSetBit498__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit498__2 = iface.bits_lit(3U, "011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit498__2 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit498__2 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit498__2 = iface.bits_lit(3U, "000");
                  } else {
                    v_HighestSetBit498__2 = iface.bits_lit(3U, "111");
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(v_HighestSetBit498__2, iface.bits_lit(3U, "011"))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp504__2 = typename Traits::rt_expr{};
                v_Exp504__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                auto v_If505__1 = iface.bits_zero(iface.bigint_lit("129"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_If507__2 = iface.bits_zero(iface.bigint_lit("129"));
                  if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9")))) {
                    v_If507__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bigint_lit("129"));
                  } else {
                    v_If507__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))), iface.bigint_lit("129"));
                  } // if
                  v_If505__1 = v_If507__2;
                } else {
                  v_If505__1 = iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
                } // if
                auto v_If508__1 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  v_If508__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_If508__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                auto v_If515__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If515__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If515__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If519__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9")))) {
                  v_If519__2 = iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If515__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If505__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))));
                } else {
                  v_If519__2 = iface.f_gen_lsl_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If515__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If505__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))));
                } // if
                auto v_If525__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If525__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If525__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If529__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9")))) {
                  v_If529__2 = iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If525__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If505__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))));
                } else {
                  v_If529__2 = iface.f_gen_lsl_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If525__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If505__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If508__1, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(v_If529__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If508__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_If519__2, iface.bigint_lit("0"), iface.bigint_lit("64")))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp540__2 = typename Traits::rt_expr{};
                v_Exp540__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                auto v_If541__1 = iface.bits_zero(iface.bigint_lit("129"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_If543__2 = iface.bits_zero(iface.bigint_lit("129"));
                  if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9")))) {
                    v_If543__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bigint_lit("129"));
                  } else {
                    v_If543__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))), iface.bigint_lit("129"));
                  } // if
                  v_If541__1 = v_If543__2;
                } else {
                  v_If541__1 = iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
                } // if
                auto v_If544__1 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  v_If544__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
                } else {
                  v_If544__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                auto v_If551__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If551__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp540__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If551__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp540__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If555__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9")))) {
                  v_If555__2 = iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If551__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If541__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))));
                } else {
                  v_If555__2 = iface.f_gen_lsl_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If551__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If541__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_add_bits(v_If544__1, iface.f_gen_slice(v_If555__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } // if
            } else {
              auto v_HighestSetBit564__2 = iface.bits_zero(iface.bigint_lit("3"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit564__2 = iface.bits_lit(3U, "011");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit564__2 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit564__2 = iface.bits_lit(3U, "001");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                      v_HighestSetBit564__2 = iface.bits_lit(3U, "000");
                    } else {
                      v_HighestSetBit564__2 = iface.bits_lit(3U, "111");
                    } // if
                  } // if
                } // if
              } // if
              if (iface.f_eq_bits(v_HighestSetBit564__2, iface.bits_lit(3U, "111"))) {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  auto v_Exp570__2 = typename Traits::rt_expr{};
                  v_Exp570__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  auto v_If571__1 = iface.bits_zero(iface.bigint_lit("9"));
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    auto v_If573__2 = iface.bits_zero(iface.bigint_lit("9"));
                    if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                      v_If573__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(8U, "00000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("9"));
                    } else {
                      v_If573__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("9"));
                    } // if
                    v_If571__1 = v_If573__2;
                  } else {
                    v_If571__1 = iface.bits_lit(9U, "000000000");
                  } // if
                  auto v_If574__1 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    v_If574__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_If574__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  auto v_If581__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If581__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If581__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If585__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If585__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If581__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If585__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If581__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If591__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If591__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If591__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If595__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If595__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If591__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If595__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If591__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If600__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If600__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If600__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If604__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If604__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If600__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If604__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If600__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If609__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If609__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If609__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If613__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If613__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If609__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If613__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If609__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If618__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If618__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If618__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If622__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If622__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If618__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If622__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If618__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If627__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If627__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If627__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If631__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If631__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If627__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If631__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If627__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If636__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If636__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If636__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If640__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If640__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If636__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If640__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If636__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If645__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If645__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If645__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If649__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If649__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If645__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If649__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If645__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If654__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If654__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If654__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If658__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If658__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If654__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If658__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If654__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If663__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If663__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If663__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If667__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If667__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If663__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If667__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If663__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If672__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If672__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If672__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If676__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If676__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If672__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If676__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If672__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If681__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If681__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If681__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If685__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If685__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If681__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If685__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If681__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If690__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If690__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If690__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If694__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If694__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If690__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If694__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If690__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If699__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If699__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If699__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If703__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If703__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If699__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If703__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If699__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If708__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If708__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If708__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If712__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If712__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If708__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If712__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If708__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If717__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If717__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If717__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If721__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If721__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If717__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If721__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If717__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If726__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If726__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("64"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If726__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("64"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If730__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If730__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If726__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If730__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If726__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If735__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If735__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("68"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If735__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("68"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If739__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If739__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If735__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If739__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If735__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If744__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If744__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("72"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If744__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("72"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If748__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If748__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If744__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If748__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If744__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If753__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If753__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("76"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If753__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("76"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If757__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If757__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If753__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If757__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If753__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If762__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If762__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("80"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If762__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("80"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If766__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If766__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If762__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If766__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If762__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If771__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If771__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("84"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If771__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("84"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If775__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If775__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If771__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If775__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If771__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If780__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If780__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("88"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If780__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("88"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If784__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If784__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If780__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If784__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If780__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If789__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If789__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("92"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If789__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("92"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If793__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If793__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If789__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If793__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If789__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If798__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If798__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("96"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If798__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("96"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If802__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If802__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If798__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If802__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If798__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If807__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If807__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("100"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If807__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("100"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If811__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If811__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If807__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If811__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If807__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If816__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If816__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("104"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If816__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("104"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If820__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If820__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If816__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If820__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If816__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If825__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If825__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("108"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If825__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("108"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If829__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If829__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If825__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If829__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If825__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If834__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If834__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("112"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If834__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("112"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If838__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If838__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If834__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If838__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If834__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If843__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If843__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("116"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If843__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("116"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If847__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If847__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If843__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If847__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If843__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If852__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If852__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("120"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If852__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("120"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If856__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If856__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If852__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If856__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If852__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If861__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If861__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("124"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If861__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp570__2, iface.bigint_lit("124"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If865__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If865__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If861__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If865__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If861__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If571__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("124"), iface.bigint_lit("4")), iface.f_gen_slice(v_If865__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("120"), iface.bigint_lit("4")), iface.f_gen_slice(v_If856__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("116"), iface.bigint_lit("4")), iface.f_gen_slice(v_If847__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("112"), iface.bigint_lit("4")), iface.f_gen_slice(v_If838__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("108"), iface.bigint_lit("4")), iface.f_gen_slice(v_If829__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("104"), iface.bigint_lit("4")), iface.f_gen_slice(v_If820__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("100"), iface.bigint_lit("4")), iface.f_gen_slice(v_If811__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("96"), iface.bigint_lit("4")), iface.f_gen_slice(v_If802__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("92"), iface.bigint_lit("4")), iface.f_gen_slice(v_If793__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("88"), iface.bigint_lit("4")), iface.f_gen_slice(v_If784__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("84"), iface.bigint_lit("4")), iface.f_gen_slice(v_If775__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("80"), iface.bigint_lit("4")), iface.f_gen_slice(v_If766__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("76"), iface.bigint_lit("4")), iface.f_gen_slice(v_If757__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("72"), iface.bigint_lit("4")), iface.f_gen_slice(v_If748__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("68"), iface.bigint_lit("4")), iface.f_gen_slice(v_If739__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("64"), iface.bigint_lit("4")), iface.f_gen_slice(v_If730__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_slice(v_If721__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_slice(v_If712__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_slice(v_If703__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_slice(v_If694__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_slice(v_If685__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_slice(v_If676__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_slice(v_If667__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_slice(v_If658__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_slice(v_If649__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_slice(v_If640__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_slice(v_If631__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_slice(v_If622__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_slice(v_If613__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_slice(v_If604__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_slice(v_If595__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If574__1, iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_slice(v_If585__2, iface.bigint_lit("0"), iface.bigint_lit("4")))))))))))))))))))))))))))))))))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  auto v_Exp876__2 = typename Traits::rt_expr{};
                  v_Exp876__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  auto v_If877__1 = iface.bits_zero(iface.bigint_lit("9"));
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    auto v_If879__2 = iface.bits_zero(iface.bigint_lit("9"));
                    if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                      v_If879__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(8U, "00000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("9"));
                    } else {
                      v_If879__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("9"));
                    } // if
                    v_If877__1 = v_If879__2;
                  } else {
                    v_If877__1 = iface.bits_lit(9U, "000000000");
                  } // if
                  auto v_If880__1 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    v_If880__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
                  } else {
                    v_If880__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  auto v_If887__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If887__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If887__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If891__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If891__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If887__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If891__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If887__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If897__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If897__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If897__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If901__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If901__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If897__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If901__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If897__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If906__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If906__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If906__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If910__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If910__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If906__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If910__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If906__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If915__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If915__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If915__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If919__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If919__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If915__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If919__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If915__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If924__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If924__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If924__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If928__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If928__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If924__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If928__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If924__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If933__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If933__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If933__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If937__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If937__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If933__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If937__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If933__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If942__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If942__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If942__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If946__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If946__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If942__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If946__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If942__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If951__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If951__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If951__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If955__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If955__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If951__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If955__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If951__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If960__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If960__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If960__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If964__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If964__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If960__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If964__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If960__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If969__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If969__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If969__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If973__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If973__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If969__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If973__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If969__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If978__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If978__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If978__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If982__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If982__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If978__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If982__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If978__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If987__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If987__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If987__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If991__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If991__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If987__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If991__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If987__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If996__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If996__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If996__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1000__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If1000__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If996__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If1000__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If996__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If1005__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If1005__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1005__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1009__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If1009__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1005__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If1009__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1005__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If1014__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If1014__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1014__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1018__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If1018__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1014__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If1018__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1014__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  auto v_If1023__2 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If1023__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } else {
                    v_If1023__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp876__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                  } // if
                  auto v_If1027__2 = typename Traits::rt_expr{};
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                    v_If1027__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1023__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                  } else {
                    v_If1027__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1023__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If877__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_slice(v_If1027__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_slice(v_If1018__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_slice(v_If1009__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_slice(v_If1000__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_slice(v_If991__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_slice(v_If982__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_slice(v_If973__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_slice(v_If964__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_slice(v_If955__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_slice(v_If946__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_slice(v_If937__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_slice(v_If928__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_slice(v_If919__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_slice(v_If910__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_slice(v_If901__2, iface.bigint_lit("0"), iface.bigint_lit("4"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If880__1, iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_slice(v_If891__2, iface.bigint_lit("0"), iface.bigint_lit("4")))))))))))))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
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

} // f_aarch64_vector_shift_right_simd


} // namespace aslp
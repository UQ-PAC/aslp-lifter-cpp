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
void aslp_lifter<Traits>::f_aarch64_vector_shift_left_long(typename Traits::bits v_enc) {
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
        auto v_Vpart_read8__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp11__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp11__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read8__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read8__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        auto v_If21__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If21__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If21__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If25__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
          v_If25__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If21__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
        } else {
          v_If25__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If21__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
        } // if
        auto v_If30__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If30__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If30__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If34__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
          v_If34__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If30__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
        } else {
          v_If34__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If30__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
        } // if
        auto v_If38__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If38__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If38__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If42__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
          v_If42__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If38__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
        } else {
          v_If42__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If38__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
        } // if
        auto v_If46__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If46__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If46__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If50__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
          v_If50__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If46__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
        } else {
          v_If50__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If46__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
        } // if
        auto v_If54__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If54__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If54__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If58__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
          v_If58__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If54__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
        } else {
          v_If58__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If54__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
        } // if
        auto v_If62__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If62__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If62__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If66__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
          v_If66__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If62__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
        } else {
          v_If66__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If62__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
        } // if
        auto v_If70__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If70__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If70__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If74__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
          v_If74__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If70__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
        } else {
          v_If74__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If70__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
        } // if
        auto v_If78__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If78__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If78__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read8__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If82__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")))) {
          v_If82__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If78__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))));
        } else {
          v_If82__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If78__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If82__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(v_If74__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(v_If66__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(v_If58__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(v_If50__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(v_If42__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(v_If34__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_If25__2, iface.bigint_lit("0"), iface.bigint_lit("16"))))))))));
      } else {
        auto v_HighestSetBit89__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_HighestSetBit89__2 = iface.bits_lit(3U, "011");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit89__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit89__2 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit89__2 = iface.bits_lit(3U, "000");
              } else {
                v_HighestSetBit89__2 = iface.bits_lit(3U, "111");
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_HighestSetBit89__2, iface.bits_lit(3U, "001"))) {
          auto v_Vpart_read94__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp97__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp97__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read94__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read94__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          auto v_If107__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If107__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read94__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If107__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read94__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If111__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
            v_If111__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If107__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
          } else {
            v_If111__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If107__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_If116__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If116__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read94__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If116__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read94__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If120__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
            v_If120__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If116__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
          } else {
            v_If120__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If116__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_If124__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If124__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read94__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If124__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read94__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If128__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
            v_If128__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If124__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
          } else {
            v_If128__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If124__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          auto v_If132__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If132__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read94__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If132__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read94__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If136__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")))) {
            v_If136__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If132__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))));
          } else {
            v_If136__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If132__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If136__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(v_If128__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(v_If120__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_If111__2, iface.bigint_lit("0"), iface.bigint_lit("32"))))));
        } else {
          auto v_HighestSetBit143__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit143__2 = iface.bits_lit(3U, "011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit143__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit143__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit143__2 = iface.bits_lit(3U, "000");
                } else {
                  v_HighestSetBit143__2 = iface.bits_lit(3U, "111");
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(v_HighestSetBit143__2, iface.bits_lit(3U, "010"))) {
            auto v_Vpart_read148__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp151__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp151__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read148__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read148__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            auto v_If161__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If161__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read148__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If161__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read148__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If165__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")))) {
              v_If165__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If161__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))));
            } else {
              v_If165__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If161__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            auto v_If170__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If170__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read148__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If170__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read148__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If174__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")))) {
              v_If174__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If170__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))));
            } else {
              v_If174__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If170__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If174__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_If165__2, iface.bigint_lit("0"), iface.bigint_lit("64"))));
          } else {
            auto v_HighestSetBit181__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit181__2 = iface.bits_lit(3U, "011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit181__2 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit181__2 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit181__2 = iface.bits_lit(3U, "000");
                  } else {
                    v_HighestSetBit181__2 = iface.bits_lit(3U, "111");
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(v_HighestSetBit181__2, iface.bits_lit(3U, "011"))) {
              auto v_Vpart_read186__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp189__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
              assert(v_Exp189__2);
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                v_Vpart_read186__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                v_Vpart_read186__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
              } // if
              auto v_If199__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If199__2 = iface.f_gen_ZeroExtend(v_Vpart_read186__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If199__2 = iface.f_gen_SignExtend(v_Vpart_read186__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If203__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")))) {
                v_If203__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If199__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))));
              } else {
                v_If203__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If199__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), v_If203__2);
            } else {
              auto v_HighestSetBit211__2 = iface.bits_zero(iface.bigint_lit("3"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit211__2 = iface.bits_lit(3U, "011");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit211__2 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit211__2 = iface.bits_lit(3U, "001");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                      v_HighestSetBit211__2 = iface.bits_lit(3U, "000");
                    } else {
                      v_HighestSetBit211__2 = iface.bits_lit(3U, "111");
                    } // if
                  } // if
                } // if
              } // if
              if (iface.f_eq_bits(v_HighestSetBit211__2, iface.bits_lit(3U, "111"))) {
                auto v_Vpart_read216__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp219__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
                assert(v_Exp219__2);
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  v_Vpart_read216__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  v_Vpart_read216__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
                } // if
                auto v_If229__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If229__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If229__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("0"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If233__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If233__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If229__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If233__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If229__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If238__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If238__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If238__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("4"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If242__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If242__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If238__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If242__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If238__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If246__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If246__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If246__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("8"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If250__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If250__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If246__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If250__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If246__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If254__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If254__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If254__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("12"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If258__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If258__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If254__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If258__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If254__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If262__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If262__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If262__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("16"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If266__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If266__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If262__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If266__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If262__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If270__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If270__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If270__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("20"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If274__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If274__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If270__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If274__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If270__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If278__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If278__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If278__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("24"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If282__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If282__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If278__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If282__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If278__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If286__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If286__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If286__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If290__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If290__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If286__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If290__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If286__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If294__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If294__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If294__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("32"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If298__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If298__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If294__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If298__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If294__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If302__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If302__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If302__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("36"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If306__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If306__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If302__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If306__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If302__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If310__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If310__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If310__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("40"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If314__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If314__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If310__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If314__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If310__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If318__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If318__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If318__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("44"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If322__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If322__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If318__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If322__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If318__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If326__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If326__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If326__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("48"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If330__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If330__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If326__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If330__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If326__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If334__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If334__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If334__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("52"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If338__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If338__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If334__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If338__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If334__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If342__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If342__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If342__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("56"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If346__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If346__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If342__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If346__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If342__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                auto v_If350__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If350__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } else {
                  v_If350__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read216__2, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("5")));
                } // if
                auto v_If354__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100")))) {
                  v_If354__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(v_If350__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))));
                } else {
                  v_If354__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(v_If350__2, iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")), iface.bits_lit(8U, "00000100"))), iface.bits_lit(8U, "00000001")))), iface.f_gen_int_lit(iface.bigint_lit("128")));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If354__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If346__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If338__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If330__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If322__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If314__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If306__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If298__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If290__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If282__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If274__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If266__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If258__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If250__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(v_If242__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(v_If233__2, iface.bigint_lit("0"), iface.bigint_lit("8"))))))))))))))))));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_shift_left_long


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_uniform_sisd(typename Traits::bits v_enc) {
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
        auto v_If15__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If15__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If15__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If19__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If19__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If15__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If19__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If15__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If10__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ20__2 = typename Traits::rt_expr{};
        auto v_SatQ21__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ22__3 = iface.f_decl_bv("UnsignedSatQ22__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ23__3 = iface.f_decl_bool("UnsignedSatQ23__3");
          const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If19__2));
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp0));
          const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If19__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp1));
          iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_slice(v_If19__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          v_SatQ20__2 = iface.f_gen_load(v_UnsignedSatQ22__3);
          v_SatQ21__2 = iface.f_gen_load(v_UnsignedSatQ23__3);
        } else {
          const auto v_SignedSatQ28__3 = iface.f_decl_bv("SignedSatQ28__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ29__3 = iface.f_decl_bool("SignedSatQ29__3");
          const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If19__2));
          iface.f_switch_context(iface.f_true_branch(v_temp2));
          iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp2));
          const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If19__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp3));
          iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp3));
          iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_slice(v_If19__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
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
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ20__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        auto v_HighestSetBit47__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_HighestSetBit47__2 = iface.bits_lit(3U, "011");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit47__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit47__2 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit47__2 = iface.bits_lit(3U, "000");
              } else {
                v_HighestSetBit47__2 = iface.bits_lit(3U, "111");
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_HighestSetBit47__2, iface.bits_lit(3U, "001"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp53__2 = typename Traits::rt_expr{};
          v_Exp53__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If54__1 = iface.bits_zero(iface.bigint_lit("33"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_If56__2 = iface.bits_zero(iface.bigint_lit("33"));
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
              v_If56__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(32U, "00000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
            } else {
              v_If56__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
            } // if
            v_If54__1 = v_If56__2;
          } else {
            v_If54__1 = iface.bits_lit(33U, "000000000000000000000000000000000");
          } // if
          auto v_If59__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If59__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp53__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If59__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp53__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If63__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If63__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If59__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If54__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If63__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If59__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If54__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_SatQ64__2 = typename Traits::rt_expr{};
          auto v_SatQ65__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ66__3 = iface.f_decl_bv("UnsignedSatQ66__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ67__3 = iface.f_decl_bool("UnsignedSatQ67__3");
            const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If63__2));
            iface.f_switch_context(iface.f_true_branch(v_temp5));
            iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ67__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp5));
            const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If63__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp6));
            iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ67__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp6));
            iface.f_gen_store(v_UnsignedSatQ66__3, iface.f_gen_slice(v_If63__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ67__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp5));
            v_SatQ64__2 = iface.f_gen_load(v_UnsignedSatQ66__3);
            v_SatQ65__2 = iface.f_gen_load(v_UnsignedSatQ67__3);
          } else {
            const auto v_SignedSatQ72__3 = iface.f_decl_bv("SignedSatQ72__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ73__3 = iface.f_decl_bool("SignedSatQ73__3");
            const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If63__2));
            iface.f_switch_context(iface.f_true_branch(v_temp7));
            iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ73__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp7));
            const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If63__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp8));
            iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ73__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp8));
            iface.f_gen_store(v_SignedSatQ72__3, iface.f_gen_slice(v_If63__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ73__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp7));
            v_SatQ64__2 = iface.f_gen_load(v_SignedSatQ72__3);
            v_SatQ65__2 = iface.f_gen_load(v_SignedSatQ73__3);
          } // if
          const auto v_temp9 = iface.f_gen_branch(v_SatQ65__2);
          iface.f_switch_context(iface.f_true_branch(v_temp9));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp9));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ64__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          auto v_HighestSetBit91__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit91__2 = iface.bits_lit(3U, "011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit91__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit91__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit91__2 = iface.bits_lit(3U, "000");
                } else {
                  v_HighestSetBit91__2 = iface.bits_lit(3U, "111");
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(v_HighestSetBit91__2, iface.bits_lit(3U, "010"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp97__2 = typename Traits::rt_expr{};
            v_Exp97__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If98__1 = iface.bits_zero(iface.bigint_lit("65"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_If100__2 = iface.bits_zero(iface.bigint_lit("65"));
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                v_If100__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
              } else {
                v_If100__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
              } // if
              v_If98__1 = v_If100__2;
            } else {
              v_If98__1 = iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000");
            } // if
            auto v_If103__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If103__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp97__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If103__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp97__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            auto v_If107__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If107__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If98__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If107__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If98__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_SatQ108__2 = typename Traits::rt_expr{};
            auto v_SatQ109__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ110__3 = iface.f_decl_bv("UnsignedSatQ110__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ111__3 = iface.f_decl_bool("UnsignedSatQ111__3");
              const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If107__2));
              iface.f_switch_context(iface.f_true_branch(v_temp10));
              iface.f_gen_store(v_UnsignedSatQ110__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ111__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp10));
              const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If107__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp11));
              iface.f_gen_store(v_UnsignedSatQ110__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ111__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp11));
              iface.f_gen_store(v_UnsignedSatQ110__3, iface.f_gen_slice(v_If107__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ111__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp10));
              v_SatQ108__2 = iface.f_gen_load(v_UnsignedSatQ110__3);
              v_SatQ109__2 = iface.f_gen_load(v_UnsignedSatQ111__3);
            } else {
              const auto v_SignedSatQ116__3 = iface.f_decl_bv("SignedSatQ116__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ117__3 = iface.f_decl_bool("SignedSatQ117__3");
              const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If107__2));
              iface.f_switch_context(iface.f_true_branch(v_temp12));
              iface.f_gen_store(v_SignedSatQ116__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ117__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp12));
              const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If107__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp13));
              iface.f_gen_store(v_SignedSatQ116__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ117__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp13));
              iface.f_gen_store(v_SignedSatQ116__3, iface.f_gen_slice(v_If107__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ117__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp12));
              v_SatQ108__2 = iface.f_gen_load(v_SignedSatQ116__3);
              v_SatQ109__2 = iface.f_gen_load(v_SignedSatQ117__3);
            } // if
            const auto v_temp14 = iface.f_gen_branch(v_SatQ109__2);
            iface.f_switch_context(iface.f_true_branch(v_temp14));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp14));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ108__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            auto v_HighestSetBit135__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit135__2 = iface.bits_lit(3U, "011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit135__2 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit135__2 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit135__2 = iface.bits_lit(3U, "000");
                  } else {
                    v_HighestSetBit135__2 = iface.bits_lit(3U, "111");
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(v_HighestSetBit135__2, iface.bits_lit(3U, "011"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp141__2 = typename Traits::rt_expr{};
              v_Exp141__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If142__1 = iface.bits_zero(iface.bigint_lit("129"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_If144__2 = iface.bits_zero(iface.bigint_lit("129"));
                if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9")))) {
                  v_If144__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bigint_lit("129"));
                } else {
                  v_If144__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))), iface.bigint_lit("129"));
                } // if
                v_If142__1 = v_If144__2;
              } else {
                v_If142__1 = iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
              } // if
              auto v_If147__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If147__2 = iface.f_gen_ZeroExtend(v_Exp141__2, iface.f_gen_int_lit(iface.bigint_lit("129")));
              } else {
                v_If147__2 = iface.f_gen_SignExtend(v_Exp141__2, iface.f_gen_int_lit(iface.bigint_lit("129")));
              } // if
              auto v_If151__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9")))) {
                v_If151__2 = iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If147__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If142__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))));
              } else {
                v_If151__2 = iface.f_gen_lsl_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If147__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If142__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))));
              } // if
              auto v_SatQ152__2 = typename Traits::rt_expr{};
              auto v_SatQ153__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ154__3 = iface.f_decl_bv("UnsignedSatQ154__3", iface.bigint_lit("64"));
                const auto v_UnsignedSatQ155__3 = iface.f_decl_bool("UnsignedSatQ155__3");
                const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If151__2));
                iface.f_switch_context(iface.f_true_branch(v_temp15));
                iface.f_gen_store(v_UnsignedSatQ154__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ155__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp15));
                const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If151__2, iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp16));
                iface.f_gen_store(v_UnsignedSatQ154__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ155__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp16));
                iface.f_gen_store(v_UnsignedSatQ154__3, iface.f_gen_slice(v_If151__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_UnsignedSatQ155__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp15));
                v_SatQ152__2 = iface.f_gen_load(v_UnsignedSatQ154__3);
                v_SatQ153__2 = iface.f_gen_load(v_UnsignedSatQ155__3);
              } else {
                const auto v_SignedSatQ160__3 = iface.f_decl_bv("SignedSatQ160__3", iface.bigint_lit("64"));
                const auto v_SignedSatQ161__3 = iface.f_decl_bool("SignedSatQ161__3");
                const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), v_If151__2));
                iface.f_switch_context(iface.f_true_branch(v_temp17));
                iface.f_gen_store(v_SignedSatQ160__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ161__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp17));
                const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If151__2, iface.f_gen_bit_lit(iface.bits_lit(130U, "1111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp18));
                iface.f_gen_store(v_SignedSatQ160__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ161__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp18));
                iface.f_gen_store(v_SignedSatQ160__3, iface.f_gen_slice(v_If151__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_SignedSatQ161__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp17));
                v_SatQ152__2 = iface.f_gen_load(v_SignedSatQ160__3);
                v_SatQ153__2 = iface.f_gen_load(v_SignedSatQ161__3);
              } // if
              const auto v_temp19 = iface.f_gen_branch(v_SatQ153__2);
              iface.f_switch_context(iface.f_true_branch(v_temp19));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp19));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ152__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_shift_right_narrow_uniform_sisd


} // namespace aslp
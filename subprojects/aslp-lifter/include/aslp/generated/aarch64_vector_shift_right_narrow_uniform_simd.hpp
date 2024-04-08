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
void aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_uniform_simd(typename Traits::bits v_enc) {
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
        auto v_Exp10__2 = typename Traits::rt_expr{};
        v_Exp10__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If11__1 = iface.bits_zero(iface.bigint_lit("17"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_If13__2 = iface.bits_zero(iface.bigint_lit("17"));
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
            v_If13__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(16U, "0000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("17"));
          } else {
            v_If13__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("17"));
          } // if
          v_If11__1 = v_If13__2;
        } else {
          v_If11__1 = iface.bits_lit(17U, "00000000000000000");
        } // if
        auto v_If16__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If16__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If16__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If20__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If20__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If16__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If20__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If16__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ21__2 = typename Traits::rt_expr{};
        auto v_SatQ22__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ23__3 = iface.f_decl_bv("UnsignedSatQ23__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ24__3 = iface.f_decl_bool("UnsignedSatQ24__3");
          const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If20__2));
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp0));
          const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If20__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp1));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_slice(v_If20__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          v_SatQ21__2 = iface.f_gen_load(v_UnsignedSatQ23__3);
          v_SatQ22__2 = iface.f_gen_load(v_UnsignedSatQ24__3);
        } else {
          const auto v_SignedSatQ29__3 = iface.f_decl_bv("SignedSatQ29__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ30__3 = iface.f_decl_bool("SignedSatQ30__3");
          const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If20__2));
          iface.f_switch_context(iface.f_true_branch(v_temp2));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp2));
          const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If20__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp3));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp3));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_slice(v_If20__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp2));
          v_SatQ21__2 = iface.f_gen_load(v_SignedSatQ29__3);
          v_SatQ22__2 = iface.f_gen_load(v_SignedSatQ30__3);
        } // if
        const auto v_temp4 = iface.f_gen_branch(v_SatQ22__2);
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        auto v_If44__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If44__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If44__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If48__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If48__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If44__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If48__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If44__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ49__2 = typename Traits::rt_expr{};
        auto v_SatQ50__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ51__3 = iface.f_decl_bv("UnsignedSatQ51__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ52__3 = iface.f_decl_bool("UnsignedSatQ52__3");
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If48__2));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(v_UnsignedSatQ51__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ52__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp5));
          const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If48__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_UnsignedSatQ51__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ52__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          iface.f_gen_store(v_UnsignedSatQ51__3, iface.f_gen_slice(v_If48__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ52__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp5));
          v_SatQ49__2 = iface.f_gen_load(v_UnsignedSatQ51__3);
          v_SatQ50__2 = iface.f_gen_load(v_UnsignedSatQ52__3);
        } else {
          const auto v_SignedSatQ57__3 = iface.f_decl_bv("SignedSatQ57__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ58__3 = iface.f_decl_bool("SignedSatQ58__3");
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If48__2));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_SignedSatQ57__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ58__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If48__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(v_SignedSatQ57__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ58__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp8));
          iface.f_gen_store(v_SignedSatQ57__3, iface.f_gen_slice(v_If48__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ58__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          v_SatQ49__2 = iface.f_gen_load(v_SignedSatQ57__3);
          v_SatQ50__2 = iface.f_gen_load(v_SignedSatQ58__3);
        } // if
        const auto v_temp9 = iface.f_gen_branch(v_SatQ50__2);
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        auto v_If71__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If71__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If71__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If75__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If75__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If71__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If75__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If71__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ76__2 = typename Traits::rt_expr{};
        auto v_SatQ77__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ78__3 = iface.f_decl_bv("UnsignedSatQ78__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ79__3 = iface.f_decl_bool("UnsignedSatQ79__3");
          const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If75__2));
          iface.f_switch_context(iface.f_true_branch(v_temp10));
          iface.f_gen_store(v_UnsignedSatQ78__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ79__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp10));
          const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If75__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp11));
          iface.f_gen_store(v_UnsignedSatQ78__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ79__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp11));
          iface.f_gen_store(v_UnsignedSatQ78__3, iface.f_gen_slice(v_If75__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ79__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp10));
          v_SatQ76__2 = iface.f_gen_load(v_UnsignedSatQ78__3);
          v_SatQ77__2 = iface.f_gen_load(v_UnsignedSatQ79__3);
        } else {
          const auto v_SignedSatQ84__3 = iface.f_decl_bv("SignedSatQ84__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ85__3 = iface.f_decl_bool("SignedSatQ85__3");
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If75__2));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(v_SignedSatQ84__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ85__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp12));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If75__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ84__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ85__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ84__3, iface.f_gen_slice(v_If75__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ85__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
          v_SatQ76__2 = iface.f_gen_load(v_SignedSatQ84__3);
          v_SatQ77__2 = iface.f_gen_load(v_SignedSatQ85__3);
        } // if
        const auto v_temp14 = iface.f_gen_branch(v_SatQ77__2);
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        auto v_If98__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If98__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If98__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If102__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If102__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If98__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If102__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If98__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ103__2 = typename Traits::rt_expr{};
        auto v_SatQ104__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ105__3 = iface.f_decl_bv("UnsignedSatQ105__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ106__3 = iface.f_decl_bool("UnsignedSatQ106__3");
          const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If102__2));
          iface.f_switch_context(iface.f_true_branch(v_temp15));
          iface.f_gen_store(v_UnsignedSatQ105__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ106__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp15));
          const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If102__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp16));
          iface.f_gen_store(v_UnsignedSatQ105__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ106__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp16));
          iface.f_gen_store(v_UnsignedSatQ105__3, iface.f_gen_slice(v_If102__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ106__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp15));
          v_SatQ103__2 = iface.f_gen_load(v_UnsignedSatQ105__3);
          v_SatQ104__2 = iface.f_gen_load(v_UnsignedSatQ106__3);
        } else {
          const auto v_SignedSatQ111__3 = iface.f_decl_bv("SignedSatQ111__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ112__3 = iface.f_decl_bool("SignedSatQ112__3");
          const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If102__2));
          iface.f_switch_context(iface.f_true_branch(v_temp17));
          iface.f_gen_store(v_SignedSatQ111__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ112__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp17));
          const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If102__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp18));
          iface.f_gen_store(v_SignedSatQ111__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ112__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp18));
          iface.f_gen_store(v_SignedSatQ111__3, iface.f_gen_slice(v_If102__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ112__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp17));
          v_SatQ103__2 = iface.f_gen_load(v_SignedSatQ111__3);
          v_SatQ104__2 = iface.f_gen_load(v_SignedSatQ112__3);
        } // if
        const auto v_temp19 = iface.f_gen_branch(v_SatQ104__2);
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp19));
        auto v_If125__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If125__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If125__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If129__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If129__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If125__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If129__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If125__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ130__2 = typename Traits::rt_expr{};
        auto v_SatQ131__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ132__3 = iface.f_decl_bv("UnsignedSatQ132__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ133__3 = iface.f_decl_bool("UnsignedSatQ133__3");
          const auto v_temp20 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If129__2));
          iface.f_switch_context(iface.f_true_branch(v_temp20));
          iface.f_gen_store(v_UnsignedSatQ132__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ133__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp20));
          const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If129__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp21));
          iface.f_gen_store(v_UnsignedSatQ132__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ133__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp21));
          iface.f_gen_store(v_UnsignedSatQ132__3, iface.f_gen_slice(v_If129__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ133__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp20));
          v_SatQ130__2 = iface.f_gen_load(v_UnsignedSatQ132__3);
          v_SatQ131__2 = iface.f_gen_load(v_UnsignedSatQ133__3);
        } else {
          const auto v_SignedSatQ138__3 = iface.f_decl_bv("SignedSatQ138__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ139__3 = iface.f_decl_bool("SignedSatQ139__3");
          const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If129__2));
          iface.f_switch_context(iface.f_true_branch(v_temp22));
          iface.f_gen_store(v_SignedSatQ138__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ139__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp22));
          const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If129__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp23));
          iface.f_gen_store(v_SignedSatQ138__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ139__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp23));
          iface.f_gen_store(v_SignedSatQ138__3, iface.f_gen_slice(v_If129__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ139__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp22));
          v_SatQ130__2 = iface.f_gen_load(v_SignedSatQ138__3);
          v_SatQ131__2 = iface.f_gen_load(v_SignedSatQ139__3);
        } // if
        const auto v_temp24 = iface.f_gen_branch(v_SatQ131__2);
        iface.f_switch_context(iface.f_true_branch(v_temp24));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp24));
        auto v_If152__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If152__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If152__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If156__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If156__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If152__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If156__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If152__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ157__2 = typename Traits::rt_expr{};
        auto v_SatQ158__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ159__3 = iface.f_decl_bv("UnsignedSatQ159__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ160__3 = iface.f_decl_bool("UnsignedSatQ160__3");
          const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If156__2));
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_UnsignedSatQ159__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ160__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If156__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_UnsignedSatQ159__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ160__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_UnsignedSatQ159__3, iface.f_gen_slice(v_If156__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ160__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp25));
          v_SatQ157__2 = iface.f_gen_load(v_UnsignedSatQ159__3);
          v_SatQ158__2 = iface.f_gen_load(v_UnsignedSatQ160__3);
        } else {
          const auto v_SignedSatQ165__3 = iface.f_decl_bv("SignedSatQ165__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ166__3 = iface.f_decl_bool("SignedSatQ166__3");
          const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If156__2));
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_SignedSatQ165__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ166__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If156__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_SignedSatQ165__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ166__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_SignedSatQ165__3, iface.f_gen_slice(v_If156__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ166__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          v_SatQ157__2 = iface.f_gen_load(v_SignedSatQ165__3);
          v_SatQ158__2 = iface.f_gen_load(v_SignedSatQ166__3);
        } // if
        const auto v_temp29 = iface.f_gen_branch(v_SatQ158__2);
        iface.f_switch_context(iface.f_true_branch(v_temp29));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp29));
        auto v_If179__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If179__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If179__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If183__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If183__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If179__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If183__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If179__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ184__2 = typename Traits::rt_expr{};
        auto v_SatQ185__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ186__3 = iface.f_decl_bv("UnsignedSatQ186__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ187__3 = iface.f_decl_bool("UnsignedSatQ187__3");
          const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If183__2));
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_UnsignedSatQ186__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ187__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If183__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_UnsignedSatQ186__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ187__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_UnsignedSatQ186__3, iface.f_gen_slice(v_If183__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ187__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          v_SatQ184__2 = iface.f_gen_load(v_UnsignedSatQ186__3);
          v_SatQ185__2 = iface.f_gen_load(v_UnsignedSatQ187__3);
        } else {
          const auto v_SignedSatQ192__3 = iface.f_decl_bv("SignedSatQ192__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ193__3 = iface.f_decl_bool("SignedSatQ193__3");
          const auto v_temp32 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If183__2));
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(v_SignedSatQ192__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ193__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp32));
          const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If183__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_SignedSatQ192__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ193__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_SignedSatQ192__3, iface.f_gen_slice(v_If183__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ193__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          v_SatQ184__2 = iface.f_gen_load(v_SignedSatQ192__3);
          v_SatQ185__2 = iface.f_gen_load(v_SignedSatQ193__3);
        } // if
        const auto v_temp34 = iface.f_gen_branch(v_SatQ185__2);
        iface.f_switch_context(iface.f_true_branch(v_temp34));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp34));
        auto v_If206__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If206__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If206__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If210__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If210__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If206__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If210__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If206__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        auto v_SatQ211__2 = typename Traits::rt_expr{};
        auto v_SatQ212__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ213__3 = iface.f_decl_bv("UnsignedSatQ213__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ214__3 = iface.f_decl_bool("UnsignedSatQ214__3");
          const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If210__2));
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(v_UnsignedSatQ213__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ214__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp35));
          const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If210__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp36));
          iface.f_gen_store(v_UnsignedSatQ213__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ214__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp36));
          iface.f_gen_store(v_UnsignedSatQ213__3, iface.f_gen_slice(v_If210__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ214__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          v_SatQ211__2 = iface.f_gen_load(v_UnsignedSatQ213__3);
          v_SatQ212__2 = iface.f_gen_load(v_UnsignedSatQ214__3);
        } else {
          const auto v_SignedSatQ219__3 = iface.f_decl_bv("SignedSatQ219__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ220__3 = iface.f_decl_bool("SignedSatQ220__3");
          const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111")), v_If210__2));
          iface.f_switch_context(iface.f_true_branch(v_temp37));
          iface.f_gen_store(v_SignedSatQ219__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ220__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp37));
          const auto v_temp38 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If210__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp38));
          iface.f_gen_store(v_SignedSatQ219__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ220__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp38));
          iface.f_gen_store(v_SignedSatQ219__3, iface.f_gen_slice(v_If210__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ220__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp37));
          v_SatQ211__2 = iface.f_gen_load(v_SignedSatQ219__3);
          v_SatQ212__2 = iface.f_gen_load(v_SignedSatQ220__3);
        } // if
        const auto v_temp39 = iface.f_gen_branch(v_SatQ212__2);
        iface.f_switch_context(iface.f_true_branch(v_temp39));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp39));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp233__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp233__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ211__2, iface.f_gen_append_bits(v_SatQ184__2, iface.f_gen_append_bits(v_SatQ157__2, iface.f_gen_append_bits(v_SatQ130__2, iface.f_gen_append_bits(v_SatQ103__2, iface.f_gen_append_bits(v_SatQ76__2, iface.f_gen_append_bits(v_SatQ49__2, v_SatQ21__2))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(v_SatQ211__2, iface.f_gen_append_bits(v_SatQ184__2, iface.f_gen_append_bits(v_SatQ157__2, iface.f_gen_append_bits(v_SatQ130__2, iface.f_gen_append_bits(v_SatQ103__2, iface.f_gen_append_bits(v_SatQ76__2, iface.f_gen_append_bits(v_SatQ49__2, v_SatQ21__2))))))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
        } // if
      } else {
        auto v_HighestSetBit247__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_HighestSetBit247__2 = iface.bits_lit(3U, "011");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit247__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit247__2 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit247__2 = iface.bits_lit(3U, "000");
              } else {
                v_HighestSetBit247__2 = iface.bits_lit(3U, "111");
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_HighestSetBit247__2, iface.bits_lit(3U, "001"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp254__2 = typename Traits::rt_expr{};
          v_Exp254__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If255__1 = iface.bits_zero(iface.bigint_lit("33"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_If257__2 = iface.bits_zero(iface.bigint_lit("33"));
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
              v_If257__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(32U, "00000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
            } else {
              v_If257__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
            } // if
            v_If255__1 = v_If257__2;
          } else {
            v_If255__1 = iface.bits_lit(33U, "000000000000000000000000000000000");
          } // if
          auto v_If260__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If260__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp254__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If260__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp254__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If264__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If264__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If260__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If255__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If264__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If260__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If255__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_SatQ265__2 = typename Traits::rt_expr{};
          auto v_SatQ266__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ267__3 = iface.f_decl_bv("UnsignedSatQ267__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ268__3 = iface.f_decl_bool("UnsignedSatQ268__3");
            const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If264__2));
            iface.f_switch_context(iface.f_true_branch(v_temp40));
            iface.f_gen_store(v_UnsignedSatQ267__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ268__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp40));
            const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If264__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp41));
            iface.f_gen_store(v_UnsignedSatQ267__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ268__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp41));
            iface.f_gen_store(v_UnsignedSatQ267__3, iface.f_gen_slice(v_If264__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ268__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp40));
            v_SatQ265__2 = iface.f_gen_load(v_UnsignedSatQ267__3);
            v_SatQ266__2 = iface.f_gen_load(v_UnsignedSatQ268__3);
          } else {
            const auto v_SignedSatQ273__3 = iface.f_decl_bv("SignedSatQ273__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ274__3 = iface.f_decl_bool("SignedSatQ274__3");
            const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If264__2));
            iface.f_switch_context(iface.f_true_branch(v_temp42));
            iface.f_gen_store(v_SignedSatQ273__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ274__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp42));
            const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If264__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp43));
            iface.f_gen_store(v_SignedSatQ273__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ274__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp43));
            iface.f_gen_store(v_SignedSatQ273__3, iface.f_gen_slice(v_If264__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ274__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp42));
            v_SatQ265__2 = iface.f_gen_load(v_SignedSatQ273__3);
            v_SatQ266__2 = iface.f_gen_load(v_SignedSatQ274__3);
          } // if
          const auto v_temp44 = iface.f_gen_branch(v_SatQ266__2);
          iface.f_switch_context(iface.f_true_branch(v_temp44));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp44));
          auto v_If288__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If288__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp254__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If288__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp254__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If292__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If292__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If288__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If255__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If292__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If288__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If255__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_SatQ293__2 = typename Traits::rt_expr{};
          auto v_SatQ294__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ295__3 = iface.f_decl_bv("UnsignedSatQ295__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ296__3 = iface.f_decl_bool("UnsignedSatQ296__3");
            const auto v_temp45 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If292__2));
            iface.f_switch_context(iface.f_true_branch(v_temp45));
            iface.f_gen_store(v_UnsignedSatQ295__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ296__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp45));
            const auto v_temp46 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If292__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp46));
            iface.f_gen_store(v_UnsignedSatQ295__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ296__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp46));
            iface.f_gen_store(v_UnsignedSatQ295__3, iface.f_gen_slice(v_If292__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ296__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp45));
            v_SatQ293__2 = iface.f_gen_load(v_UnsignedSatQ295__3);
            v_SatQ294__2 = iface.f_gen_load(v_UnsignedSatQ296__3);
          } else {
            const auto v_SignedSatQ301__3 = iface.f_decl_bv("SignedSatQ301__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ302__3 = iface.f_decl_bool("SignedSatQ302__3");
            const auto v_temp47 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If292__2));
            iface.f_switch_context(iface.f_true_branch(v_temp47));
            iface.f_gen_store(v_SignedSatQ301__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ302__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp47));
            const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If292__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp48));
            iface.f_gen_store(v_SignedSatQ301__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ302__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp48));
            iface.f_gen_store(v_SignedSatQ301__3, iface.f_gen_slice(v_If292__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ302__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp47));
            v_SatQ293__2 = iface.f_gen_load(v_SignedSatQ301__3);
            v_SatQ294__2 = iface.f_gen_load(v_SignedSatQ302__3);
          } // if
          const auto v_temp49 = iface.f_gen_branch(v_SatQ294__2);
          iface.f_switch_context(iface.f_true_branch(v_temp49));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp49));
          auto v_If315__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If315__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp254__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If315__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp254__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If319__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If319__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If315__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If255__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If319__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If315__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If255__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_SatQ320__2 = typename Traits::rt_expr{};
          auto v_SatQ321__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ322__3 = iface.f_decl_bv("UnsignedSatQ322__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ323__3 = iface.f_decl_bool("UnsignedSatQ323__3");
            const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If319__2));
            iface.f_switch_context(iface.f_true_branch(v_temp50));
            iface.f_gen_store(v_UnsignedSatQ322__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ323__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp50));
            const auto v_temp51 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If319__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp51));
            iface.f_gen_store(v_UnsignedSatQ322__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ323__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp51));
            iface.f_gen_store(v_UnsignedSatQ322__3, iface.f_gen_slice(v_If319__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ323__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp50));
            v_SatQ320__2 = iface.f_gen_load(v_UnsignedSatQ322__3);
            v_SatQ321__2 = iface.f_gen_load(v_UnsignedSatQ323__3);
          } else {
            const auto v_SignedSatQ328__3 = iface.f_decl_bv("SignedSatQ328__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ329__3 = iface.f_decl_bool("SignedSatQ329__3");
            const auto v_temp52 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If319__2));
            iface.f_switch_context(iface.f_true_branch(v_temp52));
            iface.f_gen_store(v_SignedSatQ328__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ329__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp52));
            const auto v_temp53 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If319__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp53));
            iface.f_gen_store(v_SignedSatQ328__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ329__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp53));
            iface.f_gen_store(v_SignedSatQ328__3, iface.f_gen_slice(v_If319__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ329__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp52));
            v_SatQ320__2 = iface.f_gen_load(v_SignedSatQ328__3);
            v_SatQ321__2 = iface.f_gen_load(v_SignedSatQ329__3);
          } // if
          const auto v_temp54 = iface.f_gen_branch(v_SatQ321__2);
          iface.f_switch_context(iface.f_true_branch(v_temp54));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp54));
          auto v_If342__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If342__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp254__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If342__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp254__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If346__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If346__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If342__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If255__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If346__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If342__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If255__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          auto v_SatQ347__2 = typename Traits::rt_expr{};
          auto v_SatQ348__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ349__3 = iface.f_decl_bv("UnsignedSatQ349__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ350__3 = iface.f_decl_bool("UnsignedSatQ350__3");
            const auto v_temp55 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If346__2));
            iface.f_switch_context(iface.f_true_branch(v_temp55));
            iface.f_gen_store(v_UnsignedSatQ349__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ350__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp55));
            const auto v_temp56 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If346__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp56));
            iface.f_gen_store(v_UnsignedSatQ349__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ350__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp56));
            iface.f_gen_store(v_UnsignedSatQ349__3, iface.f_gen_slice(v_If346__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ350__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp55));
            v_SatQ347__2 = iface.f_gen_load(v_UnsignedSatQ349__3);
            v_SatQ348__2 = iface.f_gen_load(v_UnsignedSatQ350__3);
          } else {
            const auto v_SignedSatQ355__3 = iface.f_decl_bv("SignedSatQ355__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ356__3 = iface.f_decl_bool("SignedSatQ356__3");
            const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111")), v_If346__2));
            iface.f_switch_context(iface.f_true_branch(v_temp57));
            iface.f_gen_store(v_SignedSatQ355__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ356__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp57));
            const auto v_temp58 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If346__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp58));
            iface.f_gen_store(v_SignedSatQ355__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ356__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp58));
            iface.f_gen_store(v_SignedSatQ355__3, iface.f_gen_slice(v_If346__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ356__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp57));
            v_SatQ347__2 = iface.f_gen_load(v_SignedSatQ355__3);
            v_SatQ348__2 = iface.f_gen_load(v_SignedSatQ356__3);
          } // if
          const auto v_temp59 = iface.f_gen_branch(v_SatQ348__2);
          iface.f_switch_context(iface.f_true_branch(v_temp59));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp59));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp369__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp369__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ347__2, iface.f_gen_append_bits(v_SatQ320__2, iface.f_gen_append_bits(v_SatQ293__2, v_SatQ265__2))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(v_SatQ347__2, iface.f_gen_append_bits(v_SatQ320__2, iface.f_gen_append_bits(v_SatQ293__2, v_SatQ265__2))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
          } // if
        } else {
          auto v_HighestSetBit383__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit383__2 = iface.bits_lit(3U, "011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit383__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit383__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit383__2 = iface.bits_lit(3U, "000");
                } else {
                  v_HighestSetBit383__2 = iface.bits_lit(3U, "111");
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(v_HighestSetBit383__2, iface.bits_lit(3U, "010"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp390__2 = typename Traits::rt_expr{};
            v_Exp390__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If391__1 = iface.bits_zero(iface.bigint_lit("65"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_If393__2 = iface.bits_zero(iface.bigint_lit("65"));
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                v_If393__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
              } else {
                v_If393__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
              } // if
              v_If391__1 = v_If393__2;
            } else {
              v_If391__1 = iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000");
            } // if
            auto v_If396__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If396__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp390__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If396__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp390__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            auto v_If400__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If400__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If396__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If391__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If400__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If396__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If391__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_SatQ401__2 = typename Traits::rt_expr{};
            auto v_SatQ402__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ403__3 = iface.f_decl_bv("UnsignedSatQ403__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ404__3 = iface.f_decl_bool("UnsignedSatQ404__3");
              const auto v_temp60 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If400__2));
              iface.f_switch_context(iface.f_true_branch(v_temp60));
              iface.f_gen_store(v_UnsignedSatQ403__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ404__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp60));
              const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If400__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp61));
              iface.f_gen_store(v_UnsignedSatQ403__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ404__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp61));
              iface.f_gen_store(v_UnsignedSatQ403__3, iface.f_gen_slice(v_If400__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ404__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp60));
              v_SatQ401__2 = iface.f_gen_load(v_UnsignedSatQ403__3);
              v_SatQ402__2 = iface.f_gen_load(v_UnsignedSatQ404__3);
            } else {
              const auto v_SignedSatQ409__3 = iface.f_decl_bv("SignedSatQ409__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ410__3 = iface.f_decl_bool("SignedSatQ410__3");
              const auto v_temp62 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If400__2));
              iface.f_switch_context(iface.f_true_branch(v_temp62));
              iface.f_gen_store(v_SignedSatQ409__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ410__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp62));
              const auto v_temp63 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If400__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp63));
              iface.f_gen_store(v_SignedSatQ409__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ410__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp63));
              iface.f_gen_store(v_SignedSatQ409__3, iface.f_gen_slice(v_If400__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ410__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp62));
              v_SatQ401__2 = iface.f_gen_load(v_SignedSatQ409__3);
              v_SatQ402__2 = iface.f_gen_load(v_SignedSatQ410__3);
            } // if
            const auto v_temp64 = iface.f_gen_branch(v_SatQ402__2);
            iface.f_switch_context(iface.f_true_branch(v_temp64));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp64));
            auto v_If424__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If424__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp390__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If424__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp390__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            auto v_If428__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If428__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If424__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If391__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If428__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If424__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If391__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            auto v_SatQ429__2 = typename Traits::rt_expr{};
            auto v_SatQ430__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ431__3 = iface.f_decl_bv("UnsignedSatQ431__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ432__3 = iface.f_decl_bool("UnsignedSatQ432__3");
              const auto v_temp65 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If428__2));
              iface.f_switch_context(iface.f_true_branch(v_temp65));
              iface.f_gen_store(v_UnsignedSatQ431__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ432__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp65));
              const auto v_temp66 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If428__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp66));
              iface.f_gen_store(v_UnsignedSatQ431__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ432__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp66));
              iface.f_gen_store(v_UnsignedSatQ431__3, iface.f_gen_slice(v_If428__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ432__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp65));
              v_SatQ429__2 = iface.f_gen_load(v_UnsignedSatQ431__3);
              v_SatQ430__2 = iface.f_gen_load(v_UnsignedSatQ432__3);
            } else {
              const auto v_SignedSatQ437__3 = iface.f_decl_bv("SignedSatQ437__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ438__3 = iface.f_decl_bool("SignedSatQ438__3");
              const auto v_temp67 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111")), v_If428__2));
              iface.f_switch_context(iface.f_true_branch(v_temp67));
              iface.f_gen_store(v_SignedSatQ437__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ438__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp67));
              const auto v_temp68 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If428__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp68));
              iface.f_gen_store(v_SignedSatQ437__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ438__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp68));
              iface.f_gen_store(v_SignedSatQ437__3, iface.f_gen_slice(v_If428__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ438__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp67));
              v_SatQ429__2 = iface.f_gen_load(v_SignedSatQ437__3);
              v_SatQ430__2 = iface.f_gen_load(v_SignedSatQ438__3);
            } // if
            const auto v_temp69 = iface.f_gen_branch(v_SatQ430__2);
            iface.f_switch_context(iface.f_true_branch(v_temp69));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp69));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp451__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp451__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ429__2, v_SatQ401__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(v_SatQ429__2, v_SatQ401__2), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
            } // if
          } else {
            auto v_HighestSetBit465__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit465__2 = iface.bits_lit(3U, "011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit465__2 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit465__2 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit465__2 = iface.bits_lit(3U, "000");
                  } else {
                    v_HighestSetBit465__2 = iface.bits_lit(3U, "111");
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(v_HighestSetBit465__2, iface.bits_lit(3U, "011"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp472__2 = typename Traits::rt_expr{};
              v_Exp472__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If473__1 = iface.bits_zero(iface.bigint_lit("129"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_If475__2 = iface.bits_zero(iface.bigint_lit("129"));
                if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9")))) {
                  v_If475__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bigint_lit("129"));
                } else {
                  v_If475__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))), iface.bigint_lit("129"));
                } // if
                v_If473__1 = v_If475__2;
              } else {
                v_If473__1 = iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
              } // if
              auto v_If478__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If478__2 = iface.f_gen_ZeroExtend(v_Exp472__2, iface.f_gen_int_lit(iface.bigint_lit("129")));
              } else {
                v_If478__2 = iface.f_gen_SignExtend(v_Exp472__2, iface.f_gen_int_lit(iface.bigint_lit("129")));
              } // if
              auto v_If482__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9")))) {
                v_If482__2 = iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If478__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If473__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))));
              } else {
                v_If482__2 = iface.f_gen_lsl_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If478__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If473__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))));
              } // if
              auto v_SatQ483__2 = typename Traits::rt_expr{};
              auto v_SatQ484__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ485__3 = iface.f_decl_bv("UnsignedSatQ485__3", iface.bigint_lit("64"));
                const auto v_UnsignedSatQ486__3 = iface.f_decl_bool("UnsignedSatQ486__3");
                const auto v_temp70 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If482__2));
                iface.f_switch_context(iface.f_true_branch(v_temp70));
                iface.f_gen_store(v_UnsignedSatQ485__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ486__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp70));
                const auto v_temp71 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If482__2, iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp71));
                iface.f_gen_store(v_UnsignedSatQ485__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ486__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp71));
                iface.f_gen_store(v_UnsignedSatQ485__3, iface.f_gen_slice(v_If482__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_UnsignedSatQ486__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp70));
                v_SatQ483__2 = iface.f_gen_load(v_UnsignedSatQ485__3);
                v_SatQ484__2 = iface.f_gen_load(v_UnsignedSatQ486__3);
              } else {
                const auto v_SignedSatQ491__3 = iface.f_decl_bv("SignedSatQ491__3", iface.bigint_lit("64"));
                const auto v_SignedSatQ492__3 = iface.f_decl_bool("SignedSatQ492__3");
                const auto v_temp72 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), v_If482__2));
                iface.f_switch_context(iface.f_true_branch(v_temp72));
                iface.f_gen_store(v_SignedSatQ491__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ492__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp72));
                const auto v_temp73 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If482__2, iface.f_gen_bit_lit(iface.bits_lit(130U, "1111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp73));
                iface.f_gen_store(v_SignedSatQ491__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ492__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp73));
                iface.f_gen_store(v_SignedSatQ491__3, iface.f_gen_slice(v_If482__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_SignedSatQ492__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp72));
                v_SatQ483__2 = iface.f_gen_load(v_SignedSatQ491__3);
                v_SatQ484__2 = iface.f_gen_load(v_SignedSatQ492__3);
              } // if
              const auto v_temp74 = iface.f_gen_branch(v_SatQ484__2);
              iface.f_switch_context(iface.f_true_branch(v_temp74));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp74));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp506__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
              assert(v_Exp506__2);
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ483__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ483__2, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } // if
            } else {
              auto v_HighestSetBit520__2 = iface.bits_zero(iface.bigint_lit("3"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit520__2 = iface.bits_lit(3U, "011");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit520__2 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit520__2 = iface.bits_lit(3U, "001");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                      v_HighestSetBit520__2 = iface.bits_lit(3U, "000");
                    } else {
                      v_HighestSetBit520__2 = iface.bits_lit(3U, "111");
                    } // if
                  } // if
                } // if
              } // if
              if (iface.f_eq_bits(v_HighestSetBit520__2, iface.bits_lit(3U, "111"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp527__2 = typename Traits::rt_expr{};
                v_Exp527__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                auto v_If528__1 = iface.bits_zero(iface.bigint_lit("9"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_If530__2 = iface.bits_zero(iface.bigint_lit("9"));
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                    v_If530__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(8U, "00000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("9"));
                  } else {
                    v_If530__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("9"));
                  } // if
                  v_If528__1 = v_If530__2;
                } else {
                  v_If528__1 = iface.bits_lit(9U, "000000000");
                } // if
                auto v_If533__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If533__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If533__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If537__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If537__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If533__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If537__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If533__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ538__2 = typename Traits::rt_expr{};
                auto v_SatQ539__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ540__3 = iface.f_decl_bv("UnsignedSatQ540__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ541__3 = iface.f_decl_bool("UnsignedSatQ541__3");
                  const auto v_temp75 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If537__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp75));
                  iface.f_gen_store(v_UnsignedSatQ540__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ541__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp75));
                  const auto v_temp76 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If537__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp76));
                  iface.f_gen_store(v_UnsignedSatQ540__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ541__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp76));
                  iface.f_gen_store(v_UnsignedSatQ540__3, iface.f_gen_slice(v_If537__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ541__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp75));
                  v_SatQ538__2 = iface.f_gen_load(v_UnsignedSatQ540__3);
                  v_SatQ539__2 = iface.f_gen_load(v_UnsignedSatQ541__3);
                } else {
                  const auto v_SignedSatQ546__3 = iface.f_decl_bv("SignedSatQ546__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ547__3 = iface.f_decl_bool("SignedSatQ547__3");
                  const auto v_temp77 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If537__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp77));
                  iface.f_gen_store(v_SignedSatQ546__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ547__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp77));
                  const auto v_temp78 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If537__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp78));
                  iface.f_gen_store(v_SignedSatQ546__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ547__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp78));
                  iface.f_gen_store(v_SignedSatQ546__3, iface.f_gen_slice(v_If537__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ547__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp77));
                  v_SatQ538__2 = iface.f_gen_load(v_SignedSatQ546__3);
                  v_SatQ539__2 = iface.f_gen_load(v_SignedSatQ547__3);
                } // if
                const auto v_temp79 = iface.f_gen_branch(v_SatQ539__2);
                iface.f_switch_context(iface.f_true_branch(v_temp79));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp79));
                auto v_If561__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If561__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If561__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If565__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If565__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If561__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If565__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If561__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ566__2 = typename Traits::rt_expr{};
                auto v_SatQ567__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ568__3 = iface.f_decl_bv("UnsignedSatQ568__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ569__3 = iface.f_decl_bool("UnsignedSatQ569__3");
                  const auto v_temp80 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If565__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp80));
                  iface.f_gen_store(v_UnsignedSatQ568__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ569__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp80));
                  const auto v_temp81 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If565__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp81));
                  iface.f_gen_store(v_UnsignedSatQ568__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ569__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp81));
                  iface.f_gen_store(v_UnsignedSatQ568__3, iface.f_gen_slice(v_If565__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ569__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp80));
                  v_SatQ566__2 = iface.f_gen_load(v_UnsignedSatQ568__3);
                  v_SatQ567__2 = iface.f_gen_load(v_UnsignedSatQ569__3);
                } else {
                  const auto v_SignedSatQ574__3 = iface.f_decl_bv("SignedSatQ574__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ575__3 = iface.f_decl_bool("SignedSatQ575__3");
                  const auto v_temp82 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If565__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp82));
                  iface.f_gen_store(v_SignedSatQ574__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ575__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp82));
                  const auto v_temp83 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If565__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp83));
                  iface.f_gen_store(v_SignedSatQ574__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ575__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp83));
                  iface.f_gen_store(v_SignedSatQ574__3, iface.f_gen_slice(v_If565__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ575__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp82));
                  v_SatQ566__2 = iface.f_gen_load(v_SignedSatQ574__3);
                  v_SatQ567__2 = iface.f_gen_load(v_SignedSatQ575__3);
                } // if
                const auto v_temp84 = iface.f_gen_branch(v_SatQ567__2);
                iface.f_switch_context(iface.f_true_branch(v_temp84));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp84));
                auto v_If588__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If588__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If588__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If592__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If592__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If588__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If592__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If588__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ593__2 = typename Traits::rt_expr{};
                auto v_SatQ594__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ595__3 = iface.f_decl_bv("UnsignedSatQ595__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ596__3 = iface.f_decl_bool("UnsignedSatQ596__3");
                  const auto v_temp85 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If592__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp85));
                  iface.f_gen_store(v_UnsignedSatQ595__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ596__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp85));
                  const auto v_temp86 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If592__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp86));
                  iface.f_gen_store(v_UnsignedSatQ595__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ596__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp86));
                  iface.f_gen_store(v_UnsignedSatQ595__3, iface.f_gen_slice(v_If592__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ596__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp85));
                  v_SatQ593__2 = iface.f_gen_load(v_UnsignedSatQ595__3);
                  v_SatQ594__2 = iface.f_gen_load(v_UnsignedSatQ596__3);
                } else {
                  const auto v_SignedSatQ601__3 = iface.f_decl_bv("SignedSatQ601__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ602__3 = iface.f_decl_bool("SignedSatQ602__3");
                  const auto v_temp87 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If592__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp87));
                  iface.f_gen_store(v_SignedSatQ601__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ602__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp87));
                  const auto v_temp88 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If592__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp88));
                  iface.f_gen_store(v_SignedSatQ601__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ602__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp88));
                  iface.f_gen_store(v_SignedSatQ601__3, iface.f_gen_slice(v_If592__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ602__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp87));
                  v_SatQ593__2 = iface.f_gen_load(v_SignedSatQ601__3);
                  v_SatQ594__2 = iface.f_gen_load(v_SignedSatQ602__3);
                } // if
                const auto v_temp89 = iface.f_gen_branch(v_SatQ594__2);
                iface.f_switch_context(iface.f_true_branch(v_temp89));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp89));
                auto v_If615__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If615__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If615__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If619__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If619__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If615__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If619__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If615__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ620__2 = typename Traits::rt_expr{};
                auto v_SatQ621__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ622__3 = iface.f_decl_bv("UnsignedSatQ622__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ623__3 = iface.f_decl_bool("UnsignedSatQ623__3");
                  const auto v_temp90 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If619__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp90));
                  iface.f_gen_store(v_UnsignedSatQ622__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ623__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp90));
                  const auto v_temp91 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If619__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp91));
                  iface.f_gen_store(v_UnsignedSatQ622__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ623__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp91));
                  iface.f_gen_store(v_UnsignedSatQ622__3, iface.f_gen_slice(v_If619__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ623__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp90));
                  v_SatQ620__2 = iface.f_gen_load(v_UnsignedSatQ622__3);
                  v_SatQ621__2 = iface.f_gen_load(v_UnsignedSatQ623__3);
                } else {
                  const auto v_SignedSatQ628__3 = iface.f_decl_bv("SignedSatQ628__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ629__3 = iface.f_decl_bool("SignedSatQ629__3");
                  const auto v_temp92 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If619__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp92));
                  iface.f_gen_store(v_SignedSatQ628__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ629__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp92));
                  const auto v_temp93 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If619__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp93));
                  iface.f_gen_store(v_SignedSatQ628__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ629__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp93));
                  iface.f_gen_store(v_SignedSatQ628__3, iface.f_gen_slice(v_If619__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ629__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp92));
                  v_SatQ620__2 = iface.f_gen_load(v_SignedSatQ628__3);
                  v_SatQ621__2 = iface.f_gen_load(v_SignedSatQ629__3);
                } // if
                const auto v_temp94 = iface.f_gen_branch(v_SatQ621__2);
                iface.f_switch_context(iface.f_true_branch(v_temp94));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp94));
                auto v_If642__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If642__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If642__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If646__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If646__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If642__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If646__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If642__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ647__2 = typename Traits::rt_expr{};
                auto v_SatQ648__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ649__3 = iface.f_decl_bv("UnsignedSatQ649__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ650__3 = iface.f_decl_bool("UnsignedSatQ650__3");
                  const auto v_temp95 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If646__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp95));
                  iface.f_gen_store(v_UnsignedSatQ649__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ650__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp95));
                  const auto v_temp96 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If646__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp96));
                  iface.f_gen_store(v_UnsignedSatQ649__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ650__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp96));
                  iface.f_gen_store(v_UnsignedSatQ649__3, iface.f_gen_slice(v_If646__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ650__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp95));
                  v_SatQ647__2 = iface.f_gen_load(v_UnsignedSatQ649__3);
                  v_SatQ648__2 = iface.f_gen_load(v_UnsignedSatQ650__3);
                } else {
                  const auto v_SignedSatQ655__3 = iface.f_decl_bv("SignedSatQ655__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ656__3 = iface.f_decl_bool("SignedSatQ656__3");
                  const auto v_temp97 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If646__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp97));
                  iface.f_gen_store(v_SignedSatQ655__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ656__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp97));
                  const auto v_temp98 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If646__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp98));
                  iface.f_gen_store(v_SignedSatQ655__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ656__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp98));
                  iface.f_gen_store(v_SignedSatQ655__3, iface.f_gen_slice(v_If646__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ656__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp97));
                  v_SatQ647__2 = iface.f_gen_load(v_SignedSatQ655__3);
                  v_SatQ648__2 = iface.f_gen_load(v_SignedSatQ656__3);
                } // if
                const auto v_temp99 = iface.f_gen_branch(v_SatQ648__2);
                iface.f_switch_context(iface.f_true_branch(v_temp99));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp99));
                auto v_If669__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If669__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If669__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If673__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If673__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If669__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If673__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If669__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ674__2 = typename Traits::rt_expr{};
                auto v_SatQ675__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ676__3 = iface.f_decl_bv("UnsignedSatQ676__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ677__3 = iface.f_decl_bool("UnsignedSatQ677__3");
                  const auto v_temp100 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If673__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp100));
                  iface.f_gen_store(v_UnsignedSatQ676__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ677__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp100));
                  const auto v_temp101 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If673__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp101));
                  iface.f_gen_store(v_UnsignedSatQ676__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ677__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp101));
                  iface.f_gen_store(v_UnsignedSatQ676__3, iface.f_gen_slice(v_If673__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ677__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp100));
                  v_SatQ674__2 = iface.f_gen_load(v_UnsignedSatQ676__3);
                  v_SatQ675__2 = iface.f_gen_load(v_UnsignedSatQ677__3);
                } else {
                  const auto v_SignedSatQ682__3 = iface.f_decl_bv("SignedSatQ682__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ683__3 = iface.f_decl_bool("SignedSatQ683__3");
                  const auto v_temp102 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If673__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp102));
                  iface.f_gen_store(v_SignedSatQ682__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ683__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp102));
                  const auto v_temp103 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If673__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp103));
                  iface.f_gen_store(v_SignedSatQ682__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ683__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp103));
                  iface.f_gen_store(v_SignedSatQ682__3, iface.f_gen_slice(v_If673__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ683__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp102));
                  v_SatQ674__2 = iface.f_gen_load(v_SignedSatQ682__3);
                  v_SatQ675__2 = iface.f_gen_load(v_SignedSatQ683__3);
                } // if
                const auto v_temp104 = iface.f_gen_branch(v_SatQ675__2);
                iface.f_switch_context(iface.f_true_branch(v_temp104));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp104));
                auto v_If696__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If696__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If696__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If700__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If700__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If696__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If700__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If696__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ701__2 = typename Traits::rt_expr{};
                auto v_SatQ702__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ703__3 = iface.f_decl_bv("UnsignedSatQ703__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ704__3 = iface.f_decl_bool("UnsignedSatQ704__3");
                  const auto v_temp105 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If700__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp105));
                  iface.f_gen_store(v_UnsignedSatQ703__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ704__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp105));
                  const auto v_temp106 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If700__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp106));
                  iface.f_gen_store(v_UnsignedSatQ703__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ704__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp106));
                  iface.f_gen_store(v_UnsignedSatQ703__3, iface.f_gen_slice(v_If700__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ704__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp105));
                  v_SatQ701__2 = iface.f_gen_load(v_UnsignedSatQ703__3);
                  v_SatQ702__2 = iface.f_gen_load(v_UnsignedSatQ704__3);
                } else {
                  const auto v_SignedSatQ709__3 = iface.f_decl_bv("SignedSatQ709__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ710__3 = iface.f_decl_bool("SignedSatQ710__3");
                  const auto v_temp107 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If700__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp107));
                  iface.f_gen_store(v_SignedSatQ709__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ710__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp107));
                  const auto v_temp108 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If700__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp108));
                  iface.f_gen_store(v_SignedSatQ709__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ710__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp108));
                  iface.f_gen_store(v_SignedSatQ709__3, iface.f_gen_slice(v_If700__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ710__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp107));
                  v_SatQ701__2 = iface.f_gen_load(v_SignedSatQ709__3);
                  v_SatQ702__2 = iface.f_gen_load(v_SignedSatQ710__3);
                } // if
                const auto v_temp109 = iface.f_gen_branch(v_SatQ702__2);
                iface.f_switch_context(iface.f_true_branch(v_temp109));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp109));
                auto v_If723__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If723__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If723__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If727__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If727__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If723__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If727__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If723__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ728__2 = typename Traits::rt_expr{};
                auto v_SatQ729__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ730__3 = iface.f_decl_bv("UnsignedSatQ730__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ731__3 = iface.f_decl_bool("UnsignedSatQ731__3");
                  const auto v_temp110 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If727__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp110));
                  iface.f_gen_store(v_UnsignedSatQ730__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ731__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp110));
                  const auto v_temp111 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If727__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp111));
                  iface.f_gen_store(v_UnsignedSatQ730__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ731__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp111));
                  iface.f_gen_store(v_UnsignedSatQ730__3, iface.f_gen_slice(v_If727__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ731__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp110));
                  v_SatQ728__2 = iface.f_gen_load(v_UnsignedSatQ730__3);
                  v_SatQ729__2 = iface.f_gen_load(v_UnsignedSatQ731__3);
                } else {
                  const auto v_SignedSatQ736__3 = iface.f_decl_bv("SignedSatQ736__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ737__3 = iface.f_decl_bool("SignedSatQ737__3");
                  const auto v_temp112 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If727__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp112));
                  iface.f_gen_store(v_SignedSatQ736__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ737__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp112));
                  const auto v_temp113 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If727__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp113));
                  iface.f_gen_store(v_SignedSatQ736__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ737__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp113));
                  iface.f_gen_store(v_SignedSatQ736__3, iface.f_gen_slice(v_If727__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ737__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp112));
                  v_SatQ728__2 = iface.f_gen_load(v_SignedSatQ736__3);
                  v_SatQ729__2 = iface.f_gen_load(v_SignedSatQ737__3);
                } // if
                const auto v_temp114 = iface.f_gen_branch(v_SatQ729__2);
                iface.f_switch_context(iface.f_true_branch(v_temp114));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp114));
                auto v_If750__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If750__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If750__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If754__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If754__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If750__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If754__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If750__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ755__2 = typename Traits::rt_expr{};
                auto v_SatQ756__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ757__3 = iface.f_decl_bv("UnsignedSatQ757__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ758__3 = iface.f_decl_bool("UnsignedSatQ758__3");
                  const auto v_temp115 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If754__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp115));
                  iface.f_gen_store(v_UnsignedSatQ757__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ758__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp115));
                  const auto v_temp116 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If754__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp116));
                  iface.f_gen_store(v_UnsignedSatQ757__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ758__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp116));
                  iface.f_gen_store(v_UnsignedSatQ757__3, iface.f_gen_slice(v_If754__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ758__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp115));
                  v_SatQ755__2 = iface.f_gen_load(v_UnsignedSatQ757__3);
                  v_SatQ756__2 = iface.f_gen_load(v_UnsignedSatQ758__3);
                } else {
                  const auto v_SignedSatQ763__3 = iface.f_decl_bv("SignedSatQ763__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ764__3 = iface.f_decl_bool("SignedSatQ764__3");
                  const auto v_temp117 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If754__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp117));
                  iface.f_gen_store(v_SignedSatQ763__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ764__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp117));
                  const auto v_temp118 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If754__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp118));
                  iface.f_gen_store(v_SignedSatQ763__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ764__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp118));
                  iface.f_gen_store(v_SignedSatQ763__3, iface.f_gen_slice(v_If754__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ764__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp117));
                  v_SatQ755__2 = iface.f_gen_load(v_SignedSatQ763__3);
                  v_SatQ756__2 = iface.f_gen_load(v_SignedSatQ764__3);
                } // if
                const auto v_temp119 = iface.f_gen_branch(v_SatQ756__2);
                iface.f_switch_context(iface.f_true_branch(v_temp119));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp119));
                auto v_If777__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If777__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If777__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If781__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If781__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If777__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If781__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If777__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ782__2 = typename Traits::rt_expr{};
                auto v_SatQ783__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ784__3 = iface.f_decl_bv("UnsignedSatQ784__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ785__3 = iface.f_decl_bool("UnsignedSatQ785__3");
                  const auto v_temp120 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If781__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp120));
                  iface.f_gen_store(v_UnsignedSatQ784__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ785__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp120));
                  const auto v_temp121 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If781__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp121));
                  iface.f_gen_store(v_UnsignedSatQ784__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ785__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp121));
                  iface.f_gen_store(v_UnsignedSatQ784__3, iface.f_gen_slice(v_If781__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ785__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp120));
                  v_SatQ782__2 = iface.f_gen_load(v_UnsignedSatQ784__3);
                  v_SatQ783__2 = iface.f_gen_load(v_UnsignedSatQ785__3);
                } else {
                  const auto v_SignedSatQ790__3 = iface.f_decl_bv("SignedSatQ790__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ791__3 = iface.f_decl_bool("SignedSatQ791__3");
                  const auto v_temp122 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If781__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp122));
                  iface.f_gen_store(v_SignedSatQ790__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ791__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp122));
                  const auto v_temp123 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If781__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp123));
                  iface.f_gen_store(v_SignedSatQ790__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ791__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp123));
                  iface.f_gen_store(v_SignedSatQ790__3, iface.f_gen_slice(v_If781__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ791__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp122));
                  v_SatQ782__2 = iface.f_gen_load(v_SignedSatQ790__3);
                  v_SatQ783__2 = iface.f_gen_load(v_SignedSatQ791__3);
                } // if
                const auto v_temp124 = iface.f_gen_branch(v_SatQ783__2);
                iface.f_switch_context(iface.f_true_branch(v_temp124));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp124));
                auto v_If804__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If804__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If804__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If808__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If808__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If804__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If808__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If804__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ809__2 = typename Traits::rt_expr{};
                auto v_SatQ810__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ811__3 = iface.f_decl_bv("UnsignedSatQ811__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ812__3 = iface.f_decl_bool("UnsignedSatQ812__3");
                  const auto v_temp125 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If808__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp125));
                  iface.f_gen_store(v_UnsignedSatQ811__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ812__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp125));
                  const auto v_temp126 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If808__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp126));
                  iface.f_gen_store(v_UnsignedSatQ811__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ812__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp126));
                  iface.f_gen_store(v_UnsignedSatQ811__3, iface.f_gen_slice(v_If808__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ812__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp125));
                  v_SatQ809__2 = iface.f_gen_load(v_UnsignedSatQ811__3);
                  v_SatQ810__2 = iface.f_gen_load(v_UnsignedSatQ812__3);
                } else {
                  const auto v_SignedSatQ817__3 = iface.f_decl_bv("SignedSatQ817__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ818__3 = iface.f_decl_bool("SignedSatQ818__3");
                  const auto v_temp127 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If808__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp127));
                  iface.f_gen_store(v_SignedSatQ817__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ818__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp127));
                  const auto v_temp128 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If808__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp128));
                  iface.f_gen_store(v_SignedSatQ817__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ818__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp128));
                  iface.f_gen_store(v_SignedSatQ817__3, iface.f_gen_slice(v_If808__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ818__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp127));
                  v_SatQ809__2 = iface.f_gen_load(v_SignedSatQ817__3);
                  v_SatQ810__2 = iface.f_gen_load(v_SignedSatQ818__3);
                } // if
                const auto v_temp129 = iface.f_gen_branch(v_SatQ810__2);
                iface.f_switch_context(iface.f_true_branch(v_temp129));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp129));
                auto v_If831__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If831__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If831__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If835__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If835__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If831__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If835__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If831__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ836__2 = typename Traits::rt_expr{};
                auto v_SatQ837__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ838__3 = iface.f_decl_bv("UnsignedSatQ838__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ839__3 = iface.f_decl_bool("UnsignedSatQ839__3");
                  const auto v_temp130 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If835__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp130));
                  iface.f_gen_store(v_UnsignedSatQ838__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ839__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp130));
                  const auto v_temp131 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If835__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp131));
                  iface.f_gen_store(v_UnsignedSatQ838__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ839__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp131));
                  iface.f_gen_store(v_UnsignedSatQ838__3, iface.f_gen_slice(v_If835__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ839__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp130));
                  v_SatQ836__2 = iface.f_gen_load(v_UnsignedSatQ838__3);
                  v_SatQ837__2 = iface.f_gen_load(v_UnsignedSatQ839__3);
                } else {
                  const auto v_SignedSatQ844__3 = iface.f_decl_bv("SignedSatQ844__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ845__3 = iface.f_decl_bool("SignedSatQ845__3");
                  const auto v_temp132 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If835__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp132));
                  iface.f_gen_store(v_SignedSatQ844__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ845__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp132));
                  const auto v_temp133 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If835__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp133));
                  iface.f_gen_store(v_SignedSatQ844__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ845__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp133));
                  iface.f_gen_store(v_SignedSatQ844__3, iface.f_gen_slice(v_If835__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ845__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp132));
                  v_SatQ836__2 = iface.f_gen_load(v_SignedSatQ844__3);
                  v_SatQ837__2 = iface.f_gen_load(v_SignedSatQ845__3);
                } // if
                const auto v_temp134 = iface.f_gen_branch(v_SatQ837__2);
                iface.f_switch_context(iface.f_true_branch(v_temp134));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp134));
                auto v_If858__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If858__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If858__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If862__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If862__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If858__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If862__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If858__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ863__2 = typename Traits::rt_expr{};
                auto v_SatQ864__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ865__3 = iface.f_decl_bv("UnsignedSatQ865__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ866__3 = iface.f_decl_bool("UnsignedSatQ866__3");
                  const auto v_temp135 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If862__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp135));
                  iface.f_gen_store(v_UnsignedSatQ865__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ866__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp135));
                  const auto v_temp136 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If862__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp136));
                  iface.f_gen_store(v_UnsignedSatQ865__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ866__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp136));
                  iface.f_gen_store(v_UnsignedSatQ865__3, iface.f_gen_slice(v_If862__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ866__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp135));
                  v_SatQ863__2 = iface.f_gen_load(v_UnsignedSatQ865__3);
                  v_SatQ864__2 = iface.f_gen_load(v_UnsignedSatQ866__3);
                } else {
                  const auto v_SignedSatQ871__3 = iface.f_decl_bv("SignedSatQ871__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ872__3 = iface.f_decl_bool("SignedSatQ872__3");
                  const auto v_temp137 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If862__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp137));
                  iface.f_gen_store(v_SignedSatQ871__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ872__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp137));
                  const auto v_temp138 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If862__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp138));
                  iface.f_gen_store(v_SignedSatQ871__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ872__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp138));
                  iface.f_gen_store(v_SignedSatQ871__3, iface.f_gen_slice(v_If862__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ872__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp137));
                  v_SatQ863__2 = iface.f_gen_load(v_SignedSatQ871__3);
                  v_SatQ864__2 = iface.f_gen_load(v_SignedSatQ872__3);
                } // if
                const auto v_temp139 = iface.f_gen_branch(v_SatQ864__2);
                iface.f_switch_context(iface.f_true_branch(v_temp139));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp139));
                auto v_If885__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If885__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If885__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If889__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If889__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If885__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If889__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If885__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ890__2 = typename Traits::rt_expr{};
                auto v_SatQ891__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ892__3 = iface.f_decl_bv("UnsignedSatQ892__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ893__3 = iface.f_decl_bool("UnsignedSatQ893__3");
                  const auto v_temp140 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If889__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp140));
                  iface.f_gen_store(v_UnsignedSatQ892__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ893__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp140));
                  const auto v_temp141 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If889__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp141));
                  iface.f_gen_store(v_UnsignedSatQ892__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ893__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp141));
                  iface.f_gen_store(v_UnsignedSatQ892__3, iface.f_gen_slice(v_If889__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ893__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp140));
                  v_SatQ890__2 = iface.f_gen_load(v_UnsignedSatQ892__3);
                  v_SatQ891__2 = iface.f_gen_load(v_UnsignedSatQ893__3);
                } else {
                  const auto v_SignedSatQ898__3 = iface.f_decl_bv("SignedSatQ898__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ899__3 = iface.f_decl_bool("SignedSatQ899__3");
                  const auto v_temp142 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If889__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp142));
                  iface.f_gen_store(v_SignedSatQ898__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ899__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp142));
                  const auto v_temp143 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If889__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp143));
                  iface.f_gen_store(v_SignedSatQ898__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ899__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp143));
                  iface.f_gen_store(v_SignedSatQ898__3, iface.f_gen_slice(v_If889__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ899__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp142));
                  v_SatQ890__2 = iface.f_gen_load(v_SignedSatQ898__3);
                  v_SatQ891__2 = iface.f_gen_load(v_SignedSatQ899__3);
                } // if
                const auto v_temp144 = iface.f_gen_branch(v_SatQ891__2);
                iface.f_switch_context(iface.f_true_branch(v_temp144));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp144));
                auto v_If912__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If912__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If912__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If916__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If916__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If912__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If916__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If912__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ917__2 = typename Traits::rt_expr{};
                auto v_SatQ918__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ919__3 = iface.f_decl_bv("UnsignedSatQ919__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ920__3 = iface.f_decl_bool("UnsignedSatQ920__3");
                  const auto v_temp145 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If916__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp145));
                  iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ920__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp145));
                  const auto v_temp146 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If916__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp146));
                  iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ920__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp146));
                  iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_slice(v_If916__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ920__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp145));
                  v_SatQ917__2 = iface.f_gen_load(v_UnsignedSatQ919__3);
                  v_SatQ918__2 = iface.f_gen_load(v_UnsignedSatQ920__3);
                } else {
                  const auto v_SignedSatQ925__3 = iface.f_decl_bv("SignedSatQ925__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ926__3 = iface.f_decl_bool("SignedSatQ926__3");
                  const auto v_temp147 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If916__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp147));
                  iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ926__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp147));
                  const auto v_temp148 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If916__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp148));
                  iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ926__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp148));
                  iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_slice(v_If916__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ926__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp147));
                  v_SatQ917__2 = iface.f_gen_load(v_SignedSatQ925__3);
                  v_SatQ918__2 = iface.f_gen_load(v_SignedSatQ926__3);
                } // if
                const auto v_temp149 = iface.f_gen_branch(v_SatQ918__2);
                iface.f_switch_context(iface.f_true_branch(v_temp149));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp149));
                auto v_If939__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If939__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } else {
                  v_If939__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
                } // if
                auto v_If943__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If943__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If939__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If943__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If939__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If528__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                auto v_SatQ944__2 = typename Traits::rt_expr{};
                auto v_SatQ945__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_UnsignedSatQ946__3 = iface.f_decl_bv("UnsignedSatQ946__3", iface.bigint_lit("4"));
                  const auto v_UnsignedSatQ947__3 = iface.f_decl_bool("UnsignedSatQ947__3");
                  const auto v_temp150 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If943__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp150));
                  iface.f_gen_store(v_UnsignedSatQ946__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                  iface.f_gen_store(v_UnsignedSatQ947__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp150));
                  const auto v_temp151 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If943__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp151));
                  iface.f_gen_store(v_UnsignedSatQ946__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                  iface.f_gen_store(v_UnsignedSatQ947__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp151));
                  iface.f_gen_store(v_UnsignedSatQ946__3, iface.f_gen_slice(v_If943__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_UnsignedSatQ947__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp150));
                  v_SatQ944__2 = iface.f_gen_load(v_UnsignedSatQ946__3);
                  v_SatQ945__2 = iface.f_gen_load(v_UnsignedSatQ947__3);
                } else {
                  const auto v_SignedSatQ952__3 = iface.f_decl_bv("SignedSatQ952__3", iface.bigint_lit("4"));
                  const auto v_SignedSatQ953__3 = iface.f_decl_bool("SignedSatQ953__3");
                  const auto v_temp152 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111")), v_If943__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp152));
                  iface.f_gen_store(v_SignedSatQ952__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "0111")));
                  iface.f_gen_store(v_SignedSatQ953__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp152));
                  const auto v_temp153 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If943__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp153));
                  iface.f_gen_store(v_SignedSatQ952__3, iface.f_gen_bit_lit(iface.bits_lit(4U, "1000")));
                  iface.f_gen_store(v_SignedSatQ953__3, iface.f_gen_bool_lit(true));
                  iface.f_switch_context(iface.f_false_branch(v_temp153));
                  iface.f_gen_store(v_SignedSatQ952__3, iface.f_gen_slice(v_If943__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                  iface.f_gen_store(v_SignedSatQ953__3, iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp152));
                  v_SatQ944__2 = iface.f_gen_load(v_SignedSatQ952__3);
                  v_SatQ945__2 = iface.f_gen_load(v_SignedSatQ953__3);
                } // if
                const auto v_temp154 = iface.f_gen_branch(v_SatQ945__2);
                iface.f_switch_context(iface.f_true_branch(v_temp154));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp154));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp966__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
                assert(v_Exp966__2);
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ944__2, iface.f_gen_append_bits(v_SatQ917__2, iface.f_gen_append_bits(v_SatQ890__2, iface.f_gen_append_bits(v_SatQ863__2, iface.f_gen_append_bits(v_SatQ836__2, iface.f_gen_append_bits(v_SatQ809__2, iface.f_gen_append_bits(v_SatQ782__2, iface.f_gen_append_bits(v_SatQ755__2, iface.f_gen_append_bits(v_SatQ728__2, iface.f_gen_append_bits(v_SatQ701__2, iface.f_gen_append_bits(v_SatQ674__2, iface.f_gen_append_bits(v_SatQ647__2, iface.f_gen_append_bits(v_SatQ620__2, iface.f_gen_append_bits(v_SatQ593__2, iface.f_gen_append_bits(v_SatQ566__2, v_SatQ538__2))))))))))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(v_SatQ944__2, iface.f_gen_append_bits(v_SatQ917__2, iface.f_gen_append_bits(v_SatQ890__2, iface.f_gen_append_bits(v_SatQ863__2, iface.f_gen_append_bits(v_SatQ836__2, iface.f_gen_append_bits(v_SatQ809__2, iface.f_gen_append_bits(v_SatQ782__2, iface.f_gen_append_bits(v_SatQ755__2, iface.f_gen_append_bits(v_SatQ728__2, iface.f_gen_append_bits(v_SatQ701__2, iface.f_gen_append_bits(v_SatQ674__2, iface.f_gen_append_bits(v_SatQ647__2, iface.f_gen_append_bits(v_SatQ620__2, iface.f_gen_append_bits(v_SatQ593__2, iface.f_gen_append_bits(v_SatQ566__2, v_SatQ538__2))))))))))))))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
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

} // f_aarch64_vector_shift_right_narrow_uniform_simd


} // namespace aslp
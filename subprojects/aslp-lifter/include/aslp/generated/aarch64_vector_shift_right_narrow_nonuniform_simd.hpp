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
void aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_nonuniform_simd(typename Traits::bits v_enc) {
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
        auto v_If17__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If17__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If17__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ18__2 = iface.f_decl_bv("UnsignedSatQ18__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ19__2 = iface.f_decl_bool("UnsignedSatQ19__2");
        const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If17__2));
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_UnsignedSatQ18__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ19__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If17__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_UnsignedSatQ18__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ19__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_UnsignedSatQ18__2, iface.f_gen_slice(v_If17__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ19__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ19__2));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        auto v_If30__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If30__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If30__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ31__2 = iface.f_decl_bv("UnsignedSatQ31__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ32__2 = iface.f_decl_bool("UnsignedSatQ32__2");
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If30__2));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_UnsignedSatQ31__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ32__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If30__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_UnsignedSatQ31__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ32__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        iface.f_gen_store(v_UnsignedSatQ31__2, iface.f_gen_slice(v_If30__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ32__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ32__2));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        auto v_If42__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If42__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If42__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ43__2 = iface.f_decl_bv("UnsignedSatQ43__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ44__2 = iface.f_decl_bool("UnsignedSatQ44__2");
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If42__2));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_UnsignedSatQ43__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ44__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If42__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_UnsignedSatQ43__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ44__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        iface.f_gen_store(v_UnsignedSatQ43__2, iface.f_gen_slice(v_If42__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ44__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp6));
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ44__2));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        auto v_If54__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If54__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If54__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ55__2 = iface.f_decl_bv("UnsignedSatQ55__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ56__2 = iface.f_decl_bool("UnsignedSatQ56__2");
        const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If54__2));
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_UnsignedSatQ55__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ56__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If54__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_UnsignedSatQ55__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ56__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        iface.f_gen_store(v_UnsignedSatQ55__2, iface.f_gen_slice(v_If54__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ56__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ56__2));
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp11));
        auto v_If66__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If66__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If66__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ67__2 = iface.f_decl_bv("UnsignedSatQ67__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ68__2 = iface.f_decl_bool("UnsignedSatQ68__2");
        const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If66__2));
        iface.f_switch_context(iface.f_true_branch(v_temp12));
        iface.f_gen_store(v_UnsignedSatQ67__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ68__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp12));
        const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If66__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp13));
        iface.f_gen_store(v_UnsignedSatQ67__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ68__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp13));
        iface.f_gen_store(v_UnsignedSatQ67__2, iface.f_gen_slice(v_If66__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ68__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp12));
        const auto v_temp14 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ68__2));
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        auto v_If78__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If78__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If78__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ79__2 = iface.f_decl_bv("UnsignedSatQ79__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ80__2 = iface.f_decl_bool("UnsignedSatQ80__2");
        const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If78__2));
        iface.f_switch_context(iface.f_true_branch(v_temp15));
        iface.f_gen_store(v_UnsignedSatQ79__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ80__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp15));
        const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If78__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp16));
        iface.f_gen_store(v_UnsignedSatQ79__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ80__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp16));
        iface.f_gen_store(v_UnsignedSatQ79__2, iface.f_gen_slice(v_If78__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ80__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp15));
        const auto v_temp17 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ80__2));
        iface.f_switch_context(iface.f_true_branch(v_temp17));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp17));
        auto v_If90__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If90__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If90__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ91__2 = iface.f_decl_bv("UnsignedSatQ91__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ92__2 = iface.f_decl_bool("UnsignedSatQ92__2");
        const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If90__2));
        iface.f_switch_context(iface.f_true_branch(v_temp18));
        iface.f_gen_store(v_UnsignedSatQ91__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ92__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp18));
        const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If90__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(v_UnsignedSatQ91__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ92__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp19));
        iface.f_gen_store(v_UnsignedSatQ91__2, iface.f_gen_slice(v_If90__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ92__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp18));
        const auto v_temp20 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ92__2));
        iface.f_switch_context(iface.f_true_branch(v_temp20));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp20));
        auto v_If102__2 = typename Traits::rt_expr{};
        if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
          v_If102__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
        } else {
          v_If102__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If11__1, iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00010000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
        } // if
        const auto v_UnsignedSatQ103__2 = iface.f_decl_bv("UnsignedSatQ103__2", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ104__2 = iface.f_decl_bool("UnsignedSatQ104__2");
        const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111")), v_If102__2));
        iface.f_switch_context(iface.f_true_branch(v_temp21));
        iface.f_gen_store(v_UnsignedSatQ103__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ104__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp21));
        const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If102__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp22));
        iface.f_gen_store(v_UnsignedSatQ103__2, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ104__2, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp22));
        iface.f_gen_store(v_UnsignedSatQ103__2, iface.f_gen_slice(v_If102__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ104__2, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp21));
        const auto v_temp23 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ104__2));
        iface.f_switch_context(iface.f_true_branch(v_temp23));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp23));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp113__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp113__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ103__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ91__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ79__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ67__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ55__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ43__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ31__2), iface.f_gen_load(v_UnsignedSatQ18__2)))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ103__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ91__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ79__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ67__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ55__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ43__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ31__2), iface.f_gen_load(v_UnsignedSatQ18__2)))))))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
        } // if
      } else {
        auto v_HighestSetBit127__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_HighestSetBit127__2 = iface.bits_lit(3U, "011");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit127__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit127__2 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit127__2 = iface.bits_lit(3U, "000");
              } else {
                v_HighestSetBit127__2 = iface.bits_lit(3U, "111");
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_HighestSetBit127__2, iface.bits_lit(3U, "001"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp134__2 = typename Traits::rt_expr{};
          v_Exp134__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If135__1 = iface.bits_zero(iface.bigint_lit("33"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_If137__2 = iface.bits_zero(iface.bigint_lit("33"));
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
              v_If137__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(32U, "00000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
            } else {
              v_If137__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("33"));
            } // if
            v_If135__1 = v_If137__2;
          } else {
            v_If135__1 = iface.bits_lit(33U, "000000000000000000000000000000000");
          } // if
          auto v_If141__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If141__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp134__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If135__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If141__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp134__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If135__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          const auto v_UnsignedSatQ142__2 = iface.f_decl_bv("UnsignedSatQ142__2", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ143__2 = iface.f_decl_bool("UnsignedSatQ143__2");
          const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If141__2));
          iface.f_switch_context(iface.f_true_branch(v_temp24));
          iface.f_gen_store(v_UnsignedSatQ142__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ143__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp24));
          const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If141__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_UnsignedSatQ142__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ143__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          iface.f_gen_store(v_UnsignedSatQ142__2, iface.f_gen_slice(v_If141__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ143__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp24));
          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ143__2));
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp26));
          auto v_If154__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If154__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp134__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If135__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If154__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp134__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If135__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          const auto v_UnsignedSatQ155__2 = iface.f_decl_bv("UnsignedSatQ155__2", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ156__2 = iface.f_decl_bool("UnsignedSatQ156__2");
          const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If154__2));
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_UnsignedSatQ155__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ156__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If154__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_UnsignedSatQ155__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ156__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_UnsignedSatQ155__2, iface.f_gen_slice(v_If154__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ156__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          const auto v_temp29 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ156__2));
          iface.f_switch_context(iface.f_true_branch(v_temp29));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp29));
          auto v_If166__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If166__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp134__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If135__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If166__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp134__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If135__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          const auto v_UnsignedSatQ167__2 = iface.f_decl_bv("UnsignedSatQ167__2", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ168__2 = iface.f_decl_bool("UnsignedSatQ168__2");
          const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If166__2));
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_UnsignedSatQ167__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ168__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If166__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_UnsignedSatQ167__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ168__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_UnsignedSatQ167__2, iface.f_gen_slice(v_If166__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ168__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          const auto v_temp32 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ168__2));
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          auto v_If178__2 = typename Traits::rt_expr{};
          if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
            v_If178__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp134__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If135__1, iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
          } else {
            v_If178__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp134__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If135__1, iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00100000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
          } // if
          const auto v_UnsignedSatQ179__2 = iface.f_decl_bv("UnsignedSatQ179__2", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ180__2 = iface.f_decl_bool("UnsignedSatQ180__2");
          const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111")), v_If178__2));
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_UnsignedSatQ179__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ180__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          const auto v_temp34 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If178__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp34));
          iface.f_gen_store(v_UnsignedSatQ179__2, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ180__2, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp34));
          iface.f_gen_store(v_UnsignedSatQ179__2, iface.f_gen_slice(v_If178__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ180__2, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp33));
          const auto v_temp35 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ180__2));
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp189__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp189__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ179__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ167__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ155__2), iface.f_gen_load(v_UnsignedSatQ142__2)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ179__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ167__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ155__2), iface.f_gen_load(v_UnsignedSatQ142__2)))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
          } // if
        } else {
          auto v_HighestSetBit203__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_HighestSetBit203__2 = iface.bits_lit(3U, "011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit203__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit203__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit203__2 = iface.bits_lit(3U, "000");
                } else {
                  v_HighestSetBit203__2 = iface.bits_lit(3U, "111");
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(v_HighestSetBit203__2, iface.bits_lit(3U, "010"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp210__2 = typename Traits::rt_expr{};
            v_Exp210__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If211__1 = iface.bits_zero(iface.bigint_lit("65"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_If213__2 = iface.bits_zero(iface.bigint_lit("65"));
              if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                v_If213__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
              } else {
                v_If213__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("65"));
              } // if
              v_If211__1 = v_If213__2;
            } else {
              v_If211__1 = iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000");
            } // if
            auto v_If217__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If217__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp210__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If211__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If217__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp210__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If211__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            const auto v_UnsignedSatQ218__2 = iface.f_decl_bv("UnsignedSatQ218__2", iface.bigint_lit("32"));
            const auto v_UnsignedSatQ219__2 = iface.f_decl_bool("UnsignedSatQ219__2");
            const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If217__2));
            iface.f_switch_context(iface.f_true_branch(v_temp36));
            iface.f_gen_store(v_UnsignedSatQ218__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ219__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp36));
            const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If217__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp37));
            iface.f_gen_store(v_UnsignedSatQ218__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ219__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp37));
            iface.f_gen_store(v_UnsignedSatQ218__2, iface.f_gen_slice(v_If217__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_UnsignedSatQ219__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp36));
            const auto v_temp38 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ219__2));
            iface.f_switch_context(iface.f_true_branch(v_temp38));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp38));
            auto v_If230__2 = typename Traits::rt_expr{};
            if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
              v_If230__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp210__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If211__1, iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If230__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp210__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If211__1, iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "01000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
            } // if
            const auto v_UnsignedSatQ231__2 = iface.f_decl_bv("UnsignedSatQ231__2", iface.bigint_lit("32"));
            const auto v_UnsignedSatQ232__2 = iface.f_decl_bool("UnsignedSatQ232__2");
            const auto v_temp39 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111")), v_If230__2));
            iface.f_switch_context(iface.f_true_branch(v_temp39));
            iface.f_gen_store(v_UnsignedSatQ231__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ232__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp39));
            const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If230__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp40));
            iface.f_gen_store(v_UnsignedSatQ231__2, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ232__2, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp40));
            iface.f_gen_store(v_UnsignedSatQ231__2, iface.f_gen_slice(v_If230__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_UnsignedSatQ232__2, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp39));
            const auto v_temp41 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ232__2));
            iface.f_switch_context(iface.f_true_branch(v_temp41));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp41));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp241__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp241__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ231__2), iface.f_gen_load(v_UnsignedSatQ218__2)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ231__2), iface.f_gen_load(v_UnsignedSatQ218__2)), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
            } // if
          } else {
            auto v_HighestSetBit255__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_HighestSetBit255__2 = iface.bits_lit(3U, "011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit255__2 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit255__2 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit255__2 = iface.bits_lit(3U, "000");
                  } else {
                    v_HighestSetBit255__2 = iface.bits_lit(3U, "111");
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(v_HighestSetBit255__2, iface.bits_lit(3U, "011"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp262__2 = typename Traits::rt_expr{};
              v_Exp262__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If263__1 = iface.bits_zero(iface.bigint_lit("129"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_If265__2 = iface.bits_zero(iface.bigint_lit("129"));
                if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9")))) {
                  v_If265__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bigint_lit("129"));
                } else {
                  v_If265__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))), iface.bigint_lit("129"));
                } // if
                v_If263__1 = v_If265__2;
              } else {
                v_If263__1 = iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
              } // if
              auto v_If269__2 = typename Traits::rt_expr{};
              if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9")))) {
                v_If269__2 = iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp262__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If263__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))));
              } else {
                v_If269__2 = iface.f_gen_lsl_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_Exp262__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If263__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))));
              } // if
              const auto v_UnsignedSatQ270__2 = iface.f_decl_bv("UnsignedSatQ270__2", iface.bigint_lit("64"));
              const auto v_UnsignedSatQ271__2 = iface.f_decl_bool("UnsignedSatQ271__2");
              const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If269__2));
              iface.f_switch_context(iface.f_true_branch(v_temp42));
              iface.f_gen_store(v_UnsignedSatQ270__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ271__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp42));
              const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If269__2, iface.f_gen_bit_lit(iface.bits_lit(130U, "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp43));
              iface.f_gen_store(v_UnsignedSatQ270__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ271__2, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp43));
              iface.f_gen_store(v_UnsignedSatQ270__2, iface.f_gen_slice(v_If269__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
              iface.f_gen_store(v_UnsignedSatQ271__2, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp42));
              const auto v_temp44 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ271__2));
              iface.f_switch_context(iface.f_true_branch(v_temp44));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp44));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp281__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
              assert(v_Exp281__2);
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_UnsignedSatQ270__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ270__2), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } // if
            } else {
              auto v_HighestSetBit295__2 = iface.bits_zero(iface.bigint_lit("3"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_HighestSetBit295__2 = iface.bits_lit(3U, "011");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_HighestSetBit295__2 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_HighestSetBit295__2 = iface.bits_lit(3U, "001");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                      v_HighestSetBit295__2 = iface.bits_lit(3U, "000");
                    } else {
                      v_HighestSetBit295__2 = iface.bits_lit(3U, "111");
                    } // if
                  } // if
                } // if
              } // if
              if (iface.f_eq_bits(v_HighestSetBit295__2, iface.bits_lit(3U, "111"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp302__2 = typename Traits::rt_expr{};
                v_Exp302__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                auto v_If303__1 = iface.bits_zero(iface.bigint_lit("9"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  auto v_If305__2 = iface.bits_zero(iface.bigint_lit("9"));
                  if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")))) {
                    v_If305__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(8U, "00000001"), iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("9"));
                  } else {
                    v_If305__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001"))), iface.bits_lit(8U, "00000001"))), iface.bigint_lit("9"));
                  } // if
                  v_If303__1 = v_If305__2;
                } else {
                  v_If303__1 = iface.bits_lit(9U, "000000000");
                } // if
                auto v_If309__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If309__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If309__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ310__2 = iface.f_decl_bv("UnsignedSatQ310__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ311__2 = iface.f_decl_bool("UnsignedSatQ311__2");
                const auto v_temp45 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If309__2));
                iface.f_switch_context(iface.f_true_branch(v_temp45));
                iface.f_gen_store(v_UnsignedSatQ310__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ311__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp45));
                const auto v_temp46 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If309__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp46));
                iface.f_gen_store(v_UnsignedSatQ310__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ311__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp46));
                iface.f_gen_store(v_UnsignedSatQ310__2, iface.f_gen_slice(v_If309__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ311__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp45));
                const auto v_temp47 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ311__2));
                iface.f_switch_context(iface.f_true_branch(v_temp47));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp47));
                auto v_If322__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If322__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If322__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ323__2 = iface.f_decl_bv("UnsignedSatQ323__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ324__2 = iface.f_decl_bool("UnsignedSatQ324__2");
                const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If322__2));
                iface.f_switch_context(iface.f_true_branch(v_temp48));
                iface.f_gen_store(v_UnsignedSatQ323__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ324__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp48));
                const auto v_temp49 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If322__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp49));
                iface.f_gen_store(v_UnsignedSatQ323__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ324__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp49));
                iface.f_gen_store(v_UnsignedSatQ323__2, iface.f_gen_slice(v_If322__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ324__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp48));
                const auto v_temp50 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ324__2));
                iface.f_switch_context(iface.f_true_branch(v_temp50));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp50));
                auto v_If334__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If334__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If334__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ335__2 = iface.f_decl_bv("UnsignedSatQ335__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ336__2 = iface.f_decl_bool("UnsignedSatQ336__2");
                const auto v_temp51 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If334__2));
                iface.f_switch_context(iface.f_true_branch(v_temp51));
                iface.f_gen_store(v_UnsignedSatQ335__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ336__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp51));
                const auto v_temp52 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If334__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp52));
                iface.f_gen_store(v_UnsignedSatQ335__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ336__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp52));
                iface.f_gen_store(v_UnsignedSatQ335__2, iface.f_gen_slice(v_If334__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ336__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp51));
                const auto v_temp53 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ336__2));
                iface.f_switch_context(iface.f_true_branch(v_temp53));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp53));
                auto v_If346__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If346__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If346__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ347__2 = iface.f_decl_bv("UnsignedSatQ347__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ348__2 = iface.f_decl_bool("UnsignedSatQ348__2");
                const auto v_temp54 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If346__2));
                iface.f_switch_context(iface.f_true_branch(v_temp54));
                iface.f_gen_store(v_UnsignedSatQ347__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ348__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp54));
                const auto v_temp55 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If346__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp55));
                iface.f_gen_store(v_UnsignedSatQ347__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ348__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp55));
                iface.f_gen_store(v_UnsignedSatQ347__2, iface.f_gen_slice(v_If346__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ348__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp54));
                const auto v_temp56 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ348__2));
                iface.f_switch_context(iface.f_true_branch(v_temp56));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp56));
                auto v_If358__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If358__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If358__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ359__2 = iface.f_decl_bv("UnsignedSatQ359__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ360__2 = iface.f_decl_bool("UnsignedSatQ360__2");
                const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If358__2));
                iface.f_switch_context(iface.f_true_branch(v_temp57));
                iface.f_gen_store(v_UnsignedSatQ359__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ360__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp57));
                const auto v_temp58 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If358__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp58));
                iface.f_gen_store(v_UnsignedSatQ359__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ360__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp58));
                iface.f_gen_store(v_UnsignedSatQ359__2, iface.f_gen_slice(v_If358__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ360__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp57));
                const auto v_temp59 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ360__2));
                iface.f_switch_context(iface.f_true_branch(v_temp59));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp59));
                auto v_If370__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If370__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If370__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ371__2 = iface.f_decl_bv("UnsignedSatQ371__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ372__2 = iface.f_decl_bool("UnsignedSatQ372__2");
                const auto v_temp60 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If370__2));
                iface.f_switch_context(iface.f_true_branch(v_temp60));
                iface.f_gen_store(v_UnsignedSatQ371__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ372__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp60));
                const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If370__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp61));
                iface.f_gen_store(v_UnsignedSatQ371__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ372__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp61));
                iface.f_gen_store(v_UnsignedSatQ371__2, iface.f_gen_slice(v_If370__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ372__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp60));
                const auto v_temp62 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ372__2));
                iface.f_switch_context(iface.f_true_branch(v_temp62));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp62));
                auto v_If382__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If382__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If382__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ383__2 = iface.f_decl_bv("UnsignedSatQ383__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ384__2 = iface.f_decl_bool("UnsignedSatQ384__2");
                const auto v_temp63 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If382__2));
                iface.f_switch_context(iface.f_true_branch(v_temp63));
                iface.f_gen_store(v_UnsignedSatQ383__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ384__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp63));
                const auto v_temp64 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If382__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp64));
                iface.f_gen_store(v_UnsignedSatQ383__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ384__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp64));
                iface.f_gen_store(v_UnsignedSatQ383__2, iface.f_gen_slice(v_If382__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ384__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp63));
                const auto v_temp65 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ384__2));
                iface.f_switch_context(iface.f_true_branch(v_temp65));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp65));
                auto v_If394__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If394__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If394__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ395__2 = iface.f_decl_bv("UnsignedSatQ395__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ396__2 = iface.f_decl_bool("UnsignedSatQ396__2");
                const auto v_temp66 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If394__2));
                iface.f_switch_context(iface.f_true_branch(v_temp66));
                iface.f_gen_store(v_UnsignedSatQ395__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ396__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp66));
                const auto v_temp67 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If394__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp67));
                iface.f_gen_store(v_UnsignedSatQ395__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ396__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp67));
                iface.f_gen_store(v_UnsignedSatQ395__2, iface.f_gen_slice(v_If394__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ396__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp66));
                const auto v_temp68 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ396__2));
                iface.f_switch_context(iface.f_true_branch(v_temp68));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp68));
                auto v_If406__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If406__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If406__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ407__2 = iface.f_decl_bv("UnsignedSatQ407__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ408__2 = iface.f_decl_bool("UnsignedSatQ408__2");
                const auto v_temp69 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If406__2));
                iface.f_switch_context(iface.f_true_branch(v_temp69));
                iface.f_gen_store(v_UnsignedSatQ407__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ408__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp69));
                const auto v_temp70 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If406__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp70));
                iface.f_gen_store(v_UnsignedSatQ407__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ408__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp70));
                iface.f_gen_store(v_UnsignedSatQ407__2, iface.f_gen_slice(v_If406__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ408__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp69));
                const auto v_temp71 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ408__2));
                iface.f_switch_context(iface.f_true_branch(v_temp71));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp71));
                auto v_If418__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If418__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If418__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ419__2 = iface.f_decl_bv("UnsignedSatQ419__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ420__2 = iface.f_decl_bool("UnsignedSatQ420__2");
                const auto v_temp72 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If418__2));
                iface.f_switch_context(iface.f_true_branch(v_temp72));
                iface.f_gen_store(v_UnsignedSatQ419__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ420__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp72));
                const auto v_temp73 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If418__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp73));
                iface.f_gen_store(v_UnsignedSatQ419__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ420__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp73));
                iface.f_gen_store(v_UnsignedSatQ419__2, iface.f_gen_slice(v_If418__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ420__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp72));
                const auto v_temp74 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ420__2));
                iface.f_switch_context(iface.f_true_branch(v_temp74));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp74));
                auto v_If430__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If430__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If430__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ431__2 = iface.f_decl_bv("UnsignedSatQ431__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ432__2 = iface.f_decl_bool("UnsignedSatQ432__2");
                const auto v_temp75 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If430__2));
                iface.f_switch_context(iface.f_true_branch(v_temp75));
                iface.f_gen_store(v_UnsignedSatQ431__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ432__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp75));
                const auto v_temp76 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If430__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp76));
                iface.f_gen_store(v_UnsignedSatQ431__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ432__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp76));
                iface.f_gen_store(v_UnsignedSatQ431__2, iface.f_gen_slice(v_If430__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ432__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp75));
                const auto v_temp77 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ432__2));
                iface.f_switch_context(iface.f_true_branch(v_temp77));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp77));
                auto v_If442__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If442__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If442__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ443__2 = iface.f_decl_bv("UnsignedSatQ443__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ444__2 = iface.f_decl_bool("UnsignedSatQ444__2");
                const auto v_temp78 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If442__2));
                iface.f_switch_context(iface.f_true_branch(v_temp78));
                iface.f_gen_store(v_UnsignedSatQ443__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ444__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp78));
                const auto v_temp79 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If442__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp79));
                iface.f_gen_store(v_UnsignedSatQ443__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ444__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp79));
                iface.f_gen_store(v_UnsignedSatQ443__2, iface.f_gen_slice(v_If442__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ444__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp78));
                const auto v_temp80 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ444__2));
                iface.f_switch_context(iface.f_true_branch(v_temp80));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp80));
                auto v_If454__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If454__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If454__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ455__2 = iface.f_decl_bv("UnsignedSatQ455__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ456__2 = iface.f_decl_bool("UnsignedSatQ456__2");
                const auto v_temp81 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If454__2));
                iface.f_switch_context(iface.f_true_branch(v_temp81));
                iface.f_gen_store(v_UnsignedSatQ455__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ456__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp81));
                const auto v_temp82 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If454__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp82));
                iface.f_gen_store(v_UnsignedSatQ455__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ456__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp82));
                iface.f_gen_store(v_UnsignedSatQ455__2, iface.f_gen_slice(v_If454__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ456__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp81));
                const auto v_temp83 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ456__2));
                iface.f_switch_context(iface.f_true_branch(v_temp83));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp83));
                auto v_If466__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If466__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If466__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ467__2 = iface.f_decl_bv("UnsignedSatQ467__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ468__2 = iface.f_decl_bool("UnsignedSatQ468__2");
                const auto v_temp84 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If466__2));
                iface.f_switch_context(iface.f_true_branch(v_temp84));
                iface.f_gen_store(v_UnsignedSatQ467__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ468__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp84));
                const auto v_temp85 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If466__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp85));
                iface.f_gen_store(v_UnsignedSatQ467__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ468__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp85));
                iface.f_gen_store(v_UnsignedSatQ467__2, iface.f_gen_slice(v_If466__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ468__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp84));
                const auto v_temp86 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ468__2));
                iface.f_switch_context(iface.f_true_branch(v_temp86));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp86));
                auto v_If478__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If478__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If478__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ479__2 = iface.f_decl_bv("UnsignedSatQ479__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ480__2 = iface.f_decl_bool("UnsignedSatQ480__2");
                const auto v_temp87 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If478__2));
                iface.f_switch_context(iface.f_true_branch(v_temp87));
                iface.f_gen_store(v_UnsignedSatQ479__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ480__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp87));
                const auto v_temp88 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If478__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp88));
                iface.f_gen_store(v_UnsignedSatQ479__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ480__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp88));
                iface.f_gen_store(v_UnsignedSatQ479__2, iface.f_gen_slice(v_If478__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ480__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp87));
                const auto v_temp89 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ480__2));
                iface.f_switch_context(iface.f_true_branch(v_temp89));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp89));
                auto v_If490__2 = typename Traits::rt_expr{};
                if (iface.f_sle_bits(iface.bits_lit(8U, "00000000"), iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))) {
                  v_If490__2 = iface.f_gen_SignExtend(iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))))), iface.f_gen_int_lit(iface.bigint_lit("129")));
                } else {
                  v_If490__2 = iface.f_gen_lsl_bits(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp302__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If303__1, iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_sub_bits(iface.bits_lit(8U, "00001000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8")))), iface.bits_lit(8U, "00000001"))));
                } // if
                const auto v_UnsignedSatQ491__2 = iface.f_decl_bv("UnsignedSatQ491__2", iface.bigint_lit("4"));
                const auto v_UnsignedSatQ492__2 = iface.f_decl_bool("UnsignedSatQ492__2");
                const auto v_temp90 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111")), v_If490__2));
                iface.f_switch_context(iface.f_true_branch(v_temp90));
                iface.f_gen_store(v_UnsignedSatQ491__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "1111")));
                iface.f_gen_store(v_UnsignedSatQ492__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp90));
                const auto v_temp91 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If490__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp91));
                iface.f_gen_store(v_UnsignedSatQ491__2, iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                iface.f_gen_store(v_UnsignedSatQ492__2, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp91));
                iface.f_gen_store(v_UnsignedSatQ491__2, iface.f_gen_slice(v_If490__2, iface.bigint_lit("0"), iface.bigint_lit("4")));
                iface.f_gen_store(v_UnsignedSatQ492__2, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp90));
                const auto v_temp92 = iface.f_gen_branch(iface.f_gen_load(v_UnsignedSatQ492__2));
                iface.f_switch_context(iface.f_true_branch(v_temp92));
                iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
                iface.f_switch_context(iface.f_merge_branch(v_temp92));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp501__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
                assert(v_Exp501__2);
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ491__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ479__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ467__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ455__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ443__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ431__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ419__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ407__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ395__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ383__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ371__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ359__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ347__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ335__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ323__2), iface.f_gen_load(v_UnsignedSatQ310__2)))))))))))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ491__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ479__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ467__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ455__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ443__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ431__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ419__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ407__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ395__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ383__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ371__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ359__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ347__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ335__2), iface.f_gen_append_bits(iface.f_gen_load(v_UnsignedSatQ323__2), iface.f_gen_load(v_UnsignedSatQ310__2)))))))))))))))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
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

} // f_aarch64_vector_shift_right_narrow_nonuniform_simd


} // namespace aslp
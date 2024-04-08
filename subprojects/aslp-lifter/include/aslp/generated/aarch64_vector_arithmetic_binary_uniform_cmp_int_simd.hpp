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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd(typename Traits::bits v_enc) {
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
        auto v_If13__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If13__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If13__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If18__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If18__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If18__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If21__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If21__1 = iface.f_gen_sle_bits(v_If18__2, v_If13__2);
        } else {
          v_If21__1 = iface.f_gen_slt_bits(v_If18__2, v_If13__2);
        } // if
        const auto v_If23__1 = iface.f_decl_bv("If23__1", iface.bigint_lit("8"));
        const auto v_temp0 = iface.f_gen_branch(v_If21__1);
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_If23__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        iface.f_gen_store(v_If23__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        auto v_If29__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If29__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If29__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If34__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If34__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If34__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If37__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If37__1 = iface.f_gen_sle_bits(v_If34__2, v_If29__2);
        } else {
          v_If37__1 = iface.f_gen_slt_bits(v_If34__2, v_If29__2);
        } // if
        const auto v_If38__1 = iface.f_decl_bv("If38__1", iface.bigint_lit("8"));
        const auto v_temp1 = iface.f_gen_branch(v_If37__1);
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_If38__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_If38__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp1));
        auto v_If44__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If44__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If44__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If49__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If49__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If49__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If52__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If52__1 = iface.f_gen_sle_bits(v_If49__2, v_If44__2);
        } else {
          v_If52__1 = iface.f_gen_slt_bits(v_If49__2, v_If44__2);
        } // if
        const auto v_If53__1 = iface.f_decl_bv("If53__1", iface.bigint_lit("8"));
        const auto v_temp2 = iface.f_gen_branch(v_If52__1);
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_If53__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        iface.f_gen_store(v_If53__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        auto v_If59__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If59__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If59__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If64__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If64__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If64__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If67__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If67__1 = iface.f_gen_sle_bits(v_If64__2, v_If59__2);
        } else {
          v_If67__1 = iface.f_gen_slt_bits(v_If64__2, v_If59__2);
        } // if
        const auto v_If68__1 = iface.f_decl_bv("If68__1", iface.bigint_lit("8"));
        const auto v_temp3 = iface.f_gen_branch(v_If67__1);
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_If68__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_If68__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        auto v_If74__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If74__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If74__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If79__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If79__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If79__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If82__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If82__1 = iface.f_gen_sle_bits(v_If79__2, v_If74__2);
        } else {
          v_If82__1 = iface.f_gen_slt_bits(v_If79__2, v_If74__2);
        } // if
        const auto v_If83__1 = iface.f_decl_bv("If83__1", iface.bigint_lit("8"));
        const auto v_temp4 = iface.f_gen_branch(v_If82__1);
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_If83__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        iface.f_gen_store(v_If83__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        auto v_If89__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If89__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If89__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If94__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If94__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If94__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If97__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If97__1 = iface.f_gen_sle_bits(v_If94__2, v_If89__2);
        } else {
          v_If97__1 = iface.f_gen_slt_bits(v_If94__2, v_If89__2);
        } // if
        const auto v_If98__1 = iface.f_decl_bv("If98__1", iface.bigint_lit("8"));
        const auto v_temp5 = iface.f_gen_branch(v_If97__1);
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_If98__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        iface.f_gen_store(v_If98__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        auto v_If104__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If104__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If104__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If109__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If109__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If109__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If112__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If112__1 = iface.f_gen_sle_bits(v_If109__2, v_If104__2);
        } else {
          v_If112__1 = iface.f_gen_slt_bits(v_If109__2, v_If104__2);
        } // if
        const auto v_If113__1 = iface.f_decl_bv("If113__1", iface.bigint_lit("8"));
        const auto v_temp6 = iface.f_gen_branch(v_If112__1);
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_If113__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_If113__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp6));
        auto v_If119__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If119__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If119__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If124__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If124__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If124__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If127__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If127__1 = iface.f_gen_sle_bits(v_If124__2, v_If119__2);
        } else {
          v_If127__1 = iface.f_gen_slt_bits(v_If124__2, v_If119__2);
        } // if
        const auto v_If128__1 = iface.f_decl_bv("If128__1", iface.bigint_lit("8"));
        const auto v_temp7 = iface.f_gen_branch(v_If127__1);
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_If128__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        iface.f_gen_store(v_If128__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
        auto v_If134__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If134__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If134__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If139__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If139__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If139__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If142__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If142__1 = iface.f_gen_sle_bits(v_If139__2, v_If134__2);
        } else {
          v_If142__1 = iface.f_gen_slt_bits(v_If139__2, v_If134__2);
        } // if
        const auto v_If143__1 = iface.f_decl_bv("If143__1", iface.bigint_lit("8"));
        const auto v_temp8 = iface.f_gen_branch(v_If142__1);
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_If143__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        iface.f_gen_store(v_If143__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        auto v_If149__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If149__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If149__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If154__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If154__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If154__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If157__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If157__1 = iface.f_gen_sle_bits(v_If154__2, v_If149__2);
        } else {
          v_If157__1 = iface.f_gen_slt_bits(v_If154__2, v_If149__2);
        } // if
        const auto v_If158__1 = iface.f_decl_bv("If158__1", iface.bigint_lit("8"));
        const auto v_temp9 = iface.f_gen_branch(v_If157__1);
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_If158__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        iface.f_gen_store(v_If158__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        auto v_If164__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If164__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If164__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If169__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If169__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If169__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If172__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If172__1 = iface.f_gen_sle_bits(v_If169__2, v_If164__2);
        } else {
          v_If172__1 = iface.f_gen_slt_bits(v_If169__2, v_If164__2);
        } // if
        const auto v_If173__1 = iface.f_decl_bv("If173__1", iface.bigint_lit("8"));
        const auto v_temp10 = iface.f_gen_branch(v_If172__1);
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_If173__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        iface.f_gen_store(v_If173__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp10));
        auto v_If179__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If179__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If179__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If184__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If184__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If184__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If187__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If187__1 = iface.f_gen_sle_bits(v_If184__2, v_If179__2);
        } else {
          v_If187__1 = iface.f_gen_slt_bits(v_If184__2, v_If179__2);
        } // if
        const auto v_If188__1 = iface.f_decl_bv("If188__1", iface.bigint_lit("8"));
        const auto v_temp11 = iface.f_gen_branch(v_If187__1);
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_If188__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        iface.f_gen_store(v_If188__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp11));
        auto v_If194__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If194__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If194__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If199__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If199__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If199__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If202__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If202__1 = iface.f_gen_sle_bits(v_If199__2, v_If194__2);
        } else {
          v_If202__1 = iface.f_gen_slt_bits(v_If199__2, v_If194__2);
        } // if
        const auto v_If203__1 = iface.f_decl_bv("If203__1", iface.bigint_lit("8"));
        const auto v_temp12 = iface.f_gen_branch(v_If202__1);
        iface.f_switch_context(iface.f_true_branch(v_temp12));
        iface.f_gen_store(v_If203__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp12));
        iface.f_gen_store(v_If203__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp12));
        auto v_If209__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If209__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If209__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If214__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If214__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If214__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If217__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If217__1 = iface.f_gen_sle_bits(v_If214__2, v_If209__2);
        } else {
          v_If217__1 = iface.f_gen_slt_bits(v_If214__2, v_If209__2);
        } // if
        const auto v_If218__1 = iface.f_decl_bv("If218__1", iface.bigint_lit("8"));
        const auto v_temp13 = iface.f_gen_branch(v_If217__1);
        iface.f_switch_context(iface.f_true_branch(v_temp13));
        iface.f_gen_store(v_If218__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp13));
        iface.f_gen_store(v_If218__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp13));
        auto v_If224__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If224__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If224__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If229__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If229__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If229__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If232__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If232__1 = iface.f_gen_sle_bits(v_If229__2, v_If224__2);
        } else {
          v_If232__1 = iface.f_gen_slt_bits(v_If229__2, v_If224__2);
        } // if
        const auto v_If233__1 = iface.f_decl_bv("If233__1", iface.bigint_lit("8"));
        const auto v_temp14 = iface.f_gen_branch(v_If232__1);
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(v_If233__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp14));
        iface.f_gen_store(v_If233__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        auto v_If239__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If239__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If239__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If244__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If244__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If244__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If247__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If247__1 = iface.f_gen_sle_bits(v_If244__2, v_If239__2);
        } else {
          v_If247__1 = iface.f_gen_slt_bits(v_If244__2, v_If239__2);
        } // if
        const auto v_If248__1 = iface.f_decl_bv("If248__1", iface.bigint_lit("8"));
        const auto v_temp15 = iface.f_gen_branch(v_If247__1);
        iface.f_switch_context(iface.f_true_branch(v_temp15));
        iface.f_gen_store(v_If248__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp15));
        iface.f_gen_store(v_If248__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp15));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If248__1), iface.f_gen_append_bits(iface.f_gen_load(v_If233__1), iface.f_gen_append_bits(iface.f_gen_load(v_If218__1), iface.f_gen_append_bits(iface.f_gen_load(v_If203__1), iface.f_gen_append_bits(iface.f_gen_load(v_If188__1), iface.f_gen_append_bits(iface.f_gen_load(v_If173__1), iface.f_gen_append_bits(iface.f_gen_load(v_If158__1), iface.f_gen_append_bits(iface.f_gen_load(v_If143__1), iface.f_gen_append_bits(iface.f_gen_load(v_If128__1), iface.f_gen_append_bits(iface.f_gen_load(v_If113__1), iface.f_gen_append_bits(iface.f_gen_load(v_If98__1), iface.f_gen_append_bits(iface.f_gen_load(v_If83__1), iface.f_gen_append_bits(iface.f_gen_load(v_If68__1), iface.f_gen_append_bits(iface.f_gen_load(v_If53__1), iface.f_gen_append_bits(iface.f_gen_load(v_If38__1), iface.f_gen_load(v_If23__1)))))))))))))))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp259__2 = typename Traits::rt_expr{};
        v_Exp259__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp262__2 = typename Traits::rt_expr{};
        v_Exp262__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If265__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If265__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If265__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If270__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If270__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If270__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If273__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If273__1 = iface.f_gen_sle_bits(v_If270__2, v_If265__2);
        } else {
          v_If273__1 = iface.f_gen_slt_bits(v_If270__2, v_If265__2);
        } // if
        const auto v_If275__1 = iface.f_decl_bv("If275__1", iface.bigint_lit("8"));
        const auto v_temp16 = iface.f_gen_branch(v_If273__1);
        iface.f_switch_context(iface.f_true_branch(v_temp16));
        iface.f_gen_store(v_If275__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp16));
        iface.f_gen_store(v_If275__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp16));
        auto v_If281__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If281__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If281__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If286__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If286__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If286__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If289__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If289__1 = iface.f_gen_sle_bits(v_If286__2, v_If281__2);
        } else {
          v_If289__1 = iface.f_gen_slt_bits(v_If286__2, v_If281__2);
        } // if
        const auto v_If290__1 = iface.f_decl_bv("If290__1", iface.bigint_lit("8"));
        const auto v_temp17 = iface.f_gen_branch(v_If289__1);
        iface.f_switch_context(iface.f_true_branch(v_temp17));
        iface.f_gen_store(v_If290__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp17));
        iface.f_gen_store(v_If290__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp17));
        auto v_If296__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If296__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If296__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If301__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If301__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If301__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If304__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If304__1 = iface.f_gen_sle_bits(v_If301__2, v_If296__2);
        } else {
          v_If304__1 = iface.f_gen_slt_bits(v_If301__2, v_If296__2);
        } // if
        const auto v_If305__1 = iface.f_decl_bv("If305__1", iface.bigint_lit("8"));
        const auto v_temp18 = iface.f_gen_branch(v_If304__1);
        iface.f_switch_context(iface.f_true_branch(v_temp18));
        iface.f_gen_store(v_If305__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp18));
        iface.f_gen_store(v_If305__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp18));
        auto v_If311__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If311__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If311__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If316__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If316__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If316__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If319__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If319__1 = iface.f_gen_sle_bits(v_If316__2, v_If311__2);
        } else {
          v_If319__1 = iface.f_gen_slt_bits(v_If316__2, v_If311__2);
        } // if
        const auto v_If320__1 = iface.f_decl_bv("If320__1", iface.bigint_lit("8"));
        const auto v_temp19 = iface.f_gen_branch(v_If319__1);
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(v_If320__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp19));
        iface.f_gen_store(v_If320__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp19));
        auto v_If326__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If326__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If326__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If331__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If331__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If331__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If334__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If334__1 = iface.f_gen_sle_bits(v_If331__2, v_If326__2);
        } else {
          v_If334__1 = iface.f_gen_slt_bits(v_If331__2, v_If326__2);
        } // if
        const auto v_If335__1 = iface.f_decl_bv("If335__1", iface.bigint_lit("8"));
        const auto v_temp20 = iface.f_gen_branch(v_If334__1);
        iface.f_switch_context(iface.f_true_branch(v_temp20));
        iface.f_gen_store(v_If335__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp20));
        iface.f_gen_store(v_If335__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp20));
        auto v_If341__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If341__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If341__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If346__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If346__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If346__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If349__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If349__1 = iface.f_gen_sle_bits(v_If346__2, v_If341__2);
        } else {
          v_If349__1 = iface.f_gen_slt_bits(v_If346__2, v_If341__2);
        } // if
        const auto v_If350__1 = iface.f_decl_bv("If350__1", iface.bigint_lit("8"));
        const auto v_temp21 = iface.f_gen_branch(v_If349__1);
        iface.f_switch_context(iface.f_true_branch(v_temp21));
        iface.f_gen_store(v_If350__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp21));
        iface.f_gen_store(v_If350__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp21));
        auto v_If356__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If356__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If356__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If361__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If361__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If361__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If364__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If364__1 = iface.f_gen_sle_bits(v_If361__2, v_If356__2);
        } else {
          v_If364__1 = iface.f_gen_slt_bits(v_If361__2, v_If356__2);
        } // if
        const auto v_If365__1 = iface.f_decl_bv("If365__1", iface.bigint_lit("8"));
        const auto v_temp22 = iface.f_gen_branch(v_If364__1);
        iface.f_switch_context(iface.f_true_branch(v_temp22));
        iface.f_gen_store(v_If365__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp22));
        iface.f_gen_store(v_If365__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp22));
        auto v_If371__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If371__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If371__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp259__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If376__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If376__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If376__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If379__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If379__1 = iface.f_gen_sle_bits(v_If376__2, v_If371__2);
        } else {
          v_If379__1 = iface.f_gen_slt_bits(v_If376__2, v_If371__2);
        } // if
        const auto v_If380__1 = iface.f_decl_bv("If380__1", iface.bigint_lit("8"));
        const auto v_temp23 = iface.f_gen_branch(v_If379__1);
        iface.f_switch_context(iface.f_true_branch(v_temp23));
        iface.f_gen_store(v_If380__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp23));
        iface.f_gen_store(v_If380__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp23));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If380__1), iface.f_gen_append_bits(iface.f_gen_load(v_If365__1), iface.f_gen_append_bits(iface.f_gen_load(v_If350__1), iface.f_gen_append_bits(iface.f_gen_load(v_If335__1), iface.f_gen_append_bits(iface.f_gen_load(v_If320__1), iface.f_gen_append_bits(iface.f_gen_load(v_If305__1), iface.f_gen_append_bits(iface.f_gen_load(v_If290__1), iface.f_gen_load(v_If275__1)))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp392__2 = typename Traits::rt_expr{};
          v_Exp392__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp395__2 = typename Traits::rt_expr{};
          v_Exp395__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If398__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If398__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If398__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If403__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If403__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If403__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If406__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If406__1 = iface.f_gen_sle_bits(v_If403__2, v_If398__2);
          } else {
            v_If406__1 = iface.f_gen_slt_bits(v_If403__2, v_If398__2);
          } // if
          const auto v_If408__1 = iface.f_decl_bv("If408__1", iface.bigint_lit("16"));
          const auto v_temp24 = iface.f_gen_branch(v_If406__1);
          iface.f_switch_context(iface.f_true_branch(v_temp24));
          iface.f_gen_store(v_If408__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp24));
          iface.f_gen_store(v_If408__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp24));
          auto v_If414__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If414__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If414__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If419__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If419__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If419__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If422__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If422__1 = iface.f_gen_sle_bits(v_If419__2, v_If414__2);
          } else {
            v_If422__1 = iface.f_gen_slt_bits(v_If419__2, v_If414__2);
          } // if
          const auto v_If423__1 = iface.f_decl_bv("If423__1", iface.bigint_lit("16"));
          const auto v_temp25 = iface.f_gen_branch(v_If422__1);
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_If423__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          iface.f_gen_store(v_If423__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp25));
          auto v_If429__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If429__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If429__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If434__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If434__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If434__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If437__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If437__1 = iface.f_gen_sle_bits(v_If434__2, v_If429__2);
          } else {
            v_If437__1 = iface.f_gen_slt_bits(v_If434__2, v_If429__2);
          } // if
          const auto v_If438__1 = iface.f_decl_bv("If438__1", iface.bigint_lit("16"));
          const auto v_temp26 = iface.f_gen_branch(v_If437__1);
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_If438__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_If438__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp26));
          auto v_If444__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If444__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If444__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If449__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If449__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If449__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If452__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If452__1 = iface.f_gen_sle_bits(v_If449__2, v_If444__2);
          } else {
            v_If452__1 = iface.f_gen_slt_bits(v_If449__2, v_If444__2);
          } // if
          const auto v_If453__1 = iface.f_decl_bv("If453__1", iface.bigint_lit("16"));
          const auto v_temp27 = iface.f_gen_branch(v_If452__1);
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_If453__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          iface.f_gen_store(v_If453__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          auto v_If459__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If459__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If459__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If464__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If464__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If464__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If467__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If467__1 = iface.f_gen_sle_bits(v_If464__2, v_If459__2);
          } else {
            v_If467__1 = iface.f_gen_slt_bits(v_If464__2, v_If459__2);
          } // if
          const auto v_If468__1 = iface.f_decl_bv("If468__1", iface.bigint_lit("16"));
          const auto v_temp28 = iface.f_gen_branch(v_If467__1);
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_If468__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_If468__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp28));
          auto v_If474__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If474__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If474__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If479__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If479__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If479__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If482__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If482__1 = iface.f_gen_sle_bits(v_If479__2, v_If474__2);
          } else {
            v_If482__1 = iface.f_gen_slt_bits(v_If479__2, v_If474__2);
          } // if
          const auto v_If483__1 = iface.f_decl_bv("If483__1", iface.bigint_lit("16"));
          const auto v_temp29 = iface.f_gen_branch(v_If482__1);
          iface.f_switch_context(iface.f_true_branch(v_temp29));
          iface.f_gen_store(v_If483__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp29));
          iface.f_gen_store(v_If483__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp29));
          auto v_If489__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If489__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If489__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If494__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If494__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If494__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If497__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If497__1 = iface.f_gen_sle_bits(v_If494__2, v_If489__2);
          } else {
            v_If497__1 = iface.f_gen_slt_bits(v_If494__2, v_If489__2);
          } // if
          const auto v_If498__1 = iface.f_decl_bv("If498__1", iface.bigint_lit("16"));
          const auto v_temp30 = iface.f_gen_branch(v_If497__1);
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_If498__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          iface.f_gen_store(v_If498__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          auto v_If504__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If504__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If504__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp392__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If509__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If509__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If509__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp395__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If512__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If512__1 = iface.f_gen_sle_bits(v_If509__2, v_If504__2);
          } else {
            v_If512__1 = iface.f_gen_slt_bits(v_If509__2, v_If504__2);
          } // if
          const auto v_If513__1 = iface.f_decl_bv("If513__1", iface.bigint_lit("16"));
          const auto v_temp31 = iface.f_gen_branch(v_If512__1);
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_If513__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_If513__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp31));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If513__1), iface.f_gen_append_bits(iface.f_gen_load(v_If498__1), iface.f_gen_append_bits(iface.f_gen_load(v_If483__1), iface.f_gen_append_bits(iface.f_gen_load(v_If468__1), iface.f_gen_append_bits(iface.f_gen_load(v_If453__1), iface.f_gen_append_bits(iface.f_gen_load(v_If438__1), iface.f_gen_append_bits(iface.f_gen_load(v_If423__1), iface.f_gen_load(v_If408__1)))))))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp524__2 = typename Traits::rt_expr{};
          v_Exp524__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp527__2 = typename Traits::rt_expr{};
          v_Exp527__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If530__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If530__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If530__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If535__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If535__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If535__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If538__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If538__1 = iface.f_gen_sle_bits(v_If535__2, v_If530__2);
          } else {
            v_If538__1 = iface.f_gen_slt_bits(v_If535__2, v_If530__2);
          } // if
          const auto v_If540__1 = iface.f_decl_bv("If540__1", iface.bigint_lit("16"));
          const auto v_temp32 = iface.f_gen_branch(v_If538__1);
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(v_If540__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp32));
          iface.f_gen_store(v_If540__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          auto v_If546__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If546__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp524__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If546__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp524__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If551__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If551__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If551__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If554__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If554__1 = iface.f_gen_sle_bits(v_If551__2, v_If546__2);
          } else {
            v_If554__1 = iface.f_gen_slt_bits(v_If551__2, v_If546__2);
          } // if
          const auto v_If555__1 = iface.f_decl_bv("If555__1", iface.bigint_lit("16"));
          const auto v_temp33 = iface.f_gen_branch(v_If554__1);
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_If555__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_If555__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp33));
          auto v_If561__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If561__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp524__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If561__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp524__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If566__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If566__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If566__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If569__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If569__1 = iface.f_gen_sle_bits(v_If566__2, v_If561__2);
          } else {
            v_If569__1 = iface.f_gen_slt_bits(v_If566__2, v_If561__2);
          } // if
          const auto v_If570__1 = iface.f_decl_bv("If570__1", iface.bigint_lit("16"));
          const auto v_temp34 = iface.f_gen_branch(v_If569__1);
          iface.f_switch_context(iface.f_true_branch(v_temp34));
          iface.f_gen_store(v_If570__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp34));
          iface.f_gen_store(v_If570__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp34));
          auto v_If576__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If576__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp524__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If576__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp524__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If581__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If581__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If581__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp527__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If584__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If584__1 = iface.f_gen_sle_bits(v_If581__2, v_If576__2);
          } else {
            v_If584__1 = iface.f_gen_slt_bits(v_If581__2, v_If576__2);
          } // if
          const auto v_If585__1 = iface.f_decl_bv("If585__1", iface.bigint_lit("16"));
          const auto v_temp35 = iface.f_gen_branch(v_If584__1);
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(v_If585__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp35));
          iface.f_gen_store(v_If585__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If585__1), iface.f_gen_append_bits(iface.f_gen_load(v_If570__1), iface.f_gen_append_bits(iface.f_gen_load(v_If555__1), iface.f_gen_load(v_If540__1)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp597__2 = typename Traits::rt_expr{};
            v_Exp597__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp600__2 = typename Traits::rt_expr{};
            v_Exp600__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If603__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If603__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If603__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If608__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If608__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp600__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If608__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp600__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If611__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If611__1 = iface.f_gen_sle_bits(v_If608__2, v_If603__2);
            } else {
              v_If611__1 = iface.f_gen_slt_bits(v_If608__2, v_If603__2);
            } // if
            const auto v_If613__1 = iface.f_decl_bv("If613__1", iface.bigint_lit("32"));
            const auto v_temp36 = iface.f_gen_branch(v_If611__1);
            iface.f_switch_context(iface.f_true_branch(v_temp36));
            iface.f_gen_store(v_If613__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp36));
            iface.f_gen_store(v_If613__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp36));
            auto v_If619__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If619__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp597__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If619__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp597__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If624__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If624__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp600__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If624__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp600__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If627__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If627__1 = iface.f_gen_sle_bits(v_If624__2, v_If619__2);
            } else {
              v_If627__1 = iface.f_gen_slt_bits(v_If624__2, v_If619__2);
            } // if
            const auto v_If628__1 = iface.f_decl_bv("If628__1", iface.bigint_lit("32"));
            const auto v_temp37 = iface.f_gen_branch(v_If627__1);
            iface.f_switch_context(iface.f_true_branch(v_temp37));
            iface.f_gen_store(v_If628__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp37));
            iface.f_gen_store(v_If628__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp37));
            auto v_If634__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If634__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp597__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If634__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp597__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If639__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If639__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp600__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If639__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp600__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If642__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If642__1 = iface.f_gen_sle_bits(v_If639__2, v_If634__2);
            } else {
              v_If642__1 = iface.f_gen_slt_bits(v_If639__2, v_If634__2);
            } // if
            const auto v_If643__1 = iface.f_decl_bv("If643__1", iface.bigint_lit("32"));
            const auto v_temp38 = iface.f_gen_branch(v_If642__1);
            iface.f_switch_context(iface.f_true_branch(v_temp38));
            iface.f_gen_store(v_If643__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp38));
            iface.f_gen_store(v_If643__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp38));
            auto v_If649__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If649__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp597__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If649__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp597__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If654__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If654__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp600__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If654__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp600__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If657__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If657__1 = iface.f_gen_sle_bits(v_If654__2, v_If649__2);
            } else {
              v_If657__1 = iface.f_gen_slt_bits(v_If654__2, v_If649__2);
            } // if
            const auto v_If658__1 = iface.f_decl_bv("If658__1", iface.bigint_lit("32"));
            const auto v_temp39 = iface.f_gen_branch(v_If657__1);
            iface.f_switch_context(iface.f_true_branch(v_temp39));
            iface.f_gen_store(v_If658__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp39));
            iface.f_gen_store(v_If658__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp39));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If658__1), iface.f_gen_append_bits(iface.f_gen_load(v_If643__1), iface.f_gen_append_bits(iface.f_gen_load(v_If628__1), iface.f_gen_load(v_If613__1)))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp669__2 = typename Traits::rt_expr{};
            v_Exp669__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp672__2 = typename Traits::rt_expr{};
            v_Exp672__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If675__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If675__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If675__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If680__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If680__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp672__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If680__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp672__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If683__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If683__1 = iface.f_gen_sle_bits(v_If680__2, v_If675__2);
            } else {
              v_If683__1 = iface.f_gen_slt_bits(v_If680__2, v_If675__2);
            } // if
            const auto v_If685__1 = iface.f_decl_bv("If685__1", iface.bigint_lit("32"));
            const auto v_temp40 = iface.f_gen_branch(v_If683__1);
            iface.f_switch_context(iface.f_true_branch(v_temp40));
            iface.f_gen_store(v_If685__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp40));
            iface.f_gen_store(v_If685__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp40));
            auto v_If691__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If691__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp669__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If691__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp669__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If696__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If696__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp672__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If696__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp672__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If699__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If699__1 = iface.f_gen_sle_bits(v_If696__2, v_If691__2);
            } else {
              v_If699__1 = iface.f_gen_slt_bits(v_If696__2, v_If691__2);
            } // if
            const auto v_If700__1 = iface.f_decl_bv("If700__1", iface.bigint_lit("32"));
            const auto v_temp41 = iface.f_gen_branch(v_If699__1);
            iface.f_switch_context(iface.f_true_branch(v_temp41));
            iface.f_gen_store(v_If700__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp41));
            iface.f_gen_store(v_If700__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp41));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If700__1), iface.f_gen_load(v_If685__1)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp712__2 = typename Traits::rt_expr{};
              v_Exp712__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp715__2 = typename Traits::rt_expr{};
              v_Exp715__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If718__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If718__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If718__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If723__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If723__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp715__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If723__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp715__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If726__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If726__1 = iface.f_gen_sle_bits(v_If723__2, v_If718__2);
              } else {
                v_If726__1 = iface.f_gen_slt_bits(v_If723__2, v_If718__2);
              } // if
              const auto v_If728__1 = iface.f_decl_bv("If728__1", iface.bigint_lit("64"));
              const auto v_temp42 = iface.f_gen_branch(v_If726__1);
              iface.f_switch_context(iface.f_true_branch(v_temp42));
              iface.f_gen_store(v_If728__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp42));
              iface.f_gen_store(v_If728__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp42));
              auto v_If734__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If734__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp712__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If734__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp712__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If739__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If739__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp715__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If739__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp715__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If742__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If742__1 = iface.f_gen_sle_bits(v_If739__2, v_If734__2);
              } else {
                v_If742__1 = iface.f_gen_slt_bits(v_If739__2, v_If734__2);
              } // if
              const auto v_If743__1 = iface.f_decl_bv("If743__1", iface.bigint_lit("64"));
              const auto v_temp43 = iface.f_gen_branch(v_If742__1);
              iface.f_switch_context(iface.f_true_branch(v_temp43));
              iface.f_gen_store(v_If743__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp43));
              iface.f_gen_store(v_If743__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp43));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If743__1), iface.f_gen_load(v_If728__1)));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp757__2 = typename Traits::rt_expr{};
              v_Exp757__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If760__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If760__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If760__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If765__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If765__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp757__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If765__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp757__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If768__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If768__1 = iface.f_gen_sle_bits(v_If765__2, v_If760__2);
              } else {
                v_If768__1 = iface.f_gen_slt_bits(v_If765__2, v_If760__2);
              } // if
              const auto v_If770__1 = iface.f_decl_bv("If770__1", iface.bigint_lit("64"));
              const auto v_temp44 = iface.f_gen_branch(v_If768__1);
              iface.f_switch_context(iface.f_true_branch(v_temp44));
              iface.f_gen_store(v_If770__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp44));
              iface.f_gen_store(v_If770__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp44));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If770__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd


} // namespace aslp
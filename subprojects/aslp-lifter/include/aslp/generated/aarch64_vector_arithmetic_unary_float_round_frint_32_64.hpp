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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_round_frint_32_64(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_If6__1 = iface.bits_zero(iface.bigint_lit("7"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          v_If6__1 = iface.bits_lit(7U, "0100000");
        } else {
          v_If6__1 = iface.bits_lit(7U, "1000000");
        } // if
        auto v_If7__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          v_If7__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "011"));
        } else {
          const auto v_FPDecodeRounding10__3 = iface.f_decl_bv("FPDecodeRounding10__3", iface.bigint_lit("3"));
          const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_store(v_FPDecodeRounding10__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
          iface.f_switch_context(iface.f_false_branch(v_temp0));
          const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_store(v_FPDecodeRounding10__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
          iface.f_switch_context(iface.f_false_branch(v_temp1));
          const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
          iface.f_switch_context(iface.f_true_branch(v_temp2));
          iface.f_gen_store(v_FPDecodeRounding10__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
          iface.f_switch_context(iface.f_false_branch(v_temp2));
          const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
          iface.f_switch_context(iface.f_true_branch(v_temp3));
          iface.f_gen_store(v_FPDecodeRounding10__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
          iface.f_switch_context(iface.f_false_branch(v_temp3));
          iface.f_gen_assert(iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          v_If7__1 = iface.f_gen_load(v_FPDecodeRounding10__3);
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp18__2 = iface.f_decl_bv("Exp18__2", iface.bigint_lit("32"));
        iface.f_gen_store(v_Exp18__2, iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If7__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If6__1))));
        const auto v_Exp21__2 = iface.f_decl_bv("Exp21__2", iface.bigint_lit("32"));
        iface.f_gen_store(v_Exp21__2, iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If7__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If6__1))));
        const auto v_Exp24__2 = iface.f_decl_bv("Exp24__2", iface.bigint_lit("32"));
        iface.f_gen_store(v_Exp24__2, iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If7__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If6__1))));
        auto v_Exp27__2 = typename Traits::rt_expr{};
        v_Exp27__2 = iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If7__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If6__1)));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp27__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp24__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp21__2), iface.f_gen_load(v_Exp18__2)))));
      } else {
        auto v_If34__1 = iface.bits_zero(iface.bigint_lit("7"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          v_If34__1 = iface.bits_lit(7U, "0100000");
        } else {
          v_If34__1 = iface.bits_lit(7U, "1000000");
        } // if
        auto v_If35__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          v_If35__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "011"));
        } else {
          const auto v_FPDecodeRounding38__3 = iface.f_decl_bv("FPDecodeRounding38__3", iface.bigint_lit("3"));
          const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
          iface.f_switch_context(iface.f_true_branch(v_temp4));
          iface.f_gen_store(v_FPDecodeRounding38__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
          iface.f_switch_context(iface.f_false_branch(v_temp4));
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(v_FPDecodeRounding38__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
          iface.f_switch_context(iface.f_false_branch(v_temp5));
          const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_FPDecodeRounding38__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_FPDecodeRounding38__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          iface.f_gen_assert(iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp4));
          v_If35__1 = iface.f_gen_load(v_FPDecodeRounding38__3);
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp46__2 = iface.f_decl_bv("Exp46__2", iface.bigint_lit("32"));
        iface.f_gen_store(v_Exp46__2, iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If35__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If34__1))));
        auto v_Exp49__2 = typename Traits::rt_expr{};
        v_Exp49__2 = iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If35__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If34__1)));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp49__2, iface.f_gen_load(v_Exp46__2)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_If57__1 = iface.bits_zero(iface.bigint_lit("7"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            v_If57__1 = iface.bits_lit(7U, "0100000");
          } else {
            v_If57__1 = iface.bits_lit(7U, "1000000");
          } // if
          auto v_If58__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            v_If58__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "011"));
          } else {
            const auto v_FPDecodeRounding61__3 = iface.f_decl_bv("FPDecodeRounding61__3", iface.bigint_lit("3"));
            const auto v_temp8 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
            iface.f_switch_context(iface.f_true_branch(v_temp8));
            iface.f_gen_store(v_FPDecodeRounding61__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
            iface.f_switch_context(iface.f_false_branch(v_temp8));
            const auto v_temp9 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
            iface.f_switch_context(iface.f_true_branch(v_temp9));
            iface.f_gen_store(v_FPDecodeRounding61__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
            iface.f_switch_context(iface.f_false_branch(v_temp9));
            const auto v_temp10 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
            iface.f_switch_context(iface.f_true_branch(v_temp10));
            iface.f_gen_store(v_FPDecodeRounding61__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
            iface.f_switch_context(iface.f_false_branch(v_temp10));
            const auto v_temp11 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
            iface.f_switch_context(iface.f_true_branch(v_temp11));
            iface.f_gen_store(v_FPDecodeRounding61__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
            iface.f_switch_context(iface.f_false_branch(v_temp11));
            iface.f_gen_assert(iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp8));
            v_If58__1 = iface.f_gen_load(v_FPDecodeRounding61__3);
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp69__2 = iface.f_decl_bv("Exp69__2", iface.bigint_lit("64"));
          iface.f_gen_store(v_Exp69__2, iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If58__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If57__1))));
          auto v_Exp72__2 = typename Traits::rt_expr{};
          v_Exp72__2 = iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If58__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If57__1)));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp72__2, iface.f_gen_load(v_Exp69__2)));
        } else {
          auto v_If79__1 = iface.bits_zero(iface.bigint_lit("7"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            v_If79__1 = iface.bits_lit(7U, "0100000");
          } else {
            v_If79__1 = iface.bits_lit(7U, "1000000");
          } // if
          auto v_If80__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            v_If80__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "011"));
          } else {
            const auto v_FPDecodeRounding83__3 = iface.f_decl_bv("FPDecodeRounding83__3", iface.bigint_lit("3"));
            const auto v_temp12 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
            iface.f_switch_context(iface.f_true_branch(v_temp12));
            iface.f_gen_store(v_FPDecodeRounding83__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
            iface.f_switch_context(iface.f_false_branch(v_temp12));
            const auto v_temp13 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
            iface.f_switch_context(iface.f_true_branch(v_temp13));
            iface.f_gen_store(v_FPDecodeRounding83__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
            iface.f_switch_context(iface.f_false_branch(v_temp13));
            const auto v_temp14 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
            iface.f_switch_context(iface.f_true_branch(v_temp14));
            iface.f_gen_store(v_FPDecodeRounding83__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
            iface.f_switch_context(iface.f_false_branch(v_temp14));
            const auto v_temp15 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
            iface.f_switch_context(iface.f_true_branch(v_temp15));
            iface.f_gen_store(v_FPDecodeRounding83__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
            iface.f_switch_context(iface.f_false_branch(v_temp15));
            iface.f_gen_assert(iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp12));
            v_If80__1 = iface.f_gen_load(v_FPDecodeRounding83__3);
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp91__2 = typename Traits::rt_expr{};
          v_Exp91__2 = iface.f_gen_FPRoundIntN(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_If80__1), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If79__1)));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp91__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_float_round_frint_32_64


} // namespace aslp
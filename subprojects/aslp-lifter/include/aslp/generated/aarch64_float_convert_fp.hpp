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
void aslp_lifter<Traits>::f_aarch64_float_convert_fp(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    const auto v_Exp3__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
    if (v_Exp3__1) {
      const auto v_Exp4__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
      if (v_Exp4__1) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp7__2 = typename Traits::rt_expr{};
        v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_FPDecodeRounding11__4 = iface.f_decl_bv("FPDecodeRounding11__4", iface.bigint_lit("3"));
        const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_FPDecodeRounding11__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_FPDecodeRounding11__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_FPDecodeRounding11__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_FPDecodeRounding11__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_assert(iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        auto v_Exp13__3 = typename Traits::rt_expr{};
        v_Exp13__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding11__4)));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp13__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        const auto v_Exp19__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
        if (v_Exp19__1) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp22__2 = typename Traits::rt_expr{};
          v_Exp22__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_FPDecodeRounding26__4 = iface.f_decl_bv("FPDecodeRounding26__4", iface.bigint_lit("3"));
          const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
          iface.f_switch_context(iface.f_true_branch(v_temp4));
          iface.f_gen_store(v_FPDecodeRounding26__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
          iface.f_switch_context(iface.f_false_branch(v_temp4));
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(v_FPDecodeRounding26__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
          iface.f_switch_context(iface.f_false_branch(v_temp5));
          const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_FPDecodeRounding26__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_FPDecodeRounding26__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          iface.f_gen_assert(iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp4));
          auto v_Exp28__3 = typename Traits::rt_expr{};
          v_Exp28__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp22__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding26__4)));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp28__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          const auto v_Exp34__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"));
          if (v_Exp34__1) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            const auto v_Exp35__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"));
            if (v_Exp35__1) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp38__2 = typename Traits::rt_expr{};
              v_Exp38__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              const auto v_FPDecodeRounding42__4 = iface.f_decl_bv("FPDecodeRounding42__4", iface.bigint_lit("3"));
              const auto v_temp8 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
              iface.f_switch_context(iface.f_true_branch(v_temp8));
              iface.f_gen_store(v_FPDecodeRounding42__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
              iface.f_switch_context(iface.f_false_branch(v_temp8));
              const auto v_temp9 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
              iface.f_switch_context(iface.f_true_branch(v_temp9));
              iface.f_gen_store(v_FPDecodeRounding42__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
              iface.f_switch_context(iface.f_false_branch(v_temp9));
              const auto v_temp10 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
              iface.f_switch_context(iface.f_true_branch(v_temp10));
              iface.f_gen_store(v_FPDecodeRounding42__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
              iface.f_switch_context(iface.f_false_branch(v_temp10));
              const auto v_temp11 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
              iface.f_switch_context(iface.f_true_branch(v_temp11));
              iface.f_gen_store(v_FPDecodeRounding42__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
              iface.f_switch_context(iface.f_false_branch(v_temp11));
              iface.f_gen_assert(iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp8));
              auto v_Exp44__3 = typename Traits::rt_expr{};
              v_Exp44__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp38__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding42__4)));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp44__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } else {
      const auto v_Exp50__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
      if (v_Exp50__1) {
        const auto v_Exp51__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
        if (v_Exp51__1) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp54__2 = typename Traits::rt_expr{};
          v_Exp54__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_FPDecodeRounding58__4 = iface.f_decl_bv("FPDecodeRounding58__4", iface.bigint_lit("3"));
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(v_FPDecodeRounding58__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
          iface.f_switch_context(iface.f_false_branch(v_temp12));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_FPDecodeRounding58__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          const auto v_temp14 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(v_FPDecodeRounding58__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
          iface.f_switch_context(iface.f_false_branch(v_temp14));
          const auto v_temp15 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
          iface.f_switch_context(iface.f_true_branch(v_temp15));
          iface.f_gen_store(v_FPDecodeRounding58__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
          iface.f_switch_context(iface.f_false_branch(v_temp15));
          iface.f_gen_assert(iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
          auto v_Exp60__3 = typename Traits::rt_expr{};
          v_Exp60__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp54__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding58__4)));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp60__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          const auto v_Exp66__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
          if (v_Exp66__1) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp69__2 = typename Traits::rt_expr{};
            v_Exp69__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_FPDecodeRounding73__4 = iface.f_decl_bv("FPDecodeRounding73__4", iface.bigint_lit("3"));
            const auto v_temp16 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
            iface.f_switch_context(iface.f_true_branch(v_temp16));
            iface.f_gen_store(v_FPDecodeRounding73__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
            iface.f_switch_context(iface.f_false_branch(v_temp16));
            const auto v_temp17 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
            iface.f_switch_context(iface.f_true_branch(v_temp17));
            iface.f_gen_store(v_FPDecodeRounding73__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
            iface.f_switch_context(iface.f_false_branch(v_temp17));
            const auto v_temp18 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
            iface.f_switch_context(iface.f_true_branch(v_temp18));
            iface.f_gen_store(v_FPDecodeRounding73__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
            iface.f_switch_context(iface.f_false_branch(v_temp18));
            const auto v_temp19 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
            iface.f_switch_context(iface.f_true_branch(v_temp19));
            iface.f_gen_store(v_FPDecodeRounding73__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
            iface.f_switch_context(iface.f_false_branch(v_temp19));
            iface.f_gen_assert(iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp16));
            auto v_Exp75__3 = typename Traits::rt_expr{};
            v_Exp75__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp69__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding73__4)));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp75__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            const auto v_Exp81__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"));
            if (v_Exp81__1) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              const auto v_Exp82__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"));
              if (v_Exp82__1) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp85__2 = typename Traits::rt_expr{};
                v_Exp85__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                const auto v_FPDecodeRounding89__4 = iface.f_decl_bv("FPDecodeRounding89__4", iface.bigint_lit("3"));
                const auto v_temp20 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
                iface.f_switch_context(iface.f_true_branch(v_temp20));
                iface.f_gen_store(v_FPDecodeRounding89__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
                iface.f_switch_context(iface.f_false_branch(v_temp20));
                const auto v_temp21 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
                iface.f_switch_context(iface.f_true_branch(v_temp21));
                iface.f_gen_store(v_FPDecodeRounding89__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
                iface.f_switch_context(iface.f_false_branch(v_temp21));
                const auto v_temp22 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
                iface.f_switch_context(iface.f_true_branch(v_temp22));
                iface.f_gen_store(v_FPDecodeRounding89__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
                iface.f_switch_context(iface.f_false_branch(v_temp22));
                const auto v_temp23 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
                iface.f_switch_context(iface.f_true_branch(v_temp23));
                iface.f_gen_store(v_FPDecodeRounding89__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
                iface.f_switch_context(iface.f_false_branch(v_temp23));
                iface.f_gen_assert(iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp20));
                auto v_Exp91__3 = typename Traits::rt_expr{};
                v_Exp91__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp85__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding89__4)));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp91__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } else {
        const auto v_Exp97__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"));
        if (v_Exp97__1) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          const auto v_Exp98__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"));
          if (v_Exp98__1) {
            const auto v_Exp99__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
            if (v_Exp99__1) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp102__2 = typename Traits::rt_expr{};
              v_Exp102__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              const auto v_FPDecodeRounding106__4 = iface.f_decl_bv("FPDecodeRounding106__4", iface.bigint_lit("3"));
              const auto v_temp24 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
              iface.f_switch_context(iface.f_true_branch(v_temp24));
              iface.f_gen_store(v_FPDecodeRounding106__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
              iface.f_switch_context(iface.f_false_branch(v_temp24));
              const auto v_temp25 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
              iface.f_switch_context(iface.f_true_branch(v_temp25));
              iface.f_gen_store(v_FPDecodeRounding106__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
              iface.f_switch_context(iface.f_false_branch(v_temp25));
              const auto v_temp26 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
              iface.f_switch_context(iface.f_true_branch(v_temp26));
              iface.f_gen_store(v_FPDecodeRounding106__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
              iface.f_switch_context(iface.f_false_branch(v_temp26));
              const auto v_temp27 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
              iface.f_switch_context(iface.f_true_branch(v_temp27));
              iface.f_gen_store(v_FPDecodeRounding106__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
              iface.f_switch_context(iface.f_false_branch(v_temp27));
              iface.f_gen_assert(iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp24));
              auto v_Exp108__3 = typename Traits::rt_expr{};
              v_Exp108__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp102__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding106__4)));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp108__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              const auto v_Exp114__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
              if (v_Exp114__1) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp117__2 = typename Traits::rt_expr{};
                v_Exp117__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                const auto v_FPDecodeRounding121__4 = iface.f_decl_bv("FPDecodeRounding121__4", iface.bigint_lit("3"));
                const auto v_temp28 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
                iface.f_switch_context(iface.f_true_branch(v_temp28));
                iface.f_gen_store(v_FPDecodeRounding121__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
                iface.f_switch_context(iface.f_false_branch(v_temp28));
                const auto v_temp29 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
                iface.f_switch_context(iface.f_true_branch(v_temp29));
                iface.f_gen_store(v_FPDecodeRounding121__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
                iface.f_switch_context(iface.f_false_branch(v_temp29));
                const auto v_temp30 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
                iface.f_switch_context(iface.f_true_branch(v_temp30));
                iface.f_gen_store(v_FPDecodeRounding121__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
                iface.f_switch_context(iface.f_false_branch(v_temp30));
                const auto v_temp31 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
                iface.f_switch_context(iface.f_true_branch(v_temp31));
                iface.f_gen_store(v_FPDecodeRounding121__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
                iface.f_switch_context(iface.f_false_branch(v_temp31));
                iface.f_gen_assert(iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp28));
                auto v_Exp123__3 = typename Traits::rt_expr{};
                v_Exp123__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp117__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding121__4)));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp123__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                const auto v_Exp129__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"));
                if (v_Exp129__1) {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } else {
                  const auto v_Exp130__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"));
                  if (v_Exp130__1) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    auto v_Exp133__2 = typename Traits::rt_expr{};
                    v_Exp133__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                    const auto v_FPDecodeRounding137__4 = iface.f_decl_bv("FPDecodeRounding137__4", iface.bigint_lit("3"));
                    const auto v_temp32 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp32));
                    iface.f_gen_store(v_FPDecodeRounding137__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
                    iface.f_switch_context(iface.f_false_branch(v_temp32));
                    const auto v_temp33 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp33));
                    iface.f_gen_store(v_FPDecodeRounding137__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
                    iface.f_switch_context(iface.f_false_branch(v_temp33));
                    const auto v_temp34 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp34));
                    iface.f_gen_store(v_FPDecodeRounding137__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
                    iface.f_switch_context(iface.f_false_branch(v_temp34));
                    const auto v_temp35 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp35));
                    iface.f_gen_store(v_FPDecodeRounding137__4, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
                    iface.f_switch_context(iface.f_false_branch(v_temp35));
                    iface.f_gen_assert(iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp32));
                    auto v_Exp139__3 = typename Traits::rt_expr{};
                    v_Exp139__3 = iface.f_gen_FPConvert(iface.f_gen_slice(v_Exp133__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding137__4)));
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp139__3, iface.f_gen_int_lit(iface.bigint_lit("128"))));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_float_convert_fp


} // namespace aslp
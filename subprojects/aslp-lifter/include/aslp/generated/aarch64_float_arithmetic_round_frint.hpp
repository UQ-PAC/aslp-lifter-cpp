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
void aslp_lifter<Traits>::f_aarch64_float_arithmetic_round_frint(typename Traits::bits v_enc) {
  const auto v_Exp3__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
  if (v_Exp3__1) {
    auto v_exact__1 = false;
    auto v_rounding__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100")), iface.bits_lit(3U, "000"))) {
      auto v_FPDecodeRounding4__2 = iface.bits_zero(iface.bigint_lit("3"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
        v_FPDecodeRounding4__2 = iface.bits_lit(3U, "000");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
          v_FPDecodeRounding4__2 = iface.bits_lit(3U, "001");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
            v_FPDecodeRounding4__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
              v_FPDecodeRounding4__2 = iface.bits_lit(3U, "011");
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
      v_rounding__1 = iface.f_gen_bit_lit(v_FPDecodeRounding4__2);
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
        v_rounding__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "100"));
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
            const auto v_FPDecodeRounding8__3 = iface.f_decl_bv("FPDecodeRounding8__3", iface.bigint_lit("3"));
            const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
            iface.f_switch_context(iface.f_true_branch(v_temp0));
            iface.f_gen_store(v_FPDecodeRounding8__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
            iface.f_switch_context(iface.f_false_branch(v_temp0));
            const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
            iface.f_switch_context(iface.f_true_branch(v_temp1));
            iface.f_gen_store(v_FPDecodeRounding8__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
            iface.f_switch_context(iface.f_false_branch(v_temp1));
            const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
            iface.f_switch_context(iface.f_true_branch(v_temp2));
            iface.f_gen_store(v_FPDecodeRounding8__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
            iface.f_switch_context(iface.f_false_branch(v_temp2));
            const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
            iface.f_switch_context(iface.f_true_branch(v_temp3));
            iface.f_gen_store(v_FPDecodeRounding8__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
            iface.f_switch_context(iface.f_false_branch(v_temp3));
            iface.f_gen_assert(iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp0));
            v_rounding__1 = iface.f_gen_load(v_FPDecodeRounding8__3);
            v_exact__1 = true;
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
              const auto v_FPDecodeRounding12__3 = iface.f_decl_bv("FPDecodeRounding12__3", iface.bigint_lit("3"));
              const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
              iface.f_switch_context(iface.f_true_branch(v_temp4));
              iface.f_gen_store(v_FPDecodeRounding12__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
              iface.f_switch_context(iface.f_false_branch(v_temp4));
              const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
              iface.f_switch_context(iface.f_true_branch(v_temp5));
              iface.f_gen_store(v_FPDecodeRounding12__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
              iface.f_switch_context(iface.f_false_branch(v_temp5));
              const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
              iface.f_switch_context(iface.f_true_branch(v_temp6));
              iface.f_gen_store(v_FPDecodeRounding12__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
              iface.f_switch_context(iface.f_false_branch(v_temp6));
              const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
              iface.f_switch_context(iface.f_true_branch(v_temp7));
              iface.f_gen_store(v_FPDecodeRounding12__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
              iface.f_switch_context(iface.f_false_branch(v_temp7));
              iface.f_gen_assert(iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp4));
              v_rounding__1 = iface.f_gen_load(v_FPDecodeRounding12__3);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp20__2 = typename Traits::rt_expr{};
    v_Exp20__2 = iface.f_gen_FPRoundInt(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_rounding__1), iface.f_gen_bool_lit(v_exact__1));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp20__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    const auto v_Exp26__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
    if (v_Exp26__1) {
      auto v_exact__1 = false;
      auto v_rounding__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100")), iface.bits_lit(3U, "000"))) {
        auto v_FPDecodeRounding27__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
          v_FPDecodeRounding27__2 = iface.bits_lit(3U, "000");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
            v_FPDecodeRounding27__2 = iface.bits_lit(3U, "001");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
              v_FPDecodeRounding27__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                v_FPDecodeRounding27__2 = iface.bits_lit(3U, "011");
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
        v_rounding__1 = iface.f_gen_bit_lit(v_FPDecodeRounding27__2);
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
          v_rounding__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "100"));
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
              const auto v_FPDecodeRounding31__3 = iface.f_decl_bv("FPDecodeRounding31__3", iface.bigint_lit("3"));
              const auto v_temp8 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
              iface.f_switch_context(iface.f_true_branch(v_temp8));
              iface.f_gen_store(v_FPDecodeRounding31__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
              iface.f_switch_context(iface.f_false_branch(v_temp8));
              const auto v_temp9 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
              iface.f_switch_context(iface.f_true_branch(v_temp9));
              iface.f_gen_store(v_FPDecodeRounding31__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
              iface.f_switch_context(iface.f_false_branch(v_temp9));
              const auto v_temp10 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
              iface.f_switch_context(iface.f_true_branch(v_temp10));
              iface.f_gen_store(v_FPDecodeRounding31__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
              iface.f_switch_context(iface.f_false_branch(v_temp10));
              const auto v_temp11 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
              iface.f_switch_context(iface.f_true_branch(v_temp11));
              iface.f_gen_store(v_FPDecodeRounding31__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
              iface.f_switch_context(iface.f_false_branch(v_temp11));
              iface.f_gen_assert(iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp8));
              v_rounding__1 = iface.f_gen_load(v_FPDecodeRounding31__3);
              v_exact__1 = true;
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                const auto v_FPDecodeRounding35__3 = iface.f_decl_bv("FPDecodeRounding35__3", iface.bigint_lit("3"));
                const auto v_temp12 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
                iface.f_switch_context(iface.f_true_branch(v_temp12));
                iface.f_gen_store(v_FPDecodeRounding35__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
                iface.f_switch_context(iface.f_false_branch(v_temp12));
                const auto v_temp13 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
                iface.f_switch_context(iface.f_true_branch(v_temp13));
                iface.f_gen_store(v_FPDecodeRounding35__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
                iface.f_switch_context(iface.f_false_branch(v_temp13));
                const auto v_temp14 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
                iface.f_switch_context(iface.f_true_branch(v_temp14));
                iface.f_gen_store(v_FPDecodeRounding35__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
                iface.f_switch_context(iface.f_false_branch(v_temp14));
                const auto v_temp15 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
                iface.f_switch_context(iface.f_true_branch(v_temp15));
                iface.f_gen_store(v_FPDecodeRounding35__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
                iface.f_switch_context(iface.f_false_branch(v_temp15));
                iface.f_gen_assert(iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp12));
                v_rounding__1 = iface.f_gen_load(v_FPDecodeRounding35__3);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp43__2 = typename Traits::rt_expr{};
      v_Exp43__2 = iface.f_gen_FPRoundInt(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_rounding__1), iface.f_gen_bool_lit(v_exact__1));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp43__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      const auto v_Exp49__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"));
      if (v_Exp49__1) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        const auto v_Exp50__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"));
        if (v_Exp50__1) {
          auto v_exact__1 = false;
          auto v_rounding__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100")), iface.bits_lit(3U, "000"))) {
            auto v_FPDecodeRounding52__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
              v_FPDecodeRounding52__2 = iface.bits_lit(3U, "000");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                v_FPDecodeRounding52__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                  v_FPDecodeRounding52__2 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                    v_FPDecodeRounding52__2 = iface.bits_lit(3U, "011");
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            v_rounding__1 = iface.f_gen_bit_lit(v_FPDecodeRounding52__2);
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
              v_rounding__1 = iface.f_gen_bit_lit(iface.bits_lit(3U, "100"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                  const auto v_FPDecodeRounding56__3 = iface.f_decl_bv("FPDecodeRounding56__3", iface.bigint_lit("3"));
                  const auto v_temp16 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp16));
                  iface.f_gen_store(v_FPDecodeRounding56__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
                  iface.f_switch_context(iface.f_false_branch(v_temp16));
                  const auto v_temp17 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp17));
                  iface.f_gen_store(v_FPDecodeRounding56__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
                  iface.f_switch_context(iface.f_false_branch(v_temp17));
                  const auto v_temp18 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp18));
                  iface.f_gen_store(v_FPDecodeRounding56__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
                  iface.f_switch_context(iface.f_false_branch(v_temp18));
                  const auto v_temp19 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
                  iface.f_switch_context(iface.f_true_branch(v_temp19));
                  iface.f_gen_store(v_FPDecodeRounding56__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
                  iface.f_switch_context(iface.f_false_branch(v_temp19));
                  iface.f_gen_assert(iface.f_gen_bool_lit(false));
                  iface.f_switch_context(iface.f_merge_branch(v_temp16));
                  v_rounding__1 = iface.f_gen_load(v_FPDecodeRounding56__3);
                  v_exact__1 = true;
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                    const auto v_FPDecodeRounding60__3 = iface.f_decl_bv("FPDecodeRounding60__3", iface.bigint_lit("3"));
                    const auto v_temp20 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp20));
                    iface.f_gen_store(v_FPDecodeRounding60__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
                    iface.f_switch_context(iface.f_false_branch(v_temp20));
                    const auto v_temp21 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp21));
                    iface.f_gen_store(v_FPDecodeRounding60__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
                    iface.f_switch_context(iface.f_false_branch(v_temp21));
                    const auto v_temp22 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp22));
                    iface.f_gen_store(v_FPDecodeRounding60__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
                    iface.f_switch_context(iface.f_false_branch(v_temp22));
                    const auto v_temp23 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
                    iface.f_switch_context(iface.f_true_branch(v_temp23));
                    iface.f_gen_store(v_FPDecodeRounding60__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
                    iface.f_switch_context(iface.f_false_branch(v_temp23));
                    iface.f_gen_assert(iface.f_gen_bool_lit(false));
                    iface.f_switch_context(iface.f_merge_branch(v_temp20));
                    v_rounding__1 = iface.f_gen_load(v_FPDecodeRounding60__3);
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp68__2 = typename Traits::rt_expr{};
          v_Exp68__2 = iface.f_gen_FPRoundInt(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(v_rounding__1), iface.f_gen_bool_lit(v_exact__1));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_Exp68__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_float_arithmetic_round_frint


} // namespace aslp
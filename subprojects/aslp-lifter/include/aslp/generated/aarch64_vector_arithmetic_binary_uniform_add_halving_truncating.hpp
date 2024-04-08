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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_halving_truncating(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
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
        auto v_If25__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If25__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If25__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If30__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If30__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If30__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If36__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If36__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If36__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If41__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If41__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If41__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If47__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If47__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If47__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If52__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If52__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If52__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If58__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If58__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If58__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If63__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If63__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If63__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If69__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If69__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If69__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If74__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If74__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If74__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If80__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If80__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If80__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If85__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If85__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If85__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If91__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If91__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If91__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If96__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If96__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If96__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If102__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If102__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If102__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If107__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If107__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If107__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If113__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If113__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If113__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If118__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If118__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If118__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If124__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If124__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If124__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If129__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If129__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If129__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If135__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If135__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If135__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If140__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If140__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If140__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If146__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If146__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If146__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If151__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If151__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If151__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If157__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If157__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If157__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If162__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If162__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If162__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If168__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If168__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If168__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If173__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If173__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If173__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If179__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If179__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If179__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If184__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If184__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If184__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If179__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If184__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If168__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If173__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If157__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If162__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If146__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If151__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If135__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If140__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If124__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If129__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If113__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If118__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If102__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If107__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If91__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If96__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If80__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If85__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If69__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If58__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If63__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If47__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If52__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If36__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If41__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If25__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If30__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If13__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8"))))))))))))))))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp195__2 = typename Traits::rt_expr{};
        v_Exp195__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp198__2 = typename Traits::rt_expr{};
        v_Exp198__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If201__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If201__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If201__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If206__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If206__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If206__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If213__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If213__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If213__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If218__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If218__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If218__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If224__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If224__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If224__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If229__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If229__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If229__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If235__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If235__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If235__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If240__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If240__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If240__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If246__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If246__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If246__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If251__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If251__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If251__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If257__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If257__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If257__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If262__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If262__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If262__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If268__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If268__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If268__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If273__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If273__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If273__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If279__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If279__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If279__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If284__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If284__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If284__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp198__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If279__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If284__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If268__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If273__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If257__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If262__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If246__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If251__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If235__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If240__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If224__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If229__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If213__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If218__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If201__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If206__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("9")), iface.bigint_lit("0"), iface.bigint_lit("9"))), iface.bigint_lit("1"), iface.bigint_lit("8"))))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp296__2 = typename Traits::rt_expr{};
          v_Exp296__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp299__2 = typename Traits::rt_expr{};
          v_Exp299__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If302__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If302__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If302__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If307__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If307__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If307__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If314__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If314__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If314__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If319__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If319__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If319__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If325__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If325__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If325__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If330__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If330__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If330__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If336__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If336__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If336__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If341__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If341__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If341__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If347__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If347__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If347__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If352__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If352__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If352__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If358__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If358__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If358__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If363__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If363__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If363__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If369__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If369__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If369__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If374__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If374__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If374__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If380__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If380__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If380__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp296__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If385__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If385__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If385__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp299__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If380__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If385__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If369__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If374__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If358__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If363__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If347__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If352__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If336__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If341__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If325__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If330__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If302__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If307__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16"))))))))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp396__2 = typename Traits::rt_expr{};
          v_Exp396__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp399__2 = typename Traits::rt_expr{};
          v_Exp399__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If402__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If402__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If402__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If407__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If407__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If407__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If414__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If414__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If414__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If419__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If419__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If419__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If425__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If425__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If425__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If430__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If430__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If430__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If436__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If436__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If436__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp396__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If441__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If441__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If441__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If436__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If441__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If425__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If430__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If414__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If419__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If402__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If407__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("17")), iface.bigint_lit("0"), iface.bigint_lit("17"))), iface.bigint_lit("1"), iface.bigint_lit("16"))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp453__2 = typename Traits::rt_expr{};
            v_Exp453__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp456__2 = typename Traits::rt_expr{};
            v_Exp456__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If459__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If459__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If459__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If464__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If464__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp456__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If464__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp456__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If471__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If471__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If471__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If476__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If476__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp456__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If476__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp456__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If482__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If482__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If482__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If487__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If487__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp456__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If487__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp456__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If493__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If493__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If493__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp453__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If498__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If498__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp456__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If498__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp456__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If493__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If498__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33"))), iface.bigint_lit("1"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If482__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If487__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33"))), iface.bigint_lit("1"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If471__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If476__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33"))), iface.bigint_lit("1"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If459__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If464__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33"))), iface.bigint_lit("1"), iface.bigint_lit("32"))))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp509__2 = typename Traits::rt_expr{};
            v_Exp509__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp512__2 = typename Traits::rt_expr{};
            v_Exp512__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If515__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If515__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If515__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If520__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If520__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp512__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If520__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp512__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If527__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If527__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp509__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If527__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp509__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If532__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If532__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp512__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If532__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp512__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If527__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If532__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33"))), iface.bigint_lit("1"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If515__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If520__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("33")), iface.bigint_lit("0"), iface.bigint_lit("33"))), iface.bigint_lit("1"), iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp544__2 = typename Traits::rt_expr{};
              v_Exp544__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp547__2 = typename Traits::rt_expr{};
              v_Exp547__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If550__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If550__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If550__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If555__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If555__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp547__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If555__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp547__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If562__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If562__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If562__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If567__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If567__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp547__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If567__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp547__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If562__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If567__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.bigint_lit("0"), iface.bigint_lit("65"))), iface.bigint_lit("1"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If550__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If555__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.bigint_lit("0"), iface.bigint_lit("65"))), iface.bigint_lit("1"), iface.bigint_lit("64"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp581__2 = typename Traits::rt_expr{};
              v_Exp581__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If584__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If584__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If584__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If589__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If589__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp581__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If589__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp581__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If584__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If589__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("65")), iface.bigint_lit("0"), iface.bigint_lit("65"))), iface.bigint_lit("1"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_halving_truncating


} // namespace aslp
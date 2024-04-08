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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_fused(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp7__2 = typename Traits::rt_expr{};
        v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp10__2 = typename Traits::rt_expr{};
        v_Exp10__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp13__2 = typename Traits::rt_expr{};
        v_Exp13__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_Exp20__2 = typename Traits::rt_expr{};
          v_Exp20__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), v_Exp20__2));
        } else {
          auto v_Exp25__2 = typename Traits::rt_expr{};
          v_Exp25__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), v_Exp25__2));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_Exp33__2 = typename Traits::rt_expr{};
          v_Exp33__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_Exp33__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        } else {
          auto v_Exp38__2 = typename Traits::rt_expr{};
          v_Exp38__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_Exp38__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_Exp46__2 = typename Traits::rt_expr{};
          v_Exp46__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("95"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("31"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp46__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        } else {
          auto v_Exp51__2 = typename Traits::rt_expr{};
          v_Exp51__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp51__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_Exp59__2 = typename Traits::rt_expr{};
          v_Exp59__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("31"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp59__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
        } else {
          auto v_Exp64__2 = typename Traits::rt_expr{};
          v_Exp64__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp64__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp74__2 = typename Traits::rt_expr{};
        v_Exp74__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp77__2 = typename Traits::rt_expr{};
        v_Exp77__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp80__2 = typename Traits::rt_expr{};
        v_Exp80__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_Exp87__2 = typename Traits::rt_expr{};
          v_Exp87__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), v_Exp87__2));
        } else {
          auto v_Exp92__2 = typename Traits::rt_expr{};
          v_Exp92__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), v_Exp92__2));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_Exp100__2 = typename Traits::rt_expr{};
          v_Exp100__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp74__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp74__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_slice(v_Exp77__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp100__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
        } else {
          auto v_Exp105__2 = typename Traits::rt_expr{};
          v_Exp105__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp80__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp74__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp77__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp105__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp116__2 = typename Traits::rt_expr{};
          v_Exp116__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp119__2 = typename Traits::rt_expr{};
          v_Exp119__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp122__2 = typename Traits::rt_expr{};
          v_Exp122__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_Exp129__2 = typename Traits::rt_expr{};
            v_Exp129__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), v_Exp129__2));
          } else {
            auto v_Exp134__2 = typename Traits::rt_expr{};
            v_Exp134__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), v_Exp134__2));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_Exp142__2 = typename Traits::rt_expr{};
            v_Exp142__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp122__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp116__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp116__2, iface.bigint_lit("64"), iface.bigint_lit("63"))), iface.f_gen_slice(v_Exp119__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp142__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
          } else {
            auto v_Exp147__2 = typename Traits::rt_expr{};
            v_Exp147__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp122__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(v_Exp116__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(v_Exp119__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp147__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_Exp170__2 = typename Traits::rt_expr{};
            v_Exp170__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
            iface.f_gen_store(v_result__1, v_Exp170__2);
          } else {
            auto v_Exp175__2 = typename Traits::rt_expr{};
            v_Exp175__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
            iface.f_gen_store(v_result__1, v_Exp175__2);
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_fused


} // namespace aslp
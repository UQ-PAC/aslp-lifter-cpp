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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_fused(typename Traits::bits v_enc) {
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
      v_Exp20__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), v_Exp20__2));
    } else {
      auto v_Exp25__2 = typename Traits::rt_expr{};
      v_Exp25__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), v_Exp25__2));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp33__2 = typename Traits::rt_expr{};
      v_Exp33__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_Exp33__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
    } else {
      auto v_Exp38__2 = typename Traits::rt_expr{};
      v_Exp38__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_Exp38__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp46__2 = typename Traits::rt_expr{};
      v_Exp46__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("47"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_Exp46__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
    } else {
      auto v_Exp51__2 = typename Traits::rt_expr{};
      v_Exp51__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_Exp51__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp59__2 = typename Traits::rt_expr{};
      v_Exp59__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_Exp59__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
    } else {
      auto v_Exp64__2 = typename Traits::rt_expr{};
      v_Exp64__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_Exp64__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp72__2 = typename Traits::rt_expr{};
      v_Exp72__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("79"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_Exp72__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
    } else {
      auto v_Exp77__2 = typename Traits::rt_expr{};
      v_Exp77__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_Exp77__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp85__2 = typename Traits::rt_expr{};
      v_Exp85__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("95"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp85__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
    } else {
      auto v_Exp90__2 = typename Traits::rt_expr{};
      v_Exp90__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp90__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp98__2 = typename Traits::rt_expr{};
      v_Exp98__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("111"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp98__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
    } else {
      auto v_Exp103__2 = typename Traits::rt_expr{};
      v_Exp103__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp103__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp111__2 = typename Traits::rt_expr{};
      v_Exp111__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp111__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
    } else {
      auto v_Exp116__2 = typename Traits::rt_expr{};
      v_Exp116__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp13__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp116__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp126__2 = typename Traits::rt_expr{};
    v_Exp126__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp129__2 = typename Traits::rt_expr{};
    v_Exp129__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp132__2 = typename Traits::rt_expr{};
    v_Exp132__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp139__2 = typename Traits::rt_expr{};
      v_Exp139__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), v_Exp139__2));
    } else {
      auto v_Exp144__2 = typename Traits::rt_expr{};
      v_Exp144__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), v_Exp144__2));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp152__2 = typename Traits::rt_expr{};
      v_Exp152__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp132__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp152__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
    } else {
      auto v_Exp157__2 = typename Traits::rt_expr{};
      v_Exp157__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp132__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp157__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp165__2 = typename Traits::rt_expr{};
      v_Exp165__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp132__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("47"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp165__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
    } else {
      auto v_Exp170__2 = typename Traits::rt_expr{};
      v_Exp170__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp132__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp170__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_Exp178__2 = typename Traits::rt_expr{};
      v_Exp178__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp132__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp178__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
    } else {
      auto v_Exp183__2 = typename Traits::rt_expr{};
      v_Exp183__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp132__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp126__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp183__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_fused


} // namespace aslp
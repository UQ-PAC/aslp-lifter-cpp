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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp7__2 = typename Traits::rt_expr{};
    v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp10__2 = typename Traits::rt_expr{};
    v_Exp10__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp15__2 = typename Traits::rt_expr{};
        v_Exp15__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), v_Exp15__2));
      } else {
        auto v_Exp19__2 = typename Traits::rt_expr{};
        v_Exp19__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), v_Exp19__2));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp25__2 = typename Traits::rt_expr{};
        v_Exp25__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), v_Exp25__2));
      } else {
        auto v_Exp29__2 = typename Traits::rt_expr{};
        v_Exp29__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), v_Exp29__2));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp35__2 = typename Traits::rt_expr{};
        v_Exp35__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_Exp35__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
      } else {
        auto v_Exp39__2 = typename Traits::rt_expr{};
        v_Exp39__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_Exp39__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp45__2 = typename Traits::rt_expr{};
        v_Exp45__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_Exp45__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
      } else {
        auto v_Exp49__2 = typename Traits::rt_expr{};
        v_Exp49__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(v_Exp49__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp55__2 = typename Traits::rt_expr{};
        v_Exp55__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_Exp55__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
      } else {
        auto v_Exp59__2 = typename Traits::rt_expr{};
        v_Exp59__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_Exp59__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp65__2 = typename Traits::rt_expr{};
        v_Exp65__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_Exp65__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
      } else {
        auto v_Exp69__2 = typename Traits::rt_expr{};
        v_Exp69__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(v_Exp69__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp75__2 = typename Traits::rt_expr{};
        v_Exp75__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_Exp75__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
      } else {
        auto v_Exp79__2 = typename Traits::rt_expr{};
        v_Exp79__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_Exp79__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp85__2 = typename Traits::rt_expr{};
        v_Exp85__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_Exp85__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
      } else {
        auto v_Exp89__2 = typename Traits::rt_expr{};
        v_Exp89__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(v_Exp89__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp95__2 = typename Traits::rt_expr{};
        v_Exp95__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_Exp95__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
      } else {
        auto v_Exp99__2 = typename Traits::rt_expr{};
        v_Exp99__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_Exp99__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp105__2 = typename Traits::rt_expr{};
        v_Exp105__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_Exp105__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
      } else {
        auto v_Exp109__2 = typename Traits::rt_expr{};
        v_Exp109__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(v_Exp109__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp115__2 = typename Traits::rt_expr{};
        v_Exp115__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp115__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
      } else {
        auto v_Exp119__2 = typename Traits::rt_expr{};
        v_Exp119__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp119__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp125__2 = typename Traits::rt_expr{};
        v_Exp125__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp125__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
      } else {
        auto v_Exp129__2 = typename Traits::rt_expr{};
        v_Exp129__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp129__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp135__2 = typename Traits::rt_expr{};
        v_Exp135__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp135__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
      } else {
        auto v_Exp139__2 = typename Traits::rt_expr{};
        v_Exp139__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp139__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp145__2 = typename Traits::rt_expr{};
        v_Exp145__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp145__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
      } else {
        auto v_Exp149__2 = typename Traits::rt_expr{};
        v_Exp149__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp149__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp155__2 = typename Traits::rt_expr{};
        v_Exp155__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp155__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
      } else {
        auto v_Exp159__2 = typename Traits::rt_expr{};
        v_Exp159__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp159__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp165__2 = typename Traits::rt_expr{};
        v_Exp165__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp165__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
      } else {
        auto v_Exp169__2 = typename Traits::rt_expr{};
        v_Exp169__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp169__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp179__2 = typename Traits::rt_expr{};
    v_Exp179__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp182__2 = typename Traits::rt_expr{};
    v_Exp182__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp187__2 = typename Traits::rt_expr{};
        v_Exp187__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), v_Exp187__2));
      } else {
        auto v_Exp191__2 = typename Traits::rt_expr{};
        v_Exp191__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), v_Exp191__2));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp197__2 = typename Traits::rt_expr{};
        v_Exp197__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), v_Exp197__2));
      } else {
        auto v_Exp201__2 = typename Traits::rt_expr{};
        v_Exp201__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), v_Exp201__2));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp207__2 = typename Traits::rt_expr{};
        v_Exp207__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp207__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
      } else {
        auto v_Exp211__2 = typename Traits::rt_expr{};
        v_Exp211__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp211__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp217__2 = typename Traits::rt_expr{};
        v_Exp217__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp217__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
      } else {
        auto v_Exp221__2 = typename Traits::rt_expr{};
        v_Exp221__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(v_Exp221__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp227__2 = typename Traits::rt_expr{};
        v_Exp227__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp227__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
      } else {
        auto v_Exp231__2 = typename Traits::rt_expr{};
        v_Exp231__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp231__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp237__2 = typename Traits::rt_expr{};
        v_Exp237__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp237__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
      } else {
        auto v_Exp241__2 = typename Traits::rt_expr{};
        v_Exp241__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(v_Exp241__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
      } // if
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp247__2 = typename Traits::rt_expr{};
        v_Exp247__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp247__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
      } else {
        auto v_Exp251__2 = typename Traits::rt_expr{};
        v_Exp251__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp251__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp257__2 = typename Traits::rt_expr{};
        v_Exp257__2 = iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp257__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
      } else {
        auto v_Exp261__2 = typename Traits::rt_expr{};
        v_Exp261__2 = iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp179__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp182__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        iface.f_gen_store(v_result__1, iface.f_gen_append_bits(v_Exp261__2, iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008


} // namespace aslp
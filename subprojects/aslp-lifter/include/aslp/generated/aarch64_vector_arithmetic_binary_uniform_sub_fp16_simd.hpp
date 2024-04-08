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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp7__2 = typename Traits::rt_expr{};
    v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp10__2 = typename Traits::rt_expr{};
    v_Exp10__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_Exp14__2 = iface.f_decl_bv("Exp14__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp14__2, iface.f_gen_FPSub(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If16__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If16__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp14__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If16__1 = iface.f_gen_load(v_Exp14__2);
    } // if
    const auto v_Exp21__2 = iface.f_decl_bv("Exp21__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp21__2, iface.f_gen_FPSub(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If22__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If22__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp21__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If22__1 = iface.f_gen_load(v_Exp21__2);
    } // if
    const auto v_Exp27__2 = iface.f_decl_bv("Exp27__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp27__2, iface.f_gen_FPSub(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If28__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If28__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp27__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If28__1 = iface.f_gen_load(v_Exp27__2);
    } // if
    const auto v_Exp33__2 = iface.f_decl_bv("Exp33__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp33__2, iface.f_gen_FPSub(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If34__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If34__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp33__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If34__1 = iface.f_gen_load(v_Exp33__2);
    } // if
    const auto v_Exp39__2 = iface.f_decl_bv("Exp39__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp39__2, iface.f_gen_FPSub(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If40__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If40__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp39__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If40__1 = iface.f_gen_load(v_Exp39__2);
    } // if
    const auto v_Exp45__2 = iface.f_decl_bv("Exp45__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp45__2, iface.f_gen_FPSub(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If46__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If46__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp45__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If46__1 = iface.f_gen_load(v_Exp45__2);
    } // if
    const auto v_Exp51__2 = iface.f_decl_bv("Exp51__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp51__2, iface.f_gen_FPSub(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If52__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If52__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp51__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If52__1 = iface.f_gen_load(v_Exp51__2);
    } // if
    auto v_Exp57__2 = typename Traits::rt_expr{};
    v_Exp57__2 = iface.f_gen_FPSub(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    auto v_If58__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If58__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp57__2, iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If58__1 = v_Exp57__2;
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_If58__1, iface.f_gen_append_bits(v_If52__1, iface.f_gen_append_bits(v_If46__1, iface.f_gen_append_bits(v_If40__1, iface.f_gen_append_bits(v_If34__1, iface.f_gen_append_bits(v_If28__1, iface.f_gen_append_bits(v_If22__1, v_If16__1))))))));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp68__2 = typename Traits::rt_expr{};
    v_Exp68__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp71__2 = typename Traits::rt_expr{};
    v_Exp71__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_Exp75__2 = iface.f_decl_bv("Exp75__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp75__2, iface.f_gen_FPSub(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If77__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If77__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp75__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If77__1 = iface.f_gen_load(v_Exp75__2);
    } // if
    const auto v_Exp82__2 = iface.f_decl_bv("Exp82__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp82__2, iface.f_gen_FPSub(iface.f_gen_slice(v_Exp68__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp71__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If83__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If83__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp82__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If83__1 = iface.f_gen_load(v_Exp82__2);
    } // if
    const auto v_Exp88__2 = iface.f_decl_bv("Exp88__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp88__2, iface.f_gen_FPSub(iface.f_gen_slice(v_Exp68__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp71__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_If89__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If89__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_load(v_Exp88__2), iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If89__1 = iface.f_gen_load(v_Exp88__2);
    } // if
    auto v_Exp94__2 = typename Traits::rt_expr{};
    v_Exp94__2 = iface.f_gen_FPSub(iface.f_gen_slice(v_Exp68__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp71__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    auto v_If95__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If95__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp94__2, iface.bigint_lit("0"), iface.bigint_lit("15")));
    } else {
      v_If95__1 = v_Exp94__2;
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_If95__1, iface.f_gen_append_bits(v_If89__1, iface.f_gen_append_bits(v_If83__1, v_If77__1))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_simd


} // namespace aslp
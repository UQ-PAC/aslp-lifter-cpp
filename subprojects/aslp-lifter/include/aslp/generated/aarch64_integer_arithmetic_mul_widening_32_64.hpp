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
void aslp_lifter<Traits>::f_aarch64_integer_arithmetic_mul_widening_32_64(typename Traits::bits v_enc) {
  auto v_X_read5__2 = typename Traits::rt_expr{};
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
    v_X_read5__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
  } else {
    v_X_read5__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
  } // if
  auto v_X_read10__2 = typename Traits::rt_expr{};
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
    v_X_read10__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
  } else {
    v_X_read10__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
  } // if
  auto v_X_read15__2 = typename Traits::rt_expr{};
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
    v_X_read15__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
  } else {
    v_X_read15__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
  } // if
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_If21__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If21__2 = iface.f_gen_ZeroExtend(v_X_read15__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
    } else {
      v_If21__2 = iface.f_gen_SignExtend(v_X_read15__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
    } // if
    auto v_If25__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If25__2 = iface.f_gen_ZeroExtend(v_X_read5__2, iface.f_gen_int_lit(iface.bigint_lit("33")));
    } else {
      v_If25__2 = iface.f_gen_SignExtend(v_X_read5__2, iface.f_gen_int_lit(iface.bigint_lit("33")));
    } // if
    auto v_If29__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If29__2 = iface.f_gen_ZeroExtend(v_X_read10__2, iface.f_gen_int_lit(iface.bigint_lit("33")));
    } else {
      v_If29__2 = iface.f_gen_SignExtend(v_X_read10__2, iface.f_gen_int_lit(iface.bigint_lit("33")));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If21__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If25__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_If29__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
    } // if
  } else {
    auto v_If35__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If35__2 = iface.f_gen_ZeroExtend(v_X_read15__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
    } else {
      v_If35__2 = iface.f_gen_SignExtend(v_X_read15__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
    } // if
    auto v_If39__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If39__2 = iface.f_gen_ZeroExtend(v_X_read5__2, iface.f_gen_int_lit(iface.bigint_lit("33")));
    } else {
      v_If39__2 = iface.f_gen_SignExtend(v_X_read5__2, iface.f_gen_int_lit(iface.bigint_lit("33")));
    } // if
    auto v_If43__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If43__2 = iface.f_gen_ZeroExtend(v_X_read10__2, iface.f_gen_int_lit(iface.bigint_lit("33")));
    } else {
      v_If43__2 = iface.f_gen_SignExtend(v_X_read10__2, iface.f_gen_int_lit(iface.bigint_lit("33")));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If35__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If39__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_If43__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
    } // if
  } // if

} // f_aarch64_integer_arithmetic_mul_widening_32_64


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla(typename Traits::bits v_enc) {
  auto v_op1_unsigned__1 = true;
  auto v_op2_unsigned__1 = true;
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
    v_op1_unsigned__1 = false;
    v_op2_unsigned__1 = false;
  } else {
    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
      v_op1_unsigned__1 = true;
      v_op2_unsigned__1 = true;
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
        v_op1_unsigned__1 = true;
        v_op2_unsigned__1 = false;
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  auto v_Exp8__2 = typename Traits::rt_expr{};
  v_Exp8__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  auto v_Exp11__2 = typename Traits::rt_expr{};
  v_Exp11__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  auto v_Exp14__2 = typename Traits::rt_expr{};
  v_Exp14__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
  auto v_If21__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If21__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If21__3 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If26__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If26__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If26__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If32__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If32__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If32__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If37__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If37__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If37__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If43__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If43__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If43__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If48__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If48__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If48__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If54__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If54__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If54__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If59__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If59__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If59__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If65__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If65__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If65__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If70__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If70__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If70__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If76__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If76__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If76__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If81__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If81__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If81__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If87__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If87__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If87__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If92__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If92__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If92__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If98__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If98__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If98__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If103__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If103__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If103__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If112__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If112__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If112__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If117__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If117__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If117__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If123__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If123__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If123__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If128__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If128__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If128__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If134__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If134__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If134__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If139__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If139__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If139__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If145__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If145__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If145__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If150__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If150__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If150__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If156__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If156__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If156__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If161__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If161__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If161__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If167__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If167__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If167__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If172__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If172__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If172__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If178__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If178__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If178__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If183__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If183__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If183__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If189__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If189__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If189__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If194__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If194__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If194__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If202__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If202__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If202__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If207__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If207__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If207__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If213__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If213__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If213__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If218__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If218__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If218__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If224__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If224__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If224__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If229__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If229__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If229__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If235__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If235__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If235__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If240__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If240__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If240__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If246__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If246__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If246__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If251__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If251__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If251__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If257__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If257__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If257__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If262__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If262__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If262__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If268__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If268__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If268__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If273__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If273__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If273__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If279__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If279__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If279__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If284__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If284__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If284__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If292__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If292__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If292__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If297__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If297__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If297__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If303__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If303__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If303__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If308__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If308__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If308__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If314__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If314__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If314__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If319__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If319__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If319__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If325__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If325__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If325__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If330__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If330__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If330__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If336__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If336__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If336__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If341__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If341__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If341__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If347__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If347__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If347__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If352__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If352__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If352__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If358__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If358__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If358__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If363__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If363__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If363__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If369__3 = typename Traits::rt_expr{};
  if (v_op1_unsigned__1) {
    v_If369__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If369__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp8__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  auto v_If374__3 = typename Traits::rt_expr{};
  if (v_op2_unsigned__1) {
    v_If374__3 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } else {
    v_If374__3 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
  } // if
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If292__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If297__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If303__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If308__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If314__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If319__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If325__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If330__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If336__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If341__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If347__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If352__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If358__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If363__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If369__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If374__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If202__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If207__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If213__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If218__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If224__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If229__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If235__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If240__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If246__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If251__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If257__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If262__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If268__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If273__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If279__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If284__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If112__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If117__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If123__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If128__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If134__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If139__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If145__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If150__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If156__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If161__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If167__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If172__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If178__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If183__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If189__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If194__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If21__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If26__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If32__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If37__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If43__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If48__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If54__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If59__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If65__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If70__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If76__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If81__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If87__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If92__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32")))), iface.f_gen_SignExtend(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If98__3, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If103__3, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.f_gen_int_lit(iface.bigint_lit("32"))))))));

} // f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla


} // namespace aslp
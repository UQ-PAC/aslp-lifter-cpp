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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "110"))) {
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
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If16__1 = iface.f_decl_bv("If16__1", iface.bigint_lit("8"));
          const auto v_temp0 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_store(v_If16__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp0));
          iface.f_gen_store(v_If16__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("120")), iface.f_gen_load(v_If16__1)));
        } else {
          const auto v_If21__1 = iface.f_decl_bv("If21__1", iface.bigint_lit("8"));
          const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_store(v_If21__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp1));
          iface.f_gen_store(v_If21__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp1));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("120")), iface.f_gen_load(v_If21__1)));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If30__1 = iface.f_decl_bv("If30__1", iface.bigint_lit("8"));
          const auto v_temp2 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp2));
          iface.f_gen_store(v_If30__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp2));
          iface.f_gen_store(v_If30__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp2));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_append_bits(iface.f_gen_load(v_If30__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
        } else {
          const auto v_If35__1 = iface.f_decl_bv("If35__1", iface.bigint_lit("8"));
          const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp3));
          iface.f_gen_store(v_If35__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp3));
          iface.f_gen_store(v_If35__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp3));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_append_bits(iface.f_gen_load(v_If35__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If44__1 = iface.f_decl_bv("If44__1", iface.bigint_lit("8"));
          const auto v_temp4 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp4));
          iface.f_gen_store(v_If44__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp4));
          iface.f_gen_store(v_If44__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp4));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("104")), iface.f_gen_append_bits(iface.f_gen_load(v_If44__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
        } else {
          const auto v_If49__1 = iface.f_decl_bv("If49__1", iface.bigint_lit("8"));
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(v_If49__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp5));
          iface.f_gen_store(v_If49__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp5));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("104")), iface.f_gen_append_bits(iface.f_gen_load(v_If49__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If58__1 = iface.f_decl_bv("If58__1", iface.bigint_lit("8"));
          const auto v_temp6 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_If58__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          iface.f_gen_store(v_If58__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp6));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_load(v_If58__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
        } else {
          const auto v_If63__1 = iface.f_decl_bv("If63__1", iface.bigint_lit("8"));
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_If63__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          iface.f_gen_store(v_If63__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_load(v_If63__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If72__1 = iface.f_decl_bv("If72__1", iface.bigint_lit("8"));
          const auto v_temp8 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(v_If72__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp8));
          iface.f_gen_store(v_If72__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp8));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("88")), iface.f_gen_append_bits(iface.f_gen_load(v_If72__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        } else {
          const auto v_If77__1 = iface.f_decl_bv("If77__1", iface.bigint_lit("8"));
          const auto v_temp9 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp9));
          iface.f_gen_store(v_If77__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp9));
          iface.f_gen_store(v_If77__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp9));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("88")), iface.f_gen_append_bits(iface.f_gen_load(v_If77__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If86__1 = iface.f_decl_bv("If86__1", iface.bigint_lit("8"));
          const auto v_temp10 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp10));
          iface.f_gen_store(v_If86__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp10));
          iface.f_gen_store(v_If86__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp10));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_load(v_If86__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
        } else {
          const auto v_If91__1 = iface.f_decl_bv("If91__1", iface.bigint_lit("8"));
          const auto v_temp11 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp11));
          iface.f_gen_store(v_If91__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp11));
          iface.f_gen_store(v_If91__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp11));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_load(v_If91__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If100__1 = iface.f_decl_bv("If100__1", iface.bigint_lit("8"));
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(v_If100__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp12));
          iface.f_gen_store(v_If100__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("72")), iface.f_gen_append_bits(iface.f_gen_load(v_If100__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
        } else {
          const auto v_If105__1 = iface.f_decl_bv("If105__1", iface.bigint_lit("8"));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_If105__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          iface.f_gen_store(v_If105__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp13));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("72")), iface.f_gen_append_bits(iface.f_gen_load(v_If105__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If114__1 = iface.f_decl_bv("If114__1", iface.bigint_lit("8"));
          const auto v_temp14 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(v_If114__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp14));
          iface.f_gen_store(v_If114__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp14));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If114__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56")))));
        } else {
          const auto v_If119__1 = iface.f_decl_bv("If119__1", iface.bigint_lit("8"));
          const auto v_temp15 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp15));
          iface.f_gen_store(v_If119__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp15));
          iface.f_gen_store(v_If119__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp15));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If119__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If128__1 = iface.f_decl_bv("If128__1", iface.bigint_lit("8"));
          const auto v_temp16 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp16));
          iface.f_gen_store(v_If128__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp16));
          iface.f_gen_store(v_If128__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp16));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("72"), iface.bigint_lit("56")), iface.f_gen_append_bits(iface.f_gen_load(v_If128__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        } else {
          const auto v_If133__1 = iface.f_decl_bv("If133__1", iface.bigint_lit("8"));
          const auto v_temp17 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp17));
          iface.f_gen_store(v_If133__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp17));
          iface.f_gen_store(v_If133__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp17));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("72"), iface.bigint_lit("56")), iface.f_gen_append_bits(iface.f_gen_load(v_If133__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If142__1 = iface.f_decl_bv("If142__1", iface.bigint_lit("8"));
          const auto v_temp18 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp18));
          iface.f_gen_store(v_If142__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp18));
          iface.f_gen_store(v_If142__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp18));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_If142__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("72")))));
        } else {
          const auto v_If147__1 = iface.f_decl_bv("If147__1", iface.bigint_lit("8"));
          const auto v_temp19 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp19));
          iface.f_gen_store(v_If147__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp19));
          iface.f_gen_store(v_If147__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp19));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_If147__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("72")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If156__1 = iface.f_decl_bv("If156__1", iface.bigint_lit("8"));
          const auto v_temp20 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp20));
          iface.f_gen_store(v_If156__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp20));
          iface.f_gen_store(v_If156__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp20));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("88"), iface.bigint_lit("40")), iface.f_gen_append_bits(iface.f_gen_load(v_If156__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
        } else {
          const auto v_If161__1 = iface.f_decl_bv("If161__1", iface.bigint_lit("8"));
          const auto v_temp21 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp21));
          iface.f_gen_store(v_If161__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp21));
          iface.f_gen_store(v_If161__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp21));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("88"), iface.bigint_lit("40")), iface.f_gen_append_bits(iface.f_gen_load(v_If161__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If170__1 = iface.f_decl_bv("If170__1", iface.bigint_lit("8"));
          const auto v_temp22 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp22));
          iface.f_gen_store(v_If170__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp22));
          iface.f_gen_store(v_If170__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp22));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If170__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("88")))));
        } else {
          const auto v_If175__1 = iface.f_decl_bv("If175__1", iface.bigint_lit("8"));
          const auto v_temp23 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp23));
          iface.f_gen_store(v_If175__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp23));
          iface.f_gen_store(v_If175__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp23));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If175__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("88")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If184__1 = iface.f_decl_bv("If184__1", iface.bigint_lit("8"));
          const auto v_temp24 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp24));
          iface.f_gen_store(v_If184__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp24));
          iface.f_gen_store(v_If184__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp24));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("104"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_load(v_If184__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
        } else {
          const auto v_If189__1 = iface.f_decl_bv("If189__1", iface.bigint_lit("8"));
          const auto v_temp25 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_If189__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          iface.f_gen_store(v_If189__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp25));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("104"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_load(v_If189__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If198__1 = iface.f_decl_bv("If198__1", iface.bigint_lit("8"));
          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_If198__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_If198__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp26));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If198__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("104")))));
        } else {
          const auto v_If203__1 = iface.f_decl_bv("If203__1", iface.bigint_lit("8"));
          const auto v_temp27 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_If203__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          iface.f_gen_store(v_If203__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If203__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("104")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If212__1 = iface.f_decl_bv("If212__1", iface.bigint_lit("8"));
          const auto v_temp28 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_If212__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_If212__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp28));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_load(v_If212__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112")))));
        } else {
          const auto v_If217__1 = iface.f_decl_bv("If217__1", iface.bigint_lit("8"));
          const auto v_temp29 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp29));
          iface.f_gen_store(v_If217__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp29));
          iface.f_gen_store(v_If217__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp29));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_load(v_If217__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If226__1 = iface.f_decl_bv("If226__1", iface.bigint_lit("8"));
          const auto v_temp30 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_If226__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          iface.f_gen_store(v_If226__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If226__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("120"))));
        } else {
          const auto v_If231__1 = iface.f_decl_bv("If231__1", iface.bigint_lit("8"));
          const auto v_temp31 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_If231__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_If231__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp31));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If231__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("120"))));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp243__2 = typename Traits::rt_expr{};
        v_Exp243__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp246__2 = typename Traits::rt_expr{};
        v_Exp246__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If252__1 = iface.f_decl_bv("If252__1", iface.bigint_lit("8"));
          const auto v_temp32 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(v_If252__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp32));
          iface.f_gen_store(v_If252__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("56")), iface.f_gen_load(v_If252__1)));
        } else {
          const auto v_If257__1 = iface.f_decl_bv("If257__1", iface.bigint_lit("8"));
          const auto v_temp33 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_If257__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_If257__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp33));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("8"), iface.bigint_lit("56")), iface.f_gen_load(v_If257__1)));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If266__1 = iface.f_decl_bv("If266__1", iface.bigint_lit("8"));
          const auto v_temp34 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("8"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp34));
          iface.f_gen_store(v_If266__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp34));
          iface.f_gen_store(v_If266__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp34));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_If266__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
        } else {
          const auto v_If271__1 = iface.f_decl_bv("If271__1", iface.bigint_lit("8"));
          const auto v_temp35 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("8"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(v_If271__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp35));
          iface.f_gen_store(v_If271__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_If271__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("8")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If280__1 = iface.f_decl_bv("If280__1", iface.bigint_lit("8"));
          const auto v_temp36 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("16"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp36));
          iface.f_gen_store(v_If280__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp36));
          iface.f_gen_store(v_If280__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp36));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("40")), iface.f_gen_append_bits(iface.f_gen_load(v_If280__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
        } else {
          const auto v_If285__1 = iface.f_decl_bv("If285__1", iface.bigint_lit("8"));
          const auto v_temp37 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("16"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp37));
          iface.f_gen_store(v_If285__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp37));
          iface.f_gen_store(v_If285__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp37));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("24"), iface.bigint_lit("40")), iface.f_gen_append_bits(iface.f_gen_load(v_If285__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If294__1 = iface.f_decl_bv("If294__1", iface.bigint_lit("8"));
          const auto v_temp38 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("24"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp38));
          iface.f_gen_store(v_If294__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp38));
          iface.f_gen_store(v_If294__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp38));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If294__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
        } else {
          const auto v_If299__1 = iface.f_decl_bv("If299__1", iface.bigint_lit("8"));
          const auto v_temp39 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("24"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp39));
          iface.f_gen_store(v_If299__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp39));
          iface.f_gen_store(v_If299__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp39));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If299__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("24")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If308__1 = iface.f_decl_bv("If308__1", iface.bigint_lit("8"));
          const auto v_temp40 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("32"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp40));
          iface.f_gen_store(v_If308__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp40));
          iface.f_gen_store(v_If308__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp40));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_load(v_If308__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        } else {
          const auto v_If313__1 = iface.f_decl_bv("If313__1", iface.bigint_lit("8"));
          const auto v_temp41 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("32"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp41));
          iface.f_gen_store(v_If313__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp41));
          iface.f_gen_store(v_If313__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp41));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("40"), iface.bigint_lit("24")), iface.f_gen_append_bits(iface.f_gen_load(v_If313__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If322__1 = iface.f_decl_bv("If322__1", iface.bigint_lit("8"));
          const auto v_temp42 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("40"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp42));
          iface.f_gen_store(v_If322__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp42));
          iface.f_gen_store(v_If322__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp42));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If322__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
        } else {
          const auto v_If327__1 = iface.f_decl_bv("If327__1", iface.bigint_lit("8"));
          const auto v_temp43 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("40"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp43));
          iface.f_gen_store(v_If327__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp43));
          iface.f_gen_store(v_If327__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp43));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If327__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("40")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If336__1 = iface.f_decl_bv("If336__1", iface.bigint_lit("8"));
          const auto v_temp44 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("48"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp44));
          iface.f_gen_store(v_If336__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp44));
          iface.f_gen_store(v_If336__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp44));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_load(v_If336__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
        } else {
          const auto v_If341__1 = iface.f_decl_bv("If341__1", iface.bigint_lit("8"));
          const auto v_temp45 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("48"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp45));
          iface.f_gen_store(v_If341__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp45));
          iface.f_gen_store(v_If341__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp45));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_append_bits(iface.f_gen_load(v_If341__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          const auto v_If350__1 = iface.f_decl_bv("If350__1", iface.bigint_lit("8"));
          const auto v_temp46 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("56"), iface.bigint_lit("8"))), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")))));
          iface.f_switch_context(iface.f_true_branch(v_temp46));
          iface.f_gen_store(v_If350__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp46));
          iface.f_gen_store(v_If350__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp46));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If350__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56"))));
        } else {
          const auto v_If355__1 = iface.f_decl_bv("If355__1", iface.bigint_lit("8"));
          const auto v_temp47 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp243__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_slice(v_Exp246__2, iface.bigint_lit("56"), iface.bigint_lit("8"))));
          iface.f_switch_context(iface.f_true_branch(v_temp47));
          iface.f_gen_store(v_If355__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp47));
          iface.f_gen_store(v_If355__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp47));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If355__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("56"))));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp368__2 = typename Traits::rt_expr{};
          v_Exp368__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp371__2 = typename Traits::rt_expr{};
          v_Exp371__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If377__1 = iface.f_decl_bv("If377__1", iface.bigint_lit("16"));
            const auto v_temp48 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp48));
            iface.f_gen_store(v_If377__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp48));
            iface.f_gen_store(v_If377__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp48));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_load(v_If377__1)));
          } else {
            const auto v_If382__1 = iface.f_decl_bv("If382__1", iface.bigint_lit("16"));
            const auto v_temp49 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp49));
            iface.f_gen_store(v_If382__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp49));
            iface.f_gen_store(v_If382__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp49));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_load(v_If382__1)));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If391__1 = iface.f_decl_bv("If391__1", iface.bigint_lit("16"));
            const auto v_temp50 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("16"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp50));
            iface.f_gen_store(v_If391__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp50));
            iface.f_gen_store(v_If391__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp50));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_load(v_If391__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            const auto v_If396__1 = iface.f_decl_bv("If396__1", iface.bigint_lit("16"));
            const auto v_temp51 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("16"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp51));
            iface.f_gen_store(v_If396__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp51));
            iface.f_gen_store(v_If396__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp51));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_load(v_If396__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If405__1 = iface.f_decl_bv("If405__1", iface.bigint_lit("16"));
            const auto v_temp52 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("32"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp52));
            iface.f_gen_store(v_If405__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp52));
            iface.f_gen_store(v_If405__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp52));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_load(v_If405__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } else {
            const auto v_If410__1 = iface.f_decl_bv("If410__1", iface.bigint_lit("16"));
            const auto v_temp53 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("32"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp53));
            iface.f_gen_store(v_If410__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp53));
            iface.f_gen_store(v_If410__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp53));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_load(v_If410__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If419__1 = iface.f_decl_bv("If419__1", iface.bigint_lit("16"));
            const auto v_temp54 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("48"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp54));
            iface.f_gen_store(v_If419__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp54));
            iface.f_gen_store(v_If419__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp54));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If419__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } else {
            const auto v_If424__1 = iface.f_decl_bv("If424__1", iface.bigint_lit("16"));
            const auto v_temp55 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("48"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp55));
            iface.f_gen_store(v_If424__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp55));
            iface.f_gen_store(v_If424__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp55));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If424__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If433__1 = iface.f_decl_bv("If433__1", iface.bigint_lit("16"));
            const auto v_temp56 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("64"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp56));
            iface.f_gen_store(v_If433__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp56));
            iface.f_gen_store(v_If433__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp56));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_If433__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          } else {
            const auto v_If438__1 = iface.f_decl_bv("If438__1", iface.bigint_lit("16"));
            const auto v_temp57 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("64"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp57));
            iface.f_gen_store(v_If438__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp57));
            iface.f_gen_store(v_If438__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp57));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_If438__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If447__1 = iface.f_decl_bv("If447__1", iface.bigint_lit("16"));
            const auto v_temp58 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("80"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp58));
            iface.f_gen_store(v_If447__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp58));
            iface.f_gen_store(v_If447__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp58));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If447__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
          } else {
            const auto v_If452__1 = iface.f_decl_bv("If452__1", iface.bigint_lit("16"));
            const auto v_temp59 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("80"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp59));
            iface.f_gen_store(v_If452__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp59));
            iface.f_gen_store(v_If452__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp59));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If452__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If461__1 = iface.f_decl_bv("If461__1", iface.bigint_lit("16"));
            const auto v_temp60 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("96"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp60));
            iface.f_gen_store(v_If461__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp60));
            iface.f_gen_store(v_If461__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp60));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If461__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
          } else {
            const auto v_If466__1 = iface.f_decl_bv("If466__1", iface.bigint_lit("16"));
            const auto v_temp61 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("96"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp61));
            iface.f_gen_store(v_If466__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp61));
            iface.f_gen_store(v_If466__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp61));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If466__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If475__1 = iface.f_decl_bv("If475__1", iface.bigint_lit("16"));
            const auto v_temp62 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("112"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp62));
            iface.f_gen_store(v_If475__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp62));
            iface.f_gen_store(v_If475__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp62));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If475__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
          } else {
            const auto v_If480__1 = iface.f_decl_bv("If480__1", iface.bigint_lit("16"));
            const auto v_temp63 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp368__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp371__2, iface.bigint_lit("112"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp63));
            iface.f_gen_store(v_If480__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp63));
            iface.f_gen_store(v_If480__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp63));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If480__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp492__2 = typename Traits::rt_expr{};
          v_Exp492__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp495__2 = typename Traits::rt_expr{};
          v_Exp495__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If501__1 = iface.f_decl_bv("If501__1", iface.bigint_lit("16"));
            const auto v_temp64 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp64));
            iface.f_gen_store(v_If501__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp64));
            iface.f_gen_store(v_If501__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp64));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_load(v_If501__1)));
          } else {
            const auto v_If506__1 = iface.f_decl_bv("If506__1", iface.bigint_lit("16"));
            const auto v_temp65 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp65));
            iface.f_gen_store(v_If506__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp65));
            iface.f_gen_store(v_If506__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp65));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_load(v_If506__1)));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If515__1 = iface.f_decl_bv("If515__1", iface.bigint_lit("16"));
            const auto v_temp66 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp492__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp495__2, iface.bigint_lit("16"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp66));
            iface.f_gen_store(v_If515__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp66));
            iface.f_gen_store(v_If515__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp66));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If515__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            const auto v_If520__1 = iface.f_decl_bv("If520__1", iface.bigint_lit("16"));
            const auto v_temp67 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp492__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp495__2, iface.bigint_lit("16"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp67));
            iface.f_gen_store(v_If520__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp67));
            iface.f_gen_store(v_If520__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp67));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If520__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If529__1 = iface.f_decl_bv("If529__1", iface.bigint_lit("16"));
            const auto v_temp68 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp492__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp495__2, iface.bigint_lit("32"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp68));
            iface.f_gen_store(v_If529__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp68));
            iface.f_gen_store(v_If529__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp68));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If529__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } else {
            const auto v_If534__1 = iface.f_decl_bv("If534__1", iface.bigint_lit("16"));
            const auto v_temp69 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp492__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp495__2, iface.bigint_lit("32"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp69));
            iface.f_gen_store(v_If534__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp69));
            iface.f_gen_store(v_If534__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp69));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If534__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            const auto v_If543__1 = iface.f_decl_bv("If543__1", iface.bigint_lit("16"));
            const auto v_temp70 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp492__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp495__2, iface.bigint_lit("48"), iface.bigint_lit("16"))), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")))));
            iface.f_switch_context(iface.f_true_branch(v_temp70));
            iface.f_gen_store(v_If543__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp70));
            iface.f_gen_store(v_If543__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp70));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If543__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
          } else {
            const auto v_If548__1 = iface.f_decl_bv("If548__1", iface.bigint_lit("16"));
            const auto v_temp71 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp492__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp495__2, iface.bigint_lit("48"), iface.bigint_lit("16"))));
            iface.f_switch_context(iface.f_true_branch(v_temp71));
            iface.f_gen_store(v_If548__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp71));
            iface.f_gen_store(v_If548__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp71));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If548__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp561__2 = typename Traits::rt_expr{};
            v_Exp561__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp564__2 = typename Traits::rt_expr{};
            v_Exp564__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              const auto v_If570__1 = iface.f_decl_bv("If570__1", iface.bigint_lit("32"));
              const auto v_temp72 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
              iface.f_switch_context(iface.f_true_branch(v_temp72));
              iface.f_gen_store(v_If570__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp72));
              iface.f_gen_store(v_If570__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp72));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_load(v_If570__1)));
            } else {
              const auto v_If575__1 = iface.f_decl_bv("If575__1", iface.bigint_lit("32"));
              const auto v_temp73 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"))));
              iface.f_switch_context(iface.f_true_branch(v_temp73));
              iface.f_gen_store(v_If575__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp73));
              iface.f_gen_store(v_If575__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp73));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_load(v_If575__1)));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              const auto v_If584__1 = iface.f_decl_bv("If584__1", iface.bigint_lit("32"));
              const auto v_temp74 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp561__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp564__2, iface.bigint_lit("32"), iface.bigint_lit("32"))), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
              iface.f_switch_context(iface.f_true_branch(v_temp74));
              iface.f_gen_store(v_If584__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp74));
              iface.f_gen_store(v_If584__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp74));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If584__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } else {
              const auto v_If589__1 = iface.f_decl_bv("If589__1", iface.bigint_lit("32"));
              const auto v_temp75 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp561__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp564__2, iface.bigint_lit("32"), iface.bigint_lit("32"))));
              iface.f_switch_context(iface.f_true_branch(v_temp75));
              iface.f_gen_store(v_If589__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp75));
              iface.f_gen_store(v_If589__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp75));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If589__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              const auto v_If598__1 = iface.f_decl_bv("If598__1", iface.bigint_lit("32"));
              const auto v_temp76 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp561__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp564__2, iface.bigint_lit("64"), iface.bigint_lit("32"))), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
              iface.f_switch_context(iface.f_true_branch(v_temp76));
              iface.f_gen_store(v_If598__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp76));
              iface.f_gen_store(v_If598__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp76));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If598__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } else {
              const auto v_If603__1 = iface.f_decl_bv("If603__1", iface.bigint_lit("32"));
              const auto v_temp77 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp561__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp564__2, iface.bigint_lit("64"), iface.bigint_lit("32"))));
              iface.f_switch_context(iface.f_true_branch(v_temp77));
              iface.f_gen_store(v_If603__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp77));
              iface.f_gen_store(v_If603__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp77));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If603__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              const auto v_If612__1 = iface.f_decl_bv("If612__1", iface.bigint_lit("32"));
              const auto v_temp78 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp561__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp564__2, iface.bigint_lit("96"), iface.bigint_lit("32"))), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
              iface.f_switch_context(iface.f_true_branch(v_temp78));
              iface.f_gen_store(v_If612__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp78));
              iface.f_gen_store(v_If612__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp78));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If612__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
            } else {
              const auto v_If617__1 = iface.f_decl_bv("If617__1", iface.bigint_lit("32"));
              const auto v_temp79 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp561__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp564__2, iface.bigint_lit("96"), iface.bigint_lit("32"))));
              iface.f_switch_context(iface.f_true_branch(v_temp79));
              iface.f_gen_store(v_If617__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp79));
              iface.f_gen_store(v_If617__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp79));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If617__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp629__2 = typename Traits::rt_expr{};
            v_Exp629__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp632__2 = typename Traits::rt_expr{};
            v_Exp632__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              const auto v_If638__1 = iface.f_decl_bv("If638__1", iface.bigint_lit("32"));
              const auto v_temp80 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
              iface.f_switch_context(iface.f_true_branch(v_temp80));
              iface.f_gen_store(v_If638__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp80));
              iface.f_gen_store(v_If638__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp80));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(v_If638__1)));
            } else {
              const auto v_If643__1 = iface.f_decl_bv("If643__1", iface.bigint_lit("32"));
              const auto v_temp81 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"))));
              iface.f_switch_context(iface.f_true_branch(v_temp81));
              iface.f_gen_store(v_If643__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp81));
              iface.f_gen_store(v_If643__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp81));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(v_If643__1)));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              const auto v_If652__1 = iface.f_decl_bv("If652__1", iface.bigint_lit("32"));
              const auto v_temp82 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp629__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp632__2, iface.bigint_lit("32"), iface.bigint_lit("32"))), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
              iface.f_switch_context(iface.f_true_branch(v_temp82));
              iface.f_gen_store(v_If652__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp82));
              iface.f_gen_store(v_If652__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp82));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If652__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } else {
              const auto v_If657__1 = iface.f_decl_bv("If657__1", iface.bigint_lit("32"));
              const auto v_temp83 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp629__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp632__2, iface.bigint_lit("32"), iface.bigint_lit("32"))));
              iface.f_switch_context(iface.f_true_branch(v_temp83));
              iface.f_gen_store(v_If657__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp83));
              iface.f_gen_store(v_If657__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp83));
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If657__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp670__2 = typename Traits::rt_expr{};
              v_Exp670__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp673__2 = typename Traits::rt_expr{};
              v_Exp673__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                const auto v_If679__1 = iface.f_decl_bv("If679__1", iface.bigint_lit("64"));
                const auto v_temp84 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
                iface.f_switch_context(iface.f_true_branch(v_temp84));
                iface.f_gen_store(v_If679__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_switch_context(iface.f_false_branch(v_temp84));
                iface.f_gen_store(v_If679__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_switch_context(iface.f_merge_branch(v_temp84));
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(v_If679__1)));
              } else {
                const auto v_If684__1 = iface.f_decl_bv("If684__1", iface.bigint_lit("64"));
                const auto v_temp85 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
                iface.f_switch_context(iface.f_true_branch(v_temp85));
                iface.f_gen_store(v_If684__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_switch_context(iface.f_false_branch(v_temp85));
                iface.f_gen_store(v_If684__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_switch_context(iface.f_merge_branch(v_temp85));
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(v_If684__1)));
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                const auto v_If693__1 = iface.f_decl_bv("If693__1", iface.bigint_lit("64"));
                const auto v_temp86 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(v_Exp670__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(v_Exp673__2, iface.bigint_lit("64"), iface.bigint_lit("64"))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
                iface.f_switch_context(iface.f_true_branch(v_temp86));
                iface.f_gen_store(v_If693__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_switch_context(iface.f_false_branch(v_temp86));
                iface.f_gen_store(v_If693__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_switch_context(iface.f_merge_branch(v_temp86));
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If693__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } else {
                const auto v_If698__1 = iface.f_decl_bv("If698__1", iface.bigint_lit("64"));
                const auto v_temp87 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp670__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(v_Exp673__2, iface.bigint_lit("64"), iface.bigint_lit("64"))));
                iface.f_switch_context(iface.f_true_branch(v_temp87));
                iface.f_gen_store(v_If698__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_switch_context(iface.f_false_branch(v_temp87));
                iface.f_gen_store(v_If698__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_switch_context(iface.f_merge_branch(v_temp87));
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If698__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                const auto v_If719__1 = iface.f_decl_bv("If719__1", iface.bigint_lit("64"));
                const auto v_temp88 = iface.f_gen_branch(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_and_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
                iface.f_switch_context(iface.f_true_branch(v_temp88));
                iface.f_gen_store(v_If719__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_switch_context(iface.f_false_branch(v_temp88));
                iface.f_gen_store(v_If719__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_switch_context(iface.f_merge_branch(v_temp88));
                iface.f_gen_store(v_result__1, iface.f_gen_load(v_If719__1));
              } else {
                const auto v_If724__1 = iface.f_decl_bv("If724__1", iface.bigint_lit("64"));
                const auto v_temp89 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
                iface.f_switch_context(iface.f_true_branch(v_temp89));
                iface.f_gen_store(v_If724__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_switch_context(iface.f_false_branch(v_temp89));
                iface.f_gen_store(v_If724__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_switch_context(iface.f_merge_branch(v_temp89));
                iface.f_gen_store(v_result__1, iface.f_gen_load(v_If724__1));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_simd


} // namespace aslp
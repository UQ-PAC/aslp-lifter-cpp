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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_diff(typename Traits::bits v_enc) {
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
        auto v_If11__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_If11__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_If11__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        auto v_If18__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If18__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If18__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If23__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If23__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If23__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If27__2 = iface.f_decl_bv("If27__2", iface.bigint_lit("10"));
        const auto v_temp0 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If23__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_If27__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If23__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        iface.f_gen_store(v_If27__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If23__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        auto v_If32__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If32__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If32__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If37__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If37__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If37__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If41__2 = iface.f_decl_bv("If41__2", iface.bigint_lit("10"));
        const auto v_temp1 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If32__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If37__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_If41__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If32__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If37__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_If41__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If32__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If37__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp1));
        auto v_If46__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If46__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If46__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If51__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If51__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If51__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If55__2 = iface.f_decl_bv("If55__2", iface.bigint_lit("10"));
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If46__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If51__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_If55__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If46__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If51__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        iface.f_gen_store(v_If55__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If46__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If51__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        auto v_If60__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If60__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If60__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If65__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If65__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If65__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If69__2 = iface.f_decl_bv("If69__2", iface.bigint_lit("10"));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If65__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_If69__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If65__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_If69__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If65__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        auto v_If74__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If74__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If74__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If79__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If79__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If79__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If83__2 = iface.f_decl_bv("If83__2", iface.bigint_lit("10"));
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_If83__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        iface.f_gen_store(v_If83__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        auto v_If88__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If88__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If88__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If93__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If93__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If93__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If97__2 = iface.f_decl_bv("If97__2", iface.bigint_lit("10"));
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If88__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If93__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_If97__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If88__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If93__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        iface.f_gen_store(v_If97__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If88__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If93__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        auto v_If102__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If102__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If102__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If107__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If107__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If107__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If111__2 = iface.f_decl_bv("If111__2", iface.bigint_lit("10"));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If102__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If107__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_If111__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If102__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If107__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_If111__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If102__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If107__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp6));
        auto v_If116__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If116__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If116__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If121__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If121__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If121__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If125__2 = iface.f_decl_bv("If125__2", iface.bigint_lit("10"));
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If116__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If121__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_If125__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If116__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If121__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        iface.f_gen_store(v_If125__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If116__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If121__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
        auto v_If130__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If130__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If130__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If135__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If135__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If135__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If139__2 = iface.f_decl_bv("If139__2", iface.bigint_lit("10"));
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If130__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If135__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_If139__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If130__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If135__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        iface.f_gen_store(v_If139__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If130__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If135__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        auto v_If144__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If144__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If144__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If149__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If149__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If149__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If153__2 = iface.f_decl_bv("If153__2", iface.bigint_lit("10"));
        const auto v_temp9 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If144__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If149__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_If153__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If144__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If149__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        iface.f_gen_store(v_If153__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If144__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If149__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        auto v_If158__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If158__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If158__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If163__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If163__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If163__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If167__2 = iface.f_decl_bv("If167__2", iface.bigint_lit("10"));
        const auto v_temp10 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If158__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_If167__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If158__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        iface.f_gen_store(v_If167__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If158__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp10));
        auto v_If172__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If172__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If172__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If177__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If177__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If177__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If181__2 = iface.f_decl_bv("If181__2", iface.bigint_lit("10"));
        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If172__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If177__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_If181__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If172__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If177__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        iface.f_gen_store(v_If181__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If172__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If177__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp11));
        auto v_If186__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If186__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If186__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If191__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If191__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If191__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If195__2 = iface.f_decl_bv("If195__2", iface.bigint_lit("10"));
        const auto v_temp12 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If186__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If191__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp12));
        iface.f_gen_store(v_If195__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If186__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If191__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp12));
        iface.f_gen_store(v_If195__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If186__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If191__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp12));
        auto v_If200__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If200__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If200__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If205__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If205__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If205__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If209__2 = iface.f_decl_bv("If209__2", iface.bigint_lit("10"));
        const auto v_temp13 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If200__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If205__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp13));
        iface.f_gen_store(v_If209__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If200__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If205__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp13));
        iface.f_gen_store(v_If209__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If200__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If205__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp13));
        auto v_If214__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If214__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If214__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If219__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If219__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If219__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If223__2 = iface.f_decl_bv("If223__2", iface.bigint_lit("10"));
        const auto v_temp14 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If214__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If219__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(v_If223__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If214__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If219__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp14));
        iface.f_gen_store(v_If223__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If214__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If219__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        auto v_If228__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If228__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If228__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If233__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If233__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If233__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If237__2 = iface.f_decl_bv("If237__2", iface.bigint_lit("10"));
        const auto v_temp15 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If233__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp15));
        iface.f_gen_store(v_If237__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If233__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp15));
        iface.f_gen_store(v_If237__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If233__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp15));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If237__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If223__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If209__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If195__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If181__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If167__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If153__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If139__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If125__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If111__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If97__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If83__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If69__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If55__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If41__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If11__1, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If27__2), iface.bigint_lit("0"), iface.bigint_lit("8")))))))))))))))))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp247__2 = typename Traits::rt_expr{};
        v_Exp247__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp250__2 = typename Traits::rt_expr{};
        v_Exp250__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If251__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_If251__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          v_If251__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        auto v_If258__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If258__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If258__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If263__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If263__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If263__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If267__2 = iface.f_decl_bv("If267__2", iface.bigint_lit("10"));
        const auto v_temp16 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If263__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp16));
        iface.f_gen_store(v_If267__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If263__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp16));
        iface.f_gen_store(v_If267__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If263__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp16));
        auto v_If272__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If272__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If272__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If277__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If277__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If277__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If281__2 = iface.f_decl_bv("If281__2", iface.bigint_lit("10"));
        const auto v_temp17 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If272__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If277__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp17));
        iface.f_gen_store(v_If281__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If272__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If277__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp17));
        iface.f_gen_store(v_If281__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If272__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If277__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp17));
        auto v_If286__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If286__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If286__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If291__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If291__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If291__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If295__2 = iface.f_decl_bv("If295__2", iface.bigint_lit("10"));
        const auto v_temp18 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If286__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If291__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp18));
        iface.f_gen_store(v_If295__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If286__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If291__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp18));
        iface.f_gen_store(v_If295__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If286__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If291__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp18));
        auto v_If300__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If300__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If300__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If305__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If305__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If305__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If309__2 = iface.f_decl_bv("If309__2", iface.bigint_lit("10"));
        const auto v_temp19 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If300__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If305__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(v_If309__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If300__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If305__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp19));
        iface.f_gen_store(v_If309__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If300__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If305__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp19));
        auto v_If314__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If314__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If314__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If319__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If319__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If319__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If323__2 = iface.f_decl_bv("If323__2", iface.bigint_lit("10"));
        const auto v_temp20 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp20));
        iface.f_gen_store(v_If323__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp20));
        iface.f_gen_store(v_If323__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp20));
        auto v_If328__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If328__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If328__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If333__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If333__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If333__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If337__2 = iface.f_decl_bv("If337__2", iface.bigint_lit("10"));
        const auto v_temp21 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If328__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If333__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp21));
        iface.f_gen_store(v_If337__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If328__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If333__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp21));
        iface.f_gen_store(v_If337__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If328__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If333__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp21));
        auto v_If342__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If342__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If342__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If347__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If347__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If347__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If351__2 = iface.f_decl_bv("If351__2", iface.bigint_lit("10"));
        const auto v_temp22 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If342__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If347__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp22));
        iface.f_gen_store(v_If351__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If342__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If347__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp22));
        iface.f_gen_store(v_If351__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If342__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If347__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp22));
        auto v_If356__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If356__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If356__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp247__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If361__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If361__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If361__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp250__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        const auto v_If365__2 = iface.f_decl_bv("If365__2", iface.bigint_lit("10"));
        const auto v_temp23 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If356__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If361__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp23));
        iface.f_gen_store(v_If365__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If356__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If361__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
        iface.f_switch_context(iface.f_false_branch(v_temp23));
        iface.f_gen_store(v_If365__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If356__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If361__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp23));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If251__1, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If365__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If251__1, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If351__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If251__1, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If337__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If251__1, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If323__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If251__1, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If309__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If251__1, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If295__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If251__1, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If281__2), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If251__1, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_load(v_If267__2), iface.bigint_lit("0"), iface.bigint_lit("8")))))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp376__2 = typename Traits::rt_expr{};
          v_Exp376__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp379__2 = typename Traits::rt_expr{};
          v_Exp379__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If380__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_If380__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_If380__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_If387__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If387__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If387__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If392__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If392__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If392__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If396__2 = iface.f_decl_bv("If396__2", iface.bigint_lit("18"));
          const auto v_temp24 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If387__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If392__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp24));
          iface.f_gen_store(v_If396__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If387__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If392__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp24));
          iface.f_gen_store(v_If396__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If387__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If392__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp24));
          auto v_If401__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If401__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If401__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If406__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If406__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If406__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If410__2 = iface.f_decl_bv("If410__2", iface.bigint_lit("18"));
          const auto v_temp25 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If401__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If406__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_If410__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If401__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If406__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          iface.f_gen_store(v_If410__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If401__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If406__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp25));
          auto v_If415__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If415__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If415__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If420__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If420__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If420__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If424__2 = iface.f_decl_bv("If424__2", iface.bigint_lit("18"));
          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If415__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If420__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_If424__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If415__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If420__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_If424__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If415__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If420__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp26));
          auto v_If429__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If429__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If429__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If434__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If434__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If434__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If438__2 = iface.f_decl_bv("If438__2", iface.bigint_lit("18"));
          const auto v_temp27 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If429__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_If438__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If429__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          iface.f_gen_store(v_If438__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If429__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          auto v_If443__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If443__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If443__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If448__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If448__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If448__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If452__2 = iface.f_decl_bv("If452__2", iface.bigint_lit("18"));
          const auto v_temp28 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If443__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If448__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_If452__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If443__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If448__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_If452__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If443__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If448__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp28));
          auto v_If457__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If457__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If457__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If462__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If462__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If462__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If466__2 = iface.f_decl_bv("If466__2", iface.bigint_lit("18"));
          const auto v_temp29 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If457__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If462__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp29));
          iface.f_gen_store(v_If466__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If457__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If462__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp29));
          iface.f_gen_store(v_If466__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If457__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If462__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp29));
          auto v_If471__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If471__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If471__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If476__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If476__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If476__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If480__2 = iface.f_decl_bv("If480__2", iface.bigint_lit("18"));
          const auto v_temp30 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If471__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If476__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_If480__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If471__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If476__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          iface.f_gen_store(v_If480__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If471__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If476__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          auto v_If485__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If485__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If485__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp376__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If490__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If490__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If490__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp379__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If494__2 = iface.f_decl_bv("If494__2", iface.bigint_lit("18"));
          const auto v_temp31 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If485__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If490__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_If494__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If485__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If490__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_If494__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If485__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If490__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp31));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If380__1, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If494__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If380__1, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If480__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If380__1, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If466__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If380__1, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If452__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If380__1, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If438__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If380__1, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If424__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If380__1, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If410__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If380__1, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If396__2), iface.bigint_lit("0"), iface.bigint_lit("16")))))))))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp504__2 = typename Traits::rt_expr{};
          v_Exp504__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp507__2 = typename Traits::rt_expr{};
          v_Exp507__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If508__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_If508__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            v_If508__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_If515__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If515__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If515__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If520__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If520__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp507__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If520__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp507__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If524__2 = iface.f_decl_bv("If524__2", iface.bigint_lit("18"));
          const auto v_temp32 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If515__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If520__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(v_If524__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If515__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If520__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp32));
          iface.f_gen_store(v_If524__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If515__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If520__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          auto v_If529__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If529__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If529__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If534__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If534__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp507__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If534__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp507__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If538__2 = iface.f_decl_bv("If538__2", iface.bigint_lit("18"));
          const auto v_temp33 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If529__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If534__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_If538__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If529__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If534__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_If538__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If529__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If534__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp33));
          auto v_If543__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If543__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If543__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If548__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If548__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp507__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If548__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp507__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If552__2 = iface.f_decl_bv("If552__2", iface.bigint_lit("18"));
          const auto v_temp34 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If543__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If548__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp34));
          iface.f_gen_store(v_If552__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If543__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If548__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp34));
          iface.f_gen_store(v_If552__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If543__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If548__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp34));
          auto v_If557__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If557__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If557__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp504__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If562__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If562__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp507__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If562__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp507__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          const auto v_If566__2 = iface.f_decl_bv("If566__2", iface.bigint_lit("18"));
          const auto v_temp35 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If557__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If562__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(v_If566__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If557__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If562__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
          iface.f_switch_context(iface.f_false_branch(v_temp35));
          iface.f_gen_store(v_If566__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If557__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If562__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If508__1, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If566__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If508__1, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If552__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If508__1, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If538__2), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If508__1, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_If524__2), iface.bigint_lit("0"), iface.bigint_lit("16")))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp577__2 = typename Traits::rt_expr{};
            v_Exp577__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp580__2 = typename Traits::rt_expr{};
            v_Exp580__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If581__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_If581__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_If581__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            auto v_If588__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If588__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp577__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If588__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp577__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If593__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If593__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp580__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If593__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp580__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            const auto v_If597__2 = iface.f_decl_bv("If597__2", iface.bigint_lit("34"));
            const auto v_temp36 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If588__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If593__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp36));
            iface.f_gen_store(v_If597__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If588__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If593__2, iface.f_gen_int_lit(iface.bigint_lit("34")))));
            iface.f_switch_context(iface.f_false_branch(v_temp36));
            iface.f_gen_store(v_If597__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If588__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If593__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000001"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp36));
            auto v_If602__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If602__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp577__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If602__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp577__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If607__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If607__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp580__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If607__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp580__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            const auto v_If611__2 = iface.f_decl_bv("If611__2", iface.bigint_lit("34"));
            const auto v_temp37 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If602__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If607__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp37));
            iface.f_gen_store(v_If611__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If602__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If607__2, iface.f_gen_int_lit(iface.bigint_lit("34")))));
            iface.f_switch_context(iface.f_false_branch(v_temp37));
            iface.f_gen_store(v_If611__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If602__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If607__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000001"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp37));
            auto v_If616__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If616__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp577__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If616__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp577__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If621__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If621__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp580__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If621__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp580__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            const auto v_If625__2 = iface.f_decl_bv("If625__2", iface.bigint_lit("34"));
            const auto v_temp38 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If616__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If621__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp38));
            iface.f_gen_store(v_If625__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If616__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If621__2, iface.f_gen_int_lit(iface.bigint_lit("34")))));
            iface.f_switch_context(iface.f_false_branch(v_temp38));
            iface.f_gen_store(v_If625__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If616__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If621__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000001"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp38));
            auto v_If630__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If630__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp577__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If630__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp577__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If635__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If635__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp580__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If635__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp580__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            const auto v_If639__2 = iface.f_decl_bv("If639__2", iface.bigint_lit("34"));
            const auto v_temp39 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If635__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp39));
            iface.f_gen_store(v_If639__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If635__2, iface.f_gen_int_lit(iface.bigint_lit("34")))));
            iface.f_switch_context(iface.f_false_branch(v_temp39));
            iface.f_gen_store(v_If639__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If635__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000001"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp39));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If581__1, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_If639__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If581__1, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_If625__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If581__1, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_If611__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If581__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_If597__2), iface.bigint_lit("0"), iface.bigint_lit("32")))))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp649__2 = typename Traits::rt_expr{};
            v_Exp649__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp652__2 = typename Traits::rt_expr{};
            v_Exp652__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If653__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_If653__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              v_If653__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            auto v_If660__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If660__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp649__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If660__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp649__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If665__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If665__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp652__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If665__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp652__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            const auto v_If669__2 = iface.f_decl_bv("If669__2", iface.bigint_lit("34"));
            const auto v_temp40 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If665__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp40));
            iface.f_gen_store(v_If669__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If665__2, iface.f_gen_int_lit(iface.bigint_lit("34")))));
            iface.f_switch_context(iface.f_false_branch(v_temp40));
            iface.f_gen_store(v_If669__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If665__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000001"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp40));
            auto v_If674__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If674__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp649__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If674__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp649__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If679__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If679__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp652__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If679__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp652__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            const auto v_If683__2 = iface.f_decl_bv("If683__2", iface.bigint_lit("34"));
            const auto v_temp41 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If674__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If679__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp41));
            iface.f_gen_store(v_If683__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If674__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If679__2, iface.f_gen_int_lit(iface.bigint_lit("34")))));
            iface.f_switch_context(iface.f_false_branch(v_temp41));
            iface.f_gen_store(v_If683__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If674__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If679__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000001"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp41));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If653__1, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_If683__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If653__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_If669__2), iface.bigint_lit("0"), iface.bigint_lit("32")))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp694__2 = typename Traits::rt_expr{};
              v_Exp694__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp697__2 = typename Traits::rt_expr{};
              v_Exp697__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If698__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                v_If698__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_If698__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              auto v_If705__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If705__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp694__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If705__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp694__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If710__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If710__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp697__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If710__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp697__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              const auto v_If714__2 = iface.f_decl_bv("If714__2", iface.bigint_lit("66"));
              const auto v_temp42 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If705__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If710__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp42));
              iface.f_gen_store(v_If714__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If705__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If710__2, iface.f_gen_int_lit(iface.bigint_lit("66")))));
              iface.f_switch_context(iface.f_false_branch(v_temp42));
              iface.f_gen_store(v_If714__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If705__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If710__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000001"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp42));
              auto v_If719__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If719__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp694__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If719__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp694__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If724__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If724__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp697__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If724__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp697__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              const auto v_If728__2 = iface.f_decl_bv("If728__2", iface.bigint_lit("66"));
              const auto v_temp43 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If719__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If724__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp43));
              iface.f_gen_store(v_If728__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If719__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If724__2, iface.f_gen_int_lit(iface.bigint_lit("66")))));
              iface.f_switch_context(iface.f_false_branch(v_temp43));
              iface.f_gen_store(v_If728__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If719__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If724__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000001"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp43));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If698__1, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_load(v_If728__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If698__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_load(v_If714__2), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp738__2 = typename Traits::rt_expr{};
              v_Exp738__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp741__2 = typename Traits::rt_expr{};
              v_Exp741__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If742__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                v_If742__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
              } else {
                v_If742__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              auto v_If749__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If749__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp738__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If749__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp738__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If754__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If754__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp741__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If754__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp741__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              const auto v_If758__2 = iface.f_decl_bv("If758__2", iface.bigint_lit("66"));
              const auto v_temp44 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If749__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If754__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp44));
              iface.f_gen_store(v_If758__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If749__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If754__2, iface.f_gen_int_lit(iface.bigint_lit("66")))));
              iface.f_switch_context(iface.f_false_branch(v_temp44));
              iface.f_gen_store(v_If758__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If749__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If754__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000001"))));
              iface.f_switch_context(iface.f_merge_branch(v_temp44));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_add_bits(v_If742__1, iface.f_gen_slice(iface.f_gen_load(v_If758__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_diff


} // namespace aslp
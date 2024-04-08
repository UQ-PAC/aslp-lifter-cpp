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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "110"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp6__2 = typename Traits::rt_expr{};
        v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_If10__1 = iface.f_decl_bv("If10__1", iface.bigint_lit("8"));
        const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_If10__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        iface.f_gen_store(v_If10__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        const auto v_If16__1 = iface.f_decl_bv("If16__1", iface.bigint_lit("8"));
        const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_If16__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_If16__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp1));
        const auto v_If22__1 = iface.f_decl_bv("If22__1", iface.bigint_lit("8"));
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_If22__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        iface.f_gen_store(v_If22__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        const auto v_If28__1 = iface.f_decl_bv("If28__1", iface.bigint_lit("8"));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_If28__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_If28__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        const auto v_If34__1 = iface.f_decl_bv("If34__1", iface.bigint_lit("8"));
        const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_If34__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        iface.f_gen_store(v_If34__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        const auto v_If40__1 = iface.f_decl_bv("If40__1", iface.bigint_lit("8"));
        const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_If40__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        iface.f_gen_store(v_If40__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        const auto v_If46__1 = iface.f_decl_bv("If46__1", iface.bigint_lit("8"));
        const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_If46__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_If46__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp6));
        const auto v_If52__1 = iface.f_decl_bv("If52__1", iface.bigint_lit("8"));
        const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_If52__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        iface.f_gen_store(v_If52__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
        const auto v_If58__1 = iface.f_decl_bv("If58__1", iface.bigint_lit("8"));
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_If58__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        iface.f_gen_store(v_If58__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        const auto v_If64__1 = iface.f_decl_bv("If64__1", iface.bigint_lit("8"));
        const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_If64__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        iface.f_gen_store(v_If64__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        const auto v_If70__1 = iface.f_decl_bv("If70__1", iface.bigint_lit("8"));
        const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_If70__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        iface.f_gen_store(v_If70__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp10));
        const auto v_If76__1 = iface.f_decl_bv("If76__1", iface.bigint_lit("8"));
        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_If76__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        iface.f_gen_store(v_If76__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp11));
        const auto v_If82__1 = iface.f_decl_bv("If82__1", iface.bigint_lit("8"));
        const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp12));
        iface.f_gen_store(v_If82__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp12));
        iface.f_gen_store(v_If82__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp12));
        const auto v_If88__1 = iface.f_decl_bv("If88__1", iface.bigint_lit("8"));
        const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp13));
        iface.f_gen_store(v_If88__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp13));
        iface.f_gen_store(v_If88__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp13));
        const auto v_If94__1 = iface.f_decl_bv("If94__1", iface.bigint_lit("8"));
        const auto v_temp14 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(v_If94__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp14));
        iface.f_gen_store(v_If94__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        const auto v_If100__1 = iface.f_decl_bv("If100__1", iface.bigint_lit("8"));
        const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp15));
        iface.f_gen_store(v_If100__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp15));
        iface.f_gen_store(v_If100__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp15));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If100__1), iface.f_gen_append_bits(iface.f_gen_load(v_If94__1), iface.f_gen_append_bits(iface.f_gen_load(v_If88__1), iface.f_gen_append_bits(iface.f_gen_load(v_If82__1), iface.f_gen_append_bits(iface.f_gen_load(v_If76__1), iface.f_gen_append_bits(iface.f_gen_load(v_If70__1), iface.f_gen_append_bits(iface.f_gen_load(v_If64__1), iface.f_gen_append_bits(iface.f_gen_load(v_If58__1), iface.f_gen_append_bits(iface.f_gen_load(v_If52__1), iface.f_gen_append_bits(iface.f_gen_load(v_If46__1), iface.f_gen_append_bits(iface.f_gen_load(v_If40__1), iface.f_gen_append_bits(iface.f_gen_load(v_If34__1), iface.f_gen_append_bits(iface.f_gen_load(v_If28__1), iface.f_gen_append_bits(iface.f_gen_load(v_If22__1), iface.f_gen_append_bits(iface.f_gen_load(v_If16__1), iface.f_gen_load(v_If10__1)))))))))))))))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp111__2 = typename Traits::rt_expr{};
        v_Exp111__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_If115__1 = iface.f_decl_bv("If115__1", iface.bigint_lit("8"));
        const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp16));
        iface.f_gen_store(v_If115__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp16));
        iface.f_gen_store(v_If115__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp16));
        const auto v_If121__1 = iface.f_decl_bv("If121__1", iface.bigint_lit("8"));
        const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp111__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp17));
        iface.f_gen_store(v_If121__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp17));
        iface.f_gen_store(v_If121__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp17));
        const auto v_If127__1 = iface.f_decl_bv("If127__1", iface.bigint_lit("8"));
        const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp111__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp18));
        iface.f_gen_store(v_If127__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp18));
        iface.f_gen_store(v_If127__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp18));
        const auto v_If133__1 = iface.f_decl_bv("If133__1", iface.bigint_lit("8"));
        const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp111__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(v_If133__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp19));
        iface.f_gen_store(v_If133__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp19));
        const auto v_If139__1 = iface.f_decl_bv("If139__1", iface.bigint_lit("8"));
        const auto v_temp20 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp111__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp20));
        iface.f_gen_store(v_If139__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp20));
        iface.f_gen_store(v_If139__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp20));
        const auto v_If145__1 = iface.f_decl_bv("If145__1", iface.bigint_lit("8"));
        const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp111__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp21));
        iface.f_gen_store(v_If145__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp21));
        iface.f_gen_store(v_If145__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp21));
        const auto v_If151__1 = iface.f_decl_bv("If151__1", iface.bigint_lit("8"));
        const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp111__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp22));
        iface.f_gen_store(v_If151__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp22));
        iface.f_gen_store(v_If151__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp22));
        const auto v_If157__1 = iface.f_decl_bv("If157__1", iface.bigint_lit("8"));
        const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp111__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp23));
        iface.f_gen_store(v_If157__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp23));
        iface.f_gen_store(v_If157__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp23));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If157__1), iface.f_gen_append_bits(iface.f_gen_load(v_If151__1), iface.f_gen_append_bits(iface.f_gen_load(v_If145__1), iface.f_gen_append_bits(iface.f_gen_load(v_If139__1), iface.f_gen_append_bits(iface.f_gen_load(v_If133__1), iface.f_gen_append_bits(iface.f_gen_load(v_If127__1), iface.f_gen_append_bits(iface.f_gen_load(v_If121__1), iface.f_gen_load(v_If115__1)))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp169__2 = typename Traits::rt_expr{};
          v_Exp169__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_If173__1 = iface.f_decl_bv("If173__1", iface.bigint_lit("16"));
          const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp24));
          iface.f_gen_store(v_If173__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp24));
          iface.f_gen_store(v_If173__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp24));
          const auto v_If179__1 = iface.f_decl_bv("If179__1", iface.bigint_lit("16"));
          const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_If179__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          iface.f_gen_store(v_If179__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp25));
          const auto v_If185__1 = iface.f_decl_bv("If185__1", iface.bigint_lit("16"));
          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_If185__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_If185__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp26));
          const auto v_If191__1 = iface.f_decl_bv("If191__1", iface.bigint_lit("16"));
          const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_If191__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          iface.f_gen_store(v_If191__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          const auto v_If197__1 = iface.f_decl_bv("If197__1", iface.bigint_lit("16"));
          const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_If197__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_If197__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp28));
          const auto v_If203__1 = iface.f_decl_bv("If203__1", iface.bigint_lit("16"));
          const auto v_temp29 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp29));
          iface.f_gen_store(v_If203__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp29));
          iface.f_gen_store(v_If203__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp29));
          const auto v_If209__1 = iface.f_decl_bv("If209__1", iface.bigint_lit("16"));
          const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_If209__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          iface.f_gen_store(v_If209__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          const auto v_If215__1 = iface.f_decl_bv("If215__1", iface.bigint_lit("16"));
          const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_If215__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_If215__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp31));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If215__1), iface.f_gen_append_bits(iface.f_gen_load(v_If209__1), iface.f_gen_append_bits(iface.f_gen_load(v_If203__1), iface.f_gen_append_bits(iface.f_gen_load(v_If197__1), iface.f_gen_append_bits(iface.f_gen_load(v_If191__1), iface.f_gen_append_bits(iface.f_gen_load(v_If185__1), iface.f_gen_append_bits(iface.f_gen_load(v_If179__1), iface.f_gen_load(v_If173__1)))))))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp226__2 = typename Traits::rt_expr{};
          v_Exp226__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_If230__1 = iface.f_decl_bv("If230__1", iface.bigint_lit("16"));
          const auto v_temp32 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(v_If230__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp32));
          iface.f_gen_store(v_If230__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          const auto v_If236__1 = iface.f_decl_bv("If236__1", iface.bigint_lit("16"));
          const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp226__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_If236__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_If236__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp33));
          const auto v_If242__1 = iface.f_decl_bv("If242__1", iface.bigint_lit("16"));
          const auto v_temp34 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp226__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp34));
          iface.f_gen_store(v_If242__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp34));
          iface.f_gen_store(v_If242__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp34));
          const auto v_If248__1 = iface.f_decl_bv("If248__1", iface.bigint_lit("16"));
          const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp226__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(v_If248__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp35));
          iface.f_gen_store(v_If248__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If248__1), iface.f_gen_append_bits(iface.f_gen_load(v_If242__1), iface.f_gen_append_bits(iface.f_gen_load(v_If236__1), iface.f_gen_load(v_If230__1)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp260__2 = typename Traits::rt_expr{};
            v_Exp260__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_If264__1 = iface.f_decl_bv("If264__1", iface.bigint_lit("32"));
            const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp36));
            iface.f_gen_store(v_If264__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp36));
            iface.f_gen_store(v_If264__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp36));
            const auto v_If270__1 = iface.f_decl_bv("If270__1", iface.bigint_lit("32"));
            const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp37));
            iface.f_gen_store(v_If270__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp37));
            iface.f_gen_store(v_If270__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp37));
            const auto v_If276__1 = iface.f_decl_bv("If276__1", iface.bigint_lit("32"));
            const auto v_temp38 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp38));
            iface.f_gen_store(v_If276__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp38));
            iface.f_gen_store(v_If276__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp38));
            const auto v_If282__1 = iface.f_decl_bv("If282__1", iface.bigint_lit("32"));
            const auto v_temp39 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp39));
            iface.f_gen_store(v_If282__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp39));
            iface.f_gen_store(v_If282__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp39));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If282__1), iface.f_gen_append_bits(iface.f_gen_load(v_If276__1), iface.f_gen_append_bits(iface.f_gen_load(v_If270__1), iface.f_gen_load(v_If264__1)))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp293__2 = typename Traits::rt_expr{};
            v_Exp293__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_If297__1 = iface.f_decl_bv("If297__1", iface.bigint_lit("32"));
            const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp40));
            iface.f_gen_store(v_If297__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp40));
            iface.f_gen_store(v_If297__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp40));
            const auto v_If303__1 = iface.f_decl_bv("If303__1", iface.bigint_lit("32"));
            const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp293__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp41));
            iface.f_gen_store(v_If303__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp41));
            iface.f_gen_store(v_If303__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp41));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If303__1), iface.f_gen_load(v_If297__1)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp315__2 = typename Traits::rt_expr{};
              v_Exp315__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              const auto v_If319__1 = iface.f_decl_bv("If319__1", iface.bigint_lit("64"));
              const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp42));
              iface.f_gen_store(v_If319__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp42));
              iface.f_gen_store(v_If319__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp42));
              const auto v_If325__1 = iface.f_decl_bv("If325__1", iface.bigint_lit("64"));
              const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp315__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp43));
              iface.f_gen_store(v_If325__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp43));
              iface.f_gen_store(v_If325__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp43));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If325__1), iface.f_gen_load(v_If319__1)));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_If340__1 = iface.f_decl_bv("If340__1", iface.bigint_lit("64"));
              const auto v_temp44 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp44));
              iface.f_gen_store(v_If340__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp44));
              iface.f_gen_store(v_If340__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp44));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If340__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_simd


} // namespace aslp
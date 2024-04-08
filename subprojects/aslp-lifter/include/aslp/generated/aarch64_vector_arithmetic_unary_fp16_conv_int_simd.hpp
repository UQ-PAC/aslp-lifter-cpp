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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_conv_int_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp6__2 = typename Traits::rt_expr{};
    v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_FPDecodeRounding9__3 = iface.f_decl_bv("FPDecodeRounding9__3", iface.bigint_lit("3"));
    const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    iface.f_gen_store(v_FPDecodeRounding9__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    iface.f_gen_store(v_FPDecodeRounding9__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp1));
    const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
    iface.f_switch_context(iface.f_true_branch(v_temp2));
    iface.f_gen_store(v_FPDecodeRounding9__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp2));
    const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
    iface.f_switch_context(iface.f_true_branch(v_temp3));
    iface.f_gen_store(v_FPDecodeRounding9__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
    iface.f_switch_context(iface.f_false_branch(v_temp3));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
    const auto v_Exp13__2 = iface.f_decl_bv("Exp13__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp13__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3))));
    const auto v_Exp16__2 = iface.f_decl_bv("Exp16__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp16__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3))));
    const auto v_Exp19__2 = iface.f_decl_bv("Exp19__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp19__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3))));
    const auto v_Exp22__2 = iface.f_decl_bv("Exp22__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp22__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3))));
    const auto v_Exp25__2 = iface.f_decl_bv("Exp25__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp25__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3))));
    const auto v_Exp28__2 = iface.f_decl_bv("Exp28__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp28__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3))));
    const auto v_Exp31__2 = iface.f_decl_bv("Exp31__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp31__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3))));
    auto v_Exp34__2 = typename Traits::rt_expr{};
    v_Exp34__2 = iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding9__3)));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp34__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp31__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp28__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp25__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp22__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp19__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp16__2), iface.f_gen_load(v_Exp13__2)))))))));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp43__2 = typename Traits::rt_expr{};
    v_Exp43__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_FPDecodeRounding46__3 = iface.f_decl_bv("FPDecodeRounding46__3", iface.bigint_lit("3"));
    const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))));
    iface.f_switch_context(iface.f_true_branch(v_temp4));
    iface.f_gen_store(v_FPDecodeRounding46__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
    iface.f_switch_context(iface.f_false_branch(v_temp4));
    const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))));
    iface.f_switch_context(iface.f_true_branch(v_temp5));
    iface.f_gen_store(v_FPDecodeRounding46__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "001")));
    iface.f_switch_context(iface.f_false_branch(v_temp5));
    const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "10"))));
    iface.f_switch_context(iface.f_true_branch(v_temp6));
    iface.f_gen_store(v_FPDecodeRounding46__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "010")));
    iface.f_switch_context(iface.f_false_branch(v_temp6));
    const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPCR()), iface.bigint_lit("22"), iface.bigint_lit("2")), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
    iface.f_switch_context(iface.f_true_branch(v_temp7));
    iface.f_gen_store(v_FPDecodeRounding46__3, iface.f_gen_bit_lit(iface.bits_lit(3U, "011")));
    iface.f_switch_context(iface.f_false_branch(v_temp7));
    iface.f_gen_assert(iface.f_gen_bool_lit(false));
    iface.f_switch_context(iface.f_merge_branch(v_temp4));
    const auto v_Exp50__2 = iface.f_decl_bv("Exp50__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp50__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding46__3))));
    const auto v_Exp53__2 = iface.f_decl_bv("Exp53__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp53__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding46__3))));
    const auto v_Exp56__2 = iface.f_decl_bv("Exp56__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp56__2, iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding46__3))));
    auto v_Exp59__2 = typename Traits::rt_expr{};
    v_Exp59__2 = iface.f_gen_FixedToFP(iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_cvt_bits_uint(iface.f_gen_load(v_FPDecodeRounding46__3)));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp59__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp56__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp53__2), iface.f_gen_load(v_Exp50__2)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_conv_int_simd


} // namespace aslp
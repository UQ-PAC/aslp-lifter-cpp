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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp6__2 = typename Traits::rt_expr{};
    v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    auto v_Exp12__2 = typename Traits::rt_expr{};
    v_Exp12__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If14__1 = iface.f_decl_bv("If14__1", iface.bigint_lit("16"));
    const auto v_temp0 = iface.f_gen_branch(v_Exp12__2);
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    iface.f_gen_store(v_If14__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    iface.f_gen_store(v_If14__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
    auto v_Exp19__2 = typename Traits::rt_expr{};
    v_Exp19__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If20__1 = iface.f_decl_bv("If20__1", iface.bigint_lit("16"));
    const auto v_temp1 = iface.f_gen_branch(v_Exp19__2);
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    iface.f_gen_store(v_If20__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp1));
    iface.f_gen_store(v_If20__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp1));
    auto v_Exp25__2 = typename Traits::rt_expr{};
    v_Exp25__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If26__1 = iface.f_decl_bv("If26__1", iface.bigint_lit("16"));
    const auto v_temp2 = iface.f_gen_branch(v_Exp25__2);
    iface.f_switch_context(iface.f_true_branch(v_temp2));
    iface.f_gen_store(v_If26__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp2));
    iface.f_gen_store(v_If26__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp2));
    auto v_Exp31__2 = typename Traits::rt_expr{};
    v_Exp31__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If32__1 = iface.f_decl_bv("If32__1", iface.bigint_lit("16"));
    const auto v_temp3 = iface.f_gen_branch(v_Exp31__2);
    iface.f_switch_context(iface.f_true_branch(v_temp3));
    iface.f_gen_store(v_If32__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp3));
    iface.f_gen_store(v_If32__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp3));
    auto v_Exp37__2 = typename Traits::rt_expr{};
    v_Exp37__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If38__1 = iface.f_decl_bv("If38__1", iface.bigint_lit("16"));
    const auto v_temp4 = iface.f_gen_branch(v_Exp37__2);
    iface.f_switch_context(iface.f_true_branch(v_temp4));
    iface.f_gen_store(v_If38__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp4));
    iface.f_gen_store(v_If38__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp4));
    auto v_Exp43__2 = typename Traits::rt_expr{};
    v_Exp43__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If44__1 = iface.f_decl_bv("If44__1", iface.bigint_lit("16"));
    const auto v_temp5 = iface.f_gen_branch(v_Exp43__2);
    iface.f_switch_context(iface.f_true_branch(v_temp5));
    iface.f_gen_store(v_If44__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp5));
    iface.f_gen_store(v_If44__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp5));
    auto v_Exp49__2 = typename Traits::rt_expr{};
    v_Exp49__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If50__1 = iface.f_decl_bv("If50__1", iface.bigint_lit("16"));
    const auto v_temp6 = iface.f_gen_branch(v_Exp49__2);
    iface.f_switch_context(iface.f_true_branch(v_temp6));
    iface.f_gen_store(v_If50__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp6));
    iface.f_gen_store(v_If50__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp6));
    auto v_Exp55__2 = typename Traits::rt_expr{};
    v_Exp55__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If56__1 = iface.f_decl_bv("If56__1", iface.bigint_lit("16"));
    const auto v_temp7 = iface.f_gen_branch(v_Exp55__2);
    iface.f_switch_context(iface.f_true_branch(v_temp7));
    iface.f_gen_store(v_If56__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp7));
    iface.f_gen_store(v_If56__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp7));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If56__1), iface.f_gen_append_bits(iface.f_gen_load(v_If50__1), iface.f_gen_append_bits(iface.f_gen_load(v_If44__1), iface.f_gen_append_bits(iface.f_gen_load(v_If38__1), iface.f_gen_append_bits(iface.f_gen_load(v_If32__1), iface.f_gen_append_bits(iface.f_gen_load(v_If26__1), iface.f_gen_append_bits(iface.f_gen_load(v_If20__1), iface.f_gen_load(v_If14__1)))))))));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp67__2 = typename Traits::rt_expr{};
    v_Exp67__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    auto v_Exp73__2 = typename Traits::rt_expr{};
    v_Exp73__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If75__1 = iface.f_decl_bv("If75__1", iface.bigint_lit("16"));
    const auto v_temp8 = iface.f_gen_branch(v_Exp73__2);
    iface.f_switch_context(iface.f_true_branch(v_temp8));
    iface.f_gen_store(v_If75__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp8));
    iface.f_gen_store(v_If75__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp8));
    auto v_Exp80__2 = typename Traits::rt_expr{};
    v_Exp80__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp67__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If81__1 = iface.f_decl_bv("If81__1", iface.bigint_lit("16"));
    const auto v_temp9 = iface.f_gen_branch(v_Exp80__2);
    iface.f_switch_context(iface.f_true_branch(v_temp9));
    iface.f_gen_store(v_If81__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp9));
    iface.f_gen_store(v_If81__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp9));
    auto v_Exp86__2 = typename Traits::rt_expr{};
    v_Exp86__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp67__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If87__1 = iface.f_decl_bv("If87__1", iface.bigint_lit("16"));
    const auto v_temp10 = iface.f_gen_branch(v_Exp86__2);
    iface.f_switch_context(iface.f_true_branch(v_temp10));
    iface.f_gen_store(v_If87__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp10));
    iface.f_gen_store(v_If87__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp10));
    auto v_Exp92__2 = typename Traits::rt_expr{};
    v_Exp92__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp67__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    const auto v_If93__1 = iface.f_decl_bv("If93__1", iface.bigint_lit("16"));
    const auto v_temp11 = iface.f_gen_branch(v_Exp92__2);
    iface.f_switch_context(iface.f_true_branch(v_temp11));
    iface.f_gen_store(v_If93__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp11));
    iface.f_gen_store(v_If93__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp11));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If93__1), iface.f_gen_append_bits(iface.f_gen_load(v_If87__1), iface.f_gen_append_bits(iface.f_gen_load(v_If81__1), iface.f_gen_load(v_If75__1)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_simd


} // namespace aslp
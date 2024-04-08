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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_recip_fp16_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    const auto v_Exp10__2 = iface.f_decl_bv("Exp10__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp10__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    const auto v_Exp13__2 = iface.f_decl_bv("Exp13__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp13__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    const auto v_Exp16__2 = iface.f_decl_bv("Exp16__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp16__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    const auto v_Exp19__2 = iface.f_decl_bv("Exp19__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp19__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    const auto v_Exp22__2 = iface.f_decl_bv("Exp22__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp22__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    const auto v_Exp25__2 = iface.f_decl_bv("Exp25__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp25__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    const auto v_Exp28__2 = iface.f_decl_bv("Exp28__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp28__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_Exp31__2 = typename Traits::rt_expr{};
    v_Exp31__2 = iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp31__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp28__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp25__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp22__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp19__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp16__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp13__2), iface.f_gen_load(v_Exp10__2)))))))));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    const auto v_Exp44__2 = iface.f_decl_bv("Exp44__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp44__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    const auto v_Exp47__2 = iface.f_decl_bv("Exp47__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp47__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    const auto v_Exp50__2 = iface.f_decl_bv("Exp50__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp50__2, iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
    auto v_Exp53__2 = typename Traits::rt_expr{};
    v_Exp53__2 = iface.f_gen_FPRecipEstimate(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp53__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp50__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp47__2), iface.f_gen_load(v_Exp44__2)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_unary_special_recip_fp16_simd


} // namespace aslp
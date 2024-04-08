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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_bfdot(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    const auto v_Exp19__2 = iface.f_decl_bv("Exp19__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp19__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
    const auto v_Exp20__2 = iface.f_decl_bv("Exp20__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp20__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16"))));
    const auto v_Exp21__2 = iface.f_decl_bv("Exp21__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp21__2, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp19__2), iface.f_gen_load(v_Exp20__2)));
    const auto v_Exp24__2 = iface.f_decl_bv("Exp24__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp24__2, iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp21__2)));
    const auto v_Exp30__2 = iface.f_decl_bv("Exp30__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp30__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16"))));
    const auto v_Exp31__2 = iface.f_decl_bv("Exp31__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp31__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16"))));
    const auto v_Exp32__2 = iface.f_decl_bv("Exp32__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp32__2, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp30__2), iface.f_gen_load(v_Exp31__2)));
    const auto v_Exp34__2 = iface.f_decl_bv("Exp34__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp34__2, iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp32__2)));
    const auto v_Exp40__2 = iface.f_decl_bv("Exp40__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp40__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("16"))));
    const auto v_Exp41__2 = iface.f_decl_bv("Exp41__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp41__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("80"), iface.bigint_lit("16"))));
    const auto v_Exp42__2 = iface.f_decl_bv("Exp42__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp42__2, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp40__2), iface.f_gen_load(v_Exp41__2)));
    const auto v_Exp44__2 = iface.f_decl_bv("Exp44__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp44__2, iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp42__2)));
    const auto v_Exp50__2 = iface.f_decl_bv("Exp50__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp50__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16"))));
    const auto v_Exp51__2 = iface.f_decl_bv("Exp51__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp51__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16"))));
    const auto v_Exp52__2 = iface.f_decl_bv("Exp52__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp52__2, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp50__2), iface.f_gen_load(v_Exp51__2)));
    auto v_Exp54__2 = typename Traits::rt_expr{};
    v_Exp54__2 = iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp52__2));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp54__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp44__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp34__2), iface.f_gen_load(v_Exp24__2)))));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    const auto v_Exp74__2 = iface.f_decl_bv("Exp74__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp74__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
    const auto v_Exp75__2 = iface.f_decl_bv("Exp75__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp75__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16"))));
    const auto v_Exp76__2 = iface.f_decl_bv("Exp76__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp76__2, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp74__2), iface.f_gen_load(v_Exp75__2)));
    const auto v_Exp79__2 = iface.f_decl_bv("Exp79__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp79__2, iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp76__2)));
    const auto v_Exp85__2 = iface.f_decl_bv("Exp85__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp85__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16"))));
    const auto v_Exp86__2 = iface.f_decl_bv("Exp86__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp86__2, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16"))));
    const auto v_Exp87__2 = iface.f_decl_bv("Exp87__2", iface.bigint_lit("32"));
    iface.f_gen_store(v_Exp87__2, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp85__2), iface.f_gen_load(v_Exp86__2)));
    auto v_Exp89__2 = typename Traits::rt_expr{};
    v_Exp89__2 = iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp87__2));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp89__2, iface.f_gen_load(v_Exp79__2)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_bfdot


} // namespace aslp
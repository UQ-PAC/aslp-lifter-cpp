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
void aslp_lifter<Traits>::f_aarch64_vector_bfmmla(typename Traits::bits v_enc) {
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  const auto v_Exp19__3 = iface.f_decl_bv("Exp19__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp19__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
  const auto v_Exp22__3 = iface.f_decl_bv("Exp22__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp22__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16"))));
  const auto v_Exp23__3 = iface.f_decl_bv("Exp23__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp23__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp19__3), iface.f_gen_load(v_Exp22__3)));
  const auto v_Exp24__3 = iface.f_decl_bv("Exp24__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp24__3, iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp23__3)));
  const auto v_Exp27__3 = iface.f_decl_bv("Exp27__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp27__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16"))));
  const auto v_Exp30__3 = iface.f_decl_bv("Exp30__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp30__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16"))));
  const auto v_Exp31__3 = iface.f_decl_bv("Exp31__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp31__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp27__3), iface.f_gen_load(v_Exp30__3)));
  const auto v_Exp32__3 = iface.f_decl_bv("Exp32__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp32__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp24__3), iface.f_gen_load(v_Exp31__3)));
  const auto v_Exp38__3 = iface.f_decl_bv("Exp38__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp38__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("16"))));
  const auto v_Exp41__3 = iface.f_decl_bv("Exp41__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp41__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("80"), iface.bigint_lit("16"))));
  const auto v_Exp42__3 = iface.f_decl_bv("Exp42__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp42__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp38__3), iface.f_gen_load(v_Exp41__3)));
  const auto v_Exp43__3 = iface.f_decl_bv("Exp43__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp43__3, iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp42__3)));
  const auto v_Exp46__3 = iface.f_decl_bv("Exp46__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp46__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16"))));
  const auto v_Exp49__3 = iface.f_decl_bv("Exp49__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp49__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16"))));
  const auto v_Exp50__3 = iface.f_decl_bv("Exp50__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp50__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp46__3), iface.f_gen_load(v_Exp49__3)));
  const auto v_Exp51__3 = iface.f_decl_bv("Exp51__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp51__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp43__3), iface.f_gen_load(v_Exp50__3)));
  const auto v_Exp56__3 = iface.f_decl_bv("Exp56__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp56__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
  const auto v_Exp59__3 = iface.f_decl_bv("Exp59__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp59__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16"))));
  const auto v_Exp60__3 = iface.f_decl_bv("Exp60__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp60__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp56__3), iface.f_gen_load(v_Exp59__3)));
  const auto v_Exp61__3 = iface.f_decl_bv("Exp61__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp61__3, iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp60__3)));
  const auto v_Exp64__3 = iface.f_decl_bv("Exp64__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp64__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16"))));
  const auto v_Exp67__3 = iface.f_decl_bv("Exp67__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp67__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16"))));
  const auto v_Exp68__3 = iface.f_decl_bv("Exp68__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp68__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp64__3), iface.f_gen_load(v_Exp67__3)));
  const auto v_Exp69__3 = iface.f_decl_bv("Exp69__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp69__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp61__3), iface.f_gen_load(v_Exp68__3)));
  const auto v_Exp74__3 = iface.f_decl_bv("Exp74__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp74__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("16"))));
  const auto v_Exp77__3 = iface.f_decl_bv("Exp77__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp77__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("80"), iface.bigint_lit("16"))));
  const auto v_Exp78__3 = iface.f_decl_bv("Exp78__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp78__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp74__3), iface.f_gen_load(v_Exp77__3)));
  const auto v_Exp79__3 = iface.f_decl_bv("Exp79__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp79__3, iface.f_gen_BFAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(v_Exp78__3)));
  const auto v_Exp82__3 = iface.f_decl_bv("Exp82__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp82__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16"))));
  const auto v_Exp85__3 = iface.f_decl_bv("Exp85__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp85__3, iface.f_gen_BFMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16"))));
  const auto v_Exp86__3 = iface.f_decl_bv("Exp86__3", iface.bigint_lit("32"));
  iface.f_gen_store(v_Exp86__3, iface.f_gen_BFAdd(iface.f_gen_load(v_Exp82__3), iface.f_gen_load(v_Exp85__3)));
  auto v_Exp87__3 = typename Traits::rt_expr{};
  v_Exp87__3 = iface.f_gen_BFAdd(iface.f_gen_load(v_Exp79__3), iface.f_gen_load(v_Exp86__3));
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp87__3, iface.f_gen_append_bits(iface.f_gen_load(v_Exp69__3), iface.f_gen_append_bits(iface.f_gen_load(v_Exp51__3), iface.f_gen_load(v_Exp32__3)))));

} // f_aarch64_vector_bfmmla


} // namespace aslp
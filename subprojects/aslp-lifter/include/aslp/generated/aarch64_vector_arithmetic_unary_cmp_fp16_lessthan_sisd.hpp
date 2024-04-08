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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_sisd(typename Traits::bits v_enc) {
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  auto v_Exp12__2 = typename Traits::rt_expr{};
  v_Exp12__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
  const auto v_If14__1 = iface.f_decl_bv("If14__1", iface.bigint_lit("16"));
  const auto v_temp0 = iface.f_gen_branch(v_Exp12__2);
  iface.f_switch_context(iface.f_true_branch(v_temp0));
  iface.f_gen_store(v_If14__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
  iface.f_switch_context(iface.f_false_branch(v_temp0));
  iface.f_gen_store(v_If14__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
  iface.f_switch_context(iface.f_merge_branch(v_temp0));
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If14__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));

} // f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_sisd


} // namespace aslp
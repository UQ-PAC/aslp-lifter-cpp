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
void aslp_lifter<Traits>::f_aarch64_integer_pac_pacib_hint(typename Traits::bits v_enc) {
  auto v_d__1 = iface.bits_zero(iface.bigint_lit("5"));
  auto v_n__1 = iface.bits_zero(iface.bigint_lit("5"));
  auto v_source_is_sp__1 = false;
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"))), iface.bits_lit(7U, "0011010"))) {
    v_d__1 = iface.bits_lit(5U, "11110");
    v_n__1 = iface.bits_lit(5U, "11111");
  } else {
    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"))), iface.bits_lit(7U, "0011011"))) {
      v_d__1 = iface.bits_lit(5U, "11110");
      v_source_is_sp__1 = true;
      const auto v_BTypeCompatible_PACIXSP3__2 = iface.f_decl_bool("BTypeCompatible_PACIXSP3__2");
      auto v_Exp6__2 = typename Traits::rt_expr{};
      v_Exp6__2 = iface.f_gen_or_bool(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_BTYPE()), iface.f_gen_bit_lit(iface.bits_lit(2U, "01"))), iface.f_gen_and_bool(iface.f_gen_not_bool(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_BTYPE()), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")))), iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_BTYPE()), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")))));
      const auto v_temp0 = iface.f_gen_branch(v_Exp6__2);
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_BTypeCompatible_PACIXSP3__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_BTYPE()), iface.f_gen_bit_lit(iface.bits_lit(2U, "11"))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_BTypeCompatible_PACIXSP3__2, iface.f_gen_bool_lit(true));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_BTypeCompatible_PACIXSP3__2, iface.f_gen_bool_lit(false));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      iface.f_gen_store(iface.v_BTypeCompatible(), iface.f_gen_load(v_BTypeCompatible_PACIXSP3__2));
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"))), iface.bits_lit(7U, "0001010"))) {
        v_d__1 = iface.bits_lit(5U, "10001");
        v_n__1 = iface.bits_lit(5U, "10000");
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if
  if (v_source_is_sp__1) {
    auto v_X_read75__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(v_d__1, iface.bits_lit(5U, "11111"))) {
      v_X_read75__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(v_d__1));
    } else {
      v_X_read75__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(v_d__1, iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(v_d__1), v_X_read75__2);
    } // if
  } else {
    auto v_X_read177__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(v_d__1, iface.bits_lit(5U, "11111"))) {
      v_X_read177__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(v_d__1));
    } else {
      v_X_read177__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_n__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_n__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(v_d__1, iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(v_d__1), v_X_read177__2);
    } // if
  } // if

} // f_aarch64_integer_pac_pacib_hint


} // namespace aslp
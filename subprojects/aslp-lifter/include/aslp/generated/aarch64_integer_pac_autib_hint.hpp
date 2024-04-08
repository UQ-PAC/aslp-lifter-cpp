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
void aslp_lifter<Traits>::f_aarch64_integer_pac_autib_hint(typename Traits::bits v_enc) {
  auto v_d__1 = iface.bits_zero(iface.bigint_lit("5"));
  auto v_n__1 = iface.bits_zero(iface.bigint_lit("5"));
  auto v_source_is_sp__1 = false;
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"))), iface.bits_lit(7U, "0011110"))) {
    v_d__1 = iface.bits_lit(5U, "11110");
    v_n__1 = iface.bits_lit(5U, "11111");
  } else {
    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"))), iface.bits_lit(7U, "0011111"))) {
      v_d__1 = iface.bits_lit(5U, "11110");
      v_source_is_sp__1 = true;
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"))), iface.bits_lit(7U, "0001110"))) {
        v_d__1 = iface.bits_lit(5U, "10001");
        v_n__1 = iface.bits_lit(5U, "10000");
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if
  if (v_source_is_sp__1) {
    auto v_X_read5__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(v_d__1, iface.bits_lit(5U, "11111"))) {
      v_X_read5__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(v_d__1));
    } else {
      v_X_read5__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(v_d__1, iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(v_d__1), v_X_read5__2);
    } // if
  } else {
    auto v_X_read16__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(v_d__1, iface.bits_lit(5U, "11111"))) {
      v_X_read16__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(v_d__1));
    } else {
      v_X_read16__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_n__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_n__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(v_d__1, iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(v_d__1, iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(v_d__1), v_X_read16__2);
    } // if
  } // if

} // f_aarch64_integer_pac_autib_hint


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpairandzerodatapost(typename Traits::bits v_enc) {
  auto v_If3__1 = typename Traits::rt_expr{};
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
    v_If3__1 = iface.f_gen_load(iface.v_SP_EL0());
  } else {
    auto v_X_read6__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read6__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
    } else {
      v_X_read6__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    v_If3__1 = v_X_read6__2;
  } // if
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
    auto v_Exp14__2 = typename Traits::rt_expr{};
    v_Exp14__2 = iface.f_gen_load(iface.v_SP_EL0());
    iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
    iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000010000"))), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
    iface.f_gen_AArch64_MemTag_set(v_Exp14__2, iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_slice(v_If3__1, iface.bigint_lit("56"), iface.bigint_lit("4")));
    iface.f_gen_AArch64_MemTag_set(iface.f_gen_add_bits(v_Exp14__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000010000"))), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_slice(v_If3__1, iface.bigint_lit("56"), iface.bigint_lit("4")));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp14__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("60")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("60")), iface.bits_lit(4U, "0000")))));
    } else {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp14__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("60")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("60")), iface.bits_lit(4U, "0000")))));
      } // if
    } // if
  } else {
    auto v_X_read26__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read26__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    } else {
      v_X_read26__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    auto v_Exp30__2 = typename Traits::rt_expr{};
    v_Exp30__2 = v_X_read26__2;
    iface.f_gen_Mem_set(v_X_read26__2, iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
    iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read26__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000010000"))), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000")));
    iface.f_gen_AArch64_MemTag_set(v_Exp30__2, iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_slice(v_If3__1, iface.bigint_lit("56"), iface.bigint_lit("4")));
    iface.f_gen_AArch64_MemTag_set(iface.f_gen_add_bits(v_Exp30__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000010000"))), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_slice(v_If3__1, iface.bigint_lit("56"), iface.bigint_lit("4")));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp30__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("60")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("60")), iface.bits_lit(4U, "0000")))));
    } else {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp30__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("60")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("60")), iface.bits_lit(4U, "0000")))));
      } // if
    } // if
  } // if

} // f_aarch64_integer_tags_mcsettagpairandzerodatapost


} // namespace aslp
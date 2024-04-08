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
void aslp_lifter<Traits>::f_aarch64_memory_atomicops_cas_single(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
    auto v_If7__1 = iface.bits_zero(iface.bigint_lit("5"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If7__1 = iface.bits_lit(5U, "01001");
    } else {
      v_If7__1 = iface.bits_lit(5U, "00101");
    } // if
    auto v_If8__1 = iface.bits_zero(iface.bigint_lit("5"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If8__1 = iface.bits_lit(5U, "01001");
    } else {
      v_If8__1 = iface.bits_lit(5U, "00101");
    } // if
    auto v_X_read10__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read10__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
    } else {
      v_X_read10__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
    } // if
    auto v_X_read15__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read15__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
    } else {
      v_X_read15__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_AtomicStart();
      const auto v_Exp23__3 = iface.f_decl_bv("Exp23__3", iface.bigint_lit("8"));
      iface.f_gen_store(v_Exp23__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))));
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))), v_X_read10__2));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1)), v_X_read15__2);
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      iface.f_AtomicEnd();
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp23__3), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
      } // if
    } else {
      auto v_X_read160__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read160__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      } else {
        v_X_read160__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
      } // if
      iface.f_AtomicStart();
      const auto v_Exp166__3 = iface.f_decl_bv("Exp166__3", iface.bigint_lit("8"));
      iface.f_gen_store(v_Exp166__3, iface.f_gen_Mem_read(v_X_read160__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(v_X_read160__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))), v_X_read10__2));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_Mem_set(v_X_read160__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1)), v_X_read15__2);
      iface.f_switch_context(iface.f_merge_branch(v_temp1));
      iface.f_AtomicEnd();
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp166__3), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
      } // if
    } // if
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
      auto v_If304__1 = iface.bits_zero(iface.bigint_lit("5"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If304__1 = iface.bits_lit(5U, "01001");
      } else {
        v_If304__1 = iface.bits_lit(5U, "00101");
      } // if
      auto v_If305__1 = iface.bits_zero(iface.bigint_lit("5"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If305__1 = iface.bits_lit(5U, "01001");
      } else {
        v_If305__1 = iface.bits_lit(5U, "00101");
      } // if
      auto v_X_read307__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read307__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
      } else {
        v_X_read307__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
      } // if
      auto v_X_read312__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read312__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
      } else {
        v_X_read312__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
      } // if
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        iface.f_AtomicStart();
        const auto v_Exp320__3 = iface.f_decl_bv("Exp320__3", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp320__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If304__1))));
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If304__1))), v_X_read307__2));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If305__1)), v_X_read312__2);
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        iface.f_AtomicEnd();
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp320__3), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } // if
      } else {
        auto v_X_read457__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read457__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read457__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        iface.f_AtomicStart();
        const auto v_Exp463__3 = iface.f_decl_bv("Exp463__3", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp463__3, iface.f_gen_Mem_read(v_X_read457__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If304__1))));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(v_X_read457__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If304__1))), v_X_read307__2));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_Mem_set(v_X_read457__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If305__1)), v_X_read312__2);
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        iface.f_AtomicEnd();
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp463__3), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
        auto v_If601__1 = iface.bits_zero(iface.bigint_lit("5"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If601__1 = iface.bits_lit(5U, "01001");
        } else {
          v_If601__1 = iface.bits_lit(5U, "00101");
        } // if
        auto v_If602__1 = iface.bits_zero(iface.bigint_lit("5"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If602__1 = iface.bits_lit(5U, "01001");
        } else {
          v_If602__1 = iface.bits_lit(5U, "00101");
        } // if
        auto v_X_read604__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read604__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read604__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        auto v_X_read609__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read609__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read609__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_AtomicStart();
          const auto v_Exp617__3 = iface.f_decl_bv("Exp617__3", iface.bigint_lit("32"));
          iface.f_gen_store(v_Exp617__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If601__1))));
          const auto v_temp4 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If601__1))), v_X_read604__2));
          iface.f_switch_context(iface.f_true_branch(v_temp4));
          iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If602__1)), v_X_read609__2);
          iface.f_switch_context(iface.f_merge_branch(v_temp4));
          iface.f_AtomicEnd();
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp617__3), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } else {
          auto v_X_read754__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read754__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read754__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          iface.f_AtomicStart();
          const auto v_Exp760__3 = iface.f_decl_bv("Exp760__3", iface.bigint_lit("32"));
          iface.f_gen_store(v_Exp760__3, iface.f_gen_Mem_read(v_X_read754__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If601__1))));
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(v_X_read754__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If601__1))), v_X_read604__2));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_Mem_set(v_X_read754__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If602__1)), v_X_read609__2);
          iface.f_switch_context(iface.f_merge_branch(v_temp5));
          iface.f_AtomicEnd();
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp760__3), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
          auto v_If898__1 = iface.bits_zero(iface.bigint_lit("5"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If898__1 = iface.bits_lit(5U, "01001");
          } else {
            v_If898__1 = iface.bits_lit(5U, "00101");
          } // if
          auto v_If899__1 = iface.bits_zero(iface.bigint_lit("5"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If899__1 = iface.bits_lit(5U, "01001");
          } else {
            v_If899__1 = iface.bits_lit(5U, "00101");
          } // if
          auto v_X_read901__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read901__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read901__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_X_read906__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read906__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read906__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_AtomicStart();
            const auto v_Exp914__3 = iface.f_decl_bv("Exp914__3", iface.bigint_lit("64"));
            iface.f_gen_store(v_Exp914__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If898__1))));
            const auto v_temp6 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If898__1))), v_X_read901__2));
            iface.f_switch_context(iface.f_true_branch(v_temp6));
            iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If899__1)), v_X_read906__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp6));
            iface.f_AtomicEnd();
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp914__3));
            } // if
          } else {
            auto v_X_read1051__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read1051__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read1051__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            iface.f_AtomicStart();
            const auto v_Exp1057__3 = iface.f_decl_bv("Exp1057__3", iface.bigint_lit("64"));
            iface.f_gen_store(v_Exp1057__3, iface.f_gen_Mem_read(v_X_read1051__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If898__1))));
            const auto v_temp7 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(v_X_read1051__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If898__1))), v_X_read901__2));
            iface.f_switch_context(iface.f_true_branch(v_temp7));
            iface.f_gen_Mem_set(v_X_read1051__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If899__1)), v_X_read906__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp7));
            iface.f_AtomicEnd();
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp1057__3));
            } // if
          } // if
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_memory_atomicops_cas_single


} // namespace aslp
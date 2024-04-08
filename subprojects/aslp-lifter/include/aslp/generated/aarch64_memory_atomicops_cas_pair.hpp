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
void aslp_lifter<Traits>::f_aarch64_memory_atomicops_cas_pair(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")))) {
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
        auto v_X_read9__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read9__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read9__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        auto v_X_read14__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")), iface.bits_lit(7U, "0011111"))));
        if (iface.f_ne_bits(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "011111"))) {
          v_X_read14__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), (iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) + (iface.bigint_lit("1"))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read14__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        auto v_X_read19__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read19__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read19__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        auto v_X_read24__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")), iface.bits_lit(7U, "0011111"))));
        if (iface.f_ne_bits(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "011111"))) {
          v_X_read24__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), (iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))) + (iface.bigint_lit("1"))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read24__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_AtomicStart();
          const auto v_Exp167__3 = iface.f_decl_bv("Exp167__3", iface.bigint_lit("64"));
          iface.f_gen_store(v_Exp167__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))));
          const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))), iface.f_gen_append_bits(v_X_read14__2, v_X_read9__2)));
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1)), iface.f_gen_append_bits(v_X_read24__2, v_X_read19__2));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          iface.f_AtomicEnd();
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_load(v_Exp167__3), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")), iface.bits_lit(7U, "0011111"))));
          if (iface.f_ne_bits(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "011111"))) {
            iface.f_gen_array_store(iface.v__R(), (iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) + (iface.bigint_lit("1")), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_load(v_Exp167__3), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } else {
          auto v_X_read373__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read373__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read373__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          iface.f_AtomicStart();
          const auto v_Exp379__3 = iface.f_decl_bv("Exp379__3", iface.bigint_lit("64"));
          iface.f_gen_store(v_Exp379__3, iface.f_gen_Mem_read(v_X_read373__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))));
          const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(v_X_read373__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))), iface.f_gen_append_bits(v_X_read14__2, v_X_read9__2)));
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_Mem_set(v_X_read373__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1)), iface.f_gen_append_bits(v_X_read24__2, v_X_read19__2));
          iface.f_switch_context(iface.f_merge_branch(v_temp1));
          iface.f_AtomicEnd();
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_load(v_Exp379__3), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")), iface.bits_lit(7U, "0011111"))));
          if (iface.f_ne_bits(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "011111"))) {
            iface.f_gen_array_store(iface.v__R(), (iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) + (iface.bigint_lit("1")), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_load(v_Exp379__3), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")))) {
          auto v_If586__1 = iface.bits_zero(iface.bigint_lit("5"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If586__1 = iface.bits_lit(5U, "01001");
          } else {
            v_If586__1 = iface.bits_lit(5U, "00101");
          } // if
          auto v_If587__1 = iface.bits_zero(iface.bigint_lit("5"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If587__1 = iface.bits_lit(5U, "01001");
          } else {
            v_If587__1 = iface.bits_lit(5U, "00101");
          } // if
          auto v_X_read588__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read588__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read588__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_X_read593__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")), iface.bits_lit(7U, "0011111"))));
          if (iface.f_ne_bits(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "011111"))) {
            v_X_read593__2 = iface.f_gen_array_load(iface.v__R(), (iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) + (iface.bigint_lit("1")));
          } else {
            v_X_read593__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_X_read598__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read598__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read598__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_X_read603__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")), iface.bits_lit(7U, "0011111"))));
          if (iface.f_ne_bits(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "011111"))) {
            v_X_read603__2 = iface.f_gen_array_load(iface.v__R(), (iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))) + (iface.bigint_lit("1")));
          } else {
            v_X_read603__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_AtomicStart();
            const auto v_Exp746__3 = iface.f_decl_bv("Exp746__3", iface.bigint_lit("128"));
            iface.f_gen_store(v_Exp746__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If586__1))));
            const auto v_temp2 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If586__1))), iface.f_gen_append_bits(v_X_read593__2, v_X_read588__2)));
            iface.f_switch_context(iface.f_true_branch(v_temp2));
            iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If587__1)), iface.f_gen_append_bits(v_X_read603__2, v_X_read598__2));
            iface.f_switch_context(iface.f_merge_branch(v_temp2));
            iface.f_AtomicEnd();
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_load(v_Exp746__3), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")), iface.bits_lit(7U, "0011111"))));
            if (iface.f_ne_bits(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "011111"))) {
              iface.f_gen_array_store(iface.v__R(), (iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) + (iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_load(v_Exp746__3), iface.bigint_lit("64"), iface.bigint_lit("64")));
            } // if
          } else {
            auto v_X_read952__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read952__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read952__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            iface.f_AtomicStart();
            const auto v_Exp958__3 = iface.f_decl_bv("Exp958__3", iface.bigint_lit("128"));
            iface.f_gen_store(v_Exp958__3, iface.f_gen_Mem_read(v_X_read952__2, iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If586__1))));
            const auto v_temp3 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_Mem_read(v_X_read952__2, iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If586__1))), iface.f_gen_append_bits(v_X_read593__2, v_X_read588__2)));
            iface.f_switch_context(iface.f_true_branch(v_temp3));
            iface.f_gen_Mem_set(v_X_read952__2, iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If587__1)), iface.f_gen_append_bits(v_X_read603__2, v_X_read598__2));
            iface.f_switch_context(iface.f_merge_branch(v_temp3));
            iface.f_AtomicEnd();
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_load(v_Exp958__3), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bigint_lit("7")), iface.bits_lit(7U, "0011111"))));
            if (iface.f_ne_bits(iface.f_add_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "011111"))) {
              iface.f_gen_array_store(iface.v__R(), (iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) + (iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_load(v_Exp958__3), iface.bigint_lit("64"), iface.bigint_lit("64")));
            } // if
          } // if
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_memory_atomicops_cas_pair


} // namespace aslp
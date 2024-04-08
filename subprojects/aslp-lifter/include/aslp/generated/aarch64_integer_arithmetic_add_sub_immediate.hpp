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
void aslp_lifter<Traits>::f_aarch64_integer_arithmetic_add_sub_immediate(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_imm__1 = iface.bits_zero(iface.bigint_lit("64"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      v_imm__1 = iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("12")), iface.bigint_lit("64"));
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_imm__1 = iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("12")), iface.bits_lit(12U, "000000000000")), iface.bigint_lit("64"));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
    auto v_If4__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_If4__1 = iface.f_gen_load(iface.v_SP_EL0());
    } else {
      auto v_X_read7__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read7__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      } else {
        v_X_read7__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
      } // if
      v_If4__1 = v_X_read7__2;
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If4__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_not_bits(v_imm__1), iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
        iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If4__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_not_bits(v_imm__1), iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
        iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
        iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          } // if
        } // if
      } else {
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If4__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_imm__1, iface.bigint_lit("65"))))))));
        iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If4__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_imm__1, iface.bigint_lit("65"))))))));
        iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
        iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("63"), iface.bigint_lit("1")));
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          } // if
        } // if
      } else {
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If4__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          } // if
        } // if
      } // if
    } // if
  } else {
    auto v_imm__1 = iface.bits_zero(iface.bigint_lit("32"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      v_imm__1 = iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("12")), iface.bigint_lit("32"));
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_imm__1 = iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("12")), iface.bits_lit(12U, "000000000000")), iface.bigint_lit("32"));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
    auto v_If60__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_If60__1 = iface.f_gen_slice(iface.f_gen_load(iface.v_SP_EL0()), iface.bigint_lit("0"), iface.bigint_lit("32"));
    } else {
      auto v_X_read63__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read63__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
      } else {
        v_X_read63__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
      } // if
      v_If60__1 = v_X_read63__2;
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If60__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_not_bits(v_imm__1), iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
        iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If60__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_not_bits(v_imm__1), iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
        iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
        iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } // if
      } else {
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(v_imm__1), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If60__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_imm__1, iface.bigint_lit("33"))))))));
        iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If60__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_imm__1, iface.bigint_lit("33"))))))));
        iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
        iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("31"), iface.bigint_lit("1")));
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } // if
      } else {
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If60__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(v_imm__1, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_integer_arithmetic_add_sub_immediate


} // namespace aslp
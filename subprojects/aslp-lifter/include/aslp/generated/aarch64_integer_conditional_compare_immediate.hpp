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
void aslp_lifter<Traits>::f_aarch64_integer_conditional_compare_immediate(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_X_read2__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read2__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    } else {
      v_X_read2__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    auto v_ConditionHolds7__2 = typename Traits::rt_expr{};
    auto v_result__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
      v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
        v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_C()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
          v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
            v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_V()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
              v_result__2 = iface.f_gen_and_bool(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_C()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))), iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_load(iface.v_PSTATE_V()));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                  v_result__2 = iface.f_gen_and_bool(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_load(iface.v_PSTATE_V())), iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                    v_result__2 = iface.f_gen_bool_lit(true);
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1111")))) {
      v_ConditionHolds7__2 = iface.f_gen_not_bool(v_result__2);
    } else {
      v_ConditionHolds7__2 = v_result__2;
    } // if
    const auto v_temp0 = iface.f_gen_branch(v_ConditionHolds7__2);
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read2__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("64"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_X_read2__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("64"))), iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
      iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read2__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("64"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_X_read2__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("64"))), iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
      iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read2__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("64"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
      iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read2__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("64"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
    } else {
      iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read2__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_append_bits(iface.bits_lit(59U, "00000000000000000000000000000000000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_X_read2__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("65"))))))));
      iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read2__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_append_bits(iface.bits_lit(59U, "00000000000000000000000000000000000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_X_read2__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("64")), iface.bigint_lit("65"))))))));
      iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read2__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_append_bits(iface.bits_lit(59U, "00000000000000000000000000000000000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
      iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read2__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_append_bits(iface.bits_lit(59U, "00000000000000000000000000000000000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))))), iface.bigint_lit("63"), iface.bigint_lit("1")));
    } // if
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_bit_lit(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1"))));
    iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_bit_lit(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("1"))));
    iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_bit_lit(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("2"), /*wd*/ iface.bigint_lit("1"))));
    iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_bit_lit(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("1"))));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
  } else {
    auto v_X_read55__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read55__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
    } else {
      v_X_read55__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
    } // if
    auto v_ConditionHolds60__2 = typename Traits::rt_expr{};
    auto v_result__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
      v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
        v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_C()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
          v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
            v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_V()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
              v_result__2 = iface.f_gen_and_bool(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_C()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))), iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_load(iface.v_PSTATE_V()));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                  v_result__2 = iface.f_gen_and_bool(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_load(iface.v_PSTATE_V())), iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                    v_result__2 = iface.f_gen_bool_lit(true);
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1111")))) {
      v_ConditionHolds60__2 = iface.f_gen_not_bool(v_result__2);
    } else {
      v_ConditionHolds60__2 = v_result__2;
    } // if
    const auto v_temp1 = iface.f_gen_branch(v_ConditionHolds60__2);
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read55__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("32"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_X_read55__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("32"))), iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
      iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read55__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("32"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_X_read55__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("32"))), iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
      iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read55__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("32"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
      iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read55__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("32"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("32")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
    } else {
      iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read55__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.f_append_bits(iface.bits_lit(27U, "000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_X_read55__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("33"))))))));
      iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read55__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.f_append_bits(iface.bits_lit(27U, "000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_X_read55__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("32")), iface.bigint_lit("33"))))))));
      iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read55__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.f_append_bits(iface.bits_lit(27U, "000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
      iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read55__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.f_append_bits(iface.bits_lit(27U, "000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))))), iface.bigint_lit("31"), iface.bigint_lit("1")));
    } // if
    iface.f_switch_context(iface.f_false_branch(v_temp1));
    iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_bit_lit(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1"))));
    iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_bit_lit(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("1"))));
    iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_bit_lit(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("2"), /*wd*/ iface.bigint_lit("1"))));
    iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_bit_lit(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("1"))));
    iface.f_switch_context(iface.f_merge_branch(v_temp1));
  } // if

} // f_aarch64_integer_conditional_compare_immediate


} // namespace aslp
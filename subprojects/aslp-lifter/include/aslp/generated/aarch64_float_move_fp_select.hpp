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
void aslp_lifter<Traits>::f_aarch64_float_move_fp_select(typename Traits::bits v_enc) {
  const auto v_Exp4__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
  if (v_Exp4__1) {
    auto v_ConditionHolds5__2 = typename Traits::rt_expr{};
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
      v_ConditionHolds5__2 = iface.f_gen_not_bool(v_result__2);
    } else {
      v_ConditionHolds5__2 = v_result__2;
    } // if
    const auto v_If23__1 = iface.f_decl_bv("If23__1", iface.bigint_lit("32"));
    const auto v_temp0 = iface.f_gen_branch(v_ConditionHolds5__2);
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
    iface.f_gen_store(v_If23__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
    iface.f_gen_store(v_If23__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If23__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    const auto v_Exp35__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
    if (v_Exp35__1) {
      auto v_ConditionHolds36__2 = typename Traits::rt_expr{};
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
        v_ConditionHolds36__2 = iface.f_gen_not_bool(v_result__2);
      } else {
        v_ConditionHolds36__2 = v_result__2;
      } // if
      const auto v_If54__1 = iface.f_decl_bv("If54__1", iface.bigint_lit("64"));
      const auto v_temp1 = iface.f_gen_branch(v_ConditionHolds36__2);
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
      iface.f_gen_store(v_If54__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
      iface.f_gen_store(v_If54__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
      iface.f_switch_context(iface.f_merge_branch(v_temp1));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If54__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      const auto v_Exp66__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"));
      if (v_Exp66__1) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        const auto v_Exp67__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"));
        if (v_Exp67__1) {
          auto v_ConditionHolds69__2 = typename Traits::rt_expr{};
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
            v_ConditionHolds69__2 = iface.f_gen_not_bool(v_result__2);
          } else {
            v_ConditionHolds69__2 = v_result__2;
          } // if
          const auto v_If87__1 = iface.f_decl_bv("If87__1", iface.bigint_lit("16"));
          const auto v_temp2 = iface.f_gen_branch(v_ConditionHolds69__2);
          iface.f_switch_context(iface.f_true_branch(v_temp2));
          iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
          iface.f_gen_store(v_If87__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_switch_context(iface.f_false_branch(v_temp2));
          iface.f_gen_assert(iface.f_gen_bool_lit((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111")))));
          iface.f_gen_store(v_If87__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_switch_context(iface.f_merge_branch(v_temp2));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If87__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_float_move_fp_select


} // namespace aslp
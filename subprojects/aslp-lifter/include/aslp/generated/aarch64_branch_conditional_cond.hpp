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
void aslp_lifter<Traits>::f_aarch64_branch_conditional_cond(typename Traits::bits v_enc) {
  auto v_ConditionHolds1__2 = typename Traits::rt_expr{};
  auto v_result__2 = typename Traits::rt_expr{};
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
    v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
  } else {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
      v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_C()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
        v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
          v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_V()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1")));
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
            v_result__2 = iface.f_gen_and_bool(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_C()), iface.f_gen_bit_lit(iface.bits_lit(1U, "1"))), iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))));
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
              v_result__2 = iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_load(iface.v_PSTATE_V()));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                v_result__2 = iface.f_gen_and_bool(iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_N()), iface.f_gen_load(iface.v_PSTATE_V())), iface.f_gen_eq_bits(iface.f_gen_load(iface.v_PSTATE_Z()), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
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
  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1111")))) {
    v_ConditionHolds1__2 = iface.f_gen_not_bool(v_result__2);
  } else {
    v_ConditionHolds1__2 = v_result__2;
  } // if
  const auto v_temp0 = iface.f_gen_branch(v_ConditionHolds1__2);
  iface.f_switch_context(iface.f_true_branch(v_temp0));
  iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
  iface.f_gen_store(iface.v__PC(), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("19")), iface.bits_lit(2U, "00")), iface.bigint_lit("64")))));
  iface.f_switch_context(iface.f_merge_branch(v_temp0));

} // f_aarch64_branch_conditional_cond


} // namespace aslp
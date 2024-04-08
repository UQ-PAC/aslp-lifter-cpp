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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp6__2 = typename Traits::rt_expr{};
        v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        auto v_Exp12__2 = typename Traits::rt_expr{};
        v_Exp12__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        const auto v_If14__1 = iface.f_decl_bv("If14__1", iface.bigint_lit("32"));
        const auto v_temp0 = iface.f_gen_branch(v_Exp12__2);
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_If14__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        iface.f_gen_store(v_If14__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        auto v_Exp19__2 = typename Traits::rt_expr{};
        v_Exp19__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        const auto v_If20__1 = iface.f_decl_bv("If20__1", iface.bigint_lit("32"));
        const auto v_temp1 = iface.f_gen_branch(v_Exp19__2);
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_If20__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_If20__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp1));
        auto v_Exp25__2 = typename Traits::rt_expr{};
        v_Exp25__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        const auto v_If26__1 = iface.f_decl_bv("If26__1", iface.bigint_lit("32"));
        const auto v_temp2 = iface.f_gen_branch(v_Exp25__2);
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_If26__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        iface.f_gen_store(v_If26__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        auto v_Exp31__2 = typename Traits::rt_expr{};
        v_Exp31__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        const auto v_If32__1 = iface.f_decl_bv("If32__1", iface.bigint_lit("32"));
        const auto v_temp3 = iface.f_gen_branch(v_Exp31__2);
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_If32__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_If32__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If32__1), iface.f_gen_append_bits(iface.f_gen_load(v_If26__1), iface.f_gen_append_bits(iface.f_gen_load(v_If20__1), iface.f_gen_load(v_If14__1)))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp43__2 = typename Traits::rt_expr{};
        v_Exp43__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        auto v_Exp49__2 = typename Traits::rt_expr{};
        v_Exp49__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        const auto v_If51__1 = iface.f_decl_bv("If51__1", iface.bigint_lit("32"));
        const auto v_temp4 = iface.f_gen_branch(v_Exp49__2);
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_If51__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        iface.f_gen_store(v_If51__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        auto v_Exp56__2 = typename Traits::rt_expr{};
        v_Exp56__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        const auto v_If57__1 = iface.f_decl_bv("If57__1", iface.bigint_lit("32"));
        const auto v_temp5 = iface.f_gen_branch(v_Exp56__2);
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_If57__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        iface.f_gen_store(v_If57__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If57__1), iface.f_gen_load(v_If51__1)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp69__2 = typename Traits::rt_expr{};
          v_Exp69__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_Exp75__2 = typename Traits::rt_expr{};
          v_Exp75__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
          const auto v_If77__1 = iface.f_decl_bv("If77__1", iface.bigint_lit("64"));
          const auto v_temp6 = iface.f_gen_branch(v_Exp75__2);
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_If77__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          iface.f_gen_store(v_If77__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp6));
          auto v_Exp82__2 = typename Traits::rt_expr{};
          v_Exp82__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(v_Exp69__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
          const auto v_If83__1 = iface.f_decl_bv("If83__1", iface.bigint_lit("64"));
          const auto v_temp7 = iface.f_gen_branch(v_Exp82__2);
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_If83__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          iface.f_gen_store(v_If83__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If83__1), iface.f_gen_load(v_If77__1)));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp100__2 = typename Traits::rt_expr{};
          v_Exp100__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
          const auto v_If102__1 = iface.f_decl_bv("If102__1", iface.bigint_lit("64"));
          const auto v_temp8 = iface.f_gen_branch(v_Exp100__2);
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(v_If102__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp8));
          iface.f_gen_store(v_If102__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp8));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If102__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_simd


} // namespace aslp
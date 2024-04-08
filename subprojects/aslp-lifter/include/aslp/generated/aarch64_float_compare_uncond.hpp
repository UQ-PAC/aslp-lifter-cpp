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
void aslp_lifter<Traits>::f_aarch64_float_compare_uncond(typename Traits::bits v_enc) {
  const auto v_Exp3__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
  if (v_Exp3__1) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp6__2 = typename Traits::rt_expr{};
    v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    auto v_If7__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If7__1 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
    } else {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      v_If7__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
    } // if
    auto v_Exp15__2 = typename Traits::rt_expr{};
    v_Exp15__2 = iface.f_gen_FPCompare(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("32")), v_If7__1, iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()));
    iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(v_Exp15__2, iface.bigint_lit("0"), iface.bigint_lit("1")));
    iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_slice(v_Exp15__2, iface.bigint_lit("1"), iface.bigint_lit("1")));
    iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_slice(v_Exp15__2, iface.bigint_lit("2"), iface.bigint_lit("1")));
    iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(v_Exp15__2, iface.bigint_lit("3"), iface.bigint_lit("1")));
  } else {
    const auto v_Exp16__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
    if (v_Exp16__1) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_Exp19__2 = typename Traits::rt_expr{};
      v_Exp19__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      auto v_If20__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If20__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_If20__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } // if
      auto v_Exp28__2 = typename Traits::rt_expr{};
      v_Exp28__2 = iface.f_gen_FPCompare(iface.f_gen_slice(v_Exp19__2, iface.bigint_lit("0"), iface.bigint_lit("64")), v_If20__1, iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()));
      iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(v_Exp28__2, iface.bigint_lit("0"), iface.bigint_lit("1")));
      iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_slice(v_Exp28__2, iface.bigint_lit("1"), iface.bigint_lit("1")));
      iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_slice(v_Exp28__2, iface.bigint_lit("2"), iface.bigint_lit("1")));
      iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(v_Exp28__2, iface.bigint_lit("3"), iface.bigint_lit("1")));
    } else {
      const auto v_Exp29__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"));
      if (v_Exp29__1) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        const auto v_Exp30__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"));
        if (v_Exp30__1) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp34__2 = typename Traits::rt_expr{};
          v_Exp34__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If35__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If35__1 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_If35__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
          } // if
          auto v_Exp43__2 = typename Traits::rt_expr{};
          v_Exp43__2 = iface.f_gen_FPCompare(iface.f_gen_slice(v_Exp34__2, iface.bigint_lit("0"), iface.bigint_lit("16")), v_If35__1, iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()));
          iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("0"), iface.bigint_lit("1")));
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("1"), iface.bigint_lit("1")));
          iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("2"), iface.bigint_lit("1")));
          iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(v_Exp43__2, iface.bigint_lit("3"), iface.bigint_lit("1")));
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_float_compare_uncond


} // namespace aslp
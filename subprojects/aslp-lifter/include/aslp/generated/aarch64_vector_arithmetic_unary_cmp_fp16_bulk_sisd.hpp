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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd(typename Traits::bits v_enc) {
  auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
    v_comparison__1 = iface.bits_lit(3U, "000");
  } else {
    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
      v_comparison__1 = iface.bits_lit(3U, "001");
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
        v_comparison__1 = iface.bits_lit(3U, "010");
      } else {
        if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
          v_comparison__1 = iface.bits_lit(3U, "011");
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  auto v_test_passed__1 = typename Traits::rt_expr{};
  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
    auto v_Exp13__2 = typename Traits::rt_expr{};
    v_Exp13__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
    v_test_passed__1 = v_Exp13__2;
  } else {
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
      auto v_Exp15__2 = typename Traits::rt_expr{};
      v_Exp15__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
      v_test_passed__1 = v_Exp15__2;
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
        auto v_Exp17__2 = typename Traits::rt_expr{};
        v_Exp17__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
        v_test_passed__1 = v_Exp17__2;
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
          auto v_Exp19__2 = typename Traits::rt_expr{};
          v_Exp19__2 = iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp19__2;
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
            auto v_Exp21__2 = typename Traits::rt_expr{};
            v_Exp21__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp21__2;
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if
  const auto v_If24__1 = iface.f_decl_bv("If24__1", iface.bigint_lit("16"));
  const auto v_temp0 = iface.f_gen_branch(v_test_passed__1);
  iface.f_switch_context(iface.f_true_branch(v_temp0));
  iface.f_gen_store(v_If24__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
  iface.f_switch_context(iface.f_false_branch(v_temp0));
  iface.f_gen_store(v_If24__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
  iface.f_switch_context(iface.f_merge_branch(v_temp0));
  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If24__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));

} // f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd


} // namespace aslp
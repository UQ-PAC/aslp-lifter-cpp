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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_fp_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_index__1 = iface.bits_zero(iface.bigint_lit("2"));
    if (iface.f_eq_bits(iface.f_and_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) {
      v_index__1 = iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")));
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
        v_index__1 = iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bigint_lit("2"));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_result__1 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(3U, "000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("3")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp19__2 = typename Traits::rt_expr{};
        v_Exp19__2 = iface.f_gen_FPMulX(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        v_result__1 = v_Exp19__2;
      } else {
        auto v_Exp23__2 = typename Traits::rt_expr{};
        v_Exp23__2 = iface.f_gen_FPMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        v_result__1 = v_Exp23__2;
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_result__1 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(3U, "000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("3")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")), iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0010000000"))));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_Exp44__2 = typename Traits::rt_expr{};
          v_Exp44__2 = iface.f_gen_FPMulX(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
          v_result__1 = v_Exp44__2;
        } else {
          auto v_Exp48__2 = typename Traits::rt_expr{};
          v_Exp48__2 = iface.f_gen_FPMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
          v_result__1 = v_Exp48__2;
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } else {
    auto v_index__1 = iface.bits_zero(iface.bigint_lit("2"));
    if (iface.f_eq_bits(iface.f_and_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) {
      v_index__1 = iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1")));
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
        v_index__1 = iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bigint_lit("2"));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_result__1 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(3U, "000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("3")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")), iface.bits_lit(9U, "001000000"))));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_Exp74__2 = typename Traits::rt_expr{};
        v_Exp74__2 = iface.f_gen_FPMulX(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        v_result__1 = v_Exp74__2;
      } else {
        auto v_Exp78__2 = typename Traits::rt_expr{};
        v_Exp78__2 = iface.f_gen_FPMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
        v_result__1 = v_Exp78__2;
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_result__1 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(3U, "000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("3")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")), iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0001000000"))));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_Exp99__2 = typename Traits::rt_expr{};
          v_Exp99__2 = iface.f_gen_FPMulX(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
          v_result__1 = v_Exp99__2;
        } else {
          auto v_Exp103__2 = typename Traits::rt_expr{};
          v_Exp103__2 = iface.f_gen_FPMul(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
          v_result__1 = v_Exp103__2;
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_fp_sisd


} // namespace aslp
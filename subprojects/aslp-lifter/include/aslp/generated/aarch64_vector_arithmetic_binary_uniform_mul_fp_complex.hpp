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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_complex(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11")))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp11__2 = typename Traits::rt_expr{};
          v_Exp11__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp14__2 = typename Traits::rt_expr{};
          v_Exp14__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp17__2 = typename Traits::rt_expr{};
          v_Exp17__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          auto v_element1__1 = typename Traits::rt_expr{};
          auto v_element2__1 = typename Traits::rt_expr{};
          auto v_element3__1 = typename Traits::rt_expr{};
          auto v_element4__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("8"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("0"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp43__2 = iface.f_decl_bv("Exp43__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp43__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("0"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp48__2 = iface.f_decl_bv("Exp48__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp48__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("8"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("16"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("16"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("24"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("16"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp73__2 = iface.f_decl_bv("Exp73__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp73__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("16"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp78__2 = iface.f_decl_bv("Exp78__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp78__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("24"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("32"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("32"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("40"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("32"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp103__2 = iface.f_decl_bv("Exp103__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp103__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("32"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp108__2 = iface.f_decl_bv("Exp108__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp108__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("40"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("48"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("48"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("56"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("48"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp133__2 = iface.f_decl_bv("Exp133__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp133__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("48"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp138__2 = iface.f_decl_bv("Exp138__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp138__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("56"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("64"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("64"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("72"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("64"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp163__2 = iface.f_decl_bv("Exp163__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp163__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("64"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp168__2 = iface.f_decl_bv("Exp168__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp168__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("72"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("80"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("80"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("88"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("80"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp193__2 = iface.f_decl_bv("Exp193__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp193__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("80"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp198__2 = iface.f_decl_bv("Exp198__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp198__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("88"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("96"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("96"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("104"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("96"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp223__2 = iface.f_decl_bv("Exp223__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp223__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("96"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp228__2 = iface.f_decl_bv("Exp228__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp228__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("104"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("112"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("112"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp14__2, iface.bigint_lit("120"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp11__2, iface.bigint_lit("112"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp253__2 = iface.f_decl_bv("Exp253__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp253__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("112"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          auto v_Exp258__2 = typename Traits::rt_expr{};
          v_Exp258__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp17__2, iface.bigint_lit("120"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR()));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp258__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp253__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp228__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp223__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp198__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp193__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp168__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp163__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp138__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp133__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp108__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp103__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp78__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp73__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp48__2), iface.f_gen_load(v_Exp43__2)))))))))))))))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp267__2 = typename Traits::rt_expr{};
          v_Exp267__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp270__2 = typename Traits::rt_expr{};
          v_Exp270__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp273__2 = typename Traits::rt_expr{};
          v_Exp273__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          auto v_element1__1 = typename Traits::rt_expr{};
          auto v_element2__1 = typename Traits::rt_expr{};
          auto v_element3__1 = typename Traits::rt_expr{};
          auto v_element4__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp267__2, iface.bigint_lit("0"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp270__2, iface.bigint_lit("8"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp267__2, iface.bigint_lit("0"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp299__2 = iface.f_decl_bv("Exp299__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp299__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp273__2, iface.bigint_lit("0"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp304__2 = iface.f_decl_bv("Exp304__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp304__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp273__2, iface.bigint_lit("8"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp270__2, iface.bigint_lit("16"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp267__2, iface.bigint_lit("16"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp270__2, iface.bigint_lit("24"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp267__2, iface.bigint_lit("16"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp329__2 = iface.f_decl_bv("Exp329__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp329__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp273__2, iface.bigint_lit("16"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp334__2 = iface.f_decl_bv("Exp334__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp334__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp273__2, iface.bigint_lit("24"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp270__2, iface.bigint_lit("32"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp267__2, iface.bigint_lit("32"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp270__2, iface.bigint_lit("40"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp267__2, iface.bigint_lit("32"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp359__2 = iface.f_decl_bv("Exp359__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp359__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp273__2, iface.bigint_lit("32"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          const auto v_Exp364__2 = iface.f_decl_bv("Exp364__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp364__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp273__2, iface.bigint_lit("40"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_element1__1 = iface.f_gen_slice(v_Exp270__2, iface.bigint_lit("48"), iface.bigint_lit("8"));
            v_element2__1 = iface.f_gen_slice(v_Exp267__2, iface.bigint_lit("48"), iface.bigint_lit("8"));
            v_element3__1 = iface.f_gen_slice(v_Exp270__2, iface.bigint_lit("56"), iface.bigint_lit("8"));
            v_element4__1 = iface.f_gen_slice(v_Exp267__2, iface.bigint_lit("48"), iface.bigint_lit("8"));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
          const auto v_Exp389__2 = iface.f_decl_bv("Exp389__2", iface.bigint_lit("8"));
          iface.f_gen_store(v_Exp389__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp273__2, iface.bigint_lit("48"), iface.bigint_lit("8")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
          auto v_Exp394__2 = typename Traits::rt_expr{};
          v_Exp394__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp273__2, iface.bigint_lit("56"), iface.bigint_lit("8")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR()));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp394__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp389__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp364__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp359__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp334__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp329__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp304__2), iface.f_gen_load(v_Exp299__2)))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp405__2 = typename Traits::rt_expr{};
            v_Exp405__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp408__2 = typename Traits::rt_expr{};
            v_Exp408__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp411__2 = typename Traits::rt_expr{};
            v_Exp411__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            auto v_element1__1 = typename Traits::rt_expr{};
            auto v_element2__1 = typename Traits::rt_expr{};
            auto v_element3__1 = typename Traits::rt_expr{};
            auto v_element4__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
              v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
              v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
              v_element3__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
              v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("15")));
                v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
                v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15")));
                  v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("16"), iface.bigint_lit("15")));
                  v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                    v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16"));
                    v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("0"), iface.bigint_lit("15")));
                    v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            const auto v_Exp437__2 = iface.f_decl_bv("Exp437__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp437__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("0"), iface.bigint_lit("16")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            const auto v_Exp442__2 = iface.f_decl_bv("Exp442__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp442__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("16"), iface.bigint_lit("16")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
              v_element1__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
              v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
              v_element3__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
              v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("48"), iface.bigint_lit("15")));
                v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
                v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("47"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("32"), iface.bigint_lit("15")));
                  v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("48"), iface.bigint_lit("15")));
                  v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                    v_element1__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                    v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("47"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("32"), iface.bigint_lit("15")));
                    v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            const auto v_Exp467__2 = iface.f_decl_bv("Exp467__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp467__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("32"), iface.bigint_lit("16")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            const auto v_Exp472__2 = iface.f_decl_bv("Exp472__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp472__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("48"), iface.bigint_lit("16")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
              v_element1__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("64"), iface.bigint_lit("16"));
              v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("64"), iface.bigint_lit("16"));
              v_element3__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("80"), iface.bigint_lit("16"));
              v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("64"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("95"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("80"), iface.bigint_lit("15")));
                v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("80"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("64"), iface.bigint_lit("16"));
                v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("80"), iface.bigint_lit("16"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("79"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("64"), iface.bigint_lit("15")));
                  v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("64"), iface.bigint_lit("16"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("95"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("80"), iface.bigint_lit("15")));
                  v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("64"), iface.bigint_lit("16"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                    v_element1__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("80"), iface.bigint_lit("16"));
                    v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("80"), iface.bigint_lit("16"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("79"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("64"), iface.bigint_lit("15")));
                    v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("80"), iface.bigint_lit("16"));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            const auto v_Exp497__2 = iface.f_decl_bv("Exp497__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp497__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("64"), iface.bigint_lit("16")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            const auto v_Exp502__2 = iface.f_decl_bv("Exp502__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp502__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("80"), iface.bigint_lit("16")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
              v_element1__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("96"), iface.bigint_lit("16"));
              v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("96"), iface.bigint_lit("16"));
              v_element3__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("112"), iface.bigint_lit("16"));
              v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("96"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("112"), iface.bigint_lit("15")));
                v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("112"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("96"), iface.bigint_lit("16"));
                v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("112"), iface.bigint_lit("16"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("111"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("96"), iface.bigint_lit("15")));
                  v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("96"), iface.bigint_lit("16"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("112"), iface.bigint_lit("15")));
                  v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("96"), iface.bigint_lit("16"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                    v_element1__1 = iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("112"), iface.bigint_lit("16"));
                    v_element2__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("112"), iface.bigint_lit("16"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("111"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp408__2, iface.bigint_lit("96"), iface.bigint_lit("15")));
                    v_element4__1 = iface.f_gen_slice(v_Exp405__2, iface.bigint_lit("112"), iface.bigint_lit("16"));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            const auto v_Exp527__2 = iface.f_decl_bv("Exp527__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp527__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("96"), iface.bigint_lit("16")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            auto v_Exp532__2 = typename Traits::rt_expr{};
            v_Exp532__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp411__2, iface.bigint_lit("112"), iface.bigint_lit("16")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR()));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp532__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp527__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp502__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp497__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp472__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp467__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp442__2), iface.f_gen_load(v_Exp437__2)))))))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp541__2 = typename Traits::rt_expr{};
            v_Exp541__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp544__2 = typename Traits::rt_expr{};
            v_Exp544__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp547__2 = typename Traits::rt_expr{};
            v_Exp547__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            auto v_element1__1 = typename Traits::rt_expr{};
            auto v_element2__1 = typename Traits::rt_expr{};
            auto v_element3__1 = typename Traits::rt_expr{};
            auto v_element4__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
              v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
              v_element2__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
              v_element3__1 = iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
              v_element4__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("15")));
                v_element2__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
                v_element4__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15")));
                  v_element2__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("16"), iface.bigint_lit("15")));
                  v_element4__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                    v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16"));
                    v_element2__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("0"), iface.bigint_lit("15")));
                    v_element4__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("16"), iface.bigint_lit("16"));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            const auto v_Exp573__2 = iface.f_decl_bv("Exp573__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp573__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp547__2, iface.bigint_lit("0"), iface.bigint_lit("16")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            const auto v_Exp578__2 = iface.f_decl_bv("Exp578__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp578__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp547__2, iface.bigint_lit("16"), iface.bigint_lit("16")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
              v_element1__1 = iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
              v_element2__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
              v_element3__1 = iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
              v_element4__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("48"), iface.bigint_lit("15")));
                v_element2__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
                v_element4__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("47"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("32"), iface.bigint_lit("15")));
                  v_element2__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("48"), iface.bigint_lit("15")));
                  v_element4__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                    v_element1__1 = iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                    v_element2__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("47"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp544__2, iface.bigint_lit("32"), iface.bigint_lit("15")));
                    v_element4__1 = iface.f_gen_slice(v_Exp541__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            const auto v_Exp603__2 = iface.f_decl_bv("Exp603__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp603__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp547__2, iface.bigint_lit("32"), iface.bigint_lit("16")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            auto v_Exp608__2 = typename Traits::rt_expr{};
            v_Exp608__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp547__2, iface.bigint_lit("48"), iface.bigint_lit("16")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR()));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp608__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp603__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp578__2), iface.f_gen_load(v_Exp573__2)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp619__2 = typename Traits::rt_expr{};
              v_Exp619__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp622__2 = typename Traits::rt_expr{};
              v_Exp622__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp625__2 = typename Traits::rt_expr{};
              v_Exp625__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              auto v_element1__1 = typename Traits::rt_expr{};
              auto v_element2__1 = typename Traits::rt_expr{};
              auto v_element3__1 = typename Traits::rt_expr{};
              auto v_element4__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                v_element2__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
                v_element3__1 = iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                v_element4__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("31")));
                  v_element2__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                  v_element3__1 = iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
                  v_element4__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                    v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31")));
                    v_element2__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("32"), iface.bigint_lit("31")));
                    v_element4__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                      v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32"));
                      v_element2__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                      v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("0"), iface.bigint_lit("31")));
                      v_element4__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
              const auto v_Exp651__2 = iface.f_decl_bv("Exp651__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp651__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp625__2, iface.bigint_lit("0"), iface.bigint_lit("32")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
              const auto v_Exp656__2 = iface.f_decl_bv("Exp656__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp656__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp625__2, iface.bigint_lit("32"), iface.bigint_lit("32")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR())));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                v_element1__1 = iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("64"), iface.bigint_lit("32"));
                v_element2__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("64"), iface.bigint_lit("32"));
                v_element3__1 = iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("96"), iface.bigint_lit("32"));
                v_element4__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("64"), iface.bigint_lit("32"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("96"), iface.bigint_lit("31")));
                  v_element2__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("96"), iface.bigint_lit("32"));
                  v_element3__1 = iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("64"), iface.bigint_lit("32"));
                  v_element4__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("96"), iface.bigint_lit("32"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                    v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("95"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("64"), iface.bigint_lit("31")));
                    v_element2__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("64"), iface.bigint_lit("32"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("96"), iface.bigint_lit("31")));
                    v_element4__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("64"), iface.bigint_lit("32"));
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                      v_element1__1 = iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("96"), iface.bigint_lit("32"));
                      v_element2__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("96"), iface.bigint_lit("32"));
                      v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("95"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp622__2, iface.bigint_lit("64"), iface.bigint_lit("31")));
                      v_element4__1 = iface.f_gen_slice(v_Exp619__2, iface.bigint_lit("96"), iface.bigint_lit("32"));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
              const auto v_Exp681__2 = iface.f_decl_bv("Exp681__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp681__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp625__2, iface.bigint_lit("64"), iface.bigint_lit("32")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
              auto v_Exp686__2 = typename Traits::rt_expr{};
              v_Exp686__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp625__2, iface.bigint_lit("96"), iface.bigint_lit("32")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR()));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp686__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp681__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp656__2), iface.f_gen_load(v_Exp651__2)))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp695__2 = typename Traits::rt_expr{};
              v_Exp695__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp698__2 = typename Traits::rt_expr{};
              v_Exp698__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp701__2 = typename Traits::rt_expr{};
              v_Exp701__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              auto v_element1__1 = typename Traits::rt_expr{};
              auto v_element2__1 = typename Traits::rt_expr{};
              auto v_element3__1 = typename Traits::rt_expr{};
              auto v_element4__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                v_element2__1 = iface.f_gen_slice(v_Exp695__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
                v_element3__1 = iface.f_gen_slice(v_Exp698__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                v_element4__1 = iface.f_gen_slice(v_Exp695__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("31")));
                  v_element2__1 = iface.f_gen_slice(v_Exp695__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                  v_element3__1 = iface.f_gen_slice(v_Exp698__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
                  v_element4__1 = iface.f_gen_slice(v_Exp695__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                    v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31")));
                    v_element2__1 = iface.f_gen_slice(v_Exp695__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp698__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp698__2, iface.bigint_lit("32"), iface.bigint_lit("31")));
                    v_element4__1 = iface.f_gen_slice(v_Exp695__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                      v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32"));
                      v_element2__1 = iface.f_gen_slice(v_Exp695__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                      v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp698__2, iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp698__2, iface.bigint_lit("0"), iface.bigint_lit("31")));
                      v_element4__1 = iface.f_gen_slice(v_Exp695__2, iface.bigint_lit("32"), iface.bigint_lit("32"));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
              const auto v_Exp727__2 = iface.f_decl_bv("Exp727__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp727__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp701__2, iface.bigint_lit("0"), iface.bigint_lit("32")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
              auto v_Exp732__2 = typename Traits::rt_expr{};
              v_Exp732__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp701__2, iface.bigint_lit("32"), iface.bigint_lit("32")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR()));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp732__2, iface.f_gen_load(v_Exp727__2)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp743__2 = typename Traits::rt_expr{};
                v_Exp743__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp746__2 = typename Traits::rt_expr{};
                v_Exp746__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp749__2 = typename Traits::rt_expr{};
                v_Exp749__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                auto v_element1__1 = typename Traits::rt_expr{};
                auto v_element2__1 = typename Traits::rt_expr{};
                auto v_element3__1 = typename Traits::rt_expr{};
                auto v_element4__1 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                  v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
                  v_element2__1 = iface.f_gen_slice(v_Exp743__2, iface.bigint_lit("0"), iface.bigint_lit("64"));
                  v_element3__1 = iface.f_gen_slice(v_Exp746__2, iface.bigint_lit("64"), iface.bigint_lit("64"));
                  v_element4__1 = iface.f_gen_slice(v_Exp743__2, iface.bigint_lit("0"), iface.bigint_lit("64"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                    v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("63")));
                    v_element2__1 = iface.f_gen_slice(v_Exp743__2, iface.bigint_lit("64"), iface.bigint_lit("64"));
                    v_element3__1 = iface.f_gen_slice(v_Exp746__2, iface.bigint_lit("0"), iface.bigint_lit("64"));
                    v_element4__1 = iface.f_gen_slice(v_Exp743__2, iface.bigint_lit("64"), iface.bigint_lit("64"));
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                      v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63")));
                      v_element2__1 = iface.f_gen_slice(v_Exp743__2, iface.bigint_lit("0"), iface.bigint_lit("64"));
                      v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp746__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp746__2, iface.bigint_lit("64"), iface.bigint_lit("63")));
                      v_element4__1 = iface.f_gen_slice(v_Exp743__2, iface.bigint_lit("0"), iface.bigint_lit("64"));
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                        v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
                        v_element2__1 = iface.f_gen_slice(v_Exp743__2, iface.bigint_lit("64"), iface.bigint_lit("64"));
                        v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp746__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp746__2, iface.bigint_lit("0"), iface.bigint_lit("63")));
                        v_element4__1 = iface.f_gen_slice(v_Exp743__2, iface.bigint_lit("64"), iface.bigint_lit("64"));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
                const auto v_Exp775__2 = iface.f_decl_bv("Exp775__2", iface.bigint_lit("64"));
                iface.f_gen_store(v_Exp775__2, iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp749__2, iface.bigint_lit("0"), iface.bigint_lit("64")), v_element2__1, v_element1__1, iface.f_gen_load(iface.v_FPCR())));
                auto v_Exp780__2 = typename Traits::rt_expr{};
                v_Exp780__2 = iface.f_gen_FPMulAdd(iface.f_gen_slice(v_Exp749__2, iface.bigint_lit("64"), iface.bigint_lit("64")), v_element4__1, v_element3__1, iface.f_gen_load(iface.v_FPCR()));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp780__2, iface.f_gen_load(v_Exp775__2)));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_result__1 = iface.bits_zero(iface.bigint_lit("64"));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(v_result__1, iface.bigint_lit("128"))));
              } // if
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_complex


} // namespace aslp
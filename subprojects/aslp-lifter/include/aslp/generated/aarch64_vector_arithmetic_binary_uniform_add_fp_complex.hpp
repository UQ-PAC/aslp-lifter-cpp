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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_fp_complex(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11")))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp213__2 = typename Traits::rt_expr{};
            v_Exp213__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp216__2 = typename Traits::rt_expr{};
            v_Exp216__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_element1__1 = typename Traits::rt_expr{};
            auto v_element3__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("15")));
              v_element3__1 = iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("0"), iface.bigint_lit("15")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
            const auto v_Exp230__2 = iface.f_decl_bv("Exp230__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp230__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp213__2, iface.bigint_lit("0"), iface.bigint_lit("16")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            const auto v_Exp234__2 = iface.f_decl_bv("Exp234__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp234__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp213__2, iface.bigint_lit("16"), iface.bigint_lit("16")), v_element3__1, iface.f_gen_load(iface.v_FPCR())));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("48"), iface.bigint_lit("15")));
              v_element3__1 = iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_element1__1 = iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("47"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("32"), iface.bigint_lit("15")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
            const auto v_Exp244__2 = iface.f_decl_bv("Exp244__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp244__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp213__2, iface.bigint_lit("32"), iface.bigint_lit("16")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            const auto v_Exp248__2 = iface.f_decl_bv("Exp248__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp248__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp213__2, iface.bigint_lit("48"), iface.bigint_lit("16")), v_element3__1, iface.f_gen_load(iface.v_FPCR())));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("95"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("80"), iface.bigint_lit("15")));
              v_element3__1 = iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("64"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_element1__1 = iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("80"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("79"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("64"), iface.bigint_lit("15")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
            const auto v_Exp258__2 = iface.f_decl_bv("Exp258__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp258__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp213__2, iface.bigint_lit("64"), iface.bigint_lit("16")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            const auto v_Exp262__2 = iface.f_decl_bv("Exp262__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp262__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp213__2, iface.bigint_lit("80"), iface.bigint_lit("16")), v_element3__1, iface.f_gen_load(iface.v_FPCR())));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("112"), iface.bigint_lit("15")));
              v_element3__1 = iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("96"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_element1__1 = iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("112"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("111"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp216__2, iface.bigint_lit("96"), iface.bigint_lit("15")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
            const auto v_Exp272__2 = iface.f_decl_bv("Exp272__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp272__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp213__2, iface.bigint_lit("96"), iface.bigint_lit("16")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            auto v_Exp276__2 = typename Traits::rt_expr{};
            v_Exp276__2 = iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp213__2, iface.bigint_lit("112"), iface.bigint_lit("16")), v_element3__1, iface.f_gen_load(iface.v_FPCR()));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp276__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp272__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp262__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp258__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp248__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp244__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp234__2), iface.f_gen_load(v_Exp230__2)))))))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp285__2 = typename Traits::rt_expr{};
            v_Exp285__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp288__2 = typename Traits::rt_expr{};
            v_Exp288__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_element1__1 = typename Traits::rt_expr{};
            auto v_element3__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("15")));
              v_element3__1 = iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("0"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("0"), iface.bigint_lit("15")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
            const auto v_Exp302__2 = iface.f_decl_bv("Exp302__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp302__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp285__2, iface.bigint_lit("0"), iface.bigint_lit("16")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            const auto v_Exp306__2 = iface.f_decl_bv("Exp306__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp306__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp285__2, iface.bigint_lit("16"), iface.bigint_lit("16")), v_element3__1, iface.f_gen_load(iface.v_FPCR())));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("48"), iface.bigint_lit("15")));
              v_element3__1 = iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("32"), iface.bigint_lit("16"));
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_element1__1 = iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("48"), iface.bigint_lit("16"));
                v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("47"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp288__2, iface.bigint_lit("32"), iface.bigint_lit("15")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
            const auto v_Exp316__2 = iface.f_decl_bv("Exp316__2", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp316__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp285__2, iface.bigint_lit("32"), iface.bigint_lit("16")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
            auto v_Exp320__2 = typename Traits::rt_expr{};
            v_Exp320__2 = iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp285__2, iface.bigint_lit("48"), iface.bigint_lit("16")), v_element3__1, iface.f_gen_load(iface.v_FPCR()));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp320__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp316__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp306__2), iface.f_gen_load(v_Exp302__2)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp331__2 = typename Traits::rt_expr{};
              v_Exp331__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp334__2 = typename Traits::rt_expr{};
              v_Exp334__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_element1__1 = typename Traits::rt_expr{};
              auto v_element3__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("31")));
                v_element3__1 = iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("0"), iface.bigint_lit("31")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
              const auto v_Exp348__2 = iface.f_decl_bv("Exp348__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp348__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp331__2, iface.bigint_lit("0"), iface.bigint_lit("32")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
              const auto v_Exp352__2 = iface.f_decl_bv("Exp352__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp352__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp331__2, iface.bigint_lit("32"), iface.bigint_lit("32")), v_element3__1, iface.f_gen_load(iface.v_FPCR())));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("96"), iface.bigint_lit("31")));
                v_element3__1 = iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("64"), iface.bigint_lit("32"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_element1__1 = iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("96"), iface.bigint_lit("32"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("95"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp334__2, iface.bigint_lit("64"), iface.bigint_lit("31")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
              const auto v_Exp362__2 = iface.f_decl_bv("Exp362__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp362__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp331__2, iface.bigint_lit("64"), iface.bigint_lit("32")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
              auto v_Exp366__2 = typename Traits::rt_expr{};
              v_Exp366__2 = iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp331__2, iface.bigint_lit("96"), iface.bigint_lit("32")), v_element3__1, iface.f_gen_load(iface.v_FPCR()));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp366__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp362__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp352__2), iface.f_gen_load(v_Exp348__2)))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp375__2 = typename Traits::rt_expr{};
              v_Exp375__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp378__2 = typename Traits::rt_expr{};
              v_Exp378__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_element1__1 = typename Traits::rt_expr{};
              auto v_element3__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("31")));
                v_element3__1 = iface.f_gen_slice(v_Exp378__2, iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32"));
                  v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp378__2, iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp378__2, iface.bigint_lit("0"), iface.bigint_lit("31")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
              const auto v_Exp392__2 = iface.f_decl_bv("Exp392__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp392__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp375__2, iface.bigint_lit("0"), iface.bigint_lit("32")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
              auto v_Exp396__2 = typename Traits::rt_expr{};
              v_Exp396__2 = iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp375__2, iface.bigint_lit("32"), iface.bigint_lit("32")), v_element3__1, iface.f_gen_load(iface.v_FPCR()));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp396__2, iface.f_gen_load(v_Exp392__2)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp407__2 = typename Traits::rt_expr{};
                v_Exp407__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp410__2 = typename Traits::rt_expr{};
                v_Exp410__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_element1__1 = typename Traits::rt_expr{};
                auto v_element3__1 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  v_element1__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("127"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("63")));
                  v_element3__1 = iface.f_gen_slice(v_Exp410__2, iface.bigint_lit("0"), iface.bigint_lit("64"));
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_element1__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
                    v_element3__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(v_Exp410__2, iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(v_Exp410__2, iface.bigint_lit("0"), iface.bigint_lit("63")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
                const auto v_Exp424__2 = iface.f_decl_bv("Exp424__2", iface.bigint_lit("64"));
                iface.f_gen_store(v_Exp424__2, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp407__2, iface.bigint_lit("0"), iface.bigint_lit("64")), v_element1__1, iface.f_gen_load(iface.v_FPCR())));
                auto v_Exp428__2 = typename Traits::rt_expr{};
                v_Exp428__2 = iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp407__2, iface.bigint_lit("64"), iface.bigint_lit("64")), v_element3__1, iface.f_gen_load(iface.v_FPCR()));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp428__2, iface.f_gen_load(v_Exp424__2)));
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

} // f_aarch64_vector_arithmetic_binary_uniform_add_fp_complex


} // namespace aslp
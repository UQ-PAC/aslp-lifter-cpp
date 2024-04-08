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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_add_pairwise(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp6__2 = typename Traits::rt_expr{};
        v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp9__2 = typename Traits::rt_expr{};
          v_Exp9__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          iface.f_gen_store(v_result__1, iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))));
          auto v_If12__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If12__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If12__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If17__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If17__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If17__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_add_bits(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
          } // if
          auto v_If25__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If25__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If25__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If30__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If30__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If30__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If25__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If30__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If25__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If30__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
          auto v_If40__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If40__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If40__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If45__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If45__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If45__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If40__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If45__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If40__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If45__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
          auto v_If55__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If55__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If55__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If60__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If60__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If60__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If55__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If55__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If60__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } // if
          auto v_If70__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If70__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If70__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If75__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If75__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If75__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If70__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If75__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If70__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If75__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          } // if
          auto v_If85__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If85__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If85__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If90__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If90__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If90__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If85__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If90__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If85__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If90__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
          } // if
          auto v_If100__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If100__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If100__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If105__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If105__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If105__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If100__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If105__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If100__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If105__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
          } // if
          auto v_If115__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If115__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If115__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If120__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If120__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If120__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If115__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If120__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If115__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If120__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
        } else {
          auto v_If136__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If136__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If136__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If141__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If141__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If141__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If136__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If141__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If136__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If141__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
          } // if
          auto v_If151__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If151__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If151__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If156__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If156__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If156__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If151__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If156__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If151__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If156__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
          auto v_If166__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If166__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If166__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If171__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If171__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If171__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If166__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If171__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If166__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If171__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
          auto v_If181__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If181__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If181__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If186__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If186__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If186__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If181__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If186__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If181__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If186__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
          } // if
          auto v_If196__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If196__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If196__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If201__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If201__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If201__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If196__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If201__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If196__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If201__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
          } // if
          auto v_If211__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If211__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If211__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If216__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If216__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If216__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If211__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If216__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If211__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If216__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
          } // if
          auto v_If226__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If226__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If226__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If231__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If231__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If231__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If226__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If231__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If226__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If231__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
          } // if
          auto v_If241__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If241__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If241__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If246__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If246__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If246__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If241__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If246__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If241__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If246__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
        } // if
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp262__2 = typename Traits::rt_expr{};
        v_Exp262__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp265__2 = typename Traits::rt_expr{};
          v_Exp265__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          auto v_If268__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If268__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If268__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If273__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If273__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If273__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp265__2, iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_add_bits(iface.f_gen_slice(v_Exp265__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If268__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If273__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp265__2, iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If268__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If273__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
          } // if
          auto v_If281__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If281__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If281__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If286__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If286__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If286__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If281__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If286__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If281__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If286__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
          auto v_If296__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If296__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If296__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If301__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If301__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If301__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If296__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If301__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If296__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If301__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
          auto v_If311__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If311__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If311__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If316__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If316__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If316__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If311__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If316__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If311__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If316__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          auto v_If332__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If332__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If332__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If337__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If337__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If337__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If332__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If337__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If332__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If337__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))));
          } // if
          auto v_If347__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If347__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If347__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If352__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If352__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If352__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If347__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If352__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If347__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If352__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
          } // if
          auto v_If362__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If362__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If362__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If367__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If367__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If367__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If362__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If367__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If362__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If367__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
          } // if
          auto v_If377__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If377__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If377__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If382__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If382__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If382__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp262__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If377__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If382__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
          } else {
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If377__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If382__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp399__2 = typename Traits::rt_expr{};
          v_Exp399__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp402__2 = typename Traits::rt_expr{};
            v_Exp402__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            iface.f_gen_store(v_result__1, iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))));
            auto v_If405__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If405__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If405__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If410__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If410__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If410__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp402__2, iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_add_bits(iface.f_gen_slice(v_Exp402__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If405__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If410__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp402__2, iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If405__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If410__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } // if
            auto v_If418__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If418__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If418__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If423__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If423__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If423__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If418__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If423__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If418__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If423__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } // if
            auto v_If433__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If433__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If433__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If438__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If438__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If438__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If433__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If438__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If433__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If438__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } // if
            auto v_If448__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If448__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If448__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If453__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If453__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If453__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If448__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If453__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If448__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If453__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
          } else {
            auto v_If469__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If469__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If469__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If474__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If474__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If474__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If469__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If474__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If469__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If474__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } // if
            auto v_If484__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If484__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If484__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If489__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If489__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If489__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If484__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If489__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If484__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If489__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } // if
            auto v_If499__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If499__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If499__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If504__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If504__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If504__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If499__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If504__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If499__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If504__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
            } // if
            auto v_If514__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If514__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If514__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If519__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If519__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If519__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp399__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If514__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If519__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If514__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If519__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
          } // if
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp535__2 = typename Traits::rt_expr{};
          v_Exp535__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp538__2 = typename Traits::rt_expr{};
            v_Exp538__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            auto v_If541__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If541__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If541__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If546__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If546__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If546__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp538__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_add_bits(iface.f_gen_slice(v_Exp538__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If541__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If546__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp538__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If541__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If546__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } // if
            auto v_If554__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If554__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If554__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If559__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If559__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If559__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If554__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If559__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If554__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If559__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            auto v_If575__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If575__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If575__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If580__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If580__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If580__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If575__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If580__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If575__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If580__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } // if
            auto v_If590__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If590__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If590__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If595__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If595__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If595__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp535__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If590__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If595__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } else {
              iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If590__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If595__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp612__2 = typename Traits::rt_expr{};
            v_Exp612__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp615__2 = typename Traits::rt_expr{};
              v_Exp615__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              iface.f_gen_store(v_result__1, iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))));
              auto v_If618__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If618__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If618__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If623__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If623__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If623__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp615__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_add_bits(iface.f_gen_slice(v_Exp615__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If618__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If623__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")))));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(v_Exp615__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If618__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If623__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } // if
              auto v_If631__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If631__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If631__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If636__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If636__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If636__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If636__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If636__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
            } else {
              auto v_If652__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If652__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If652__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If657__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If657__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If657__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If652__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If657__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")))));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If652__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If657__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } // if
              auto v_If667__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If667__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If667__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If672__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If672__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If672__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp612__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If667__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If672__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If667__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If672__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
            } // if
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp688__2 = typename Traits::rt_expr{};
            v_Exp688__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp691__2 = typename Traits::rt_expr{};
              v_Exp691__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              auto v_If694__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If694__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp688__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If694__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp688__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If699__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If699__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp688__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If699__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp688__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(v_result__1, iface.f_gen_add_bits(iface.f_gen_slice(v_Exp691__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If694__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If699__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If694__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If699__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              auto v_If713__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If713__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If713__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If718__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If718__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp688__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If718__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp688__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(v_result__1, iface.f_gen_add_bits(iface.f_gen_load(v_result__1), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If713__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If718__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64"))));
              } else {
                iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If713__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If718__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp735__2 = typename Traits::rt_expr{};
              v_Exp735__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp738__2 = typename Traits::rt_expr{};
                v_Exp738__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                iface.f_gen_store(v_result__1, iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))));
                auto v_If741__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If741__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp735__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If741__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp735__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If746__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If746__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp735__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If746__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp735__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  iface.f_gen_store(v_result__1, iface.f_gen_add_bits(v_Exp738__2, iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If741__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If746__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128"))));
                } else {
                  iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If741__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If746__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
              } else {
                auto v_If760__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If760__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If760__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If765__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If765__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp735__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If765__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp735__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  iface.f_gen_store(v_result__1, iface.f_gen_add_bits(iface.f_gen_load(v_result__1), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If760__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If765__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128"))));
                } else {
                  iface.f_gen_store(v_result__1, iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If760__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If765__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128")));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
              } // if
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } // if
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_add_pairwise


} // namespace aslp
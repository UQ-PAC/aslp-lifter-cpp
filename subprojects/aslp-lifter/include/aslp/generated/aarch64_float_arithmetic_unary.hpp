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
void aslp_lifter<Traits>::f_aarch64_float_arithmetic_unary(typename Traits::bits v_enc) {
  const auto v_Exp3__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"));
  if (v_Exp3__1) {
    auto v_fpop__1 = iface.bits_zero(iface.bigint_lit("2"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
      v_fpop__1 = iface.bits_lit(2U, "01");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
        v_fpop__1 = iface.bits_lit(2U, "00");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
          v_fpop__1 = iface.bits_lit(2U, "10");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            v_fpop__1 = iface.bits_lit(2U, "11");
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
    auto v_result__1 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "01"))) {
      v_result__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
    } else {
      if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "00"))) {
        v_result__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31")));
      } else {
        if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "10"))) {
          v_result__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("31"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31")));
        } else {
          if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "11"))) {
            auto v_Exp11__2 = typename Traits::rt_expr{};
            v_Exp11__2 = iface.f_gen_FPSqrt(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
            v_result__1 = v_Exp11__2;
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    const auto v_Exp18__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"));
    if (v_Exp18__1) {
      auto v_fpop__1 = iface.bits_zero(iface.bigint_lit("2"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
        v_fpop__1 = iface.bits_lit(2U, "01");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
          v_fpop__1 = iface.bits_lit(2U, "00");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
            v_fpop__1 = iface.bits_lit(2U, "10");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
              v_fpop__1 = iface.bits_lit(2U, "11");
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
      auto v_result__1 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "01"))) {
        v_result__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } else {
        if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "00"))) {
          v_result__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63")));
        } else {
          if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "10"))) {
            v_result__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("63"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63")));
          } else {
            if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "11"))) {
              auto v_Exp26__2 = typename Traits::rt_expr{};
              v_Exp26__2 = iface.f_gen_FPSqrt(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
              v_result__1 = v_Exp26__2;
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      const auto v_Exp33__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"));
      if (v_Exp33__1) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        const auto v_Exp34__1 = iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"));
        if (v_Exp34__1) {
          auto v_fpop__1 = iface.bits_zero(iface.bigint_lit("2"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
            v_fpop__1 = iface.bits_lit(2U, "01");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
              v_fpop__1 = iface.bits_lit(2U, "00");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                v_fpop__1 = iface.bits_lit(2U, "10");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                  v_fpop__1 = iface.bits_lit(2U, "11");
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
          auto v_result__1 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "01"))) {
            v_result__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
          } else {
            if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "00"))) {
              v_result__1 = iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15")));
            } else {
              if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "10"))) {
                v_result__1 = iface.f_gen_append_bits(iface.f_gen_not_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("15"), iface.bigint_lit("1"))), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15")));
              } else {
                if (iface.f_eq_bits(v_fpop__1, iface.bits_lit(2U, "11"))) {
                  auto v_Exp43__2 = typename Traits::rt_expr{};
                  v_Exp43__2 = iface.f_gen_FPSqrt(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
                  v_result__1 = v_Exp43__2;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__1, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_float_arithmetic_unary


} // namespace aslp
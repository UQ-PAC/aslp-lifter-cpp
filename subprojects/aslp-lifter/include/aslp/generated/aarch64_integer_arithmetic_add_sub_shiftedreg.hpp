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
void aslp_lifter<Traits>::f_aarch64_integer_arithmetic_add_sub_shiftedreg(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        auto v_DecodeShift5__2 = iface.bits_zero(iface.bigint_lit("2"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
          v_DecodeShift5__2 = iface.bits_lit(2U, "00");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
            v_DecodeShift5__2 = iface.bits_lit(2U, "01");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
              v_DecodeShift5__2 = iface.bits_lit(2U, "10");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                v_DecodeShift5__2 = iface.bits_lit(2U, "11");
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
        auto v_X_read8__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read8__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read8__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        auto v_X_read14__3 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read14__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read14__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        auto v_result__2 = typename Traits::rt_expr{};
        v_result__2 = v_X_read14__3;
        if (iface.f_eq_bits(v_DecodeShift5__2, iface.bits_lit(2U, "00"))) {
          v_result__2 = iface.f_gen_lsl_bits(v_X_read14__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))));
        } else {
          if (iface.f_eq_bits(v_DecodeShift5__2, iface.bits_lit(2U, "01"))) {
            v_result__2 = iface.f_gen_lsr_bits(v_X_read14__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))));
          } else {
            if (iface.f_eq_bits(v_DecodeShift5__2, iface.bits_lit(2U, "10"))) {
              v_result__2 = iface.f_gen_asr_bits(v_X_read14__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))));
            } else {
              if (iface.f_eq_bits(v_DecodeShift5__2, iface.bits_lit(2U, "11"))) {
                auto v_ROR19__3 = typename Traits::rt_expr{};
                assert(iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000000"))) {
                  v_ROR19__3 = v_X_read14__3;
                } else {
                  assert(iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000000")));
                  v_ROR19__3 = iface.f_gen_or_bits(iface.f_gen_lsr_bits(v_X_read14__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.f_gen_lsl_bits(v_X_read14__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(7U, "1000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))), iface.bigint_lit("8")))));
                } // if
                v_result__2 = v_ROR19__3;
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_X_read8__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_result__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
            iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_X_read8__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_result__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
            iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
            iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_X_read8__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_result__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
            iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_X_read8__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(v_result__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
            iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
            iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read8__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
          } // if
        } // if
      } // if
    } // if
  } else {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        auto v_DecodeShift63__2 = iface.bits_zero(iface.bigint_lit("2"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
          v_DecodeShift63__2 = iface.bits_lit(2U, "00");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
            v_DecodeShift63__2 = iface.bits_lit(2U, "01");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
              v_DecodeShift63__2 = iface.bits_lit(2U, "10");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                v_DecodeShift63__2 = iface.bits_lit(2U, "11");
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
        auto v_X_read66__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read66__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read66__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        auto v_X_read72__3 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read72__3 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read72__3 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        auto v_result__2 = typename Traits::rt_expr{};
        v_result__2 = v_X_read72__3;
        if (iface.f_eq_bits(v_DecodeShift63__2, iface.bits_lit(2U, "00"))) {
          v_result__2 = iface.f_gen_lsl_bits(v_X_read72__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))));
        } else {
          if (iface.f_eq_bits(v_DecodeShift63__2, iface.bits_lit(2U, "01"))) {
            v_result__2 = iface.f_gen_lsr_bits(v_X_read72__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))));
          } else {
            if (iface.f_eq_bits(v_DecodeShift63__2, iface.bits_lit(2U, "10"))) {
              v_result__2 = iface.f_gen_asr_bits(v_X_read72__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))));
            } else {
              if (iface.f_eq_bits(v_DecodeShift63__2, iface.bits_lit(2U, "11"))) {
                auto v_ROR77__3 = typename Traits::rt_expr{};
                assert(iface.f_sle_bits(iface.bits_lit(7U, "0000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7"))));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000000"))) {
                  v_ROR77__3 = v_X_read72__3;
                } else {
                  assert(iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000000")));
                  v_ROR77__3 = iface.f_gen_or_bits(iface.f_gen_lsr_bits(v_X_read72__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))), iface.f_gen_lsl_bits(v_X_read72__3, iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(6U, "100000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6"))), iface.bigint_lit("7")))));
                } // if
                v_result__2 = v_ROR77__3;
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_X_read66__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_result__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
            iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_X_read66__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_result__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
            iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
            iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_result__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_X_read66__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_result__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
            iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_X_read66__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(v_result__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
            iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
            iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_X_read66__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_result__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_integer_arithmetic_add_sub_shiftedreg


} // namespace aslp
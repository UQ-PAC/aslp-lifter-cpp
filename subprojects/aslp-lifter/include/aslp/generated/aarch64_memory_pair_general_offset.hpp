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
void aslp_lifter<Traits>::f_aarch64_memory_pair_general_offset(typename Traits::bits v_enc) {
  auto v_If4__1 = iface.bits_zero(iface.bigint_lit("2"));
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    v_If4__1 = iface.bits_lit(2U, "00");
  } else {
    v_If4__1 = iface.bits_lit(2U, "01");
  } // if
  if ((iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) || ((! (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")))) {
      if ((iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
            auto v_X_read69__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read69__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } else {
              v_X_read69__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
            } // if
            auto v_X_read74__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read74__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } else {
              v_X_read74__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
            } // if
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read69__2);
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read74__2);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
              const auto v_Exp84__2 = iface.f_decl_bv("Exp84__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp84__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp84__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp84__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } else {
          auto v_X_read93__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read93__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read93__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
            auto v_X_read98__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read98__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } else {
              v_X_read98__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
            } // if
            auto v_X_read103__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read103__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } else {
              v_X_read103__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
            } // if
            iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read93__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read98__2);
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_add_bits(v_X_read93__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read103__2);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
              const auto v_Exp113__2 = iface.f_decl_bv("Exp113__2", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp113__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_add_bits(v_X_read93__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read93__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp113__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read93__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp113__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")))) {
        if ((iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))))) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read185__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read185__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read185__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              auto v_X_read190__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read190__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read190__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read185__2);
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read190__2);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                const auto v_Exp200__2 = iface.f_decl_bv("Exp200__2", iface.bigint_lit("64"));
                iface.f_gen_store(v_Exp200__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp200__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp200__2));
                  } // if
                } // if
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } else {
            auto v_X_read209__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read209__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read209__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read214__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read214__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read214__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              auto v_X_read219__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read219__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read219__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read209__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read214__2);
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_add_bits(v_X_read209__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read219__2);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                const auto v_Exp229__2 = iface.f_decl_bv("Exp229__2", iface.bigint_lit("64"));
                iface.f_gen_store(v_Exp229__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_add_bits(v_X_read209__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read209__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp229__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read209__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp229__2));
                  } // if
                } // if
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_memory_pair_general_offset


} // namespace aslp
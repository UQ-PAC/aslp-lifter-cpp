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
void aslp_lifter<Traits>::f_aarch64_memory_pair_general_post_idx(typename Traits::bits v_enc) {
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
      auto v_If9__1 = true;
      if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
        v_If9__1 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
      } else {
        v_If9__1 = false;
      } // if
      if ((v_If9__1) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
        if ((iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))))) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read73__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read73__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                v_X_read73__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
              } // if
              auto v_X_read78__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read78__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                v_X_read78__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read73__2);
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read78__2);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                const auto v_Exp88__2 = iface.f_decl_bv("Exp88__2", iface.bigint_lit("32"));
                iface.f_gen_store(v_Exp88__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp88__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp88__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } // if
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } else {
            auto v_X_read97__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read97__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read97__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read102__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read102__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                v_X_read102__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
              } // if
              auto v_X_read107__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read107__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                v_X_read107__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
              } // if
              iface.f_gen_Mem_set(v_X_read97__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read102__2);
              iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read97__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read107__2);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                const auto v_Exp117__2 = iface.f_decl_bv("Exp117__2", iface.bigint_lit("32"));
                iface.f_gen_store(v_Exp117__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read97__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(v_X_read97__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp117__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read97__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp117__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } // if
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } else {
        auto v_If127__1 = true;
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
          v_If127__1 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
        } else {
          v_If127__1 = false;
        } // if
        if ((v_If127__1) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
          if ((iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              auto v_Exp195__2 = typename Traits::rt_expr{};
              v_Exp195__2 = iface.f_gen_load(iface.v_SP_EL0());
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read196__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read196__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read196__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                auto v_X_read201__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read201__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read201__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read196__2);
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read201__2);
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                  const auto v_Exp211__2 = iface.f_decl_bv("Exp211__2", iface.bigint_lit("32"));
                  iface.f_gen_store(v_Exp211__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp211__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp211__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp195__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp195__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))));
                } // if
              } // if
            } else {
              const auto v_X_read223__2 = iface.f_decl_bv("X.read223__2", iface.bigint_lit("64"));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_store(v_X_read223__2, iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
              } else {
                iface.f_gen_store(v_X_read223__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              } // if
              auto v_Exp227__2 = typename Traits::rt_expr{};
              v_Exp227__2 = iface.f_gen_load(v_X_read223__2);
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read228__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read228__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read228__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                auto v_X_read233__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read233__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read233__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_load(v_X_read223__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read228__2);
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(v_X_read223__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read233__2);
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                  const auto v_Exp243__2 = iface.f_decl_bv("Exp243__2", iface.bigint_lit("32"));
                  iface.f_gen_store(v_Exp243__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(v_X_read223__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(v_X_read223__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp243__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(v_X_read223__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp243__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp227__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp227__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))));
                } // if
              } // if
            } // if
          } // if
        } else {
          if ((iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              auto v_Exp319__2 = typename Traits::rt_expr{};
              v_Exp319__2 = iface.f_gen_load(iface.v_SP_EL0());
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read320__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read320__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read320__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                auto v_X_read325__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read325__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read325__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read320__2);
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read325__2);
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                  const auto v_Exp335__2 = iface.f_decl_bv("Exp335__2", iface.bigint_lit("32"));
                  iface.f_gen_store(v_Exp335__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp335__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp335__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp319__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp319__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))));
                } // if
              } // if
            } else {
              const auto v_X_read347__2 = iface.f_decl_bv("X.read347__2", iface.bigint_lit("64"));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_store(v_X_read347__2, iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
              } else {
                iface.f_gen_store(v_X_read347__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              } // if
              auto v_Exp351__2 = typename Traits::rt_expr{};
              v_Exp351__2 = iface.f_gen_load(v_X_read347__2);
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read352__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read352__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read352__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                auto v_X_read357__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read357__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read357__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_load(v_X_read347__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read352__2);
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(v_X_read347__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read357__2);
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                  const auto v_Exp367__2 = iface.f_decl_bv("Exp367__2", iface.bigint_lit("32"));
                  iface.f_gen_store(v_Exp367__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(v_X_read347__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(v_X_read347__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp367__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(v_X_read347__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp367__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp351__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp351__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("62")), iface.bits_lit(2U, "00")))));
                } // if
              } // if
            } // if
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")))) {
        auto v_If382__1 = true;
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
          v_If382__1 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
        } else {
          v_If382__1 = false;
        } // if
        if ((v_If382__1) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
          if ((iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read446__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read446__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read446__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                auto v_X_read451__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read451__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read451__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read446__2);
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read451__2);
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                  const auto v_Exp461__2 = iface.f_decl_bv("Exp461__2", iface.bigint_lit("64"));
                  iface.f_gen_store(v_Exp461__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp461__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp461__2));
                    } // if
                  } // if
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } else {
              auto v_X_read470__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read470__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read470__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read475__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read475__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read475__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                auto v_X_read480__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read480__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read480__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(v_X_read470__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read475__2);
                iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read470__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read480__2);
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                  const auto v_Exp490__2 = iface.f_decl_bv("Exp490__2", iface.bigint_lit("64"));
                  iface.f_gen_store(v_Exp490__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read470__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(v_X_read470__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp490__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(v_X_read470__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp490__2));
                    } // if
                  } // if
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } else {
          auto v_If500__1 = true;
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
            v_If500__1 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
          } else {
            v_If500__1 = false;
          } // if
          if ((v_If500__1) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
            if ((iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                auto v_Exp568__2 = typename Traits::rt_expr{};
                v_Exp568__2 = iface.f_gen_load(iface.v_SP_EL0());
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read569__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read569__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read569__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  auto v_X_read574__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read574__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read574__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read569__2);
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read574__2);
                } else {
                  if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                    const auto v_Exp584__2 = iface.f_decl_bv("Exp584__2", iface.bigint_lit("64"));
                    iface.f_gen_store(v_Exp584__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp584__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp584__2));
                      } // if
                    } // if
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp568__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp568__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))));
                  } // if
                } // if
              } else {
                const auto v_X_read596__2 = iface.f_decl_bv("X.read596__2", iface.bigint_lit("64"));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_store(v_X_read596__2, iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
                } else {
                  iface.f_gen_store(v_X_read596__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                } // if
                auto v_Exp600__2 = typename Traits::rt_expr{};
                v_Exp600__2 = iface.f_gen_load(v_X_read596__2);
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read601__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read601__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read601__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  auto v_X_read606__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read606__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read606__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_load(v_X_read596__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read601__2);
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(v_X_read596__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read606__2);
                } else {
                  if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                    const auto v_Exp616__2 = iface.f_decl_bv("Exp616__2", iface.bigint_lit("64"));
                    iface.f_gen_store(v_Exp616__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(v_X_read596__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(v_X_read596__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp616__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_load(v_X_read596__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp616__2));
                      } // if
                    } // if
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp600__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp600__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))));
                  } // if
                } // if
              } // if
            } // if
          } else {
            if ((iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                auto v_Exp692__2 = typename Traits::rt_expr{};
                v_Exp692__2 = iface.f_gen_load(iface.v_SP_EL0());
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read693__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read693__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read693__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  auto v_X_read698__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read698__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read698__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read693__2);
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read698__2);
                } else {
                  if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                    const auto v_Exp708__2 = iface.f_decl_bv("Exp708__2", iface.bigint_lit("64"));
                    iface.f_gen_store(v_Exp708__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp708__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp708__2));
                      } // if
                    } // if
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp692__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp692__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))));
                  } // if
                } // if
              } else {
                const auto v_X_read720__2 = iface.f_decl_bv("X.read720__2", iface.bigint_lit("64"));
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_store(v_X_read720__2, iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
                } else {
                  iface.f_gen_store(v_X_read720__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                } // if
                auto v_Exp724__2 = typename Traits::rt_expr{};
                v_Exp724__2 = iface.f_gen_load(v_X_read720__2);
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read725__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read725__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read725__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  auto v_X_read730__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read730__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read730__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_load(v_X_read720__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read725__2);
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(v_X_read720__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read730__2);
                } else {
                  if (iface.f_eq_bits(v_If4__1, iface.bits_lit(2U, "00"))) {
                    const auto v_Exp740__2 = iface.f_decl_bv("Exp740__2", iface.bigint_lit("64"));
                    iface.f_gen_store(v_Exp740__2, iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(v_X_read720__2), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000001000"))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_load(v_X_read720__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_SignExtend(iface.f_gen_load(v_Exp740__2), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_load(v_X_read720__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp740__2));
                      } // if
                    } // if
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_add_bits(v_Exp724__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_Exp724__2, iface.f_gen_bit_lit(iface.f_append_bits(iface.extract_bits(iface.extract_bits(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("7")), iface.bigint_lit("64")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("61")), iface.bits_lit(3U, "000")))));
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_memory_pair_general_post_idx


} // namespace aslp
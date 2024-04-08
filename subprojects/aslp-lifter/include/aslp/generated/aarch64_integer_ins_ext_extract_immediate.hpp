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
void aslp_lifter<Traits>::f_aarch64_integer_ins_ext_extract_immediate(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        auto v_X_read6__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read6__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read6__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        auto v_X_read11__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read11__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read11__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read6__2, v_X_read11__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")));
        } // if
      } // if
    } // if
  } else {
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        auto v_X_read20__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read20__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read20__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        auto v_X_read25__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read25__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read25__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read20__2, v_X_read25__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_integer_ins_ext_extract_immediate


} // namespace aslp
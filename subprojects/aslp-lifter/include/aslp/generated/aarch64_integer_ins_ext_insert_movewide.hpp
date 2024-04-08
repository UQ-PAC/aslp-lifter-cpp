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
void aslp_lifter<Traits>::f_aarch64_integer_ins_ext_insert_movewide(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_opcode__1 = iface.bits_zero(iface.bigint_lit("2"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
      v_opcode__1 = iface.bits_lit(2U, "00");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
        v_opcode__1 = iface.bits_lit(2U, "01");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
          v_opcode__1 = iface.bits_lit(2U, "10");
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if (iface.f_eq_bits(v_opcode__1, iface.bits_lit(2U, "10"))) {
        auto v_X_read5__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read5__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read5__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        if (iface.f_eq_bits(v_opcode__1, iface.bits_lit(2U, "00"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_not_bits(iface.f_gen_or_bits(iface.f_gen_and_bits(v_X_read5__2, iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000001111111111111111"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7")))))), iface.f_gen_bit_lit(iface.f_lsl_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("16")), iface.bigint_lit("64")), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7")))))));
          } // if
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_or_bits(iface.f_gen_and_bits(v_X_read5__2, iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000001111111111111111"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7")))))), iface.f_gen_bit_lit(iface.f_lsl_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("16")), iface.bigint_lit("64")), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7"))))));
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(v_opcode__1, iface.bits_lit(2U, "00"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("16")), iface.bigint_lit("64")), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7"))))));
          } // if
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.f_lsl_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("16")), iface.bigint_lit("64")), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7")))));
          } // if
        } // if
      } // if
    } // if
  } else {
    auto v_opcode__1 = iface.bits_zero(iface.bigint_lit("2"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
      v_opcode__1 = iface.bits_lit(2U, "00");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
        v_opcode__1 = iface.bits_lit(2U, "01");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
          v_opcode__1 = iface.bits_lit(2U, "10");
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if (iface.f_eq_bits(v_opcode__1, iface.bits_lit(2U, "10"))) {
        auto v_X_read22__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read22__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read22__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        if (iface.f_eq_bits(v_opcode__1, iface.bits_lit(2U, "00"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(iface.f_gen_or_bits(iface.f_gen_and_bits(v_X_read22__2, iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.bits_lit(32U, "00000000000000001111111111111111"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7")))))), iface.f_gen_bit_lit(iface.f_lsl_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("16")), iface.bigint_lit("32")), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7")))))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_or_bits(iface.f_gen_and_bits(v_X_read22__2, iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.bits_lit(32U, "00000000000000001111111111111111"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7")))))), iface.f_gen_bit_lit(iface.f_lsl_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("16")), iface.bigint_lit("32")), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7"))))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(v_opcode__1, iface.bits_lit(2U, "00"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_not_bits(iface.f_lsl_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("16")), iface.bigint_lit("32")), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7")))), iface.bigint_lit("64"))));
          } // if
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_lsl_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("16")), iface.bigint_lit("32")), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(4U, "0000")), iface.bigint_lit("7"))), iface.bigint_lit("64"))));
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_integer_ins_ext_insert_movewide


} // namespace aslp
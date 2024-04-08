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
void aslp_lifter<Traits>::f_aarch64_integer_shift_variable(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_DecodeShift4__2 = iface.bits_zero(iface.bigint_lit("2"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
      v_DecodeShift4__2 = iface.bits_lit(2U, "00");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
        v_DecodeShift4__2 = iface.bits_lit(2U, "01");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
          v_DecodeShift4__2 = iface.bits_lit(2U, "10");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            v_DecodeShift4__2 = iface.bits_lit(2U, "11");
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
    auto v_X_read6__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read6__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
    } else {
      v_X_read6__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    auto v_X_read13__3 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read13__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    } else {
      v_X_read13__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    auto v_result__2 = typename Traits::rt_expr{};
    v_result__2 = v_X_read13__3;
    if (iface.f_eq_bits(v_DecodeShift4__2, iface.bits_lit(2U, "00"))) {
      v_result__2 = iface.f_gen_lsl_bits(v_X_read13__3, iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read6__2, iface.bigint_lit("0"), iface.bigint_lit("6")), iface.f_gen_int_lit(iface.bigint_lit("7"))));
    } else {
      if (iface.f_eq_bits(v_DecodeShift4__2, iface.bits_lit(2U, "01"))) {
        v_result__2 = iface.f_gen_lsr_bits(v_X_read13__3, iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read6__2, iface.bigint_lit("0"), iface.bigint_lit("6")), iface.f_gen_int_lit(iface.bigint_lit("7"))));
      } else {
        if (iface.f_eq_bits(v_DecodeShift4__2, iface.bits_lit(2U, "10"))) {
          v_result__2 = iface.f_gen_asr_bits(v_X_read13__3, iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read6__2, iface.bigint_lit("0"), iface.bigint_lit("6")), iface.f_gen_int_lit(iface.bigint_lit("7"))));
        } else {
          if (iface.f_eq_bits(v_DecodeShift4__2, iface.bits_lit(2U, "11"))) {
            const auto v_ROR18__3 = iface.f_decl_bv("ROR18__3", iface.bigint_lit("64"));
            iface.f_gen_assert(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(7U, "0000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read6__2, iface.bigint_lit("0"), iface.bigint_lit("6")), iface.f_gen_int_lit(iface.bigint_lit("7")))));
            const auto v_temp0 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_X_read6__2, iface.bigint_lit("0"), iface.bigint_lit("6")), iface.f_gen_bit_lit(iface.bits_lit(6U, "000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp0));
            iface.f_gen_store(v_ROR18__3, v_X_read13__3);
            iface.f_switch_context(iface.f_false_branch(v_temp0));
            iface.f_gen_assert(iface.f_gen_ne_bits(iface.f_gen_slice(v_X_read6__2, iface.bigint_lit("0"), iface.bigint_lit("6")), iface.f_gen_bit_lit(iface.bits_lit(6U, "000000"))));
            iface.f_gen_store(v_ROR18__3, iface.f_gen_or_bits(iface.f_gen_lsr_bits(v_X_read13__3, iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read6__2, iface.bigint_lit("0"), iface.bigint_lit("6")), iface.f_gen_int_lit(iface.bigint_lit("7")))), iface.f_gen_lsl_bits(v_X_read13__3, iface.f_gen_ZeroExtend(iface.f_gen_sub_bits(iface.f_gen_bit_lit(iface.bits_lit(7U, "1000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read6__2, iface.bigint_lit("0"), iface.bigint_lit("6")), iface.f_gen_int_lit(iface.bigint_lit("7")))), iface.f_gen_int_lit(iface.bigint_lit("8"))))));
            iface.f_switch_context(iface.f_merge_branch(v_temp0));
            v_result__2 = iface.f_gen_load(v_ROR18__3);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), v_result__2);
    } // if
  } else {
    auto v_DecodeShift25__2 = iface.bits_zero(iface.bigint_lit("2"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
      v_DecodeShift25__2 = iface.bits_lit(2U, "00");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
        v_DecodeShift25__2 = iface.bits_lit(2U, "01");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
          v_DecodeShift25__2 = iface.bits_lit(2U, "10");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            v_DecodeShift25__2 = iface.bits_lit(2U, "11");
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
    auto v_X_read27__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read27__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
    } else {
      v_X_read27__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
    } // if
    auto v_X_read34__3 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read34__3 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
    } else {
      v_X_read34__3 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
    } // if
    auto v_result__2 = typename Traits::rt_expr{};
    v_result__2 = v_X_read34__3;
    if (iface.f_eq_bits(v_DecodeShift25__2, iface.bits_lit(2U, "00"))) {
      v_result__2 = iface.f_gen_lsl_bits(v_X_read34__3, iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read27__2, iface.bigint_lit("0"), iface.bigint_lit("5")), iface.f_gen_int_lit(iface.bigint_lit("6"))));
    } else {
      if (iface.f_eq_bits(v_DecodeShift25__2, iface.bits_lit(2U, "01"))) {
        v_result__2 = iface.f_gen_lsr_bits(v_X_read34__3, iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read27__2, iface.bigint_lit("0"), iface.bigint_lit("5")), iface.f_gen_int_lit(iface.bigint_lit("6"))));
      } else {
        if (iface.f_eq_bits(v_DecodeShift25__2, iface.bits_lit(2U, "10"))) {
          v_result__2 = iface.f_gen_asr_bits(v_X_read34__3, iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read27__2, iface.bigint_lit("0"), iface.bigint_lit("5")), iface.f_gen_int_lit(iface.bigint_lit("6"))));
        } else {
          if (iface.f_eq_bits(v_DecodeShift25__2, iface.bits_lit(2U, "11"))) {
            const auto v_ROR39__3 = iface.f_decl_bv("ROR39__3", iface.bigint_lit("32"));
            iface.f_gen_assert(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(6U, "000000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read27__2, iface.bigint_lit("0"), iface.bigint_lit("5")), iface.f_gen_int_lit(iface.bigint_lit("6")))));
            const auto v_temp1 = iface.f_gen_branch(iface.f_gen_eq_bits(iface.f_gen_slice(v_X_read27__2, iface.bigint_lit("0"), iface.bigint_lit("5")), iface.f_gen_bit_lit(iface.bits_lit(5U, "00000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp1));
            iface.f_gen_store(v_ROR39__3, v_X_read34__3);
            iface.f_switch_context(iface.f_false_branch(v_temp1));
            iface.f_gen_assert(iface.f_gen_ne_bits(iface.f_gen_slice(v_X_read27__2, iface.bigint_lit("0"), iface.bigint_lit("5")), iface.f_gen_bit_lit(iface.bits_lit(5U, "00000"))));
            iface.f_gen_store(v_ROR39__3, iface.f_gen_or_bits(iface.f_gen_lsr_bits(v_X_read34__3, iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read27__2, iface.bigint_lit("0"), iface.bigint_lit("5")), iface.f_gen_int_lit(iface.bigint_lit("6")))), iface.f_gen_lsl_bits(v_X_read34__3, iface.f_gen_ZeroExtend(iface.f_gen_sub_bits(iface.f_gen_bit_lit(iface.bits_lit(6U, "100000")), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read27__2, iface.bigint_lit("0"), iface.bigint_lit("5")), iface.f_gen_int_lit(iface.bigint_lit("6")))), iface.f_gen_int_lit(iface.bigint_lit("7"))))));
            iface.f_switch_context(iface.f_merge_branch(v_temp1));
            v_result__2 = iface.f_gen_load(v_ROR39__3);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__2, iface.f_gen_int_lit(iface.bigint_lit("64"))));
    } // if
  } // if

} // f_aarch64_integer_shift_variable


} // namespace aslp
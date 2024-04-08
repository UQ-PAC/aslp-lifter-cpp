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
void aslp_lifter<Traits>::f_aarch64_integer_flags_rmif(typename Traits::bits v_enc) {
  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    auto v_X_read5__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read5__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    } else {
      v_X_read5__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("3"), iface.bigint_lit("1")));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("2"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("2"), iface.bigint_lit("1")));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("1"), iface.bigint_lit("1")));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("1")), iface.bigint_lit("0"), iface.bigint_lit("1")));
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("1")), iface.bigint_lit("0"), iface.bigint_lit("1")));
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("1"), iface.bigint_lit("1")));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("1")), iface.bigint_lit("0"), iface.bigint_lit("1")));
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("1")), iface.bigint_lit("0"), iface.bigint_lit("1")));
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("2"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("2"), iface.bigint_lit("1")));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("1"), iface.bigint_lit("1")));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("1")), iface.bigint_lit("0"), iface.bigint_lit("1")));
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("1")), iface.bigint_lit("0"), iface.bigint_lit("1")));
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("1"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("0"), iface.bigint_lit("4")), iface.bigint_lit("1"), iface.bigint_lit("1")));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("1")), iface.bigint_lit("0"), iface.bigint_lit("1")));
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_append_bits(v_X_read5__2, v_X_read5__2), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("1")), iface.bigint_lit("0"), iface.bigint_lit("1")));
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_integer_flags_rmif


} // namespace aslp
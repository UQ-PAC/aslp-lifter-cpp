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
void aslp_lifter<Traits>::f_aarch64_vector_shift_right_sisd(typename Traits::bits v_enc) {
  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp7__2 = typename Traits::rt_expr{};
    v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    auto v_If8__1 = iface.bits_zero(iface.bigint_lit("129"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      auto v_If10__2 = iface.bits_zero(iface.bigint_lit("129"));
      if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9")))) {
        v_If10__2 = iface.f_ZeroExtend(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"), iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bigint_lit("129"));
      } else {
        v_If10__2 = iface.f_SignExtend(iface.f_asr_bits(iface.bits_lit(2U, "01"), iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bits_lit(8U, "00000001")), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))), iface.bigint_lit("129"));
      } // if
      v_If8__1 = v_If10__2;
    } else {
      v_If8__1 = iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    } // if
    auto v_If11__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      v_If11__1 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
    } else {
      v_If11__1 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
    } // if
    auto v_If18__2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If18__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
    } else {
      v_If18__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
    } // if
    auto v_If22__2 = typename Traits::rt_expr{};
    if (iface.f_sle_bits(iface.bits_lit(9U, "000000000"), iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9")))) {
      v_If22__2 = iface.f_gen_asr_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If8__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))));
    } else {
      v_If22__2 = iface.f_gen_lsl_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("130"))), iface.f_gen_bit_lit(iface.f_SignExtend(v_If8__1, iface.bigint_lit("130")))), iface.f_gen_bit_lit(iface.f_add_bits(iface.f_not_bits(iface.f_ZeroExtend(iface.f_sub_bits(iface.bits_lit(8U, "10000000"), iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"))), iface.bigint_lit("8"))), iface.bigint_lit("9"))), iface.bits_lit(9U, "000000001"))));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_add_bits(v_If11__1, iface.f_gen_slice(v_If22__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_shift_right_sisd


} // namespace aslp
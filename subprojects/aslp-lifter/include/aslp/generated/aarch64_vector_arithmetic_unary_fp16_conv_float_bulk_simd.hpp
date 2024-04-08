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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_FPDecodeRounding4__2 = iface.bits_zero(iface.bigint_lit("3"));
    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
      v_FPDecodeRounding4__2 = iface.bits_lit(3U, "000");
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
        v_FPDecodeRounding4__2 = iface.bits_lit(3U, "001");
      } else {
        if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
          v_FPDecodeRounding4__2 = iface.bits_lit(3U, "010");
        } else {
          if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
            v_FPDecodeRounding4__2 = iface.bits_lit(3U, "011");
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    const auto v_Exp12__2 = iface.f_decl_bv("Exp12__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp12__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding4__2))));
    const auto v_Exp15__2 = iface.f_decl_bv("Exp15__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp15__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding4__2))));
    const auto v_Exp18__2 = iface.f_decl_bv("Exp18__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp18__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding4__2))));
    const auto v_Exp21__2 = iface.f_decl_bv("Exp21__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp21__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding4__2))));
    const auto v_Exp24__2 = iface.f_decl_bv("Exp24__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp24__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding4__2))));
    const auto v_Exp27__2 = iface.f_decl_bv("Exp27__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp27__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding4__2))));
    const auto v_Exp30__2 = iface.f_decl_bv("Exp30__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp30__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding4__2))));
    auto v_Exp33__2 = typename Traits::rt_expr{};
    v_Exp33__2 = iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding4__2)));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_Exp33__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp30__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp27__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp24__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp21__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp18__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp15__2), iface.f_gen_load(v_Exp12__2)))))))));
  } else {
    auto v_FPDecodeRounding40__2 = iface.bits_zero(iface.bigint_lit("3"));
    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
      v_FPDecodeRounding40__2 = iface.bits_lit(3U, "000");
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
        v_FPDecodeRounding40__2 = iface.bits_lit(3U, "001");
      } else {
        if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
          v_FPDecodeRounding40__2 = iface.bits_lit(3U, "010");
        } else {
          if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
            v_FPDecodeRounding40__2 = iface.bits_lit(3U, "011");
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    const auto v_Exp48__2 = iface.f_decl_bv("Exp48__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp48__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding40__2))));
    const auto v_Exp51__2 = iface.f_decl_bv("Exp51__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp51__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding40__2))));
    const auto v_Exp54__2 = iface.f_decl_bv("Exp54__2", iface.bigint_lit("16"));
    iface.f_gen_store(v_Exp54__2, iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding40__2))));
    auto v_Exp57__2 = typename Traits::rt_expr{};
    v_Exp57__2 = iface.f_gen_FPToFixed(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("0")), iface.f_gen_bool_lit(iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))), iface.f_gen_load(iface.v_FPCR()), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_FPDecodeRounding40__2)));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_Exp57__2, iface.f_gen_append_bits(iface.f_gen_load(v_Exp54__2), iface.f_gen_append_bits(iface.f_gen_load(v_Exp51__2), iface.f_gen_load(v_Exp48__2)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd


} // namespace aslp
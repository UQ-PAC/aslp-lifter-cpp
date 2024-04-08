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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_long(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_index__1 = iface.bits_zero(iface.bigint_lit("3"));
    auto v_Rmhi__1 = iface.bits_zero(iface.bigint_lit("1"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
      v_index__1 = iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")));
      v_Rmhi__1 = iface.bits_lit(1U, "0");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
        v_index__1 = iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.bigint_lit("3"));
        v_Rmhi__1 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1"));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      auto v_Vpart_read9__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp12__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp12__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read9__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read9__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")), iface.bits_lit(7U, "0001000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
      auto v_If27__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If27__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If27__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If32__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If32__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If32__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If39__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If39__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If39__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If45__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If45__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If45__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If51__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If51__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If51__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If57__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If57__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If57__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If63__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If63__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If63__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If69__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If69__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If69__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If75__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If75__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If75__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read9__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If75__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If27__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If69__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If27__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If63__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If27__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If57__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If27__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If51__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If27__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If45__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If27__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If39__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If27__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If32__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If27__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))))))))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        auto v_Vpart_read86__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp89__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp89__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read86__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read86__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
        auto v_If104__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If104__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If104__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If109__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If109__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read86__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If109__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read86__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If116__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If116__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read86__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If116__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read86__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If122__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If122__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read86__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If122__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read86__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If128__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If128__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read86__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If128__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read86__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If128__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If122__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If116__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If109__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          auto v_Vpart_read139__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp142__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp142__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read139__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read139__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")), iface.bits_lit(9U, "000100000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0010000000"))));
          auto v_If157__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If157__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If157__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If162__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If162__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read139__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If162__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read139__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If169__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If169__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read139__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If169__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read139__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If169__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_If157__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If162__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_If157__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            auto v_Vpart_read180__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp183__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp183__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read180__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read180__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0001000000")), iface.bigint_lit("11")), iface.bits_lit(11U, "00010000000"))));
            auto v_If198__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If198__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If198__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            auto v_If203__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If203__2 = iface.f_gen_ZeroExtend(v_Vpart_read180__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If203__2 = iface.f_gen_SignExtend(v_Vpart_read180__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If203__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(v_If198__2, iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } else {
    auto v_index__1 = iface.bits_zero(iface.bigint_lit("3"));
    auto v_Rmhi__1 = iface.bits_zero(iface.bigint_lit("1"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
      v_index__1 = iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")));
      v_Rmhi__1 = iface.bits_lit(1U, "0");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
        v_index__1 = iface.f_ZeroExtend(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"))), iface.bigint_lit("3"));
        v_Rmhi__1 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1"));
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      auto v_Vpart_read221__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp224__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp224__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read221__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read221__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")), iface.bits_lit(7U, "0001000")), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000"))));
      auto v_If239__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If239__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If239__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bigint_lit("7")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If244__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If244__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If244__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If251__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If251__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If251__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If257__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If257__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If257__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If263__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If263__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If263__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If269__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If269__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If269__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If275__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If275__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If275__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If281__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If281__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If281__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If287__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If287__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If287__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read221__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If287__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If239__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If281__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If239__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If275__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If239__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If269__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If239__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If263__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If239__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If257__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If239__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If251__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If239__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If244__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_SignExtend(v_If239__2, iface.f_gen_int_lit(iface.bigint_lit("17")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))))))))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        auto v_Vpart_read298__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp301__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp301__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read298__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read298__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")), iface.bigint_lit("9")), iface.bits_lit(9U, "001000000"))));
        auto v_If316__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If316__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If316__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If321__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If321__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read298__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If321__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read298__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If328__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If328__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read298__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If328__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read298__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If334__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If334__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read298__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If334__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read298__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If340__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If340__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read298__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If340__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read298__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If340__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_If316__2, iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If334__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_If316__2, iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If328__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_If316__2, iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If321__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_If316__2, iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          auto v_Vpart_read351__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp354__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp354__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read351__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read351__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")), iface.bits_lit(9U, "000100000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0001000000"))));
          auto v_If369__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If369__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If369__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If374__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If374__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read351__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If374__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read351__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If381__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If381__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read351__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If381__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read351__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If381__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_If369__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If374__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_If369__2, iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            auto v_Vpart_read392__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp395__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp395__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read392__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read392__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(v_index__1, iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")), iface.bits_lit(10U, "0001000000")), iface.bigint_lit("11")), iface.bits_lit(11U, "00001000000"))));
            auto v_If410__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If410__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If410__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_lsr_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.f_append_bits(v_Rmhi__1, iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("4"))))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(v_index__1, iface.bigint_lit("9")), iface.bits_lit(9U, "001000000")), iface.bigint_lit("10")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            auto v_If415__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If415__2 = iface.f_gen_ZeroExtend(v_Vpart_read392__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If415__2 = iface.f_gen_SignExtend(v_Vpart_read392__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_mul_bits(iface.f_gen_SignExtend(v_If415__2, iface.f_gen_int_lit(iface.bigint_lit("129"))), iface.f_gen_SignExtend(v_If410__2, iface.f_gen_int_lit(iface.bigint_lit("129")))), iface.bigint_lit("0"), iface.bigint_lit("128")), iface.bigint_lit("0"), iface.bigint_lit("128")));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_long


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_extract_sat_sisd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      auto v_If9__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If9__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } else {
        v_If9__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
      } // if
      auto v_SatQ12__2 = typename Traits::rt_expr{};
      auto v_SatQ13__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        const auto v_UnsignedSatQ14__3 = iface.f_decl_bv("UnsignedSatQ14__3", iface.bigint_lit("8"));
        const auto v_UnsignedSatQ15__3 = iface.f_decl_bool("UnsignedSatQ15__3");
        const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000011111111")), v_If9__2));
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_UnsignedSatQ14__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_gen_store(v_UnsignedSatQ15__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If9__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000000000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_UnsignedSatQ14__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_gen_store(v_UnsignedSatQ15__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_UnsignedSatQ14__3, iface.f_gen_slice(v_If9__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_UnsignedSatQ15__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        v_SatQ12__2 = iface.f_gen_load(v_UnsignedSatQ14__3);
        v_SatQ13__2 = iface.f_gen_load(v_UnsignedSatQ15__3);
      } else {
        const auto v_SignedSatQ20__3 = iface.f_decl_bv("SignedSatQ20__3", iface.bigint_lit("8"));
        const auto v_SignedSatQ21__3 = iface.f_decl_bool("SignedSatQ21__3");
        const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(17U, "00000000001111111")), v_If9__2));
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_SignedSatQ20__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
        iface.f_gen_store(v_SignedSatQ21__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If9__2, iface.f_gen_bit_lit(iface.bits_lit(17U, "11111111110000000"))));
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ20__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
        iface.f_gen_store(v_SignedSatQ21__3, iface.f_gen_bool_lit(true));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_SignedSatQ20__3, iface.f_gen_slice(v_If9__2, iface.bigint_lit("0"), iface.bigint_lit("8")));
        iface.f_gen_store(v_SignedSatQ21__3, iface.f_gen_bool_lit(false));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        v_SatQ12__2 = iface.f_gen_load(v_SignedSatQ20__3);
        v_SatQ13__2 = iface.f_gen_load(v_SignedSatQ21__3);
      } // if
      const auto v_temp4 = iface.f_gen_branch(v_SatQ13__2);
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
      iface.f_switch_context(iface.f_merge_branch(v_temp4));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ12__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_If45__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If45__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } else {
          v_If45__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
        } // if
        auto v_SatQ48__2 = typename Traits::rt_expr{};
        auto v_SatQ49__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ50__3 = iface.f_decl_bv("UnsignedSatQ50__3", iface.bigint_lit("16"));
          const auto v_UnsignedSatQ51__3 = iface.f_decl_bool("UnsignedSatQ51__3");
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000001111111111111111")), v_If45__2));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(v_UnsignedSatQ50__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_gen_store(v_UnsignedSatQ51__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp5));
          const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If45__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_UnsignedSatQ50__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_gen_store(v_UnsignedSatQ51__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          iface.f_gen_store(v_UnsignedSatQ50__3, iface.f_gen_slice(v_If45__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_UnsignedSatQ51__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp5));
          v_SatQ48__2 = iface.f_gen_load(v_UnsignedSatQ50__3);
          v_SatQ49__2 = iface.f_gen_load(v_UnsignedSatQ51__3);
        } else {
          const auto v_SignedSatQ56__3 = iface.f_decl_bv("SignedSatQ56__3", iface.bigint_lit("16"));
          const auto v_SignedSatQ57__3 = iface.f_decl_bool("SignedSatQ57__3");
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000111111111111111")), v_If45__2));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_SignedSatQ56__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
          iface.f_gen_store(v_SignedSatQ57__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If45__2, iface.f_gen_bit_lit(iface.bits_lit(33U, "111111111111111111000000000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(v_SignedSatQ56__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
          iface.f_gen_store(v_SignedSatQ57__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp8));
          iface.f_gen_store(v_SignedSatQ56__3, iface.f_gen_slice(v_If45__2, iface.bigint_lit("0"), iface.bigint_lit("16")));
          iface.f_gen_store(v_SignedSatQ57__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          v_SatQ48__2 = iface.f_gen_load(v_SignedSatQ56__3);
          v_SatQ49__2 = iface.f_gen_load(v_SignedSatQ57__3);
        } // if
        const auto v_temp9 = iface.f_gen_branch(v_SatQ49__2);
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ48__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_If81__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If81__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } else {
            v_If81__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
          } // if
          auto v_SatQ84__2 = typename Traits::rt_expr{};
          auto v_SatQ85__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ86__3 = iface.f_decl_bv("UnsignedSatQ86__3", iface.bigint_lit("32"));
            const auto v_UnsignedSatQ87__3 = iface.f_decl_bool("UnsignedSatQ87__3");
            const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000011111111111111111111111111111111")), v_If81__2));
            iface.f_switch_context(iface.f_true_branch(v_temp10));
            iface.f_gen_store(v_UnsignedSatQ86__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ87__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp10));
            const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If81__2, iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp11));
            iface.f_gen_store(v_UnsignedSatQ86__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ87__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp11));
            iface.f_gen_store(v_UnsignedSatQ86__3, iface.f_gen_slice(v_If81__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_UnsignedSatQ87__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp10));
            v_SatQ84__2 = iface.f_gen_load(v_UnsignedSatQ86__3);
            v_SatQ85__2 = iface.f_gen_load(v_UnsignedSatQ87__3);
          } else {
            const auto v_SignedSatQ92__3 = iface.f_decl_bv("SignedSatQ92__3", iface.bigint_lit("32"));
            const auto v_SignedSatQ93__3 = iface.f_decl_bool("SignedSatQ93__3");
            const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000001111111111111111111111111111111")), v_If81__2));
            iface.f_switch_context(iface.f_true_branch(v_temp12));
            iface.f_gen_store(v_SignedSatQ92__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
            iface.f_gen_store(v_SignedSatQ93__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp12));
            const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If81__2, iface.f_gen_bit_lit(iface.bits_lit(65U, "11111111111111111111111111111111110000000000000000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp13));
            iface.f_gen_store(v_SignedSatQ92__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
            iface.f_gen_store(v_SignedSatQ93__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp13));
            iface.f_gen_store(v_SignedSatQ92__3, iface.f_gen_slice(v_If81__2, iface.bigint_lit("0"), iface.bigint_lit("32")));
            iface.f_gen_store(v_SignedSatQ93__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp12));
            v_SatQ84__2 = iface.f_gen_load(v_SignedSatQ92__3);
            v_SatQ85__2 = iface.f_gen_load(v_SignedSatQ93__3);
          } // if
          const auto v_temp14 = iface.f_gen_branch(v_SatQ85__2);
          iface.f_switch_context(iface.f_true_branch(v_temp14));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp14));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ84__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_If117__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If117__2 = iface.f_gen_ZeroExtend(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } else {
              v_If117__2 = iface.f_gen_SignExtend(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_int_lit(iface.bigint_lit("129")));
            } // if
            auto v_SatQ120__2 = typename Traits::rt_expr{};
            auto v_SatQ121__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ122__3 = iface.f_decl_bv("UnsignedSatQ122__3", iface.bigint_lit("64"));
              const auto v_UnsignedSatQ123__3 = iface.f_decl_bool("UnsignedSatQ123__3");
              const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111")), v_If117__2));
              iface.f_switch_context(iface.f_true_branch(v_temp15));
              iface.f_gen_store(v_UnsignedSatQ122__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ123__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp15));
              const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If117__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp16));
              iface.f_gen_store(v_UnsignedSatQ122__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ123__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp16));
              iface.f_gen_store(v_UnsignedSatQ122__3, iface.f_gen_slice(v_If117__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
              iface.f_gen_store(v_UnsignedSatQ123__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp15));
              v_SatQ120__2 = iface.f_gen_load(v_UnsignedSatQ122__3);
              v_SatQ121__2 = iface.f_gen_load(v_UnsignedSatQ123__3);
            } else {
              const auto v_SignedSatQ128__3 = iface.f_decl_bv("SignedSatQ128__3", iface.bigint_lit("64"));
              const auto v_SignedSatQ129__3 = iface.f_decl_bool("SignedSatQ129__3");
              const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(129U, "000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111")), v_If117__2));
              iface.f_switch_context(iface.f_true_branch(v_temp17));
              iface.f_gen_store(v_SignedSatQ128__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ129__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp17));
              const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(v_If117__2, iface.f_gen_bit_lit(iface.bits_lit(129U, "111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp18));
              iface.f_gen_store(v_SignedSatQ128__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ129__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp18));
              iface.f_gen_store(v_SignedSatQ128__3, iface.f_gen_slice(v_If117__2, iface.bigint_lit("0"), iface.bigint_lit("64")));
              iface.f_gen_store(v_SignedSatQ129__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp17));
              v_SatQ120__2 = iface.f_gen_load(v_SignedSatQ128__3);
              v_SatQ121__2 = iface.f_gen_load(v_SignedSatQ129__3);
            } // if
            const auto v_temp19 = iface.f_gen_branch(v_SatQ121__2);
            iface.f_switch_context(iface.f_true_branch(v_temp19));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp19));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ120__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_extract_sat_sisd


} // namespace aslp
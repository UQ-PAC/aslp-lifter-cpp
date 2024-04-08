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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_add_saturating_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "110"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp6__2 = typename Traits::rt_expr{};
        v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp9__2 = typename Traits::rt_expr{};
        v_Exp9__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If12__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If12__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If12__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If17__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If17__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If17__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ20__2 = typename Traits::rt_expr{};
        auto v_SatQ21__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ22__3 = iface.f_decl_bv("UnsignedSatQ22__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ23__3 = iface.f_decl_bool("UnsignedSatQ23__3");
          const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp0));
          const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp1));
          iface.f_gen_store(v_UnsignedSatQ22__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          v_SatQ20__2 = iface.f_gen_load(v_UnsignedSatQ22__3);
          v_SatQ21__2 = iface.f_gen_load(v_UnsignedSatQ23__3);
        } else {
          const auto v_SignedSatQ28__3 = iface.f_decl_bv("SignedSatQ28__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ29__3 = iface.f_decl_bool("SignedSatQ29__3");
          const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp2));
          iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp2));
          const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp3));
          iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp3));
          iface.f_gen_store(v_SignedSatQ28__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If12__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If17__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp2));
          v_SatQ20__2 = iface.f_gen_load(v_SignedSatQ28__3);
          v_SatQ21__2 = iface.f_gen_load(v_SignedSatQ29__3);
        } // if
        const auto v_temp4 = iface.f_gen_branch(v_SatQ21__2);
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        auto v_If43__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If43__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If43__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If48__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If48__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If48__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ51__2 = typename Traits::rt_expr{};
        auto v_SatQ52__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ53__3 = iface.f_decl_bv("UnsignedSatQ53__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ54__3 = iface.f_decl_bool("UnsignedSatQ54__3");
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If43__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(v_UnsignedSatQ53__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp5));
          const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If43__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_UnsignedSatQ53__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          iface.f_gen_store(v_UnsignedSatQ53__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If43__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp5));
          v_SatQ51__2 = iface.f_gen_load(v_UnsignedSatQ53__3);
          v_SatQ52__2 = iface.f_gen_load(v_UnsignedSatQ54__3);
        } else {
          const auto v_SignedSatQ59__3 = iface.f_decl_bv("SignedSatQ59__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ60__3 = iface.f_decl_bool("SignedSatQ60__3");
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If43__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_SignedSatQ59__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If43__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(v_SignedSatQ59__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp8));
          iface.f_gen_store(v_SignedSatQ59__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If43__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If48__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          v_SatQ51__2 = iface.f_gen_load(v_SignedSatQ59__3);
          v_SatQ52__2 = iface.f_gen_load(v_SignedSatQ60__3);
        } // if
        const auto v_temp9 = iface.f_gen_branch(v_SatQ52__2);
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        auto v_If73__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If73__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If73__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If78__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If78__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If78__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ81__2 = typename Traits::rt_expr{};
        auto v_SatQ82__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ83__3 = iface.f_decl_bv("UnsignedSatQ83__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ84__3 = iface.f_decl_bool("UnsignedSatQ84__3");
          const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If73__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If78__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp10));
          iface.f_gen_store(v_UnsignedSatQ83__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ84__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp10));
          const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If73__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If78__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp11));
          iface.f_gen_store(v_UnsignedSatQ83__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ84__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp11));
          iface.f_gen_store(v_UnsignedSatQ83__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If73__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If78__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ84__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp10));
          v_SatQ81__2 = iface.f_gen_load(v_UnsignedSatQ83__3);
          v_SatQ82__2 = iface.f_gen_load(v_UnsignedSatQ84__3);
        } else {
          const auto v_SignedSatQ89__3 = iface.f_decl_bv("SignedSatQ89__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ90__3 = iface.f_decl_bool("SignedSatQ90__3");
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If73__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If78__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(v_SignedSatQ89__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ90__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp12));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If73__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If78__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ89__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ90__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ89__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If73__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If78__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ90__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
          v_SatQ81__2 = iface.f_gen_load(v_SignedSatQ89__3);
          v_SatQ82__2 = iface.f_gen_load(v_SignedSatQ90__3);
        } // if
        const auto v_temp14 = iface.f_gen_branch(v_SatQ82__2);
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        auto v_If103__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If103__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If103__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If108__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If108__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If108__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ111__2 = typename Traits::rt_expr{};
        auto v_SatQ112__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ113__3 = iface.f_decl_bv("UnsignedSatQ113__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ114__3 = iface.f_decl_bool("UnsignedSatQ114__3");
          const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If108__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp15));
          iface.f_gen_store(v_UnsignedSatQ113__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ114__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp15));
          const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If108__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp16));
          iface.f_gen_store(v_UnsignedSatQ113__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ114__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp16));
          iface.f_gen_store(v_UnsignedSatQ113__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If108__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ114__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp15));
          v_SatQ111__2 = iface.f_gen_load(v_UnsignedSatQ113__3);
          v_SatQ112__2 = iface.f_gen_load(v_UnsignedSatQ114__3);
        } else {
          const auto v_SignedSatQ119__3 = iface.f_decl_bv("SignedSatQ119__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ120__3 = iface.f_decl_bool("SignedSatQ120__3");
          const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If108__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp17));
          iface.f_gen_store(v_SignedSatQ119__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ120__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp17));
          const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If108__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp18));
          iface.f_gen_store(v_SignedSatQ119__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ120__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp18));
          iface.f_gen_store(v_SignedSatQ119__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If103__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If108__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ120__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp17));
          v_SatQ111__2 = iface.f_gen_load(v_SignedSatQ119__3);
          v_SatQ112__2 = iface.f_gen_load(v_SignedSatQ120__3);
        } // if
        const auto v_temp19 = iface.f_gen_branch(v_SatQ112__2);
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp19));
        auto v_If133__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If133__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If133__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If138__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If138__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If138__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ141__2 = typename Traits::rt_expr{};
        auto v_SatQ142__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ143__3 = iface.f_decl_bv("UnsignedSatQ143__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ144__3 = iface.f_decl_bool("UnsignedSatQ144__3");
          const auto v_temp20 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp20));
          iface.f_gen_store(v_UnsignedSatQ143__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ144__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp20));
          const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp21));
          iface.f_gen_store(v_UnsignedSatQ143__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ144__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp21));
          iface.f_gen_store(v_UnsignedSatQ143__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ144__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp20));
          v_SatQ141__2 = iface.f_gen_load(v_UnsignedSatQ143__3);
          v_SatQ142__2 = iface.f_gen_load(v_UnsignedSatQ144__3);
        } else {
          const auto v_SignedSatQ149__3 = iface.f_decl_bv("SignedSatQ149__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ150__3 = iface.f_decl_bool("SignedSatQ150__3");
          const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp22));
          iface.f_gen_store(v_SignedSatQ149__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ150__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp22));
          const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp23));
          iface.f_gen_store(v_SignedSatQ149__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ150__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp23));
          iface.f_gen_store(v_SignedSatQ149__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ150__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp22));
          v_SatQ141__2 = iface.f_gen_load(v_SignedSatQ149__3);
          v_SatQ142__2 = iface.f_gen_load(v_SignedSatQ150__3);
        } // if
        const auto v_temp24 = iface.f_gen_branch(v_SatQ142__2);
        iface.f_switch_context(iface.f_true_branch(v_temp24));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp24));
        auto v_If163__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If163__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If163__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If168__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If168__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If168__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ171__2 = typename Traits::rt_expr{};
        auto v_SatQ172__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ173__3 = iface.f_decl_bv("UnsignedSatQ173__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ174__3 = iface.f_decl_bool("UnsignedSatQ174__3");
          const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If168__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_UnsignedSatQ173__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ174__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If168__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_UnsignedSatQ173__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ174__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_UnsignedSatQ173__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If168__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ174__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp25));
          v_SatQ171__2 = iface.f_gen_load(v_UnsignedSatQ173__3);
          v_SatQ172__2 = iface.f_gen_load(v_UnsignedSatQ174__3);
        } else {
          const auto v_SignedSatQ179__3 = iface.f_decl_bv("SignedSatQ179__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ180__3 = iface.f_decl_bool("SignedSatQ180__3");
          const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If168__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_SignedSatQ179__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ180__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If168__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_SignedSatQ179__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ180__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_SignedSatQ179__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If163__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If168__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ180__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          v_SatQ171__2 = iface.f_gen_load(v_SignedSatQ179__3);
          v_SatQ172__2 = iface.f_gen_load(v_SignedSatQ180__3);
        } // if
        const auto v_temp29 = iface.f_gen_branch(v_SatQ172__2);
        iface.f_switch_context(iface.f_true_branch(v_temp29));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp29));
        auto v_If193__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If193__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If193__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If198__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If198__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If198__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ201__2 = typename Traits::rt_expr{};
        auto v_SatQ202__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ203__3 = iface.f_decl_bv("UnsignedSatQ203__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ204__3 = iface.f_decl_bool("UnsignedSatQ204__3");
          const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If193__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If198__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_UnsignedSatQ203__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ204__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If193__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If198__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_UnsignedSatQ203__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ204__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_UnsignedSatQ203__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If193__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If198__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ204__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          v_SatQ201__2 = iface.f_gen_load(v_UnsignedSatQ203__3);
          v_SatQ202__2 = iface.f_gen_load(v_UnsignedSatQ204__3);
        } else {
          const auto v_SignedSatQ209__3 = iface.f_decl_bv("SignedSatQ209__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ210__3 = iface.f_decl_bool("SignedSatQ210__3");
          const auto v_temp32 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If193__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If198__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(v_SignedSatQ209__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ210__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp32));
          const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If193__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If198__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_SignedSatQ209__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ210__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_SignedSatQ209__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If193__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If198__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ210__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          v_SatQ201__2 = iface.f_gen_load(v_SignedSatQ209__3);
          v_SatQ202__2 = iface.f_gen_load(v_SignedSatQ210__3);
        } // if
        const auto v_temp34 = iface.f_gen_branch(v_SatQ202__2);
        iface.f_switch_context(iface.f_true_branch(v_temp34));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp34));
        auto v_If223__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If223__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If223__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If228__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If228__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If228__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ231__2 = typename Traits::rt_expr{};
        auto v_SatQ232__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ233__3 = iface.f_decl_bv("UnsignedSatQ233__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ234__3 = iface.f_decl_bool("UnsignedSatQ234__3");
          const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(v_UnsignedSatQ233__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ234__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp35));
          const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp36));
          iface.f_gen_store(v_UnsignedSatQ233__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ234__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp36));
          iface.f_gen_store(v_UnsignedSatQ233__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ234__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          v_SatQ231__2 = iface.f_gen_load(v_UnsignedSatQ233__3);
          v_SatQ232__2 = iface.f_gen_load(v_UnsignedSatQ234__3);
        } else {
          const auto v_SignedSatQ239__3 = iface.f_decl_bv("SignedSatQ239__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ240__3 = iface.f_decl_bool("SignedSatQ240__3");
          const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp37));
          iface.f_gen_store(v_SignedSatQ239__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ240__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp37));
          const auto v_temp38 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp38));
          iface.f_gen_store(v_SignedSatQ239__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ240__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp38));
          iface.f_gen_store(v_SignedSatQ239__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ240__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp37));
          v_SatQ231__2 = iface.f_gen_load(v_SignedSatQ239__3);
          v_SatQ232__2 = iface.f_gen_load(v_SignedSatQ240__3);
        } // if
        const auto v_temp39 = iface.f_gen_branch(v_SatQ232__2);
        iface.f_switch_context(iface.f_true_branch(v_temp39));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp39));
        auto v_If253__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If253__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If253__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If258__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If258__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If258__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ261__2 = typename Traits::rt_expr{};
        auto v_SatQ262__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ263__3 = iface.f_decl_bv("UnsignedSatQ263__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ264__3 = iface.f_decl_bool("UnsignedSatQ264__3");
          const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If253__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp40));
          iface.f_gen_store(v_UnsignedSatQ263__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp40));
          const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If253__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp41));
          iface.f_gen_store(v_UnsignedSatQ263__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp41));
          iface.f_gen_store(v_UnsignedSatQ263__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If253__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp40));
          v_SatQ261__2 = iface.f_gen_load(v_UnsignedSatQ263__3);
          v_SatQ262__2 = iface.f_gen_load(v_UnsignedSatQ264__3);
        } else {
          const auto v_SignedSatQ269__3 = iface.f_decl_bv("SignedSatQ269__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ270__3 = iface.f_decl_bool("SignedSatQ270__3");
          const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If253__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp42));
          iface.f_gen_store(v_SignedSatQ269__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp42));
          const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If253__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp43));
          iface.f_gen_store(v_SignedSatQ269__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp43));
          iface.f_gen_store(v_SignedSatQ269__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If253__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If258__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp42));
          v_SatQ261__2 = iface.f_gen_load(v_SignedSatQ269__3);
          v_SatQ262__2 = iface.f_gen_load(v_SignedSatQ270__3);
        } // if
        const auto v_temp44 = iface.f_gen_branch(v_SatQ262__2);
        iface.f_switch_context(iface.f_true_branch(v_temp44));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp44));
        auto v_If283__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If283__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If283__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If288__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If288__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If288__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ291__2 = typename Traits::rt_expr{};
        auto v_SatQ292__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ293__3 = iface.f_decl_bv("UnsignedSatQ293__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ294__3 = iface.f_decl_bool("UnsignedSatQ294__3");
          const auto v_temp45 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If283__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If288__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp45));
          iface.f_gen_store(v_UnsignedSatQ293__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ294__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp45));
          const auto v_temp46 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If283__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If288__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp46));
          iface.f_gen_store(v_UnsignedSatQ293__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ294__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp46));
          iface.f_gen_store(v_UnsignedSatQ293__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If283__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If288__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ294__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp45));
          v_SatQ291__2 = iface.f_gen_load(v_UnsignedSatQ293__3);
          v_SatQ292__2 = iface.f_gen_load(v_UnsignedSatQ294__3);
        } else {
          const auto v_SignedSatQ299__3 = iface.f_decl_bv("SignedSatQ299__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ300__3 = iface.f_decl_bool("SignedSatQ300__3");
          const auto v_temp47 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If283__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If288__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp47));
          iface.f_gen_store(v_SignedSatQ299__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ300__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp47));
          const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If283__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If288__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp48));
          iface.f_gen_store(v_SignedSatQ299__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ300__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp48));
          iface.f_gen_store(v_SignedSatQ299__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If283__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If288__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ300__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp47));
          v_SatQ291__2 = iface.f_gen_load(v_SignedSatQ299__3);
          v_SatQ292__2 = iface.f_gen_load(v_SignedSatQ300__3);
        } // if
        const auto v_temp49 = iface.f_gen_branch(v_SatQ292__2);
        iface.f_switch_context(iface.f_true_branch(v_temp49));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp49));
        auto v_If313__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If313__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If313__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If318__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If318__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If318__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ321__2 = typename Traits::rt_expr{};
        auto v_SatQ322__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ323__3 = iface.f_decl_bv("UnsignedSatQ323__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ324__3 = iface.f_decl_bool("UnsignedSatQ324__3");
          const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If313__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If318__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp50));
          iface.f_gen_store(v_UnsignedSatQ323__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ324__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp50));
          const auto v_temp51 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If313__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If318__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp51));
          iface.f_gen_store(v_UnsignedSatQ323__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ324__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp51));
          iface.f_gen_store(v_UnsignedSatQ323__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If313__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If318__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ324__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp50));
          v_SatQ321__2 = iface.f_gen_load(v_UnsignedSatQ323__3);
          v_SatQ322__2 = iface.f_gen_load(v_UnsignedSatQ324__3);
        } else {
          const auto v_SignedSatQ329__3 = iface.f_decl_bv("SignedSatQ329__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ330__3 = iface.f_decl_bool("SignedSatQ330__3");
          const auto v_temp52 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If313__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If318__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp52));
          iface.f_gen_store(v_SignedSatQ329__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ330__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp52));
          const auto v_temp53 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If313__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If318__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp53));
          iface.f_gen_store(v_SignedSatQ329__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ330__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp53));
          iface.f_gen_store(v_SignedSatQ329__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If313__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If318__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ330__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp52));
          v_SatQ321__2 = iface.f_gen_load(v_SignedSatQ329__3);
          v_SatQ322__2 = iface.f_gen_load(v_SignedSatQ330__3);
        } // if
        const auto v_temp54 = iface.f_gen_branch(v_SatQ322__2);
        iface.f_switch_context(iface.f_true_branch(v_temp54));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp54));
        auto v_If343__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If343__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If343__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If348__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If348__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If348__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ351__2 = typename Traits::rt_expr{};
        auto v_SatQ352__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ353__3 = iface.f_decl_bv("UnsignedSatQ353__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ354__3 = iface.f_decl_bool("UnsignedSatQ354__3");
          const auto v_temp55 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If343__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If348__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp55));
          iface.f_gen_store(v_UnsignedSatQ353__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ354__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp55));
          const auto v_temp56 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If343__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If348__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp56));
          iface.f_gen_store(v_UnsignedSatQ353__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ354__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp56));
          iface.f_gen_store(v_UnsignedSatQ353__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If343__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If348__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ354__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp55));
          v_SatQ351__2 = iface.f_gen_load(v_UnsignedSatQ353__3);
          v_SatQ352__2 = iface.f_gen_load(v_UnsignedSatQ354__3);
        } else {
          const auto v_SignedSatQ359__3 = iface.f_decl_bv("SignedSatQ359__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ360__3 = iface.f_decl_bool("SignedSatQ360__3");
          const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If343__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If348__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp57));
          iface.f_gen_store(v_SignedSatQ359__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ360__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp57));
          const auto v_temp58 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If343__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If348__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp58));
          iface.f_gen_store(v_SignedSatQ359__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ360__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp58));
          iface.f_gen_store(v_SignedSatQ359__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If343__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If348__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ360__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp57));
          v_SatQ351__2 = iface.f_gen_load(v_SignedSatQ359__3);
          v_SatQ352__2 = iface.f_gen_load(v_SignedSatQ360__3);
        } // if
        const auto v_temp59 = iface.f_gen_branch(v_SatQ352__2);
        iface.f_switch_context(iface.f_true_branch(v_temp59));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp59));
        auto v_If373__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If373__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If373__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If378__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If378__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If378__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ381__2 = typename Traits::rt_expr{};
        auto v_SatQ382__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ383__3 = iface.f_decl_bv("UnsignedSatQ383__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ384__3 = iface.f_decl_bool("UnsignedSatQ384__3");
          const auto v_temp60 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If373__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If378__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp60));
          iface.f_gen_store(v_UnsignedSatQ383__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ384__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp60));
          const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If373__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If378__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp61));
          iface.f_gen_store(v_UnsignedSatQ383__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ384__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp61));
          iface.f_gen_store(v_UnsignedSatQ383__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If373__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If378__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ384__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp60));
          v_SatQ381__2 = iface.f_gen_load(v_UnsignedSatQ383__3);
          v_SatQ382__2 = iface.f_gen_load(v_UnsignedSatQ384__3);
        } else {
          const auto v_SignedSatQ389__3 = iface.f_decl_bv("SignedSatQ389__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ390__3 = iface.f_decl_bool("SignedSatQ390__3");
          const auto v_temp62 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If373__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If378__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp62));
          iface.f_gen_store(v_SignedSatQ389__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ390__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp62));
          const auto v_temp63 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If373__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If378__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp63));
          iface.f_gen_store(v_SignedSatQ389__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ390__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp63));
          iface.f_gen_store(v_SignedSatQ389__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If373__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If378__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ390__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp62));
          v_SatQ381__2 = iface.f_gen_load(v_SignedSatQ389__3);
          v_SatQ382__2 = iface.f_gen_load(v_SignedSatQ390__3);
        } // if
        const auto v_temp64 = iface.f_gen_branch(v_SatQ382__2);
        iface.f_switch_context(iface.f_true_branch(v_temp64));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp64));
        auto v_If403__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If403__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If403__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If408__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If408__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If408__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ411__2 = typename Traits::rt_expr{};
        auto v_SatQ412__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ413__3 = iface.f_decl_bv("UnsignedSatQ413__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ414__3 = iface.f_decl_bool("UnsignedSatQ414__3");
          const auto v_temp65 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If403__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If408__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp65));
          iface.f_gen_store(v_UnsignedSatQ413__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp65));
          const auto v_temp66 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If403__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If408__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp66));
          iface.f_gen_store(v_UnsignedSatQ413__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp66));
          iface.f_gen_store(v_UnsignedSatQ413__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If403__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If408__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp65));
          v_SatQ411__2 = iface.f_gen_load(v_UnsignedSatQ413__3);
          v_SatQ412__2 = iface.f_gen_load(v_UnsignedSatQ414__3);
        } else {
          const auto v_SignedSatQ419__3 = iface.f_decl_bv("SignedSatQ419__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ420__3 = iface.f_decl_bool("SignedSatQ420__3");
          const auto v_temp67 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If403__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If408__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp67));
          iface.f_gen_store(v_SignedSatQ419__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp67));
          const auto v_temp68 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If403__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If408__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp68));
          iface.f_gen_store(v_SignedSatQ419__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp68));
          iface.f_gen_store(v_SignedSatQ419__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If403__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If408__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp67));
          v_SatQ411__2 = iface.f_gen_load(v_SignedSatQ419__3);
          v_SatQ412__2 = iface.f_gen_load(v_SignedSatQ420__3);
        } // if
        const auto v_temp69 = iface.f_gen_branch(v_SatQ412__2);
        iface.f_switch_context(iface.f_true_branch(v_temp69));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp69));
        auto v_If433__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If433__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If433__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If438__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If438__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If438__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ441__2 = typename Traits::rt_expr{};
        auto v_SatQ442__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ443__3 = iface.f_decl_bv("UnsignedSatQ443__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ444__3 = iface.f_decl_bool("UnsignedSatQ444__3");
          const auto v_temp70 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If433__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If438__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp70));
          iface.f_gen_store(v_UnsignedSatQ443__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp70));
          const auto v_temp71 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If433__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If438__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp71));
          iface.f_gen_store(v_UnsignedSatQ443__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp71));
          iface.f_gen_store(v_UnsignedSatQ443__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If433__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If438__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp70));
          v_SatQ441__2 = iface.f_gen_load(v_UnsignedSatQ443__3);
          v_SatQ442__2 = iface.f_gen_load(v_UnsignedSatQ444__3);
        } else {
          const auto v_SignedSatQ449__3 = iface.f_decl_bv("SignedSatQ449__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ450__3 = iface.f_decl_bool("SignedSatQ450__3");
          const auto v_temp72 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If433__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If438__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp72));
          iface.f_gen_store(v_SignedSatQ449__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp72));
          const auto v_temp73 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If433__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If438__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp73));
          iface.f_gen_store(v_SignedSatQ449__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp73));
          iface.f_gen_store(v_SignedSatQ449__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If433__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If438__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp72));
          v_SatQ441__2 = iface.f_gen_load(v_SignedSatQ449__3);
          v_SatQ442__2 = iface.f_gen_load(v_SignedSatQ450__3);
        } // if
        const auto v_temp74 = iface.f_gen_branch(v_SatQ442__2);
        iface.f_switch_context(iface.f_true_branch(v_temp74));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp74));
        auto v_If463__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If463__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If463__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If468__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If468__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If468__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp9__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ471__2 = typename Traits::rt_expr{};
        auto v_SatQ472__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ473__3 = iface.f_decl_bv("UnsignedSatQ473__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ474__3 = iface.f_decl_bool("UnsignedSatQ474__3");
          const auto v_temp75 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If463__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If468__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp75));
          iface.f_gen_store(v_UnsignedSatQ473__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ474__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp75));
          const auto v_temp76 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If463__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If468__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp76));
          iface.f_gen_store(v_UnsignedSatQ473__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ474__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp76));
          iface.f_gen_store(v_UnsignedSatQ473__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If463__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If468__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ474__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp75));
          v_SatQ471__2 = iface.f_gen_load(v_UnsignedSatQ473__3);
          v_SatQ472__2 = iface.f_gen_load(v_UnsignedSatQ474__3);
        } else {
          const auto v_SignedSatQ479__3 = iface.f_decl_bv("SignedSatQ479__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ480__3 = iface.f_decl_bool("SignedSatQ480__3");
          const auto v_temp77 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If463__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If468__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp77));
          iface.f_gen_store(v_SignedSatQ479__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ480__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp77));
          const auto v_temp78 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If463__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If468__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp78));
          iface.f_gen_store(v_SignedSatQ479__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ480__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp78));
          iface.f_gen_store(v_SignedSatQ479__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If463__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If468__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ480__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp77));
          v_SatQ471__2 = iface.f_gen_load(v_SignedSatQ479__3);
          v_SatQ472__2 = iface.f_gen_load(v_SignedSatQ480__3);
        } // if
        const auto v_temp79 = iface.f_gen_branch(v_SatQ472__2);
        iface.f_switch_context(iface.f_true_branch(v_temp79));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp79));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ471__2, iface.f_gen_append_bits(v_SatQ441__2, iface.f_gen_append_bits(v_SatQ411__2, iface.f_gen_append_bits(v_SatQ381__2, iface.f_gen_append_bits(v_SatQ351__2, iface.f_gen_append_bits(v_SatQ321__2, iface.f_gen_append_bits(v_SatQ291__2, iface.f_gen_append_bits(v_SatQ261__2, iface.f_gen_append_bits(v_SatQ231__2, iface.f_gen_append_bits(v_SatQ201__2, iface.f_gen_append_bits(v_SatQ171__2, iface.f_gen_append_bits(v_SatQ141__2, iface.f_gen_append_bits(v_SatQ111__2, iface.f_gen_append_bits(v_SatQ81__2, iface.f_gen_append_bits(v_SatQ51__2, v_SatQ20__2))))))))))))))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp498__2 = typename Traits::rt_expr{};
        v_Exp498__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp501__2 = typename Traits::rt_expr{};
        v_Exp501__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If504__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If504__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If504__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If509__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If509__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If509__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ512__2 = typename Traits::rt_expr{};
        auto v_SatQ513__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ514__3 = iface.f_decl_bv("UnsignedSatQ514__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ515__3 = iface.f_decl_bool("UnsignedSatQ515__3");
          const auto v_temp80 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If504__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If509__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp80));
          iface.f_gen_store(v_UnsignedSatQ514__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ515__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp80));
          const auto v_temp81 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If504__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If509__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp81));
          iface.f_gen_store(v_UnsignedSatQ514__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ515__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp81));
          iface.f_gen_store(v_UnsignedSatQ514__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If504__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If509__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ515__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp80));
          v_SatQ512__2 = iface.f_gen_load(v_UnsignedSatQ514__3);
          v_SatQ513__2 = iface.f_gen_load(v_UnsignedSatQ515__3);
        } else {
          const auto v_SignedSatQ520__3 = iface.f_decl_bv("SignedSatQ520__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ521__3 = iface.f_decl_bool("SignedSatQ521__3");
          const auto v_temp82 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If504__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If509__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp82));
          iface.f_gen_store(v_SignedSatQ520__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ521__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp82));
          const auto v_temp83 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If504__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If509__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp83));
          iface.f_gen_store(v_SignedSatQ520__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ521__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp83));
          iface.f_gen_store(v_SignedSatQ520__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If504__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If509__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ521__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp82));
          v_SatQ512__2 = iface.f_gen_load(v_SignedSatQ520__3);
          v_SatQ513__2 = iface.f_gen_load(v_SignedSatQ521__3);
        } // if
        const auto v_temp84 = iface.f_gen_branch(v_SatQ513__2);
        iface.f_switch_context(iface.f_true_branch(v_temp84));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp84));
        auto v_If535__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If535__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If535__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If540__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If540__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If540__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ543__2 = typename Traits::rt_expr{};
        auto v_SatQ544__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ545__3 = iface.f_decl_bv("UnsignedSatQ545__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ546__3 = iface.f_decl_bool("UnsignedSatQ546__3");
          const auto v_temp85 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If535__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If540__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp85));
          iface.f_gen_store(v_UnsignedSatQ545__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ546__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp85));
          const auto v_temp86 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If535__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If540__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp86));
          iface.f_gen_store(v_UnsignedSatQ545__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ546__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp86));
          iface.f_gen_store(v_UnsignedSatQ545__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If535__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If540__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ546__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp85));
          v_SatQ543__2 = iface.f_gen_load(v_UnsignedSatQ545__3);
          v_SatQ544__2 = iface.f_gen_load(v_UnsignedSatQ546__3);
        } else {
          const auto v_SignedSatQ551__3 = iface.f_decl_bv("SignedSatQ551__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ552__3 = iface.f_decl_bool("SignedSatQ552__3");
          const auto v_temp87 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If535__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If540__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp87));
          iface.f_gen_store(v_SignedSatQ551__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ552__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp87));
          const auto v_temp88 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If535__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If540__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp88));
          iface.f_gen_store(v_SignedSatQ551__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ552__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp88));
          iface.f_gen_store(v_SignedSatQ551__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If535__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If540__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ552__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp87));
          v_SatQ543__2 = iface.f_gen_load(v_SignedSatQ551__3);
          v_SatQ544__2 = iface.f_gen_load(v_SignedSatQ552__3);
        } // if
        const auto v_temp89 = iface.f_gen_branch(v_SatQ544__2);
        iface.f_switch_context(iface.f_true_branch(v_temp89));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp89));
        auto v_If565__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If565__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If565__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If570__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If570__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If570__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ573__2 = typename Traits::rt_expr{};
        auto v_SatQ574__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ575__3 = iface.f_decl_bv("UnsignedSatQ575__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ576__3 = iface.f_decl_bool("UnsignedSatQ576__3");
          const auto v_temp90 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If565__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If570__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp90));
          iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ576__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp90));
          const auto v_temp91 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If565__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If570__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp91));
          iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ576__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp91));
          iface.f_gen_store(v_UnsignedSatQ575__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If565__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If570__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ576__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp90));
          v_SatQ573__2 = iface.f_gen_load(v_UnsignedSatQ575__3);
          v_SatQ574__2 = iface.f_gen_load(v_UnsignedSatQ576__3);
        } else {
          const auto v_SignedSatQ581__3 = iface.f_decl_bv("SignedSatQ581__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ582__3 = iface.f_decl_bool("SignedSatQ582__3");
          const auto v_temp92 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If565__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If570__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp92));
          iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ582__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp92));
          const auto v_temp93 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If565__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If570__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp93));
          iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ582__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp93));
          iface.f_gen_store(v_SignedSatQ581__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If565__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If570__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ582__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp92));
          v_SatQ573__2 = iface.f_gen_load(v_SignedSatQ581__3);
          v_SatQ574__2 = iface.f_gen_load(v_SignedSatQ582__3);
        } // if
        const auto v_temp94 = iface.f_gen_branch(v_SatQ574__2);
        iface.f_switch_context(iface.f_true_branch(v_temp94));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp94));
        auto v_If595__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If595__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If595__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If600__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If600__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If600__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ603__2 = typename Traits::rt_expr{};
        auto v_SatQ604__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ605__3 = iface.f_decl_bv("UnsignedSatQ605__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ606__3 = iface.f_decl_bool("UnsignedSatQ606__3");
          const auto v_temp95 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If595__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If600__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp95));
          iface.f_gen_store(v_UnsignedSatQ605__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ606__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp95));
          const auto v_temp96 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If595__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If600__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp96));
          iface.f_gen_store(v_UnsignedSatQ605__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ606__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp96));
          iface.f_gen_store(v_UnsignedSatQ605__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If595__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If600__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ606__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp95));
          v_SatQ603__2 = iface.f_gen_load(v_UnsignedSatQ605__3);
          v_SatQ604__2 = iface.f_gen_load(v_UnsignedSatQ606__3);
        } else {
          const auto v_SignedSatQ611__3 = iface.f_decl_bv("SignedSatQ611__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ612__3 = iface.f_decl_bool("SignedSatQ612__3");
          const auto v_temp97 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If595__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If600__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp97));
          iface.f_gen_store(v_SignedSatQ611__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ612__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp97));
          const auto v_temp98 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If595__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If600__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp98));
          iface.f_gen_store(v_SignedSatQ611__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ612__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp98));
          iface.f_gen_store(v_SignedSatQ611__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If595__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If600__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ612__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp97));
          v_SatQ603__2 = iface.f_gen_load(v_SignedSatQ611__3);
          v_SatQ604__2 = iface.f_gen_load(v_SignedSatQ612__3);
        } // if
        const auto v_temp99 = iface.f_gen_branch(v_SatQ604__2);
        iface.f_switch_context(iface.f_true_branch(v_temp99));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp99));
        auto v_If625__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If625__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If625__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If630__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If630__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If630__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ633__2 = typename Traits::rt_expr{};
        auto v_SatQ634__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ635__3 = iface.f_decl_bv("UnsignedSatQ635__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ636__3 = iface.f_decl_bool("UnsignedSatQ636__3");
          const auto v_temp100 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If625__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp100));
          iface.f_gen_store(v_UnsignedSatQ635__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ636__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp100));
          const auto v_temp101 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If625__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp101));
          iface.f_gen_store(v_UnsignedSatQ635__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ636__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp101));
          iface.f_gen_store(v_UnsignedSatQ635__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If625__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ636__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp100));
          v_SatQ633__2 = iface.f_gen_load(v_UnsignedSatQ635__3);
          v_SatQ634__2 = iface.f_gen_load(v_UnsignedSatQ636__3);
        } else {
          const auto v_SignedSatQ641__3 = iface.f_decl_bv("SignedSatQ641__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ642__3 = iface.f_decl_bool("SignedSatQ642__3");
          const auto v_temp102 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If625__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp102));
          iface.f_gen_store(v_SignedSatQ641__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ642__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp102));
          const auto v_temp103 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If625__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp103));
          iface.f_gen_store(v_SignedSatQ641__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ642__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp103));
          iface.f_gen_store(v_SignedSatQ641__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If625__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If630__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ642__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp102));
          v_SatQ633__2 = iface.f_gen_load(v_SignedSatQ641__3);
          v_SatQ634__2 = iface.f_gen_load(v_SignedSatQ642__3);
        } // if
        const auto v_temp104 = iface.f_gen_branch(v_SatQ634__2);
        iface.f_switch_context(iface.f_true_branch(v_temp104));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp104));
        auto v_If655__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If655__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If655__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If660__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If660__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If660__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ663__2 = typename Traits::rt_expr{};
        auto v_SatQ664__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ665__3 = iface.f_decl_bv("UnsignedSatQ665__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ666__3 = iface.f_decl_bool("UnsignedSatQ666__3");
          const auto v_temp105 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If655__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp105));
          iface.f_gen_store(v_UnsignedSatQ665__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ666__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp105));
          const auto v_temp106 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If655__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp106));
          iface.f_gen_store(v_UnsignedSatQ665__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ666__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp106));
          iface.f_gen_store(v_UnsignedSatQ665__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If655__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ666__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp105));
          v_SatQ663__2 = iface.f_gen_load(v_UnsignedSatQ665__3);
          v_SatQ664__2 = iface.f_gen_load(v_UnsignedSatQ666__3);
        } else {
          const auto v_SignedSatQ671__3 = iface.f_decl_bv("SignedSatQ671__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ672__3 = iface.f_decl_bool("SignedSatQ672__3");
          const auto v_temp107 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If655__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp107));
          iface.f_gen_store(v_SignedSatQ671__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ672__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp107));
          const auto v_temp108 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If655__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp108));
          iface.f_gen_store(v_SignedSatQ671__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ672__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp108));
          iface.f_gen_store(v_SignedSatQ671__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If655__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If660__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ672__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp107));
          v_SatQ663__2 = iface.f_gen_load(v_SignedSatQ671__3);
          v_SatQ664__2 = iface.f_gen_load(v_SignedSatQ672__3);
        } // if
        const auto v_temp109 = iface.f_gen_branch(v_SatQ664__2);
        iface.f_switch_context(iface.f_true_branch(v_temp109));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp109));
        auto v_If685__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If685__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If685__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If690__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If690__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If690__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ693__2 = typename Traits::rt_expr{};
        auto v_SatQ694__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ695__3 = iface.f_decl_bv("UnsignedSatQ695__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ696__3 = iface.f_decl_bool("UnsignedSatQ696__3");
          const auto v_temp110 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If685__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If690__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp110));
          iface.f_gen_store(v_UnsignedSatQ695__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp110));
          const auto v_temp111 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If685__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If690__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp111));
          iface.f_gen_store(v_UnsignedSatQ695__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp111));
          iface.f_gen_store(v_UnsignedSatQ695__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If685__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If690__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp110));
          v_SatQ693__2 = iface.f_gen_load(v_UnsignedSatQ695__3);
          v_SatQ694__2 = iface.f_gen_load(v_UnsignedSatQ696__3);
        } else {
          const auto v_SignedSatQ701__3 = iface.f_decl_bv("SignedSatQ701__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ702__3 = iface.f_decl_bool("SignedSatQ702__3");
          const auto v_temp112 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If685__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If690__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp112));
          iface.f_gen_store(v_SignedSatQ701__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp112));
          const auto v_temp113 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If685__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If690__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp113));
          iface.f_gen_store(v_SignedSatQ701__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp113));
          iface.f_gen_store(v_SignedSatQ701__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If685__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If690__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp112));
          v_SatQ693__2 = iface.f_gen_load(v_SignedSatQ701__3);
          v_SatQ694__2 = iface.f_gen_load(v_SignedSatQ702__3);
        } // if
        const auto v_temp114 = iface.f_gen_branch(v_SatQ694__2);
        iface.f_switch_context(iface.f_true_branch(v_temp114));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp114));
        auto v_If715__2 = typename Traits::rt_expr{};
        if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          v_If715__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If715__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp498__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If720__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If720__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If720__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp501__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ723__2 = typename Traits::rt_expr{};
        auto v_SatQ724__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ725__3 = iface.f_decl_bv("UnsignedSatQ725__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ726__3 = iface.f_decl_bool("UnsignedSatQ726__3");
          const auto v_temp115 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If715__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If720__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp115));
          iface.f_gen_store(v_UnsignedSatQ725__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ726__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp115));
          const auto v_temp116 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If715__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If720__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp116));
          iface.f_gen_store(v_UnsignedSatQ725__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ726__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp116));
          iface.f_gen_store(v_UnsignedSatQ725__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If715__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If720__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ726__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp115));
          v_SatQ723__2 = iface.f_gen_load(v_UnsignedSatQ725__3);
          v_SatQ724__2 = iface.f_gen_load(v_UnsignedSatQ726__3);
        } else {
          const auto v_SignedSatQ731__3 = iface.f_decl_bv("SignedSatQ731__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ732__3 = iface.f_decl_bool("SignedSatQ732__3");
          const auto v_temp117 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If715__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If720__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp117));
          iface.f_gen_store(v_SignedSatQ731__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ732__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp117));
          const auto v_temp118 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If715__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If720__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp118));
          iface.f_gen_store(v_SignedSatQ731__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ732__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp118));
          iface.f_gen_store(v_SignedSatQ731__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If715__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If720__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ732__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp117));
          v_SatQ723__2 = iface.f_gen_load(v_SignedSatQ731__3);
          v_SatQ724__2 = iface.f_gen_load(v_SignedSatQ732__3);
        } // if
        const auto v_temp119 = iface.f_gen_branch(v_SatQ724__2);
        iface.f_switch_context(iface.f_true_branch(v_temp119));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp119));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ723__2, iface.f_gen_append_bits(v_SatQ693__2, iface.f_gen_append_bits(v_SatQ663__2, iface.f_gen_append_bits(v_SatQ633__2, iface.f_gen_append_bits(v_SatQ603__2, iface.f_gen_append_bits(v_SatQ573__2, iface.f_gen_append_bits(v_SatQ543__2, v_SatQ512__2))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp751__2 = typename Traits::rt_expr{};
          v_Exp751__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp754__2 = typename Traits::rt_expr{};
          v_Exp754__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If757__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If757__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If757__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If762__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If762__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If762__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ765__2 = typename Traits::rt_expr{};
          auto v_SatQ766__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ767__3 = iface.f_decl_bv("UnsignedSatQ767__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ768__3 = iface.f_decl_bool("UnsignedSatQ768__3");
            const auto v_temp120 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If757__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If762__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp120));
            iface.f_gen_store(v_UnsignedSatQ767__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ768__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp120));
            const auto v_temp121 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If757__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If762__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp121));
            iface.f_gen_store(v_UnsignedSatQ767__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ768__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp121));
            iface.f_gen_store(v_UnsignedSatQ767__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If757__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If762__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ768__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp120));
            v_SatQ765__2 = iface.f_gen_load(v_UnsignedSatQ767__3);
            v_SatQ766__2 = iface.f_gen_load(v_UnsignedSatQ768__3);
          } else {
            const auto v_SignedSatQ773__3 = iface.f_decl_bv("SignedSatQ773__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ774__3 = iface.f_decl_bool("SignedSatQ774__3");
            const auto v_temp122 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If757__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If762__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp122));
            iface.f_gen_store(v_SignedSatQ773__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ774__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp122));
            const auto v_temp123 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If757__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If762__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp123));
            iface.f_gen_store(v_SignedSatQ773__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ774__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp123));
            iface.f_gen_store(v_SignedSatQ773__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If757__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If762__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ774__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp122));
            v_SatQ765__2 = iface.f_gen_load(v_SignedSatQ773__3);
            v_SatQ766__2 = iface.f_gen_load(v_SignedSatQ774__3);
          } // if
          const auto v_temp124 = iface.f_gen_branch(v_SatQ766__2);
          iface.f_switch_context(iface.f_true_branch(v_temp124));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp124));
          auto v_If788__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If788__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If788__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If793__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If793__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If793__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ796__2 = typename Traits::rt_expr{};
          auto v_SatQ797__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ798__3 = iface.f_decl_bv("UnsignedSatQ798__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ799__3 = iface.f_decl_bool("UnsignedSatQ799__3");
            const auto v_temp125 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If788__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If793__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp125));
            iface.f_gen_store(v_UnsignedSatQ798__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ799__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp125));
            const auto v_temp126 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If788__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If793__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp126));
            iface.f_gen_store(v_UnsignedSatQ798__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ799__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp126));
            iface.f_gen_store(v_UnsignedSatQ798__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If788__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If793__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ799__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp125));
            v_SatQ796__2 = iface.f_gen_load(v_UnsignedSatQ798__3);
            v_SatQ797__2 = iface.f_gen_load(v_UnsignedSatQ799__3);
          } else {
            const auto v_SignedSatQ804__3 = iface.f_decl_bv("SignedSatQ804__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ805__3 = iface.f_decl_bool("SignedSatQ805__3");
            const auto v_temp127 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If788__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If793__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp127));
            iface.f_gen_store(v_SignedSatQ804__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ805__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp127));
            const auto v_temp128 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If788__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If793__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp128));
            iface.f_gen_store(v_SignedSatQ804__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ805__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp128));
            iface.f_gen_store(v_SignedSatQ804__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If788__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If793__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ805__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp127));
            v_SatQ796__2 = iface.f_gen_load(v_SignedSatQ804__3);
            v_SatQ797__2 = iface.f_gen_load(v_SignedSatQ805__3);
          } // if
          const auto v_temp129 = iface.f_gen_branch(v_SatQ797__2);
          iface.f_switch_context(iface.f_true_branch(v_temp129));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp129));
          auto v_If818__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If818__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If818__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If823__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If823__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If823__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ826__2 = typename Traits::rt_expr{};
          auto v_SatQ827__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ828__3 = iface.f_decl_bv("UnsignedSatQ828__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ829__3 = iface.f_decl_bool("UnsignedSatQ829__3");
            const auto v_temp130 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If818__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If823__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp130));
            iface.f_gen_store(v_UnsignedSatQ828__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ829__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp130));
            const auto v_temp131 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If818__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If823__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp131));
            iface.f_gen_store(v_UnsignedSatQ828__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ829__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp131));
            iface.f_gen_store(v_UnsignedSatQ828__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If818__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If823__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ829__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp130));
            v_SatQ826__2 = iface.f_gen_load(v_UnsignedSatQ828__3);
            v_SatQ827__2 = iface.f_gen_load(v_UnsignedSatQ829__3);
          } else {
            const auto v_SignedSatQ834__3 = iface.f_decl_bv("SignedSatQ834__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ835__3 = iface.f_decl_bool("SignedSatQ835__3");
            const auto v_temp132 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If818__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If823__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp132));
            iface.f_gen_store(v_SignedSatQ834__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ835__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp132));
            const auto v_temp133 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If818__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If823__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp133));
            iface.f_gen_store(v_SignedSatQ834__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ835__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp133));
            iface.f_gen_store(v_SignedSatQ834__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If818__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If823__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ835__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp132));
            v_SatQ826__2 = iface.f_gen_load(v_SignedSatQ834__3);
            v_SatQ827__2 = iface.f_gen_load(v_SignedSatQ835__3);
          } // if
          const auto v_temp134 = iface.f_gen_branch(v_SatQ827__2);
          iface.f_switch_context(iface.f_true_branch(v_temp134));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp134));
          auto v_If848__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If848__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If848__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If853__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If853__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If853__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ856__2 = typename Traits::rt_expr{};
          auto v_SatQ857__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ858__3 = iface.f_decl_bv("UnsignedSatQ858__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ859__3 = iface.f_decl_bool("UnsignedSatQ859__3");
            const auto v_temp135 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If848__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If853__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp135));
            iface.f_gen_store(v_UnsignedSatQ858__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp135));
            const auto v_temp136 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If848__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If853__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp136));
            iface.f_gen_store(v_UnsignedSatQ858__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp136));
            iface.f_gen_store(v_UnsignedSatQ858__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If848__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If853__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp135));
            v_SatQ856__2 = iface.f_gen_load(v_UnsignedSatQ858__3);
            v_SatQ857__2 = iface.f_gen_load(v_UnsignedSatQ859__3);
          } else {
            const auto v_SignedSatQ864__3 = iface.f_decl_bv("SignedSatQ864__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ865__3 = iface.f_decl_bool("SignedSatQ865__3");
            const auto v_temp137 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If848__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If853__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp137));
            iface.f_gen_store(v_SignedSatQ864__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp137));
            const auto v_temp138 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If848__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If853__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp138));
            iface.f_gen_store(v_SignedSatQ864__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp138));
            iface.f_gen_store(v_SignedSatQ864__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If848__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If853__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp137));
            v_SatQ856__2 = iface.f_gen_load(v_SignedSatQ864__3);
            v_SatQ857__2 = iface.f_gen_load(v_SignedSatQ865__3);
          } // if
          const auto v_temp139 = iface.f_gen_branch(v_SatQ857__2);
          iface.f_switch_context(iface.f_true_branch(v_temp139));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp139));
          auto v_If878__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If878__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If878__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If883__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If883__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If883__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ886__2 = typename Traits::rt_expr{};
          auto v_SatQ887__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ888__3 = iface.f_decl_bv("UnsignedSatQ888__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ889__3 = iface.f_decl_bool("UnsignedSatQ889__3");
            const auto v_temp140 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If878__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If883__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp140));
            iface.f_gen_store(v_UnsignedSatQ888__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ889__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp140));
            const auto v_temp141 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If878__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If883__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp141));
            iface.f_gen_store(v_UnsignedSatQ888__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ889__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp141));
            iface.f_gen_store(v_UnsignedSatQ888__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If878__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If883__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ889__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp140));
            v_SatQ886__2 = iface.f_gen_load(v_UnsignedSatQ888__3);
            v_SatQ887__2 = iface.f_gen_load(v_UnsignedSatQ889__3);
          } else {
            const auto v_SignedSatQ894__3 = iface.f_decl_bv("SignedSatQ894__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ895__3 = iface.f_decl_bool("SignedSatQ895__3");
            const auto v_temp142 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If878__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If883__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp142));
            iface.f_gen_store(v_SignedSatQ894__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ895__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp142));
            const auto v_temp143 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If878__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If883__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp143));
            iface.f_gen_store(v_SignedSatQ894__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ895__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp143));
            iface.f_gen_store(v_SignedSatQ894__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If878__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If883__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ895__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp142));
            v_SatQ886__2 = iface.f_gen_load(v_SignedSatQ894__3);
            v_SatQ887__2 = iface.f_gen_load(v_SignedSatQ895__3);
          } // if
          const auto v_temp144 = iface.f_gen_branch(v_SatQ887__2);
          iface.f_switch_context(iface.f_true_branch(v_temp144));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp144));
          auto v_If908__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If908__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If908__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If913__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If913__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If913__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ916__2 = typename Traits::rt_expr{};
          auto v_SatQ917__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ918__3 = iface.f_decl_bv("UnsignedSatQ918__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ919__3 = iface.f_decl_bool("UnsignedSatQ919__3");
            const auto v_temp145 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If908__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If913__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp145));
            iface.f_gen_store(v_UnsignedSatQ918__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp145));
            const auto v_temp146 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If908__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If913__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp146));
            iface.f_gen_store(v_UnsignedSatQ918__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp146));
            iface.f_gen_store(v_UnsignedSatQ918__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If908__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If913__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp145));
            v_SatQ916__2 = iface.f_gen_load(v_UnsignedSatQ918__3);
            v_SatQ917__2 = iface.f_gen_load(v_UnsignedSatQ919__3);
          } else {
            const auto v_SignedSatQ924__3 = iface.f_decl_bv("SignedSatQ924__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ925__3 = iface.f_decl_bool("SignedSatQ925__3");
            const auto v_temp147 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If908__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If913__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp147));
            iface.f_gen_store(v_SignedSatQ924__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp147));
            const auto v_temp148 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If908__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If913__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp148));
            iface.f_gen_store(v_SignedSatQ924__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp148));
            iface.f_gen_store(v_SignedSatQ924__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If908__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If913__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp147));
            v_SatQ916__2 = iface.f_gen_load(v_SignedSatQ924__3);
            v_SatQ917__2 = iface.f_gen_load(v_SignedSatQ925__3);
          } // if
          const auto v_temp149 = iface.f_gen_branch(v_SatQ917__2);
          iface.f_switch_context(iface.f_true_branch(v_temp149));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp149));
          auto v_If938__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If938__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If938__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If943__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If943__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If943__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ946__2 = typename Traits::rt_expr{};
          auto v_SatQ947__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ948__3 = iface.f_decl_bv("UnsignedSatQ948__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ949__3 = iface.f_decl_bool("UnsignedSatQ949__3");
            const auto v_temp150 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If938__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If943__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp150));
            iface.f_gen_store(v_UnsignedSatQ948__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ949__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp150));
            const auto v_temp151 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If938__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If943__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp151));
            iface.f_gen_store(v_UnsignedSatQ948__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ949__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp151));
            iface.f_gen_store(v_UnsignedSatQ948__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If938__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If943__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ949__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp150));
            v_SatQ946__2 = iface.f_gen_load(v_UnsignedSatQ948__3);
            v_SatQ947__2 = iface.f_gen_load(v_UnsignedSatQ949__3);
          } else {
            const auto v_SignedSatQ954__3 = iface.f_decl_bv("SignedSatQ954__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ955__3 = iface.f_decl_bool("SignedSatQ955__3");
            const auto v_temp152 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If938__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If943__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp152));
            iface.f_gen_store(v_SignedSatQ954__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ955__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp152));
            const auto v_temp153 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If938__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If943__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp153));
            iface.f_gen_store(v_SignedSatQ954__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ955__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp153));
            iface.f_gen_store(v_SignedSatQ954__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If938__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If943__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ955__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp152));
            v_SatQ946__2 = iface.f_gen_load(v_SignedSatQ954__3);
            v_SatQ947__2 = iface.f_gen_load(v_SignedSatQ955__3);
          } // if
          const auto v_temp154 = iface.f_gen_branch(v_SatQ947__2);
          iface.f_switch_context(iface.f_true_branch(v_temp154));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp154));
          auto v_If968__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If968__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If968__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp751__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If973__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If973__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If973__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp754__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ976__2 = typename Traits::rt_expr{};
          auto v_SatQ977__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ978__3 = iface.f_decl_bv("UnsignedSatQ978__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ979__3 = iface.f_decl_bool("UnsignedSatQ979__3");
            const auto v_temp155 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If968__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If973__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp155));
            iface.f_gen_store(v_UnsignedSatQ978__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp155));
            const auto v_temp156 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If968__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If973__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp156));
            iface.f_gen_store(v_UnsignedSatQ978__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp156));
            iface.f_gen_store(v_UnsignedSatQ978__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If968__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If973__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp155));
            v_SatQ976__2 = iface.f_gen_load(v_UnsignedSatQ978__3);
            v_SatQ977__2 = iface.f_gen_load(v_UnsignedSatQ979__3);
          } else {
            const auto v_SignedSatQ984__3 = iface.f_decl_bv("SignedSatQ984__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ985__3 = iface.f_decl_bool("SignedSatQ985__3");
            const auto v_temp157 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If968__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If973__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp157));
            iface.f_gen_store(v_SignedSatQ984__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp157));
            const auto v_temp158 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If968__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If973__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp158));
            iface.f_gen_store(v_SignedSatQ984__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp158));
            iface.f_gen_store(v_SignedSatQ984__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If968__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If973__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp157));
            v_SatQ976__2 = iface.f_gen_load(v_SignedSatQ984__3);
            v_SatQ977__2 = iface.f_gen_load(v_SignedSatQ985__3);
          } // if
          const auto v_temp159 = iface.f_gen_branch(v_SatQ977__2);
          iface.f_switch_context(iface.f_true_branch(v_temp159));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp159));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ976__2, iface.f_gen_append_bits(v_SatQ946__2, iface.f_gen_append_bits(v_SatQ916__2, iface.f_gen_append_bits(v_SatQ886__2, iface.f_gen_append_bits(v_SatQ856__2, iface.f_gen_append_bits(v_SatQ826__2, iface.f_gen_append_bits(v_SatQ796__2, v_SatQ765__2))))))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp1003__2 = typename Traits::rt_expr{};
          v_Exp1003__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp1006__2 = typename Traits::rt_expr{};
          v_Exp1006__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If1009__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If1009__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1009__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If1014__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1014__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1006__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1014__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1006__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ1017__2 = typename Traits::rt_expr{};
          auto v_SatQ1018__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ1019__3 = iface.f_decl_bv("UnsignedSatQ1019__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ1020__3 = iface.f_decl_bool("UnsignedSatQ1020__3");
            const auto v_temp160 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1009__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1014__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp160));
            iface.f_gen_store(v_UnsignedSatQ1019__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ1020__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp160));
            const auto v_temp161 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1009__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1014__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp161));
            iface.f_gen_store(v_UnsignedSatQ1019__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ1020__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp161));
            iface.f_gen_store(v_UnsignedSatQ1019__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1009__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1014__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ1020__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp160));
            v_SatQ1017__2 = iface.f_gen_load(v_UnsignedSatQ1019__3);
            v_SatQ1018__2 = iface.f_gen_load(v_UnsignedSatQ1020__3);
          } else {
            const auto v_SignedSatQ1025__3 = iface.f_decl_bv("SignedSatQ1025__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ1026__3 = iface.f_decl_bool("SignedSatQ1026__3");
            const auto v_temp162 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1009__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1014__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp162));
            iface.f_gen_store(v_SignedSatQ1025__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ1026__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp162));
            const auto v_temp163 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1009__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1014__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp163));
            iface.f_gen_store(v_SignedSatQ1025__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ1026__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp163));
            iface.f_gen_store(v_SignedSatQ1025__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1009__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1014__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ1026__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp162));
            v_SatQ1017__2 = iface.f_gen_load(v_SignedSatQ1025__3);
            v_SatQ1018__2 = iface.f_gen_load(v_SignedSatQ1026__3);
          } // if
          const auto v_temp164 = iface.f_gen_branch(v_SatQ1018__2);
          iface.f_switch_context(iface.f_true_branch(v_temp164));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp164));
          auto v_If1040__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If1040__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1003__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1040__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1003__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If1045__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1045__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1006__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1045__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1006__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ1048__2 = typename Traits::rt_expr{};
          auto v_SatQ1049__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ1050__3 = iface.f_decl_bv("UnsignedSatQ1050__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ1051__3 = iface.f_decl_bool("UnsignedSatQ1051__3");
            const auto v_temp165 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1040__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1045__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp165));
            iface.f_gen_store(v_UnsignedSatQ1050__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ1051__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp165));
            const auto v_temp166 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1040__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1045__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp166));
            iface.f_gen_store(v_UnsignedSatQ1050__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ1051__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp166));
            iface.f_gen_store(v_UnsignedSatQ1050__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1040__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1045__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ1051__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp165));
            v_SatQ1048__2 = iface.f_gen_load(v_UnsignedSatQ1050__3);
            v_SatQ1049__2 = iface.f_gen_load(v_UnsignedSatQ1051__3);
          } else {
            const auto v_SignedSatQ1056__3 = iface.f_decl_bv("SignedSatQ1056__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ1057__3 = iface.f_decl_bool("SignedSatQ1057__3");
            const auto v_temp167 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1040__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1045__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp167));
            iface.f_gen_store(v_SignedSatQ1056__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ1057__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp167));
            const auto v_temp168 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1040__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1045__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp168));
            iface.f_gen_store(v_SignedSatQ1056__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ1057__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp168));
            iface.f_gen_store(v_SignedSatQ1056__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1040__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1045__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ1057__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp167));
            v_SatQ1048__2 = iface.f_gen_load(v_SignedSatQ1056__3);
            v_SatQ1049__2 = iface.f_gen_load(v_SignedSatQ1057__3);
          } // if
          const auto v_temp169 = iface.f_gen_branch(v_SatQ1049__2);
          iface.f_switch_context(iface.f_true_branch(v_temp169));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp169));
          auto v_If1070__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If1070__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1003__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1070__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1003__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If1075__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1075__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1006__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1075__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1006__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ1078__2 = typename Traits::rt_expr{};
          auto v_SatQ1079__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ1080__3 = iface.f_decl_bv("UnsignedSatQ1080__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ1081__3 = iface.f_decl_bool("UnsignedSatQ1081__3");
            const auto v_temp170 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1070__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1075__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp170));
            iface.f_gen_store(v_UnsignedSatQ1080__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ1081__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp170));
            const auto v_temp171 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1070__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1075__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp171));
            iface.f_gen_store(v_UnsignedSatQ1080__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ1081__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp171));
            iface.f_gen_store(v_UnsignedSatQ1080__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1070__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1075__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ1081__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp170));
            v_SatQ1078__2 = iface.f_gen_load(v_UnsignedSatQ1080__3);
            v_SatQ1079__2 = iface.f_gen_load(v_UnsignedSatQ1081__3);
          } else {
            const auto v_SignedSatQ1086__3 = iface.f_decl_bv("SignedSatQ1086__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ1087__3 = iface.f_decl_bool("SignedSatQ1087__3");
            const auto v_temp172 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1070__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1075__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp172));
            iface.f_gen_store(v_SignedSatQ1086__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ1087__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp172));
            const auto v_temp173 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1070__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1075__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp173));
            iface.f_gen_store(v_SignedSatQ1086__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ1087__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp173));
            iface.f_gen_store(v_SignedSatQ1086__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1070__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1075__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ1087__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp172));
            v_SatQ1078__2 = iface.f_gen_load(v_SignedSatQ1086__3);
            v_SatQ1079__2 = iface.f_gen_load(v_SignedSatQ1087__3);
          } // if
          const auto v_temp174 = iface.f_gen_branch(v_SatQ1079__2);
          iface.f_switch_context(iface.f_true_branch(v_temp174));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp174));
          auto v_If1100__2 = typename Traits::rt_expr{};
          if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            v_If1100__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1003__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1100__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1003__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If1105__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1105__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1006__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1105__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1006__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ1108__2 = typename Traits::rt_expr{};
          auto v_SatQ1109__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ1110__3 = iface.f_decl_bv("UnsignedSatQ1110__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ1111__3 = iface.f_decl_bool("UnsignedSatQ1111__3");
            const auto v_temp175 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1100__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1105__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp175));
            iface.f_gen_store(v_UnsignedSatQ1110__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ1111__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp175));
            const auto v_temp176 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1100__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1105__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp176));
            iface.f_gen_store(v_UnsignedSatQ1110__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ1111__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp176));
            iface.f_gen_store(v_UnsignedSatQ1110__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1100__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1105__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ1111__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp175));
            v_SatQ1108__2 = iface.f_gen_load(v_UnsignedSatQ1110__3);
            v_SatQ1109__2 = iface.f_gen_load(v_UnsignedSatQ1111__3);
          } else {
            const auto v_SignedSatQ1116__3 = iface.f_decl_bv("SignedSatQ1116__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ1117__3 = iface.f_decl_bool("SignedSatQ1117__3");
            const auto v_temp177 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1100__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1105__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp177));
            iface.f_gen_store(v_SignedSatQ1116__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ1117__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp177));
            const auto v_temp178 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1100__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1105__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp178));
            iface.f_gen_store(v_SignedSatQ1116__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ1117__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp178));
            iface.f_gen_store(v_SignedSatQ1116__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1100__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1105__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ1117__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp177));
            v_SatQ1108__2 = iface.f_gen_load(v_SignedSatQ1116__3);
            v_SatQ1109__2 = iface.f_gen_load(v_SignedSatQ1117__3);
          } // if
          const auto v_temp179 = iface.f_gen_branch(v_SatQ1109__2);
          iface.f_switch_context(iface.f_true_branch(v_temp179));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp179));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ1108__2, iface.f_gen_append_bits(v_SatQ1078__2, iface.f_gen_append_bits(v_SatQ1048__2, v_SatQ1017__2))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp1136__2 = typename Traits::rt_expr{};
            v_Exp1136__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp1139__2 = typename Traits::rt_expr{};
            v_Exp1139__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If1142__2 = typename Traits::rt_expr{};
            if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              v_If1142__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1142__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1147__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1147__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1139__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1147__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1139__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1150__2 = typename Traits::rt_expr{};
            auto v_SatQ1151__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1152__3 = iface.f_decl_bv("UnsignedSatQ1152__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1153__3 = iface.f_decl_bool("UnsignedSatQ1153__3");
              const auto v_temp180 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1142__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1147__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp180));
              iface.f_gen_store(v_UnsignedSatQ1152__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1153__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp180));
              const auto v_temp181 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1142__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1147__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp181));
              iface.f_gen_store(v_UnsignedSatQ1152__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1153__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp181));
              iface.f_gen_store(v_UnsignedSatQ1152__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1142__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1147__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1153__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp180));
              v_SatQ1150__2 = iface.f_gen_load(v_UnsignedSatQ1152__3);
              v_SatQ1151__2 = iface.f_gen_load(v_UnsignedSatQ1153__3);
            } else {
              const auto v_SignedSatQ1158__3 = iface.f_decl_bv("SignedSatQ1158__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1159__3 = iface.f_decl_bool("SignedSatQ1159__3");
              const auto v_temp182 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1142__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1147__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp182));
              iface.f_gen_store(v_SignedSatQ1158__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1159__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp182));
              const auto v_temp183 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1142__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1147__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp183));
              iface.f_gen_store(v_SignedSatQ1158__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1159__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp183));
              iface.f_gen_store(v_SignedSatQ1158__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1142__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1147__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1159__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp182));
              v_SatQ1150__2 = iface.f_gen_load(v_SignedSatQ1158__3);
              v_SatQ1151__2 = iface.f_gen_load(v_SignedSatQ1159__3);
            } // if
            const auto v_temp184 = iface.f_gen_branch(v_SatQ1151__2);
            iface.f_switch_context(iface.f_true_branch(v_temp184));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp184));
            auto v_If1173__2 = typename Traits::rt_expr{};
            if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              v_If1173__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1136__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1173__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1136__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1178__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1178__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1139__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1178__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1139__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1181__2 = typename Traits::rt_expr{};
            auto v_SatQ1182__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1183__3 = iface.f_decl_bv("UnsignedSatQ1183__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1184__3 = iface.f_decl_bool("UnsignedSatQ1184__3");
              const auto v_temp185 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1173__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1178__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp185));
              iface.f_gen_store(v_UnsignedSatQ1183__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1184__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp185));
              const auto v_temp186 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1173__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1178__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp186));
              iface.f_gen_store(v_UnsignedSatQ1183__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1184__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp186));
              iface.f_gen_store(v_UnsignedSatQ1183__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1173__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1178__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1184__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp185));
              v_SatQ1181__2 = iface.f_gen_load(v_UnsignedSatQ1183__3);
              v_SatQ1182__2 = iface.f_gen_load(v_UnsignedSatQ1184__3);
            } else {
              const auto v_SignedSatQ1189__3 = iface.f_decl_bv("SignedSatQ1189__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1190__3 = iface.f_decl_bool("SignedSatQ1190__3");
              const auto v_temp187 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1173__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1178__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp187));
              iface.f_gen_store(v_SignedSatQ1189__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1190__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp187));
              const auto v_temp188 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1173__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1178__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp188));
              iface.f_gen_store(v_SignedSatQ1189__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1190__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp188));
              iface.f_gen_store(v_SignedSatQ1189__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1173__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1178__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1190__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp187));
              v_SatQ1181__2 = iface.f_gen_load(v_SignedSatQ1189__3);
              v_SatQ1182__2 = iface.f_gen_load(v_SignedSatQ1190__3);
            } // if
            const auto v_temp189 = iface.f_gen_branch(v_SatQ1182__2);
            iface.f_switch_context(iface.f_true_branch(v_temp189));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp189));
            auto v_If1203__2 = typename Traits::rt_expr{};
            if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              v_If1203__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1136__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1203__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1136__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1208__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1208__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1139__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1208__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1139__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1211__2 = typename Traits::rt_expr{};
            auto v_SatQ1212__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1213__3 = iface.f_decl_bv("UnsignedSatQ1213__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1214__3 = iface.f_decl_bool("UnsignedSatQ1214__3");
              const auto v_temp190 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1203__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1208__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp190));
              iface.f_gen_store(v_UnsignedSatQ1213__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1214__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp190));
              const auto v_temp191 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1203__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1208__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp191));
              iface.f_gen_store(v_UnsignedSatQ1213__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1214__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp191));
              iface.f_gen_store(v_UnsignedSatQ1213__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1203__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1208__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1214__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp190));
              v_SatQ1211__2 = iface.f_gen_load(v_UnsignedSatQ1213__3);
              v_SatQ1212__2 = iface.f_gen_load(v_UnsignedSatQ1214__3);
            } else {
              const auto v_SignedSatQ1219__3 = iface.f_decl_bv("SignedSatQ1219__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1220__3 = iface.f_decl_bool("SignedSatQ1220__3");
              const auto v_temp192 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1203__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1208__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp192));
              iface.f_gen_store(v_SignedSatQ1219__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1220__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp192));
              const auto v_temp193 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1203__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1208__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp193));
              iface.f_gen_store(v_SignedSatQ1219__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1220__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp193));
              iface.f_gen_store(v_SignedSatQ1219__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1203__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1208__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1220__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp192));
              v_SatQ1211__2 = iface.f_gen_load(v_SignedSatQ1219__3);
              v_SatQ1212__2 = iface.f_gen_load(v_SignedSatQ1220__3);
            } // if
            const auto v_temp194 = iface.f_gen_branch(v_SatQ1212__2);
            iface.f_switch_context(iface.f_true_branch(v_temp194));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp194));
            auto v_If1233__2 = typename Traits::rt_expr{};
            if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              v_If1233__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1136__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1233__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1136__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1238__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1238__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1139__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1238__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1139__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1241__2 = typename Traits::rt_expr{};
            auto v_SatQ1242__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1243__3 = iface.f_decl_bv("UnsignedSatQ1243__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1244__3 = iface.f_decl_bool("UnsignedSatQ1244__3");
              const auto v_temp195 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1233__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1238__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp195));
              iface.f_gen_store(v_UnsignedSatQ1243__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1244__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp195));
              const auto v_temp196 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1233__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1238__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp196));
              iface.f_gen_store(v_UnsignedSatQ1243__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1244__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp196));
              iface.f_gen_store(v_UnsignedSatQ1243__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1233__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1238__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1244__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp195));
              v_SatQ1241__2 = iface.f_gen_load(v_UnsignedSatQ1243__3);
              v_SatQ1242__2 = iface.f_gen_load(v_UnsignedSatQ1244__3);
            } else {
              const auto v_SignedSatQ1249__3 = iface.f_decl_bv("SignedSatQ1249__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1250__3 = iface.f_decl_bool("SignedSatQ1250__3");
              const auto v_temp197 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1233__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1238__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp197));
              iface.f_gen_store(v_SignedSatQ1249__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1250__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp197));
              const auto v_temp198 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1233__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1238__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp198));
              iface.f_gen_store(v_SignedSatQ1249__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1250__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp198));
              iface.f_gen_store(v_SignedSatQ1249__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1233__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1238__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1250__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp197));
              v_SatQ1241__2 = iface.f_gen_load(v_SignedSatQ1249__3);
              v_SatQ1242__2 = iface.f_gen_load(v_SignedSatQ1250__3);
            } // if
            const auto v_temp199 = iface.f_gen_branch(v_SatQ1242__2);
            iface.f_switch_context(iface.f_true_branch(v_temp199));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp199));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ1241__2, iface.f_gen_append_bits(v_SatQ1211__2, iface.f_gen_append_bits(v_SatQ1181__2, v_SatQ1150__2))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp1268__2 = typename Traits::rt_expr{};
            v_Exp1268__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp1271__2 = typename Traits::rt_expr{};
            v_Exp1271__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If1274__2 = typename Traits::rt_expr{};
            if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              v_If1274__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1274__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1279__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1279__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1271__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1279__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1271__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1282__2 = typename Traits::rt_expr{};
            auto v_SatQ1283__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1284__3 = iface.f_decl_bv("UnsignedSatQ1284__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1285__3 = iface.f_decl_bool("UnsignedSatQ1285__3");
              const auto v_temp200 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1274__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1279__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp200));
              iface.f_gen_store(v_UnsignedSatQ1284__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1285__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp200));
              const auto v_temp201 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1274__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1279__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp201));
              iface.f_gen_store(v_UnsignedSatQ1284__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1285__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp201));
              iface.f_gen_store(v_UnsignedSatQ1284__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1274__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1279__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1285__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp200));
              v_SatQ1282__2 = iface.f_gen_load(v_UnsignedSatQ1284__3);
              v_SatQ1283__2 = iface.f_gen_load(v_UnsignedSatQ1285__3);
            } else {
              const auto v_SignedSatQ1290__3 = iface.f_decl_bv("SignedSatQ1290__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1291__3 = iface.f_decl_bool("SignedSatQ1291__3");
              const auto v_temp202 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1274__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1279__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp202));
              iface.f_gen_store(v_SignedSatQ1290__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1291__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp202));
              const auto v_temp203 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1274__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1279__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp203));
              iface.f_gen_store(v_SignedSatQ1290__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1291__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp203));
              iface.f_gen_store(v_SignedSatQ1290__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1274__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1279__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1291__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp202));
              v_SatQ1282__2 = iface.f_gen_load(v_SignedSatQ1290__3);
              v_SatQ1283__2 = iface.f_gen_load(v_SignedSatQ1291__3);
            } // if
            const auto v_temp204 = iface.f_gen_branch(v_SatQ1283__2);
            iface.f_switch_context(iface.f_true_branch(v_temp204));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp204));
            auto v_If1305__2 = typename Traits::rt_expr{};
            if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              v_If1305__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1268__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1305__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1268__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1310__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1310__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1271__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1310__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1271__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1313__2 = typename Traits::rt_expr{};
            auto v_SatQ1314__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1315__3 = iface.f_decl_bv("UnsignedSatQ1315__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1316__3 = iface.f_decl_bool("UnsignedSatQ1316__3");
              const auto v_temp205 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1305__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1310__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp205));
              iface.f_gen_store(v_UnsignedSatQ1315__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1316__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp205));
              const auto v_temp206 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1305__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1310__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp206));
              iface.f_gen_store(v_UnsignedSatQ1315__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1316__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp206));
              iface.f_gen_store(v_UnsignedSatQ1315__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1305__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1310__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1316__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp205));
              v_SatQ1313__2 = iface.f_gen_load(v_UnsignedSatQ1315__3);
              v_SatQ1314__2 = iface.f_gen_load(v_UnsignedSatQ1316__3);
            } else {
              const auto v_SignedSatQ1321__3 = iface.f_decl_bv("SignedSatQ1321__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1322__3 = iface.f_decl_bool("SignedSatQ1322__3");
              const auto v_temp207 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1305__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1310__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp207));
              iface.f_gen_store(v_SignedSatQ1321__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1322__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp207));
              const auto v_temp208 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1305__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1310__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp208));
              iface.f_gen_store(v_SignedSatQ1321__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1322__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp208));
              iface.f_gen_store(v_SignedSatQ1321__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1305__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1310__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1322__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp207));
              v_SatQ1313__2 = iface.f_gen_load(v_SignedSatQ1321__3);
              v_SatQ1314__2 = iface.f_gen_load(v_SignedSatQ1322__3);
            } // if
            const auto v_temp209 = iface.f_gen_branch(v_SatQ1314__2);
            iface.f_switch_context(iface.f_true_branch(v_temp209));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp209));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ1313__2, v_SatQ1282__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp1341__2 = typename Traits::rt_expr{};
              v_Exp1341__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp1344__2 = typename Traits::rt_expr{};
              v_Exp1344__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If1347__2 = typename Traits::rt_expr{};
              if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                v_If1347__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1347__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If1352__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1352__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1344__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1352__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1344__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_SatQ1355__2 = typename Traits::rt_expr{};
              auto v_SatQ1356__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1357__3 = iface.f_decl_bv("UnsignedSatQ1357__3", iface.bigint_lit("64"));
                const auto v_UnsignedSatQ1358__3 = iface.f_decl_bool("UnsignedSatQ1358__3");
                const auto v_temp210 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1347__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1352__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp210));
                iface.f_gen_store(v_UnsignedSatQ1357__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1358__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp210));
                const auto v_temp211 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1347__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1352__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp211));
                iface.f_gen_store(v_UnsignedSatQ1357__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1358__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp211));
                iface.f_gen_store(v_UnsignedSatQ1357__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1347__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1352__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_UnsignedSatQ1358__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp210));
                v_SatQ1355__2 = iface.f_gen_load(v_UnsignedSatQ1357__3);
                v_SatQ1356__2 = iface.f_gen_load(v_UnsignedSatQ1358__3);
              } else {
                const auto v_SignedSatQ1363__3 = iface.f_decl_bv("SignedSatQ1363__3", iface.bigint_lit("64"));
                const auto v_SignedSatQ1364__3 = iface.f_decl_bool("SignedSatQ1364__3");
                const auto v_temp212 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1347__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1352__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp212));
                iface.f_gen_store(v_SignedSatQ1363__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1364__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp212));
                const auto v_temp213 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1347__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1352__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "111000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp213));
                iface.f_gen_store(v_SignedSatQ1363__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1364__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp213));
                iface.f_gen_store(v_SignedSatQ1363__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1347__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1352__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_SignedSatQ1364__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp212));
                v_SatQ1355__2 = iface.f_gen_load(v_SignedSatQ1363__3);
                v_SatQ1356__2 = iface.f_gen_load(v_SignedSatQ1364__3);
              } // if
              const auto v_temp214 = iface.f_gen_branch(v_SatQ1356__2);
              iface.f_switch_context(iface.f_true_branch(v_temp214));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp214));
              auto v_If1378__2 = typename Traits::rt_expr{};
              if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                v_If1378__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1341__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1378__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1341__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If1383__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1383__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1344__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1383__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1344__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_SatQ1386__2 = typename Traits::rt_expr{};
              auto v_SatQ1387__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1388__3 = iface.f_decl_bv("UnsignedSatQ1388__3", iface.bigint_lit("64"));
                const auto v_UnsignedSatQ1389__3 = iface.f_decl_bool("UnsignedSatQ1389__3");
                const auto v_temp215 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1378__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1383__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp215));
                iface.f_gen_store(v_UnsignedSatQ1388__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1389__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp215));
                const auto v_temp216 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1378__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1383__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp216));
                iface.f_gen_store(v_UnsignedSatQ1388__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1389__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp216));
                iface.f_gen_store(v_UnsignedSatQ1388__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1378__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1383__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_UnsignedSatQ1389__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp215));
                v_SatQ1386__2 = iface.f_gen_load(v_UnsignedSatQ1388__3);
                v_SatQ1387__2 = iface.f_gen_load(v_UnsignedSatQ1389__3);
              } else {
                const auto v_SignedSatQ1394__3 = iface.f_decl_bv("SignedSatQ1394__3", iface.bigint_lit("64"));
                const auto v_SignedSatQ1395__3 = iface.f_decl_bool("SignedSatQ1395__3");
                const auto v_temp217 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1378__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1383__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp217));
                iface.f_gen_store(v_SignedSatQ1394__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1395__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp217));
                const auto v_temp218 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1378__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1383__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "111000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp218));
                iface.f_gen_store(v_SignedSatQ1394__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1395__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp218));
                iface.f_gen_store(v_SignedSatQ1394__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1378__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1383__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_SignedSatQ1395__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp217));
                v_SatQ1386__2 = iface.f_gen_load(v_SignedSatQ1394__3);
                v_SatQ1387__2 = iface.f_gen_load(v_SignedSatQ1395__3);
              } // if
              const auto v_temp219 = iface.f_gen_branch(v_SatQ1387__2);
              iface.f_switch_context(iface.f_true_branch(v_temp219));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp219));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ1386__2, v_SatQ1355__2));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp1416__2 = typename Traits::rt_expr{};
              v_Exp1416__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If1419__2 = typename Traits::rt_expr{};
              if (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                v_If1419__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1419__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If1424__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1424__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1416__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1424__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1416__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_SatQ1427__2 = typename Traits::rt_expr{};
              auto v_SatQ1428__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1429__3 = iface.f_decl_bv("UnsignedSatQ1429__3", iface.bigint_lit("64"));
                const auto v_UnsignedSatQ1430__3 = iface.f_decl_bool("UnsignedSatQ1430__3");
                const auto v_temp220 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1419__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1424__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp220));
                iface.f_gen_store(v_UnsignedSatQ1429__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp220));
                const auto v_temp221 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1419__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1424__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp221));
                iface.f_gen_store(v_UnsignedSatQ1429__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp221));
                iface.f_gen_store(v_UnsignedSatQ1429__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1419__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1424__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp220));
                v_SatQ1427__2 = iface.f_gen_load(v_UnsignedSatQ1429__3);
                v_SatQ1428__2 = iface.f_gen_load(v_UnsignedSatQ1430__3);
              } else {
                const auto v_SignedSatQ1435__3 = iface.f_decl_bv("SignedSatQ1435__3", iface.bigint_lit("64"));
                const auto v_SignedSatQ1436__3 = iface.f_decl_bool("SignedSatQ1436__3");
                const auto v_temp222 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1419__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1424__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp222));
                iface.f_gen_store(v_SignedSatQ1435__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp222));
                const auto v_temp223 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If1419__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1424__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "111000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp223));
                iface.f_gen_store(v_SignedSatQ1435__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp223));
                iface.f_gen_store(v_SignedSatQ1435__3, iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1419__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1424__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp222));
                v_SatQ1427__2 = iface.f_gen_load(v_SignedSatQ1435__3);
                v_SatQ1428__2 = iface.f_gen_load(v_SignedSatQ1436__3);
              } // if
              const auto v_temp224 = iface.f_gen_branch(v_SatQ1428__2);
              iface.f_switch_context(iface.f_true_branch(v_temp224));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp224));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ1427__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_add_saturating_simd


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "110"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp7__2 = typename Traits::rt_expr{};
        v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp10__2 = typename Traits::rt_expr{};
        v_Exp10__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If13__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If13__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If13__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If18__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If18__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If18__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ21__2 = typename Traits::rt_expr{};
        auto v_SatQ22__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ23__3 = iface.f_decl_bv("UnsignedSatQ23__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ24__3 = iface.f_decl_bool("UnsignedSatQ24__3");
          const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If13__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp0));
          const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If13__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp1));
          iface.f_gen_store(v_UnsignedSatQ23__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If13__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ24__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          v_SatQ21__2 = iface.f_gen_load(v_UnsignedSatQ23__3);
          v_SatQ22__2 = iface.f_gen_load(v_UnsignedSatQ24__3);
        } else {
          const auto v_SignedSatQ29__3 = iface.f_decl_bv("SignedSatQ29__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ30__3 = iface.f_decl_bool("SignedSatQ30__3");
          const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If13__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp2));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp2));
          const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If13__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp3));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp3));
          iface.f_gen_store(v_SignedSatQ29__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If13__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If18__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ30__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp2));
          v_SatQ21__2 = iface.f_gen_load(v_SignedSatQ29__3);
          v_SatQ22__2 = iface.f_gen_load(v_SignedSatQ30__3);
        } // if
        const auto v_temp4 = iface.f_gen_branch(v_SatQ22__2);
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        auto v_If44__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If44__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If44__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If49__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If49__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If49__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ52__2 = typename Traits::rt_expr{};
        auto v_SatQ53__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ54__3 = iface.f_decl_bv("UnsignedSatQ54__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ55__3 = iface.f_decl_bool("UnsignedSatQ55__3");
          const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If44__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp5));
          const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If44__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          iface.f_gen_store(v_UnsignedSatQ54__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If44__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ55__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp5));
          v_SatQ52__2 = iface.f_gen_load(v_UnsignedSatQ54__3);
          v_SatQ53__2 = iface.f_gen_load(v_UnsignedSatQ55__3);
        } else {
          const auto v_SignedSatQ60__3 = iface.f_decl_bv("SignedSatQ60__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ61__3 = iface.f_decl_bool("SignedSatQ61__3");
          const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If44__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If44__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp8));
          iface.f_gen_store(v_SignedSatQ60__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If44__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ61__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          v_SatQ52__2 = iface.f_gen_load(v_SignedSatQ60__3);
          v_SatQ53__2 = iface.f_gen_load(v_SignedSatQ61__3);
        } // if
        const auto v_temp9 = iface.f_gen_branch(v_SatQ53__2);
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        auto v_If74__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If74__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If74__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If79__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If79__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If79__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ82__2 = typename Traits::rt_expr{};
        auto v_SatQ83__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ84__3 = iface.f_decl_bv("UnsignedSatQ84__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ85__3 = iface.f_decl_bool("UnsignedSatQ85__3");
          const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp10));
          iface.f_gen_store(v_UnsignedSatQ84__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ85__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp10));
          const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp11));
          iface.f_gen_store(v_UnsignedSatQ84__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ85__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp11));
          iface.f_gen_store(v_UnsignedSatQ84__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ85__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp10));
          v_SatQ82__2 = iface.f_gen_load(v_UnsignedSatQ84__3);
          v_SatQ83__2 = iface.f_gen_load(v_UnsignedSatQ85__3);
        } else {
          const auto v_SignedSatQ90__3 = iface.f_decl_bv("SignedSatQ90__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ91__3 = iface.f_decl_bool("SignedSatQ91__3");
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(v_SignedSatQ90__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ91__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp12));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ90__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ91__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          iface.f_gen_store(v_SignedSatQ90__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If74__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If79__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ91__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
          v_SatQ82__2 = iface.f_gen_load(v_SignedSatQ90__3);
          v_SatQ83__2 = iface.f_gen_load(v_SignedSatQ91__3);
        } // if
        const auto v_temp14 = iface.f_gen_branch(v_SatQ83__2);
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        auto v_If104__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If104__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If104__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If109__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If109__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If109__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ112__2 = typename Traits::rt_expr{};
        auto v_SatQ113__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ114__3 = iface.f_decl_bv("UnsignedSatQ114__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ115__3 = iface.f_decl_bool("UnsignedSatQ115__3");
          const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If109__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp15));
          iface.f_gen_store(v_UnsignedSatQ114__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ115__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp15));
          const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If109__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp16));
          iface.f_gen_store(v_UnsignedSatQ114__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ115__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp16));
          iface.f_gen_store(v_UnsignedSatQ114__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If109__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ115__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp15));
          v_SatQ112__2 = iface.f_gen_load(v_UnsignedSatQ114__3);
          v_SatQ113__2 = iface.f_gen_load(v_UnsignedSatQ115__3);
        } else {
          const auto v_SignedSatQ120__3 = iface.f_decl_bv("SignedSatQ120__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ121__3 = iface.f_decl_bool("SignedSatQ121__3");
          const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If109__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp17));
          iface.f_gen_store(v_SignedSatQ120__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ121__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp17));
          const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If109__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp18));
          iface.f_gen_store(v_SignedSatQ120__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ121__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp18));
          iface.f_gen_store(v_SignedSatQ120__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If104__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If109__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ121__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp17));
          v_SatQ112__2 = iface.f_gen_load(v_SignedSatQ120__3);
          v_SatQ113__2 = iface.f_gen_load(v_SignedSatQ121__3);
        } // if
        const auto v_temp19 = iface.f_gen_branch(v_SatQ113__2);
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp19));
        auto v_If134__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If134__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If134__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If139__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If139__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If139__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ142__2 = typename Traits::rt_expr{};
        auto v_SatQ143__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ144__3 = iface.f_decl_bv("UnsignedSatQ144__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ145__3 = iface.f_decl_bool("UnsignedSatQ145__3");
          const auto v_temp20 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If134__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If139__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp20));
          iface.f_gen_store(v_UnsignedSatQ144__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ145__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp20));
          const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If134__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If139__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp21));
          iface.f_gen_store(v_UnsignedSatQ144__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ145__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp21));
          iface.f_gen_store(v_UnsignedSatQ144__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If134__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If139__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ145__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp20));
          v_SatQ142__2 = iface.f_gen_load(v_UnsignedSatQ144__3);
          v_SatQ143__2 = iface.f_gen_load(v_UnsignedSatQ145__3);
        } else {
          const auto v_SignedSatQ150__3 = iface.f_decl_bv("SignedSatQ150__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ151__3 = iface.f_decl_bool("SignedSatQ151__3");
          const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If134__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If139__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp22));
          iface.f_gen_store(v_SignedSatQ150__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ151__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp22));
          const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If134__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If139__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp23));
          iface.f_gen_store(v_SignedSatQ150__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ151__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp23));
          iface.f_gen_store(v_SignedSatQ150__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If134__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If139__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ151__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp22));
          v_SatQ142__2 = iface.f_gen_load(v_SignedSatQ150__3);
          v_SatQ143__2 = iface.f_gen_load(v_SignedSatQ151__3);
        } // if
        const auto v_temp24 = iface.f_gen_branch(v_SatQ143__2);
        iface.f_switch_context(iface.f_true_branch(v_temp24));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp24));
        auto v_If164__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If164__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If164__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If169__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If169__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If169__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ172__2 = typename Traits::rt_expr{};
        auto v_SatQ173__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ174__3 = iface.f_decl_bv("UnsignedSatQ174__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ175__3 = iface.f_decl_bool("UnsignedSatQ175__3");
          const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If164__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If169__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_UnsignedSatQ174__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ175__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If164__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If169__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_UnsignedSatQ174__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ175__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_UnsignedSatQ174__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If164__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If169__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ175__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp25));
          v_SatQ172__2 = iface.f_gen_load(v_UnsignedSatQ174__3);
          v_SatQ173__2 = iface.f_gen_load(v_UnsignedSatQ175__3);
        } else {
          const auto v_SignedSatQ180__3 = iface.f_decl_bv("SignedSatQ180__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ181__3 = iface.f_decl_bool("SignedSatQ181__3");
          const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If164__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If169__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_SignedSatQ180__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ181__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If164__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If169__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_SignedSatQ180__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ181__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_SignedSatQ180__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If164__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If169__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ181__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          v_SatQ172__2 = iface.f_gen_load(v_SignedSatQ180__3);
          v_SatQ173__2 = iface.f_gen_load(v_SignedSatQ181__3);
        } // if
        const auto v_temp29 = iface.f_gen_branch(v_SatQ173__2);
        iface.f_switch_context(iface.f_true_branch(v_temp29));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp29));
        auto v_If194__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If194__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If194__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If199__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If199__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If199__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ202__2 = typename Traits::rt_expr{};
        auto v_SatQ203__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ204__3 = iface.f_decl_bv("UnsignedSatQ204__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ205__3 = iface.f_decl_bool("UnsignedSatQ205__3");
          const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If194__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If199__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_UnsignedSatQ204__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ205__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If194__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If199__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_UnsignedSatQ204__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ205__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_UnsignedSatQ204__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If194__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If199__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ205__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          v_SatQ202__2 = iface.f_gen_load(v_UnsignedSatQ204__3);
          v_SatQ203__2 = iface.f_gen_load(v_UnsignedSatQ205__3);
        } else {
          const auto v_SignedSatQ210__3 = iface.f_decl_bv("SignedSatQ210__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ211__3 = iface.f_decl_bool("SignedSatQ211__3");
          const auto v_temp32 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If194__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If199__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(v_SignedSatQ210__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ211__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp32));
          const auto v_temp33 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If194__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If199__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_SignedSatQ210__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ211__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_SignedSatQ210__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If194__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If199__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ211__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          v_SatQ202__2 = iface.f_gen_load(v_SignedSatQ210__3);
          v_SatQ203__2 = iface.f_gen_load(v_SignedSatQ211__3);
        } // if
        const auto v_temp34 = iface.f_gen_branch(v_SatQ203__2);
        iface.f_switch_context(iface.f_true_branch(v_temp34));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp34));
        auto v_If224__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If224__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If224__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If229__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If229__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If229__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ232__2 = typename Traits::rt_expr{};
        auto v_SatQ233__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ234__3 = iface.f_decl_bv("UnsignedSatQ234__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ235__3 = iface.f_decl_bool("UnsignedSatQ235__3");
          const auto v_temp35 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If224__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If229__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(v_UnsignedSatQ234__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ235__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp35));
          const auto v_temp36 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If224__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If229__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp36));
          iface.f_gen_store(v_UnsignedSatQ234__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ235__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp36));
          iface.f_gen_store(v_UnsignedSatQ234__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If224__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If229__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ235__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          v_SatQ232__2 = iface.f_gen_load(v_UnsignedSatQ234__3);
          v_SatQ233__2 = iface.f_gen_load(v_UnsignedSatQ235__3);
        } else {
          const auto v_SignedSatQ240__3 = iface.f_decl_bv("SignedSatQ240__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ241__3 = iface.f_decl_bool("SignedSatQ241__3");
          const auto v_temp37 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If224__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If229__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp37));
          iface.f_gen_store(v_SignedSatQ240__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ241__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp37));
          const auto v_temp38 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If224__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If229__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp38));
          iface.f_gen_store(v_SignedSatQ240__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ241__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp38));
          iface.f_gen_store(v_SignedSatQ240__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If224__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If229__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ241__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp37));
          v_SatQ232__2 = iface.f_gen_load(v_SignedSatQ240__3);
          v_SatQ233__2 = iface.f_gen_load(v_SignedSatQ241__3);
        } // if
        const auto v_temp39 = iface.f_gen_branch(v_SatQ233__2);
        iface.f_switch_context(iface.f_true_branch(v_temp39));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp39));
        auto v_If254__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If254__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If254__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If259__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If259__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If259__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ262__2 = typename Traits::rt_expr{};
        auto v_SatQ263__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ264__3 = iface.f_decl_bv("UnsignedSatQ264__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ265__3 = iface.f_decl_bool("UnsignedSatQ265__3");
          const auto v_temp40 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If254__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If259__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp40));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ265__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp40));
          const auto v_temp41 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If254__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If259__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp41));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ265__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp41));
          iface.f_gen_store(v_UnsignedSatQ264__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If254__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If259__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ265__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp40));
          v_SatQ262__2 = iface.f_gen_load(v_UnsignedSatQ264__3);
          v_SatQ263__2 = iface.f_gen_load(v_UnsignedSatQ265__3);
        } else {
          const auto v_SignedSatQ270__3 = iface.f_decl_bv("SignedSatQ270__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ271__3 = iface.f_decl_bool("SignedSatQ271__3");
          const auto v_temp42 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If254__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If259__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp42));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ271__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp42));
          const auto v_temp43 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If254__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If259__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp43));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ271__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp43));
          iface.f_gen_store(v_SignedSatQ270__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If254__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If259__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ271__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp42));
          v_SatQ262__2 = iface.f_gen_load(v_SignedSatQ270__3);
          v_SatQ263__2 = iface.f_gen_load(v_SignedSatQ271__3);
        } // if
        const auto v_temp44 = iface.f_gen_branch(v_SatQ263__2);
        iface.f_switch_context(iface.f_true_branch(v_temp44));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp44));
        auto v_If284__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If284__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If284__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If289__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If289__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If289__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ292__2 = typename Traits::rt_expr{};
        auto v_SatQ293__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ294__3 = iface.f_decl_bv("UnsignedSatQ294__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ295__3 = iface.f_decl_bool("UnsignedSatQ295__3");
          const auto v_temp45 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If284__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If289__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp45));
          iface.f_gen_store(v_UnsignedSatQ294__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ295__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp45));
          const auto v_temp46 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If284__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If289__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp46));
          iface.f_gen_store(v_UnsignedSatQ294__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ295__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp46));
          iface.f_gen_store(v_UnsignedSatQ294__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If284__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If289__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ295__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp45));
          v_SatQ292__2 = iface.f_gen_load(v_UnsignedSatQ294__3);
          v_SatQ293__2 = iface.f_gen_load(v_UnsignedSatQ295__3);
        } else {
          const auto v_SignedSatQ300__3 = iface.f_decl_bv("SignedSatQ300__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ301__3 = iface.f_decl_bool("SignedSatQ301__3");
          const auto v_temp47 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If284__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If289__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp47));
          iface.f_gen_store(v_SignedSatQ300__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ301__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp47));
          const auto v_temp48 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If284__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If289__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp48));
          iface.f_gen_store(v_SignedSatQ300__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ301__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp48));
          iface.f_gen_store(v_SignedSatQ300__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If284__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If289__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ301__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp47));
          v_SatQ292__2 = iface.f_gen_load(v_SignedSatQ300__3);
          v_SatQ293__2 = iface.f_gen_load(v_SignedSatQ301__3);
        } // if
        const auto v_temp49 = iface.f_gen_branch(v_SatQ293__2);
        iface.f_switch_context(iface.f_true_branch(v_temp49));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp49));
        auto v_If314__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If314__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If314__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If319__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If319__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If319__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ322__2 = typename Traits::rt_expr{};
        auto v_SatQ323__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ324__3 = iface.f_decl_bv("UnsignedSatQ324__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ325__3 = iface.f_decl_bool("UnsignedSatQ325__3");
          const auto v_temp50 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp50));
          iface.f_gen_store(v_UnsignedSatQ324__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ325__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp50));
          const auto v_temp51 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp51));
          iface.f_gen_store(v_UnsignedSatQ324__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ325__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp51));
          iface.f_gen_store(v_UnsignedSatQ324__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ325__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp50));
          v_SatQ322__2 = iface.f_gen_load(v_UnsignedSatQ324__3);
          v_SatQ323__2 = iface.f_gen_load(v_UnsignedSatQ325__3);
        } else {
          const auto v_SignedSatQ330__3 = iface.f_decl_bv("SignedSatQ330__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ331__3 = iface.f_decl_bool("SignedSatQ331__3");
          const auto v_temp52 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp52));
          iface.f_gen_store(v_SignedSatQ330__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ331__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp52));
          const auto v_temp53 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp53));
          iface.f_gen_store(v_SignedSatQ330__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ331__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp53));
          iface.f_gen_store(v_SignedSatQ330__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If314__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If319__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ331__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp52));
          v_SatQ322__2 = iface.f_gen_load(v_SignedSatQ330__3);
          v_SatQ323__2 = iface.f_gen_load(v_SignedSatQ331__3);
        } // if
        const auto v_temp54 = iface.f_gen_branch(v_SatQ323__2);
        iface.f_switch_context(iface.f_true_branch(v_temp54));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp54));
        auto v_If344__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If344__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If344__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If349__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If349__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If349__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ352__2 = typename Traits::rt_expr{};
        auto v_SatQ353__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ354__3 = iface.f_decl_bv("UnsignedSatQ354__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ355__3 = iface.f_decl_bool("UnsignedSatQ355__3");
          const auto v_temp55 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If344__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If349__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp55));
          iface.f_gen_store(v_UnsignedSatQ354__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ355__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp55));
          const auto v_temp56 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If344__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If349__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp56));
          iface.f_gen_store(v_UnsignedSatQ354__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ355__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp56));
          iface.f_gen_store(v_UnsignedSatQ354__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If344__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If349__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ355__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp55));
          v_SatQ352__2 = iface.f_gen_load(v_UnsignedSatQ354__3);
          v_SatQ353__2 = iface.f_gen_load(v_UnsignedSatQ355__3);
        } else {
          const auto v_SignedSatQ360__3 = iface.f_decl_bv("SignedSatQ360__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ361__3 = iface.f_decl_bool("SignedSatQ361__3");
          const auto v_temp57 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If344__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If349__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp57));
          iface.f_gen_store(v_SignedSatQ360__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ361__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp57));
          const auto v_temp58 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If344__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If349__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp58));
          iface.f_gen_store(v_SignedSatQ360__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ361__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp58));
          iface.f_gen_store(v_SignedSatQ360__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If344__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If349__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ361__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp57));
          v_SatQ352__2 = iface.f_gen_load(v_SignedSatQ360__3);
          v_SatQ353__2 = iface.f_gen_load(v_SignedSatQ361__3);
        } // if
        const auto v_temp59 = iface.f_gen_branch(v_SatQ353__2);
        iface.f_switch_context(iface.f_true_branch(v_temp59));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp59));
        auto v_If374__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If374__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If374__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If379__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If379__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If379__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ382__2 = typename Traits::rt_expr{};
        auto v_SatQ383__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ384__3 = iface.f_decl_bv("UnsignedSatQ384__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ385__3 = iface.f_decl_bool("UnsignedSatQ385__3");
          const auto v_temp60 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If374__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If379__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp60));
          iface.f_gen_store(v_UnsignedSatQ384__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ385__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp60));
          const auto v_temp61 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If374__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If379__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp61));
          iface.f_gen_store(v_UnsignedSatQ384__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ385__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp61));
          iface.f_gen_store(v_UnsignedSatQ384__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If374__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If379__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ385__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp60));
          v_SatQ382__2 = iface.f_gen_load(v_UnsignedSatQ384__3);
          v_SatQ383__2 = iface.f_gen_load(v_UnsignedSatQ385__3);
        } else {
          const auto v_SignedSatQ390__3 = iface.f_decl_bv("SignedSatQ390__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ391__3 = iface.f_decl_bool("SignedSatQ391__3");
          const auto v_temp62 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If374__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If379__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp62));
          iface.f_gen_store(v_SignedSatQ390__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ391__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp62));
          const auto v_temp63 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If374__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If379__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp63));
          iface.f_gen_store(v_SignedSatQ390__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ391__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp63));
          iface.f_gen_store(v_SignedSatQ390__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If374__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If379__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ391__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp62));
          v_SatQ382__2 = iface.f_gen_load(v_SignedSatQ390__3);
          v_SatQ383__2 = iface.f_gen_load(v_SignedSatQ391__3);
        } // if
        const auto v_temp64 = iface.f_gen_branch(v_SatQ383__2);
        iface.f_switch_context(iface.f_true_branch(v_temp64));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp64));
        auto v_If404__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If404__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If404__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If409__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If409__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If409__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ412__2 = typename Traits::rt_expr{};
        auto v_SatQ413__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ414__3 = iface.f_decl_bv("UnsignedSatQ414__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ415__3 = iface.f_decl_bool("UnsignedSatQ415__3");
          const auto v_temp65 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If404__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If409__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp65));
          iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ415__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp65));
          const auto v_temp66 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If404__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If409__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp66));
          iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ415__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp66));
          iface.f_gen_store(v_UnsignedSatQ414__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If404__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If409__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ415__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp65));
          v_SatQ412__2 = iface.f_gen_load(v_UnsignedSatQ414__3);
          v_SatQ413__2 = iface.f_gen_load(v_UnsignedSatQ415__3);
        } else {
          const auto v_SignedSatQ420__3 = iface.f_decl_bv("SignedSatQ420__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ421__3 = iface.f_decl_bool("SignedSatQ421__3");
          const auto v_temp67 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If404__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If409__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp67));
          iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ421__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp67));
          const auto v_temp68 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If404__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If409__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp68));
          iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ421__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp68));
          iface.f_gen_store(v_SignedSatQ420__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If404__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If409__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ421__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp67));
          v_SatQ412__2 = iface.f_gen_load(v_SignedSatQ420__3);
          v_SatQ413__2 = iface.f_gen_load(v_SignedSatQ421__3);
        } // if
        const auto v_temp69 = iface.f_gen_branch(v_SatQ413__2);
        iface.f_switch_context(iface.f_true_branch(v_temp69));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp69));
        auto v_If434__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If434__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If434__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If439__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If439__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If439__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ442__2 = typename Traits::rt_expr{};
        auto v_SatQ443__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ444__3 = iface.f_decl_bv("UnsignedSatQ444__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ445__3 = iface.f_decl_bool("UnsignedSatQ445__3");
          const auto v_temp70 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If439__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp70));
          iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ445__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp70));
          const auto v_temp71 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If439__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp71));
          iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ445__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp71));
          iface.f_gen_store(v_UnsignedSatQ444__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If439__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ445__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp70));
          v_SatQ442__2 = iface.f_gen_load(v_UnsignedSatQ444__3);
          v_SatQ443__2 = iface.f_gen_load(v_UnsignedSatQ445__3);
        } else {
          const auto v_SignedSatQ450__3 = iface.f_decl_bv("SignedSatQ450__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ451__3 = iface.f_decl_bool("SignedSatQ451__3");
          const auto v_temp72 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If439__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp72));
          iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ451__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp72));
          const auto v_temp73 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If439__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp73));
          iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ451__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp73));
          iface.f_gen_store(v_SignedSatQ450__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If434__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If439__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ451__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp72));
          v_SatQ442__2 = iface.f_gen_load(v_SignedSatQ450__3);
          v_SatQ443__2 = iface.f_gen_load(v_SignedSatQ451__3);
        } // if
        const auto v_temp74 = iface.f_gen_branch(v_SatQ443__2);
        iface.f_switch_context(iface.f_true_branch(v_temp74));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp74));
        auto v_If464__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If464__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If464__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If469__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If469__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If469__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ472__2 = typename Traits::rt_expr{};
        auto v_SatQ473__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ474__3 = iface.f_decl_bv("UnsignedSatQ474__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ475__3 = iface.f_decl_bool("UnsignedSatQ475__3");
          const auto v_temp75 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If464__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If469__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp75));
          iface.f_gen_store(v_UnsignedSatQ474__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ475__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp75));
          const auto v_temp76 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If464__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If469__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp76));
          iface.f_gen_store(v_UnsignedSatQ474__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ475__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp76));
          iface.f_gen_store(v_UnsignedSatQ474__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If464__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If469__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ475__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp75));
          v_SatQ472__2 = iface.f_gen_load(v_UnsignedSatQ474__3);
          v_SatQ473__2 = iface.f_gen_load(v_UnsignedSatQ475__3);
        } else {
          const auto v_SignedSatQ480__3 = iface.f_decl_bv("SignedSatQ480__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ481__3 = iface.f_decl_bool("SignedSatQ481__3");
          const auto v_temp77 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If464__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If469__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp77));
          iface.f_gen_store(v_SignedSatQ480__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ481__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp77));
          const auto v_temp78 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If464__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If469__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp78));
          iface.f_gen_store(v_SignedSatQ480__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ481__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp78));
          iface.f_gen_store(v_SignedSatQ480__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If464__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If469__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ481__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp77));
          v_SatQ472__2 = iface.f_gen_load(v_SignedSatQ480__3);
          v_SatQ473__2 = iface.f_gen_load(v_SignedSatQ481__3);
        } // if
        const auto v_temp79 = iface.f_gen_branch(v_SatQ473__2);
        iface.f_switch_context(iface.f_true_branch(v_temp79));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp79));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ472__2, iface.f_gen_append_bits(v_SatQ442__2, iface.f_gen_append_bits(v_SatQ412__2, iface.f_gen_append_bits(v_SatQ382__2, iface.f_gen_append_bits(v_SatQ352__2, iface.f_gen_append_bits(v_SatQ322__2, iface.f_gen_append_bits(v_SatQ292__2, iface.f_gen_append_bits(v_SatQ262__2, iface.f_gen_append_bits(v_SatQ232__2, iface.f_gen_append_bits(v_SatQ202__2, iface.f_gen_append_bits(v_SatQ172__2, iface.f_gen_append_bits(v_SatQ142__2, iface.f_gen_append_bits(v_SatQ112__2, iface.f_gen_append_bits(v_SatQ82__2, iface.f_gen_append_bits(v_SatQ52__2, v_SatQ21__2))))))))))))))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp499__2 = typename Traits::rt_expr{};
        v_Exp499__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp502__2 = typename Traits::rt_expr{};
        v_Exp502__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        auto v_If505__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If505__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If505__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If510__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If510__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If510__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ513__2 = typename Traits::rt_expr{};
        auto v_SatQ514__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ515__3 = iface.f_decl_bv("UnsignedSatQ515__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ516__3 = iface.f_decl_bool("UnsignedSatQ516__3");
          const auto v_temp80 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If505__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If510__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp80));
          iface.f_gen_store(v_UnsignedSatQ515__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ516__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp80));
          const auto v_temp81 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If505__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If510__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp81));
          iface.f_gen_store(v_UnsignedSatQ515__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ516__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp81));
          iface.f_gen_store(v_UnsignedSatQ515__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If505__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If510__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ516__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp80));
          v_SatQ513__2 = iface.f_gen_load(v_UnsignedSatQ515__3);
          v_SatQ514__2 = iface.f_gen_load(v_UnsignedSatQ516__3);
        } else {
          const auto v_SignedSatQ521__3 = iface.f_decl_bv("SignedSatQ521__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ522__3 = iface.f_decl_bool("SignedSatQ522__3");
          const auto v_temp82 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If505__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If510__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp82));
          iface.f_gen_store(v_SignedSatQ521__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ522__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp82));
          const auto v_temp83 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If505__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If510__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp83));
          iface.f_gen_store(v_SignedSatQ521__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ522__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp83));
          iface.f_gen_store(v_SignedSatQ521__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If505__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If510__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ522__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp82));
          v_SatQ513__2 = iface.f_gen_load(v_SignedSatQ521__3);
          v_SatQ514__2 = iface.f_gen_load(v_SignedSatQ522__3);
        } // if
        const auto v_temp84 = iface.f_gen_branch(v_SatQ514__2);
        iface.f_switch_context(iface.f_true_branch(v_temp84));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp84));
        auto v_If536__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If536__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If536__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If541__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If541__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If541__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ544__2 = typename Traits::rt_expr{};
        auto v_SatQ545__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ546__3 = iface.f_decl_bv("UnsignedSatQ546__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ547__3 = iface.f_decl_bool("UnsignedSatQ547__3");
          const auto v_temp85 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If536__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If541__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp85));
          iface.f_gen_store(v_UnsignedSatQ546__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ547__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp85));
          const auto v_temp86 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If536__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If541__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp86));
          iface.f_gen_store(v_UnsignedSatQ546__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ547__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp86));
          iface.f_gen_store(v_UnsignedSatQ546__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If536__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If541__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ547__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp85));
          v_SatQ544__2 = iface.f_gen_load(v_UnsignedSatQ546__3);
          v_SatQ545__2 = iface.f_gen_load(v_UnsignedSatQ547__3);
        } else {
          const auto v_SignedSatQ552__3 = iface.f_decl_bv("SignedSatQ552__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ553__3 = iface.f_decl_bool("SignedSatQ553__3");
          const auto v_temp87 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If536__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If541__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp87));
          iface.f_gen_store(v_SignedSatQ552__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ553__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp87));
          const auto v_temp88 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If536__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If541__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp88));
          iface.f_gen_store(v_SignedSatQ552__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ553__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp88));
          iface.f_gen_store(v_SignedSatQ552__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If536__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If541__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ553__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp87));
          v_SatQ544__2 = iface.f_gen_load(v_SignedSatQ552__3);
          v_SatQ545__2 = iface.f_gen_load(v_SignedSatQ553__3);
        } // if
        const auto v_temp89 = iface.f_gen_branch(v_SatQ545__2);
        iface.f_switch_context(iface.f_true_branch(v_temp89));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp89));
        auto v_If566__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If566__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If566__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If571__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If571__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If571__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ574__2 = typename Traits::rt_expr{};
        auto v_SatQ575__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ576__3 = iface.f_decl_bv("UnsignedSatQ576__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ577__3 = iface.f_decl_bool("UnsignedSatQ577__3");
          const auto v_temp90 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If566__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If571__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp90));
          iface.f_gen_store(v_UnsignedSatQ576__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ577__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp90));
          const auto v_temp91 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If566__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If571__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp91));
          iface.f_gen_store(v_UnsignedSatQ576__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ577__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp91));
          iface.f_gen_store(v_UnsignedSatQ576__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If566__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If571__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ577__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp90));
          v_SatQ574__2 = iface.f_gen_load(v_UnsignedSatQ576__3);
          v_SatQ575__2 = iface.f_gen_load(v_UnsignedSatQ577__3);
        } else {
          const auto v_SignedSatQ582__3 = iface.f_decl_bv("SignedSatQ582__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ583__3 = iface.f_decl_bool("SignedSatQ583__3");
          const auto v_temp92 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If566__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If571__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp92));
          iface.f_gen_store(v_SignedSatQ582__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ583__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp92));
          const auto v_temp93 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If566__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If571__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp93));
          iface.f_gen_store(v_SignedSatQ582__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ583__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp93));
          iface.f_gen_store(v_SignedSatQ582__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If566__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If571__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ583__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp92));
          v_SatQ574__2 = iface.f_gen_load(v_SignedSatQ582__3);
          v_SatQ575__2 = iface.f_gen_load(v_SignedSatQ583__3);
        } // if
        const auto v_temp94 = iface.f_gen_branch(v_SatQ575__2);
        iface.f_switch_context(iface.f_true_branch(v_temp94));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp94));
        auto v_If596__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If596__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If596__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If601__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If601__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If601__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ604__2 = typename Traits::rt_expr{};
        auto v_SatQ605__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ606__3 = iface.f_decl_bv("UnsignedSatQ606__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ607__3 = iface.f_decl_bool("UnsignedSatQ607__3");
          const auto v_temp95 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If596__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If601__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp95));
          iface.f_gen_store(v_UnsignedSatQ606__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ607__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp95));
          const auto v_temp96 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If596__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If601__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp96));
          iface.f_gen_store(v_UnsignedSatQ606__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ607__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp96));
          iface.f_gen_store(v_UnsignedSatQ606__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If596__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If601__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ607__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp95));
          v_SatQ604__2 = iface.f_gen_load(v_UnsignedSatQ606__3);
          v_SatQ605__2 = iface.f_gen_load(v_UnsignedSatQ607__3);
        } else {
          const auto v_SignedSatQ612__3 = iface.f_decl_bv("SignedSatQ612__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ613__3 = iface.f_decl_bool("SignedSatQ613__3");
          const auto v_temp97 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If596__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If601__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp97));
          iface.f_gen_store(v_SignedSatQ612__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ613__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp97));
          const auto v_temp98 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If596__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If601__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp98));
          iface.f_gen_store(v_SignedSatQ612__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ613__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp98));
          iface.f_gen_store(v_SignedSatQ612__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If596__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If601__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ613__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp97));
          v_SatQ604__2 = iface.f_gen_load(v_SignedSatQ612__3);
          v_SatQ605__2 = iface.f_gen_load(v_SignedSatQ613__3);
        } // if
        const auto v_temp99 = iface.f_gen_branch(v_SatQ605__2);
        iface.f_switch_context(iface.f_true_branch(v_temp99));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp99));
        auto v_If626__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If626__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If626__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If631__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If631__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If631__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ634__2 = typename Traits::rt_expr{};
        auto v_SatQ635__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ636__3 = iface.f_decl_bv("UnsignedSatQ636__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ637__3 = iface.f_decl_bool("UnsignedSatQ637__3");
          const auto v_temp100 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If626__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp100));
          iface.f_gen_store(v_UnsignedSatQ636__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ637__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp100));
          const auto v_temp101 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If626__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp101));
          iface.f_gen_store(v_UnsignedSatQ636__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ637__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp101));
          iface.f_gen_store(v_UnsignedSatQ636__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If626__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ637__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp100));
          v_SatQ634__2 = iface.f_gen_load(v_UnsignedSatQ636__3);
          v_SatQ635__2 = iface.f_gen_load(v_UnsignedSatQ637__3);
        } else {
          const auto v_SignedSatQ642__3 = iface.f_decl_bv("SignedSatQ642__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ643__3 = iface.f_decl_bool("SignedSatQ643__3");
          const auto v_temp102 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If626__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp102));
          iface.f_gen_store(v_SignedSatQ642__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ643__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp102));
          const auto v_temp103 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If626__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp103));
          iface.f_gen_store(v_SignedSatQ642__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ643__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp103));
          iface.f_gen_store(v_SignedSatQ642__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If626__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If631__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ643__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp102));
          v_SatQ634__2 = iface.f_gen_load(v_SignedSatQ642__3);
          v_SatQ635__2 = iface.f_gen_load(v_SignedSatQ643__3);
        } // if
        const auto v_temp104 = iface.f_gen_branch(v_SatQ635__2);
        iface.f_switch_context(iface.f_true_branch(v_temp104));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp104));
        auto v_If656__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If656__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If656__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If661__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If661__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If661__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ664__2 = typename Traits::rt_expr{};
        auto v_SatQ665__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ666__3 = iface.f_decl_bv("UnsignedSatQ666__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ667__3 = iface.f_decl_bool("UnsignedSatQ667__3");
          const auto v_temp105 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If656__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If661__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp105));
          iface.f_gen_store(v_UnsignedSatQ666__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ667__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp105));
          const auto v_temp106 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If656__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If661__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp106));
          iface.f_gen_store(v_UnsignedSatQ666__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ667__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp106));
          iface.f_gen_store(v_UnsignedSatQ666__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If656__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If661__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ667__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp105));
          v_SatQ664__2 = iface.f_gen_load(v_UnsignedSatQ666__3);
          v_SatQ665__2 = iface.f_gen_load(v_UnsignedSatQ667__3);
        } else {
          const auto v_SignedSatQ672__3 = iface.f_decl_bv("SignedSatQ672__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ673__3 = iface.f_decl_bool("SignedSatQ673__3");
          const auto v_temp107 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If656__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If661__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp107));
          iface.f_gen_store(v_SignedSatQ672__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ673__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp107));
          const auto v_temp108 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If656__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If661__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp108));
          iface.f_gen_store(v_SignedSatQ672__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ673__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp108));
          iface.f_gen_store(v_SignedSatQ672__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If656__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If661__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ673__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp107));
          v_SatQ664__2 = iface.f_gen_load(v_SignedSatQ672__3);
          v_SatQ665__2 = iface.f_gen_load(v_SignedSatQ673__3);
        } // if
        const auto v_temp109 = iface.f_gen_branch(v_SatQ665__2);
        iface.f_switch_context(iface.f_true_branch(v_temp109));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp109));
        auto v_If686__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If686__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If686__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If691__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If691__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If691__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ694__2 = typename Traits::rt_expr{};
        auto v_SatQ695__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ696__3 = iface.f_decl_bv("UnsignedSatQ696__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ697__3 = iface.f_decl_bool("UnsignedSatQ697__3");
          const auto v_temp110 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If686__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If691__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp110));
          iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ697__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp110));
          const auto v_temp111 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If686__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If691__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp111));
          iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ697__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp111));
          iface.f_gen_store(v_UnsignedSatQ696__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If686__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If691__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ697__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp110));
          v_SatQ694__2 = iface.f_gen_load(v_UnsignedSatQ696__3);
          v_SatQ695__2 = iface.f_gen_load(v_UnsignedSatQ697__3);
        } else {
          const auto v_SignedSatQ702__3 = iface.f_decl_bv("SignedSatQ702__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ703__3 = iface.f_decl_bool("SignedSatQ703__3");
          const auto v_temp112 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If686__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If691__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp112));
          iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ703__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp112));
          const auto v_temp113 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If686__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If691__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp113));
          iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ703__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp113));
          iface.f_gen_store(v_SignedSatQ702__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If686__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If691__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ703__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp112));
          v_SatQ694__2 = iface.f_gen_load(v_SignedSatQ702__3);
          v_SatQ695__2 = iface.f_gen_load(v_SignedSatQ703__3);
        } // if
        const auto v_temp114 = iface.f_gen_branch(v_SatQ695__2);
        iface.f_switch_context(iface.f_true_branch(v_temp114));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp114));
        auto v_If716__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If716__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If716__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp499__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_If721__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If721__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } else {
          v_If721__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp502__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
        } // if
        auto v_SatQ724__2 = typename Traits::rt_expr{};
        auto v_SatQ725__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          const auto v_UnsignedSatQ726__3 = iface.f_decl_bv("UnsignedSatQ726__3", iface.bigint_lit("8"));
          const auto v_UnsignedSatQ727__3 = iface.f_decl_bool("UnsignedSatQ727__3");
          const auto v_temp115 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0011111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If716__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If721__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp115));
          iface.f_gen_store(v_UnsignedSatQ726__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
          iface.f_gen_store(v_UnsignedSatQ727__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp115));
          const auto v_temp116 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If716__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If721__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp116));
          iface.f_gen_store(v_UnsignedSatQ726__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
          iface.f_gen_store(v_UnsignedSatQ727__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp116));
          iface.f_gen_store(v_UnsignedSatQ726__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If716__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If721__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_UnsignedSatQ727__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp115));
          v_SatQ724__2 = iface.f_gen_load(v_UnsignedSatQ726__3);
          v_SatQ725__2 = iface.f_gen_load(v_UnsignedSatQ727__3);
        } else {
          const auto v_SignedSatQ732__3 = iface.f_decl_bv("SignedSatQ732__3", iface.bigint_lit("8"));
          const auto v_SignedSatQ733__3 = iface.f_decl_bool("SignedSatQ733__3");
          const auto v_temp117 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0001111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If716__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If721__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp117));
          iface.f_gen_store(v_SignedSatQ732__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "01111111")));
          iface.f_gen_store(v_SignedSatQ733__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp117));
          const auto v_temp118 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If716__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If721__2, iface.f_gen_int_lit(iface.bigint_lit("10")))), iface.f_gen_bit_lit(iface.bits_lit(10U, "1110000000"))));
          iface.f_switch_context(iface.f_true_branch(v_temp118));
          iface.f_gen_store(v_SignedSatQ732__3, iface.f_gen_bit_lit(iface.bits_lit(8U, "10000000")));
          iface.f_gen_store(v_SignedSatQ733__3, iface.f_gen_bool_lit(true));
          iface.f_switch_context(iface.f_false_branch(v_temp118));
          iface.f_gen_store(v_SignedSatQ732__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If716__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If721__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.bigint_lit("0"), iface.bigint_lit("8"))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          iface.f_gen_store(v_SignedSatQ733__3, iface.f_gen_bool_lit(false));
          iface.f_switch_context(iface.f_merge_branch(v_temp117));
          v_SatQ724__2 = iface.f_gen_load(v_SignedSatQ732__3);
          v_SatQ725__2 = iface.f_gen_load(v_SignedSatQ733__3);
        } // if
        const auto v_temp119 = iface.f_gen_branch(v_SatQ725__2);
        iface.f_switch_context(iface.f_true_branch(v_temp119));
        iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
        iface.f_switch_context(iface.f_merge_branch(v_temp119));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ724__2, iface.f_gen_append_bits(v_SatQ694__2, iface.f_gen_append_bits(v_SatQ664__2, iface.f_gen_append_bits(v_SatQ634__2, iface.f_gen_append_bits(v_SatQ604__2, iface.f_gen_append_bits(v_SatQ574__2, iface.f_gen_append_bits(v_SatQ544__2, v_SatQ513__2))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp752__2 = typename Traits::rt_expr{};
          v_Exp752__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp755__2 = typename Traits::rt_expr{};
          v_Exp755__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If758__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If758__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If758__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If763__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If763__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If763__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ766__2 = typename Traits::rt_expr{};
          auto v_SatQ767__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ768__3 = iface.f_decl_bv("UnsignedSatQ768__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ769__3 = iface.f_decl_bool("UnsignedSatQ769__3");
            const auto v_temp120 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If758__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If763__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp120));
            iface.f_gen_store(v_UnsignedSatQ768__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ769__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp120));
            const auto v_temp121 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If758__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If763__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp121));
            iface.f_gen_store(v_UnsignedSatQ768__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ769__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp121));
            iface.f_gen_store(v_UnsignedSatQ768__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If758__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If763__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ769__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp120));
            v_SatQ766__2 = iface.f_gen_load(v_UnsignedSatQ768__3);
            v_SatQ767__2 = iface.f_gen_load(v_UnsignedSatQ769__3);
          } else {
            const auto v_SignedSatQ774__3 = iface.f_decl_bv("SignedSatQ774__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ775__3 = iface.f_decl_bool("SignedSatQ775__3");
            const auto v_temp122 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If758__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If763__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp122));
            iface.f_gen_store(v_SignedSatQ774__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ775__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp122));
            const auto v_temp123 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If758__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If763__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp123));
            iface.f_gen_store(v_SignedSatQ774__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ775__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp123));
            iface.f_gen_store(v_SignedSatQ774__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If758__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If763__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ775__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp122));
            v_SatQ766__2 = iface.f_gen_load(v_SignedSatQ774__3);
            v_SatQ767__2 = iface.f_gen_load(v_SignedSatQ775__3);
          } // if
          const auto v_temp124 = iface.f_gen_branch(v_SatQ767__2);
          iface.f_switch_context(iface.f_true_branch(v_temp124));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp124));
          auto v_If789__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If789__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If789__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If794__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If794__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If794__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ797__2 = typename Traits::rt_expr{};
          auto v_SatQ798__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ799__3 = iface.f_decl_bv("UnsignedSatQ799__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ800__3 = iface.f_decl_bool("UnsignedSatQ800__3");
            const auto v_temp125 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If789__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If794__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp125));
            iface.f_gen_store(v_UnsignedSatQ799__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ800__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp125));
            const auto v_temp126 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If789__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If794__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp126));
            iface.f_gen_store(v_UnsignedSatQ799__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ800__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp126));
            iface.f_gen_store(v_UnsignedSatQ799__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If789__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If794__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ800__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp125));
            v_SatQ797__2 = iface.f_gen_load(v_UnsignedSatQ799__3);
            v_SatQ798__2 = iface.f_gen_load(v_UnsignedSatQ800__3);
          } else {
            const auto v_SignedSatQ805__3 = iface.f_decl_bv("SignedSatQ805__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ806__3 = iface.f_decl_bool("SignedSatQ806__3");
            const auto v_temp127 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If789__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If794__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp127));
            iface.f_gen_store(v_SignedSatQ805__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ806__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp127));
            const auto v_temp128 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If789__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If794__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp128));
            iface.f_gen_store(v_SignedSatQ805__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ806__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp128));
            iface.f_gen_store(v_SignedSatQ805__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If789__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If794__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ806__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp127));
            v_SatQ797__2 = iface.f_gen_load(v_SignedSatQ805__3);
            v_SatQ798__2 = iface.f_gen_load(v_SignedSatQ806__3);
          } // if
          const auto v_temp129 = iface.f_gen_branch(v_SatQ798__2);
          iface.f_switch_context(iface.f_true_branch(v_temp129));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp129));
          auto v_If819__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If819__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If819__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If824__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If824__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If824__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ827__2 = typename Traits::rt_expr{};
          auto v_SatQ828__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ829__3 = iface.f_decl_bv("UnsignedSatQ829__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ830__3 = iface.f_decl_bool("UnsignedSatQ830__3");
            const auto v_temp130 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If819__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If824__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp130));
            iface.f_gen_store(v_UnsignedSatQ829__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ830__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp130));
            const auto v_temp131 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If819__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If824__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp131));
            iface.f_gen_store(v_UnsignedSatQ829__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ830__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp131));
            iface.f_gen_store(v_UnsignedSatQ829__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If819__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If824__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ830__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp130));
            v_SatQ827__2 = iface.f_gen_load(v_UnsignedSatQ829__3);
            v_SatQ828__2 = iface.f_gen_load(v_UnsignedSatQ830__3);
          } else {
            const auto v_SignedSatQ835__3 = iface.f_decl_bv("SignedSatQ835__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ836__3 = iface.f_decl_bool("SignedSatQ836__3");
            const auto v_temp132 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If819__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If824__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp132));
            iface.f_gen_store(v_SignedSatQ835__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ836__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp132));
            const auto v_temp133 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If819__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If824__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp133));
            iface.f_gen_store(v_SignedSatQ835__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ836__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp133));
            iface.f_gen_store(v_SignedSatQ835__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If819__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If824__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ836__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp132));
            v_SatQ827__2 = iface.f_gen_load(v_SignedSatQ835__3);
            v_SatQ828__2 = iface.f_gen_load(v_SignedSatQ836__3);
          } // if
          const auto v_temp134 = iface.f_gen_branch(v_SatQ828__2);
          iface.f_switch_context(iface.f_true_branch(v_temp134));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp134));
          auto v_If849__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If849__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If849__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If854__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If854__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If854__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ857__2 = typename Traits::rt_expr{};
          auto v_SatQ858__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ859__3 = iface.f_decl_bv("UnsignedSatQ859__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ860__3 = iface.f_decl_bool("UnsignedSatQ860__3");
            const auto v_temp135 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If849__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If854__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp135));
            iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ860__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp135));
            const auto v_temp136 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If849__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If854__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp136));
            iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ860__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp136));
            iface.f_gen_store(v_UnsignedSatQ859__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If849__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If854__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ860__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp135));
            v_SatQ857__2 = iface.f_gen_load(v_UnsignedSatQ859__3);
            v_SatQ858__2 = iface.f_gen_load(v_UnsignedSatQ860__3);
          } else {
            const auto v_SignedSatQ865__3 = iface.f_decl_bv("SignedSatQ865__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ866__3 = iface.f_decl_bool("SignedSatQ866__3");
            const auto v_temp137 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If849__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If854__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp137));
            iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ866__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp137));
            const auto v_temp138 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If849__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If854__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp138));
            iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ866__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp138));
            iface.f_gen_store(v_SignedSatQ865__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If849__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If854__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ866__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp137));
            v_SatQ857__2 = iface.f_gen_load(v_SignedSatQ865__3);
            v_SatQ858__2 = iface.f_gen_load(v_SignedSatQ866__3);
          } // if
          const auto v_temp139 = iface.f_gen_branch(v_SatQ858__2);
          iface.f_switch_context(iface.f_true_branch(v_temp139));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp139));
          auto v_If879__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If879__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If879__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If884__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If884__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If884__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ887__2 = typename Traits::rt_expr{};
          auto v_SatQ888__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ889__3 = iface.f_decl_bv("UnsignedSatQ889__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ890__3 = iface.f_decl_bool("UnsignedSatQ890__3");
            const auto v_temp140 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If879__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If884__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp140));
            iface.f_gen_store(v_UnsignedSatQ889__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ890__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp140));
            const auto v_temp141 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If879__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If884__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp141));
            iface.f_gen_store(v_UnsignedSatQ889__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ890__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp141));
            iface.f_gen_store(v_UnsignedSatQ889__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If879__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If884__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ890__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp140));
            v_SatQ887__2 = iface.f_gen_load(v_UnsignedSatQ889__3);
            v_SatQ888__2 = iface.f_gen_load(v_UnsignedSatQ890__3);
          } else {
            const auto v_SignedSatQ895__3 = iface.f_decl_bv("SignedSatQ895__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ896__3 = iface.f_decl_bool("SignedSatQ896__3");
            const auto v_temp142 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If879__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If884__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp142));
            iface.f_gen_store(v_SignedSatQ895__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ896__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp142));
            const auto v_temp143 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If879__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If884__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp143));
            iface.f_gen_store(v_SignedSatQ895__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ896__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp143));
            iface.f_gen_store(v_SignedSatQ895__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If879__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If884__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ896__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp142));
            v_SatQ887__2 = iface.f_gen_load(v_SignedSatQ895__3);
            v_SatQ888__2 = iface.f_gen_load(v_SignedSatQ896__3);
          } // if
          const auto v_temp144 = iface.f_gen_branch(v_SatQ888__2);
          iface.f_switch_context(iface.f_true_branch(v_temp144));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp144));
          auto v_If909__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If909__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If909__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If914__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If914__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If914__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ917__2 = typename Traits::rt_expr{};
          auto v_SatQ918__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ919__3 = iface.f_decl_bv("UnsignedSatQ919__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ920__3 = iface.f_decl_bool("UnsignedSatQ920__3");
            const auto v_temp145 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If909__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If914__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp145));
            iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ920__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp145));
            const auto v_temp146 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If909__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If914__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp146));
            iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ920__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp146));
            iface.f_gen_store(v_UnsignedSatQ919__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If909__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If914__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ920__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp145));
            v_SatQ917__2 = iface.f_gen_load(v_UnsignedSatQ919__3);
            v_SatQ918__2 = iface.f_gen_load(v_UnsignedSatQ920__3);
          } else {
            const auto v_SignedSatQ925__3 = iface.f_decl_bv("SignedSatQ925__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ926__3 = iface.f_decl_bool("SignedSatQ926__3");
            const auto v_temp147 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If909__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If914__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp147));
            iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ926__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp147));
            const auto v_temp148 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If909__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If914__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp148));
            iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ926__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp148));
            iface.f_gen_store(v_SignedSatQ925__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If909__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If914__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ926__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp147));
            v_SatQ917__2 = iface.f_gen_load(v_SignedSatQ925__3);
            v_SatQ918__2 = iface.f_gen_load(v_SignedSatQ926__3);
          } // if
          const auto v_temp149 = iface.f_gen_branch(v_SatQ918__2);
          iface.f_switch_context(iface.f_true_branch(v_temp149));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp149));
          auto v_If939__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If939__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If939__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If944__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If944__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If944__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ947__2 = typename Traits::rt_expr{};
          auto v_SatQ948__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ949__3 = iface.f_decl_bv("UnsignedSatQ949__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ950__3 = iface.f_decl_bool("UnsignedSatQ950__3");
            const auto v_temp150 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If939__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If944__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp150));
            iface.f_gen_store(v_UnsignedSatQ949__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ950__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp150));
            const auto v_temp151 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If939__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If944__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp151));
            iface.f_gen_store(v_UnsignedSatQ949__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ950__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp151));
            iface.f_gen_store(v_UnsignedSatQ949__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If939__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If944__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ950__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp150));
            v_SatQ947__2 = iface.f_gen_load(v_UnsignedSatQ949__3);
            v_SatQ948__2 = iface.f_gen_load(v_UnsignedSatQ950__3);
          } else {
            const auto v_SignedSatQ955__3 = iface.f_decl_bv("SignedSatQ955__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ956__3 = iface.f_decl_bool("SignedSatQ956__3");
            const auto v_temp152 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If939__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If944__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp152));
            iface.f_gen_store(v_SignedSatQ955__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ956__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp152));
            const auto v_temp153 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If939__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If944__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp153));
            iface.f_gen_store(v_SignedSatQ955__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ956__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp153));
            iface.f_gen_store(v_SignedSatQ955__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If939__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If944__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ956__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp152));
            v_SatQ947__2 = iface.f_gen_load(v_SignedSatQ955__3);
            v_SatQ948__2 = iface.f_gen_load(v_SignedSatQ956__3);
          } // if
          const auto v_temp154 = iface.f_gen_branch(v_SatQ948__2);
          iface.f_switch_context(iface.f_true_branch(v_temp154));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp154));
          auto v_If969__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If969__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If969__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp752__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If974__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If974__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If974__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp755__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ977__2 = typename Traits::rt_expr{};
          auto v_SatQ978__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ979__3 = iface.f_decl_bv("UnsignedSatQ979__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ980__3 = iface.f_decl_bool("UnsignedSatQ980__3");
            const auto v_temp155 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If969__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If974__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp155));
            iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ980__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp155));
            const auto v_temp156 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If969__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If974__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp156));
            iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ980__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp156));
            iface.f_gen_store(v_UnsignedSatQ979__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If969__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If974__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ980__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp155));
            v_SatQ977__2 = iface.f_gen_load(v_UnsignedSatQ979__3);
            v_SatQ978__2 = iface.f_gen_load(v_UnsignedSatQ980__3);
          } else {
            const auto v_SignedSatQ985__3 = iface.f_decl_bv("SignedSatQ985__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ986__3 = iface.f_decl_bool("SignedSatQ986__3");
            const auto v_temp157 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If969__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If974__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp157));
            iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ986__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp157));
            const auto v_temp158 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If969__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If974__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp158));
            iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ986__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp158));
            iface.f_gen_store(v_SignedSatQ985__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If969__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If974__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ986__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp157));
            v_SatQ977__2 = iface.f_gen_load(v_SignedSatQ985__3);
            v_SatQ978__2 = iface.f_gen_load(v_SignedSatQ986__3);
          } // if
          const auto v_temp159 = iface.f_gen_branch(v_SatQ978__2);
          iface.f_switch_context(iface.f_true_branch(v_temp159));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp159));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ977__2, iface.f_gen_append_bits(v_SatQ947__2, iface.f_gen_append_bits(v_SatQ917__2, iface.f_gen_append_bits(v_SatQ887__2, iface.f_gen_append_bits(v_SatQ857__2, iface.f_gen_append_bits(v_SatQ827__2, iface.f_gen_append_bits(v_SatQ797__2, v_SatQ766__2))))))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp1004__2 = typename Traits::rt_expr{};
          v_Exp1004__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp1007__2 = typename Traits::rt_expr{};
          v_Exp1007__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If1010__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1010__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1010__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If1015__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1015__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1007__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1015__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1007__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ1018__2 = typename Traits::rt_expr{};
          auto v_SatQ1019__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ1020__3 = iface.f_decl_bv("UnsignedSatQ1020__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ1021__3 = iface.f_decl_bool("UnsignedSatQ1021__3");
            const auto v_temp160 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1010__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1015__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp160));
            iface.f_gen_store(v_UnsignedSatQ1020__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ1021__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp160));
            const auto v_temp161 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1010__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1015__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp161));
            iface.f_gen_store(v_UnsignedSatQ1020__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ1021__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp161));
            iface.f_gen_store(v_UnsignedSatQ1020__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1010__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1015__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ1021__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp160));
            v_SatQ1018__2 = iface.f_gen_load(v_UnsignedSatQ1020__3);
            v_SatQ1019__2 = iface.f_gen_load(v_UnsignedSatQ1021__3);
          } else {
            const auto v_SignedSatQ1026__3 = iface.f_decl_bv("SignedSatQ1026__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ1027__3 = iface.f_decl_bool("SignedSatQ1027__3");
            const auto v_temp162 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1010__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1015__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp162));
            iface.f_gen_store(v_SignedSatQ1026__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ1027__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp162));
            const auto v_temp163 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1010__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1015__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp163));
            iface.f_gen_store(v_SignedSatQ1026__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ1027__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp163));
            iface.f_gen_store(v_SignedSatQ1026__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1010__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1015__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ1027__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp162));
            v_SatQ1018__2 = iface.f_gen_load(v_SignedSatQ1026__3);
            v_SatQ1019__2 = iface.f_gen_load(v_SignedSatQ1027__3);
          } // if
          const auto v_temp164 = iface.f_gen_branch(v_SatQ1019__2);
          iface.f_switch_context(iface.f_true_branch(v_temp164));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp164));
          auto v_If1041__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1041__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1004__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1041__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1004__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If1046__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1046__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1007__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1046__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1007__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ1049__2 = typename Traits::rt_expr{};
          auto v_SatQ1050__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ1051__3 = iface.f_decl_bv("UnsignedSatQ1051__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ1052__3 = iface.f_decl_bool("UnsignedSatQ1052__3");
            const auto v_temp165 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1041__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1046__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp165));
            iface.f_gen_store(v_UnsignedSatQ1051__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ1052__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp165));
            const auto v_temp166 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1041__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1046__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp166));
            iface.f_gen_store(v_UnsignedSatQ1051__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ1052__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp166));
            iface.f_gen_store(v_UnsignedSatQ1051__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1041__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1046__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ1052__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp165));
            v_SatQ1049__2 = iface.f_gen_load(v_UnsignedSatQ1051__3);
            v_SatQ1050__2 = iface.f_gen_load(v_UnsignedSatQ1052__3);
          } else {
            const auto v_SignedSatQ1057__3 = iface.f_decl_bv("SignedSatQ1057__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ1058__3 = iface.f_decl_bool("SignedSatQ1058__3");
            const auto v_temp167 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1041__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1046__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp167));
            iface.f_gen_store(v_SignedSatQ1057__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ1058__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp167));
            const auto v_temp168 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1041__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1046__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp168));
            iface.f_gen_store(v_SignedSatQ1057__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ1058__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp168));
            iface.f_gen_store(v_SignedSatQ1057__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1041__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1046__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ1058__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp167));
            v_SatQ1049__2 = iface.f_gen_load(v_SignedSatQ1057__3);
            v_SatQ1050__2 = iface.f_gen_load(v_SignedSatQ1058__3);
          } // if
          const auto v_temp169 = iface.f_gen_branch(v_SatQ1050__2);
          iface.f_switch_context(iface.f_true_branch(v_temp169));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp169));
          auto v_If1071__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1071__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1004__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1071__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1004__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If1076__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1076__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1007__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1076__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1007__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ1079__2 = typename Traits::rt_expr{};
          auto v_SatQ1080__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ1081__3 = iface.f_decl_bv("UnsignedSatQ1081__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ1082__3 = iface.f_decl_bool("UnsignedSatQ1082__3");
            const auto v_temp170 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1071__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1076__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp170));
            iface.f_gen_store(v_UnsignedSatQ1081__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ1082__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp170));
            const auto v_temp171 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1071__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1076__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp171));
            iface.f_gen_store(v_UnsignedSatQ1081__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ1082__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp171));
            iface.f_gen_store(v_UnsignedSatQ1081__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1071__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1076__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ1082__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp170));
            v_SatQ1079__2 = iface.f_gen_load(v_UnsignedSatQ1081__3);
            v_SatQ1080__2 = iface.f_gen_load(v_UnsignedSatQ1082__3);
          } else {
            const auto v_SignedSatQ1087__3 = iface.f_decl_bv("SignedSatQ1087__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ1088__3 = iface.f_decl_bool("SignedSatQ1088__3");
            const auto v_temp172 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1071__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1076__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp172));
            iface.f_gen_store(v_SignedSatQ1087__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ1088__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp172));
            const auto v_temp173 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1071__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1076__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp173));
            iface.f_gen_store(v_SignedSatQ1087__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ1088__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp173));
            iface.f_gen_store(v_SignedSatQ1087__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1071__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1076__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ1088__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp172));
            v_SatQ1079__2 = iface.f_gen_load(v_SignedSatQ1087__3);
            v_SatQ1080__2 = iface.f_gen_load(v_SignedSatQ1088__3);
          } // if
          const auto v_temp174 = iface.f_gen_branch(v_SatQ1080__2);
          iface.f_switch_context(iface.f_true_branch(v_temp174));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp174));
          auto v_If1101__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1101__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1004__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1101__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1004__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_If1106__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If1106__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1007__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } else {
            v_If1106__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1007__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
          } // if
          auto v_SatQ1109__2 = typename Traits::rt_expr{};
          auto v_SatQ1110__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_UnsignedSatQ1111__3 = iface.f_decl_bv("UnsignedSatQ1111__3", iface.bigint_lit("16"));
            const auto v_UnsignedSatQ1112__3 = iface.f_decl_bool("UnsignedSatQ1112__3");
            const auto v_temp175 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "001111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1101__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1106__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp175));
            iface.f_gen_store(v_UnsignedSatQ1111__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
            iface.f_gen_store(v_UnsignedSatQ1112__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp175));
            const auto v_temp176 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1101__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1106__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp176));
            iface.f_gen_store(v_UnsignedSatQ1111__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
            iface.f_gen_store(v_UnsignedSatQ1112__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp176));
            iface.f_gen_store(v_UnsignedSatQ1111__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1101__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1106__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_UnsignedSatQ1112__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp175));
            v_SatQ1109__2 = iface.f_gen_load(v_UnsignedSatQ1111__3);
            v_SatQ1110__2 = iface.f_gen_load(v_UnsignedSatQ1112__3);
          } else {
            const auto v_SignedSatQ1117__3 = iface.f_decl_bv("SignedSatQ1117__3", iface.bigint_lit("16"));
            const auto v_SignedSatQ1118__3 = iface.f_decl_bool("SignedSatQ1118__3");
            const auto v_temp177 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1101__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1106__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp177));
            iface.f_gen_store(v_SignedSatQ1117__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "0111111111111111")));
            iface.f_gen_store(v_SignedSatQ1118__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp177));
            const auto v_temp178 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1101__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If1106__2, iface.f_gen_int_lit(iface.bigint_lit("18")))), iface.f_gen_bit_lit(iface.bits_lit(18U, "111000000000000000"))));
            iface.f_switch_context(iface.f_true_branch(v_temp178));
            iface.f_gen_store(v_SignedSatQ1117__3, iface.f_gen_bit_lit(iface.bits_lit(16U, "1000000000000000")));
            iface.f_gen_store(v_SignedSatQ1118__3, iface.f_gen_bool_lit(true));
            iface.f_switch_context(iface.f_false_branch(v_temp178));
            iface.f_gen_store(v_SignedSatQ1117__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1101__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1106__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            iface.f_gen_store(v_SignedSatQ1118__3, iface.f_gen_bool_lit(false));
            iface.f_switch_context(iface.f_merge_branch(v_temp177));
            v_SatQ1109__2 = iface.f_gen_load(v_SignedSatQ1117__3);
            v_SatQ1110__2 = iface.f_gen_load(v_SignedSatQ1118__3);
          } // if
          const auto v_temp179 = iface.f_gen_branch(v_SatQ1110__2);
          iface.f_switch_context(iface.f_true_branch(v_temp179));
          iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
          iface.f_switch_context(iface.f_merge_branch(v_temp179));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ1109__2, iface.f_gen_append_bits(v_SatQ1079__2, iface.f_gen_append_bits(v_SatQ1049__2, v_SatQ1018__2))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp1137__2 = typename Traits::rt_expr{};
            v_Exp1137__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp1140__2 = typename Traits::rt_expr{};
            v_Exp1140__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If1143__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1143__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1143__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1148__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1148__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1140__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1148__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1140__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1151__2 = typename Traits::rt_expr{};
            auto v_SatQ1152__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1153__3 = iface.f_decl_bv("UnsignedSatQ1153__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1154__3 = iface.f_decl_bool("UnsignedSatQ1154__3");
              const auto v_temp180 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1143__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1148__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp180));
              iface.f_gen_store(v_UnsignedSatQ1153__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1154__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp180));
              const auto v_temp181 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1143__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1148__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp181));
              iface.f_gen_store(v_UnsignedSatQ1153__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1154__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp181));
              iface.f_gen_store(v_UnsignedSatQ1153__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1143__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1148__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1154__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp180));
              v_SatQ1151__2 = iface.f_gen_load(v_UnsignedSatQ1153__3);
              v_SatQ1152__2 = iface.f_gen_load(v_UnsignedSatQ1154__3);
            } else {
              const auto v_SignedSatQ1159__3 = iface.f_decl_bv("SignedSatQ1159__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1160__3 = iface.f_decl_bool("SignedSatQ1160__3");
              const auto v_temp182 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1143__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1148__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp182));
              iface.f_gen_store(v_SignedSatQ1159__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1160__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp182));
              const auto v_temp183 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1143__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1148__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp183));
              iface.f_gen_store(v_SignedSatQ1159__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1160__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp183));
              iface.f_gen_store(v_SignedSatQ1159__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1143__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1148__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1160__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp182));
              v_SatQ1151__2 = iface.f_gen_load(v_SignedSatQ1159__3);
              v_SatQ1152__2 = iface.f_gen_load(v_SignedSatQ1160__3);
            } // if
            const auto v_temp184 = iface.f_gen_branch(v_SatQ1152__2);
            iface.f_switch_context(iface.f_true_branch(v_temp184));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp184));
            auto v_If1174__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1174__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1137__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1174__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1137__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1179__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1179__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1140__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1179__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1140__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1182__2 = typename Traits::rt_expr{};
            auto v_SatQ1183__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1184__3 = iface.f_decl_bv("UnsignedSatQ1184__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1185__3 = iface.f_decl_bool("UnsignedSatQ1185__3");
              const auto v_temp185 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1174__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1179__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp185));
              iface.f_gen_store(v_UnsignedSatQ1184__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1185__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp185));
              const auto v_temp186 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1174__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1179__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp186));
              iface.f_gen_store(v_UnsignedSatQ1184__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1185__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp186));
              iface.f_gen_store(v_UnsignedSatQ1184__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1174__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1179__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1185__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp185));
              v_SatQ1182__2 = iface.f_gen_load(v_UnsignedSatQ1184__3);
              v_SatQ1183__2 = iface.f_gen_load(v_UnsignedSatQ1185__3);
            } else {
              const auto v_SignedSatQ1190__3 = iface.f_decl_bv("SignedSatQ1190__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1191__3 = iface.f_decl_bool("SignedSatQ1191__3");
              const auto v_temp187 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1174__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1179__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp187));
              iface.f_gen_store(v_SignedSatQ1190__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1191__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp187));
              const auto v_temp188 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1174__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1179__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp188));
              iface.f_gen_store(v_SignedSatQ1190__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1191__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp188));
              iface.f_gen_store(v_SignedSatQ1190__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1174__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1179__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1191__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp187));
              v_SatQ1182__2 = iface.f_gen_load(v_SignedSatQ1190__3);
              v_SatQ1183__2 = iface.f_gen_load(v_SignedSatQ1191__3);
            } // if
            const auto v_temp189 = iface.f_gen_branch(v_SatQ1183__2);
            iface.f_switch_context(iface.f_true_branch(v_temp189));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp189));
            auto v_If1204__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1204__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1137__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1204__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1137__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1209__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1209__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1140__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1209__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1140__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1212__2 = typename Traits::rt_expr{};
            auto v_SatQ1213__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1214__3 = iface.f_decl_bv("UnsignedSatQ1214__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1215__3 = iface.f_decl_bool("UnsignedSatQ1215__3");
              const auto v_temp190 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1204__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1209__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp190));
              iface.f_gen_store(v_UnsignedSatQ1214__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1215__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp190));
              const auto v_temp191 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1204__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1209__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp191));
              iface.f_gen_store(v_UnsignedSatQ1214__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1215__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp191));
              iface.f_gen_store(v_UnsignedSatQ1214__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1204__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1209__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1215__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp190));
              v_SatQ1212__2 = iface.f_gen_load(v_UnsignedSatQ1214__3);
              v_SatQ1213__2 = iface.f_gen_load(v_UnsignedSatQ1215__3);
            } else {
              const auto v_SignedSatQ1220__3 = iface.f_decl_bv("SignedSatQ1220__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1221__3 = iface.f_decl_bool("SignedSatQ1221__3");
              const auto v_temp192 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1204__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1209__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp192));
              iface.f_gen_store(v_SignedSatQ1220__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1221__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp192));
              const auto v_temp193 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1204__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1209__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp193));
              iface.f_gen_store(v_SignedSatQ1220__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1221__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp193));
              iface.f_gen_store(v_SignedSatQ1220__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1204__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1209__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1221__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp192));
              v_SatQ1212__2 = iface.f_gen_load(v_SignedSatQ1220__3);
              v_SatQ1213__2 = iface.f_gen_load(v_SignedSatQ1221__3);
            } // if
            const auto v_temp194 = iface.f_gen_branch(v_SatQ1213__2);
            iface.f_switch_context(iface.f_true_branch(v_temp194));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp194));
            auto v_If1234__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1234__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1137__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1234__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1137__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1239__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1239__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1140__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1239__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1140__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1242__2 = typename Traits::rt_expr{};
            auto v_SatQ1243__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1244__3 = iface.f_decl_bv("UnsignedSatQ1244__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1245__3 = iface.f_decl_bool("UnsignedSatQ1245__3");
              const auto v_temp195 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1234__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1239__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp195));
              iface.f_gen_store(v_UnsignedSatQ1244__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1245__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp195));
              const auto v_temp196 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1234__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1239__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp196));
              iface.f_gen_store(v_UnsignedSatQ1244__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1245__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp196));
              iface.f_gen_store(v_UnsignedSatQ1244__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1234__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1239__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1245__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp195));
              v_SatQ1242__2 = iface.f_gen_load(v_UnsignedSatQ1244__3);
              v_SatQ1243__2 = iface.f_gen_load(v_UnsignedSatQ1245__3);
            } else {
              const auto v_SignedSatQ1250__3 = iface.f_decl_bv("SignedSatQ1250__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1251__3 = iface.f_decl_bool("SignedSatQ1251__3");
              const auto v_temp197 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1234__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1239__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp197));
              iface.f_gen_store(v_SignedSatQ1250__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1251__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp197));
              const auto v_temp198 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1234__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1239__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp198));
              iface.f_gen_store(v_SignedSatQ1250__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1251__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp198));
              iface.f_gen_store(v_SignedSatQ1250__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1234__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1239__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1251__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp197));
              v_SatQ1242__2 = iface.f_gen_load(v_SignedSatQ1250__3);
              v_SatQ1243__2 = iface.f_gen_load(v_SignedSatQ1251__3);
            } // if
            const auto v_temp199 = iface.f_gen_branch(v_SatQ1243__2);
            iface.f_switch_context(iface.f_true_branch(v_temp199));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp199));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ1242__2, iface.f_gen_append_bits(v_SatQ1212__2, iface.f_gen_append_bits(v_SatQ1182__2, v_SatQ1151__2))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp1269__2 = typename Traits::rt_expr{};
            v_Exp1269__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp1272__2 = typename Traits::rt_expr{};
            v_Exp1272__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If1275__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1275__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1275__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1280__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1280__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1272__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1280__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1272__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1283__2 = typename Traits::rt_expr{};
            auto v_SatQ1284__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1285__3 = iface.f_decl_bv("UnsignedSatQ1285__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1286__3 = iface.f_decl_bool("UnsignedSatQ1286__3");
              const auto v_temp200 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1275__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1280__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp200));
              iface.f_gen_store(v_UnsignedSatQ1285__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1286__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp200));
              const auto v_temp201 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1275__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1280__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp201));
              iface.f_gen_store(v_UnsignedSatQ1285__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1286__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp201));
              iface.f_gen_store(v_UnsignedSatQ1285__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1275__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1280__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1286__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp200));
              v_SatQ1283__2 = iface.f_gen_load(v_UnsignedSatQ1285__3);
              v_SatQ1284__2 = iface.f_gen_load(v_UnsignedSatQ1286__3);
            } else {
              const auto v_SignedSatQ1291__3 = iface.f_decl_bv("SignedSatQ1291__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1292__3 = iface.f_decl_bool("SignedSatQ1292__3");
              const auto v_temp202 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1275__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1280__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp202));
              iface.f_gen_store(v_SignedSatQ1291__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1292__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp202));
              const auto v_temp203 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1275__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1280__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp203));
              iface.f_gen_store(v_SignedSatQ1291__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1292__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp203));
              iface.f_gen_store(v_SignedSatQ1291__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1275__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1280__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1292__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp202));
              v_SatQ1283__2 = iface.f_gen_load(v_SignedSatQ1291__3);
              v_SatQ1284__2 = iface.f_gen_load(v_SignedSatQ1292__3);
            } // if
            const auto v_temp204 = iface.f_gen_branch(v_SatQ1284__2);
            iface.f_switch_context(iface.f_true_branch(v_temp204));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp204));
            auto v_If1306__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1306__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1269__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1306__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1269__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_If1311__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If1311__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1272__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } else {
              v_If1311__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1272__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
            } // if
            auto v_SatQ1314__2 = typename Traits::rt_expr{};
            auto v_SatQ1315__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_UnsignedSatQ1316__3 = iface.f_decl_bv("UnsignedSatQ1316__3", iface.bigint_lit("32"));
              const auto v_UnsignedSatQ1317__3 = iface.f_decl_bool("UnsignedSatQ1317__3");
              const auto v_temp205 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0011111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1306__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1311__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp205));
              iface.f_gen_store(v_UnsignedSatQ1316__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
              iface.f_gen_store(v_UnsignedSatQ1317__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp205));
              const auto v_temp206 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1306__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1311__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp206));
              iface.f_gen_store(v_UnsignedSatQ1316__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
              iface.f_gen_store(v_UnsignedSatQ1317__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp206));
              iface.f_gen_store(v_UnsignedSatQ1316__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1306__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1311__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_UnsignedSatQ1317__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp205));
              v_SatQ1314__2 = iface.f_gen_load(v_UnsignedSatQ1316__3);
              v_SatQ1315__2 = iface.f_gen_load(v_UnsignedSatQ1317__3);
            } else {
              const auto v_SignedSatQ1322__3 = iface.f_decl_bv("SignedSatQ1322__3", iface.bigint_lit("32"));
              const auto v_SignedSatQ1323__3 = iface.f_decl_bool("SignedSatQ1323__3");
              const auto v_temp207 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0001111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1306__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1311__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
              iface.f_switch_context(iface.f_true_branch(v_temp207));
              iface.f_gen_store(v_SignedSatQ1322__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "01111111111111111111111111111111")));
              iface.f_gen_store(v_SignedSatQ1323__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp207));
              const auto v_temp208 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1306__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If1311__2, iface.f_gen_int_lit(iface.bigint_lit("34")))), iface.f_gen_bit_lit(iface.bits_lit(34U, "1110000000000000000000000000000000"))));
              iface.f_switch_context(iface.f_true_branch(v_temp208));
              iface.f_gen_store(v_SignedSatQ1322__3, iface.f_gen_bit_lit(iface.bits_lit(32U, "10000000000000000000000000000000")));
              iface.f_gen_store(v_SignedSatQ1323__3, iface.f_gen_bool_lit(true));
              iface.f_switch_context(iface.f_false_branch(v_temp208));
              iface.f_gen_store(v_SignedSatQ1322__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1306__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1311__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              iface.f_gen_store(v_SignedSatQ1323__3, iface.f_gen_bool_lit(false));
              iface.f_switch_context(iface.f_merge_branch(v_temp207));
              v_SatQ1314__2 = iface.f_gen_load(v_SignedSatQ1322__3);
              v_SatQ1315__2 = iface.f_gen_load(v_SignedSatQ1323__3);
            } // if
            const auto v_temp209 = iface.f_gen_branch(v_SatQ1315__2);
            iface.f_switch_context(iface.f_true_branch(v_temp209));
            iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
            iface.f_switch_context(iface.f_merge_branch(v_temp209));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(v_SatQ1314__2, v_SatQ1283__2), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp1342__2 = typename Traits::rt_expr{};
              v_Exp1342__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp1345__2 = typename Traits::rt_expr{};
              v_Exp1345__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If1348__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1348__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1348__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If1353__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1353__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1345__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1353__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1345__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_SatQ1356__2 = typename Traits::rt_expr{};
              auto v_SatQ1357__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1358__3 = iface.f_decl_bv("UnsignedSatQ1358__3", iface.bigint_lit("64"));
                const auto v_UnsignedSatQ1359__3 = iface.f_decl_bool("UnsignedSatQ1359__3");
                const auto v_temp210 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1348__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1353__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp210));
                iface.f_gen_store(v_UnsignedSatQ1358__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1359__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp210));
                const auto v_temp211 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1348__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1353__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp211));
                iface.f_gen_store(v_UnsignedSatQ1358__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1359__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp211));
                iface.f_gen_store(v_UnsignedSatQ1358__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1348__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1353__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_UnsignedSatQ1359__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp210));
                v_SatQ1356__2 = iface.f_gen_load(v_UnsignedSatQ1358__3);
                v_SatQ1357__2 = iface.f_gen_load(v_UnsignedSatQ1359__3);
              } else {
                const auto v_SignedSatQ1364__3 = iface.f_decl_bv("SignedSatQ1364__3", iface.bigint_lit("64"));
                const auto v_SignedSatQ1365__3 = iface.f_decl_bool("SignedSatQ1365__3");
                const auto v_temp212 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1348__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1353__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp212));
                iface.f_gen_store(v_SignedSatQ1364__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1365__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp212));
                const auto v_temp213 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1348__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1353__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "111000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp213));
                iface.f_gen_store(v_SignedSatQ1364__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1365__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp213));
                iface.f_gen_store(v_SignedSatQ1364__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1348__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1353__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_SignedSatQ1365__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp212));
                v_SatQ1356__2 = iface.f_gen_load(v_SignedSatQ1364__3);
                v_SatQ1357__2 = iface.f_gen_load(v_SignedSatQ1365__3);
              } // if
              const auto v_temp214 = iface.f_gen_branch(v_SatQ1357__2);
              iface.f_switch_context(iface.f_true_branch(v_temp214));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp214));
              auto v_If1379__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1379__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1342__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1379__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1342__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If1384__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1384__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1345__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1384__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1345__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_SatQ1387__2 = typename Traits::rt_expr{};
              auto v_SatQ1388__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1389__3 = iface.f_decl_bv("UnsignedSatQ1389__3", iface.bigint_lit("64"));
                const auto v_UnsignedSatQ1390__3 = iface.f_decl_bool("UnsignedSatQ1390__3");
                const auto v_temp215 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1379__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1384__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp215));
                iface.f_gen_store(v_UnsignedSatQ1389__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1390__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp215));
                const auto v_temp216 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1379__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1384__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp216));
                iface.f_gen_store(v_UnsignedSatQ1389__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1390__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp216));
                iface.f_gen_store(v_UnsignedSatQ1389__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1379__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1384__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_UnsignedSatQ1390__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp215));
                v_SatQ1387__2 = iface.f_gen_load(v_UnsignedSatQ1389__3);
                v_SatQ1388__2 = iface.f_gen_load(v_UnsignedSatQ1390__3);
              } else {
                const auto v_SignedSatQ1395__3 = iface.f_decl_bv("SignedSatQ1395__3", iface.bigint_lit("64"));
                const auto v_SignedSatQ1396__3 = iface.f_decl_bool("SignedSatQ1396__3");
                const auto v_temp217 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1379__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1384__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp217));
                iface.f_gen_store(v_SignedSatQ1395__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1396__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp217));
                const auto v_temp218 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1379__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1384__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "111000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp218));
                iface.f_gen_store(v_SignedSatQ1395__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1396__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp218));
                iface.f_gen_store(v_SignedSatQ1395__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1379__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1384__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_SignedSatQ1396__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp217));
                v_SatQ1387__2 = iface.f_gen_load(v_SignedSatQ1395__3);
                v_SatQ1388__2 = iface.f_gen_load(v_SignedSatQ1396__3);
              } // if
              const auto v_temp219 = iface.f_gen_branch(v_SatQ1388__2);
              iface.f_switch_context(iface.f_true_branch(v_temp219));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp219));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(v_SatQ1387__2, v_SatQ1356__2));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp1417__2 = typename Traits::rt_expr{};
              v_Exp1417__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If1420__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1420__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1420__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_If1425__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1425__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp1417__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } else {
                v_If1425__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp1417__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
              } // if
              auto v_SatQ1428__2 = typename Traits::rt_expr{};
              auto v_SatQ1429__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_UnsignedSatQ1430__3 = iface.f_decl_bv("UnsignedSatQ1430__3", iface.bigint_lit("64"));
                const auto v_UnsignedSatQ1431__3 = iface.f_decl_bool("UnsignedSatQ1431__3");
                const auto v_temp220 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "001111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1420__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1425__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp220));
                iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_UnsignedSatQ1431__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp220));
                const auto v_temp221 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1420__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1425__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp221));
                iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_UnsignedSatQ1431__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp221));
                iface.f_gen_store(v_UnsignedSatQ1430__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1420__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1425__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_UnsignedSatQ1431__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp220));
                v_SatQ1428__2 = iface.f_gen_load(v_UnsignedSatQ1430__3);
                v_SatQ1429__2 = iface.f_gen_load(v_UnsignedSatQ1431__3);
              } else {
                const auto v_SignedSatQ1436__3 = iface.f_decl_bv("SignedSatQ1436__3", iface.bigint_lit("64"));
                const auto v_SignedSatQ1437__3 = iface.f_decl_bool("SignedSatQ1437__3");
                const auto v_temp222 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000111111111111111111111111111111111111111111111111111111111111111")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1420__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1425__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
                iface.f_switch_context(iface.f_true_branch(v_temp222));
                iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "0111111111111111111111111111111111111111111111111111111111111111")));
                iface.f_gen_store(v_SignedSatQ1437__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp222));
                const auto v_temp223 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If1420__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If1425__2, iface.f_gen_int_lit(iface.bigint_lit("66")))), iface.f_gen_bit_lit(iface.bits_lit(66U, "111000000000000000000000000000000000000000000000000000000000000000"))));
                iface.f_switch_context(iface.f_true_branch(v_temp223));
                iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_bit_lit(iface.bits_lit(64U, "1000000000000000000000000000000000000000000000000000000000000000")));
                iface.f_gen_store(v_SignedSatQ1437__3, iface.f_gen_bool_lit(true));
                iface.f_switch_context(iface.f_false_branch(v_temp223));
                iface.f_gen_store(v_SignedSatQ1436__3, iface.f_gen_slice(iface.f_gen_sub_bits(iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1420__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_slice(iface.f_gen_SignExtend(v_If1425__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                iface.f_gen_store(v_SignedSatQ1437__3, iface.f_gen_bool_lit(false));
                iface.f_switch_context(iface.f_merge_branch(v_temp222));
                v_SatQ1428__2 = iface.f_gen_load(v_SignedSatQ1436__3);
                v_SatQ1429__2 = iface.f_gen_load(v_SignedSatQ1437__3);
              } // if
              const auto v_temp224 = iface.f_gen_branch(v_SatQ1429__2);
              iface.f_switch_context(iface.f_true_branch(v_temp224));
              iface.f_gen_store(iface.v_FPSR(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("28"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "1")), iface.f_gen_slice(iface.f_gen_load(iface.v_FPSR()), iface.bigint_lit("0"), iface.bigint_lit("27")))));
              iface.f_switch_context(iface.f_merge_branch(v_temp224));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_SatQ1428__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_simd


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_diff(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      auto v_Vpart_read6__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp9__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp9__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read6__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read6__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
      } // if
      auto v_Vpart_read17__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      const auto v_Exp20__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
      assert(v_Exp20__2);
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read17__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_Vpart_read17__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
      } // if
      auto v_If28__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        v_If28__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
      } else {
        v_If28__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
      } // if
      auto v_If35__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If35__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If35__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If40__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If40__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If40__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      const auto v_If44__2 = iface.f_decl_bv("If44__2", iface.bigint_lit("10"));
      const auto v_temp0 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If35__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If40__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_If44__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If35__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If40__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      iface.f_gen_store(v_If44__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If35__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If40__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      auto v_If49__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If49__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If49__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If54__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If54__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If54__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      const auto v_If58__2 = iface.f_decl_bv("If58__2", iface.bigint_lit("10"));
      const auto v_temp1 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If54__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_If58__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If54__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_If58__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If49__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If54__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp1));
      auto v_If63__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If63__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If63__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If68__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If68__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If68__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      const auto v_If72__2 = iface.f_decl_bv("If72__2", iface.bigint_lit("10"));
      const auto v_temp2 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If63__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If68__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(v_If72__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If63__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If68__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
      iface.f_switch_context(iface.f_false_branch(v_temp2));
      iface.f_gen_store(v_If72__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If63__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If68__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp2));
      auto v_If77__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If77__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If77__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If82__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If82__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If82__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      const auto v_If86__2 = iface.f_decl_bv("If86__2", iface.bigint_lit("10"));
      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If77__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If82__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_If86__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If77__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If82__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      iface.f_gen_store(v_If86__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If77__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If82__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp3));
      auto v_If91__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If91__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If91__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If96__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If96__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If96__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      const auto v_If100__2 = iface.f_decl_bv("If100__2", iface.bigint_lit("10"));
      const auto v_temp4 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If91__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If96__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(v_If100__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If91__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If96__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
      iface.f_switch_context(iface.f_false_branch(v_temp4));
      iface.f_gen_store(v_If100__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If91__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If96__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp4));
      auto v_If105__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If105__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If105__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If110__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If110__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If110__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      const auto v_If114__2 = iface.f_decl_bv("If114__2", iface.bigint_lit("10"));
      const auto v_temp5 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If105__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If110__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp5));
      iface.f_gen_store(v_If114__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If105__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If110__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
      iface.f_switch_context(iface.f_false_branch(v_temp5));
      iface.f_gen_store(v_If114__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If105__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If110__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp5));
      auto v_If119__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If119__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If119__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If124__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If124__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If124__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      const auto v_If128__2 = iface.f_decl_bv("If128__2", iface.bigint_lit("10"));
      const auto v_temp6 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If119__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If124__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp6));
      iface.f_gen_store(v_If128__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If119__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If124__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
      iface.f_switch_context(iface.f_false_branch(v_temp6));
      iface.f_gen_store(v_If128__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If119__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If124__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp6));
      auto v_If133__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If133__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If133__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      auto v_If138__2 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If138__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } else {
        v_If138__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read17__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
      } // if
      const auto v_If142__2 = iface.f_decl_bv("If142__2", iface.bigint_lit("10"));
      const auto v_temp7 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))));
      iface.f_switch_context(iface.f_true_branch(v_temp7));
      iface.f_gen_store(v_If142__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10")))));
      iface.f_switch_context(iface.f_false_branch(v_temp7));
      iface.f_gen_store(v_If142__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If133__2, iface.f_gen_int_lit(iface.bigint_lit("10"))), iface.f_gen_SignExtend(v_If138__2, iface.f_gen_int_lit(iface.bigint_lit("10"))))), iface.f_gen_bit_lit(iface.bits_lit(10U, "0000000001"))));
      iface.f_switch_context(iface.f_merge_branch(v_temp7));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If28__1, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If142__2), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If28__1, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If128__2), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If28__1, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If114__2), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If28__1, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If100__2), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If28__1, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If86__2), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If28__1, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If72__2), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If28__1, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If58__2), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If28__1, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If44__2), iface.f_gen_int_lit(iface.bigint_lit("16"))), iface.bigint_lit("0"), iface.bigint_lit("16")))))))))));
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        auto v_Vpart_read152__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp155__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp155__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read152__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read152__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        auto v_Vpart_read163__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        const auto v_Exp166__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
        assert(v_Exp166__2);
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read163__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_Vpart_read163__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
        } // if
        auto v_If174__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          v_If174__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_If174__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        auto v_If181__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If181__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read152__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If181__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read152__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If186__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If186__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read163__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If186__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read163__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        const auto v_If190__2 = iface.f_decl_bv("If190__2", iface.bigint_lit("18"));
        const auto v_temp8 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If181__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If186__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_If190__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If181__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If186__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        iface.f_gen_store(v_If190__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If181__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If186__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        auto v_If195__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If195__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read152__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If195__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read152__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If200__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If200__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read163__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If200__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read163__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        const auto v_If204__2 = iface.f_decl_bv("If204__2", iface.bigint_lit("18"));
        const auto v_temp9 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If195__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If200__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_If204__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If195__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If200__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        iface.f_gen_store(v_If204__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If195__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If200__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        auto v_If209__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If209__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read152__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If209__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read152__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If214__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If214__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read163__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If214__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read163__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        const auto v_If218__2 = iface.f_decl_bv("If218__2", iface.bigint_lit("18"));
        const auto v_temp10 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If209__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If214__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_If218__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If209__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If214__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        iface.f_gen_store(v_If218__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If209__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If214__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp10));
        auto v_If223__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If223__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read152__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If223__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read152__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        auto v_If228__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If228__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read163__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } else {
          v_If228__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read163__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
        } // if
        const auto v_If232__2 = iface.f_decl_bv("If232__2", iface.bigint_lit("18"));
        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))));
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_If232__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("18")))));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        iface.f_gen_store(v_If232__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If223__2, iface.f_gen_int_lit(iface.bigint_lit("18"))), iface.f_gen_SignExtend(v_If228__2, iface.f_gen_int_lit(iface.bigint_lit("18"))))), iface.f_gen_bit_lit(iface.bits_lit(18U, "000000000000000001"))));
        iface.f_switch_context(iface.f_merge_branch(v_temp11));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If174__1, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If232__2), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If174__1, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If218__2), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If174__1, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If204__2), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If174__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If190__2), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")))))));
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          auto v_Vpart_read242__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp245__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp245__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read242__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read242__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          auto v_Vpart_read253__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_Exp256__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
          assert(v_Exp256__2);
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read253__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_Vpart_read253__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
          } // if
          auto v_If264__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            v_If264__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_If264__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_If271__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If271__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read242__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If271__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read242__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If276__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If276__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read253__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If276__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read253__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          const auto v_If280__2 = iface.f_decl_bv("If280__2", iface.bigint_lit("34"));
          const auto v_temp12 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If271__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If276__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp12));
          iface.f_gen_store(v_If280__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If271__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If276__2, iface.f_gen_int_lit(iface.bigint_lit("34")))));
          iface.f_switch_context(iface.f_false_branch(v_temp12));
          iface.f_gen_store(v_If280__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If271__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If276__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp12));
          auto v_If285__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If285__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read242__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If285__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read242__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          auto v_If290__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If290__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Vpart_read253__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } else {
            v_If290__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Vpart_read253__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
          } // if
          const auto v_If294__2 = iface.f_decl_bv("If294__2", iface.bigint_lit("34"));
          const auto v_temp13 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If285__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If290__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))));
          iface.f_switch_context(iface.f_true_branch(v_temp13));
          iface.f_gen_store(v_If294__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If285__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If290__2, iface.f_gen_int_lit(iface.bigint_lit("34")))));
          iface.f_switch_context(iface.f_false_branch(v_temp13));
          iface.f_gen_store(v_If294__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If285__2, iface.f_gen_int_lit(iface.bigint_lit("34"))), iface.f_gen_SignExtend(v_If290__2, iface.f_gen_int_lit(iface.bigint_lit("34"))))), iface.f_gen_bit_lit(iface.bits_lit(34U, "0000000000000000000000000000000001"))));
          iface.f_switch_context(iface.f_merge_branch(v_temp13));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_add_bits(iface.f_gen_slice(v_If264__1, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If294__2), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.f_gen_add_bits(iface.f_gen_slice(v_If264__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If280__2), iface.f_gen_int_lit(iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            auto v_Vpart_read304__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp307__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp307__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read304__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read304__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            auto v_Vpart_read315__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp318__2 = (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) || ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0")))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))));
            assert(v_Exp318__2);
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read315__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64"));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_Vpart_read315__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64"));
            } // if
            auto v_If326__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              v_If326__1 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_If326__1 = iface.f_gen_bit_lit(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            auto v_If333__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If333__2 = iface.f_gen_ZeroExtend(v_Vpart_read304__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If333__2 = iface.f_gen_SignExtend(v_Vpart_read304__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            auto v_If338__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If338__2 = iface.f_gen_ZeroExtend(v_Vpart_read315__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
            } else {
              v_If338__2 = iface.f_gen_SignExtend(v_Vpart_read315__2, iface.f_gen_int_lit(iface.bigint_lit("65")));
            } // if
            const auto v_If342__2 = iface.f_decl_bv("If342__2", iface.bigint_lit("66"));
            const auto v_temp14 = iface.f_gen_branch(iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If333__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If338__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))));
            iface.f_switch_context(iface.f_true_branch(v_temp14));
            iface.f_gen_store(v_If342__2, iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If333__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If338__2, iface.f_gen_int_lit(iface.bigint_lit("66")))));
            iface.f_switch_context(iface.f_false_branch(v_temp14));
            iface.f_gen_store(v_If342__2, iface.f_gen_add_bits(iface.f_gen_not_bits(iface.f_gen_sub_bits(iface.f_gen_SignExtend(v_If333__2, iface.f_gen_int_lit(iface.bigint_lit("66"))), iface.f_gen_SignExtend(v_If338__2, iface.f_gen_int_lit(iface.bigint_lit("66"))))), iface.f_gen_bit_lit(iface.bits_lit(66U, "000000000000000000000000000000000000000000000000000000000000000001"))));
            iface.f_switch_context(iface.f_merge_branch(v_temp14));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_add_bits(v_If326__1, iface.f_gen_slice(iface.f_gen_SignExtend(iface.f_gen_load(v_If342__2), iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.bigint_lit("0"), iface.bigint_lit("128"))));
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_diff


} // namespace aslp
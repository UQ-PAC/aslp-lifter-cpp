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
void aslp_lifter<Traits>::f_aarch64_vector_reduce_int_max(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "100"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp6__2 = typename Traits::rt_expr{};
          v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If9__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If9__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If9__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If14__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If14__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If14__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If17__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If19__2 = iface.f_decl_bv("If19__2", iface.bigint_lit("9"));
            const auto v_temp0 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If9__2, v_If14__2));
            iface.f_switch_context(iface.f_true_branch(v_temp0));
            iface.f_gen_store(v_If19__2, v_If9__2);
            iface.f_switch_context(iface.f_false_branch(v_temp0));
            iface.f_gen_store(v_If19__2, v_If14__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp0));
            v_If17__1 = iface.f_gen_load(v_If19__2);
          } else {
            const auto v_If21__2 = iface.f_decl_bv("If21__2", iface.bigint_lit("9"));
            const auto v_temp1 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If14__2, v_If9__2));
            iface.f_switch_context(iface.f_true_branch(v_temp1));
            iface.f_gen_store(v_If21__2, v_If9__2);
            iface.f_switch_context(iface.f_false_branch(v_temp1));
            iface.f_gen_store(v_If21__2, v_If14__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp1));
            v_If17__1 = iface.f_gen_load(v_If21__2);
          } // if
          auto v_If24__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If24__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If24__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If27__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If29__2 = iface.f_decl_bv("If29__2", iface.bigint_lit("9"));
            const auto v_temp2 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If17__1, v_If24__2));
            iface.f_switch_context(iface.f_true_branch(v_temp2));
            iface.f_gen_store(v_If29__2, v_If17__1);
            iface.f_switch_context(iface.f_false_branch(v_temp2));
            iface.f_gen_store(v_If29__2, v_If24__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp2));
            v_If27__1 = iface.f_gen_load(v_If29__2);
          } else {
            const auto v_If31__2 = iface.f_decl_bv("If31__2", iface.bigint_lit("9"));
            const auto v_temp3 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If24__2, v_If17__1));
            iface.f_switch_context(iface.f_true_branch(v_temp3));
            iface.f_gen_store(v_If31__2, v_If17__1);
            iface.f_switch_context(iface.f_false_branch(v_temp3));
            iface.f_gen_store(v_If31__2, v_If24__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp3));
            v_If27__1 = iface.f_gen_load(v_If31__2);
          } // if
          auto v_If34__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If34__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If34__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If37__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If39__2 = iface.f_decl_bv("If39__2", iface.bigint_lit("9"));
            const auto v_temp4 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If27__1, v_If34__2));
            iface.f_switch_context(iface.f_true_branch(v_temp4));
            iface.f_gen_store(v_If39__2, v_If27__1);
            iface.f_switch_context(iface.f_false_branch(v_temp4));
            iface.f_gen_store(v_If39__2, v_If34__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp4));
            v_If37__1 = iface.f_gen_load(v_If39__2);
          } else {
            const auto v_If41__2 = iface.f_decl_bv("If41__2", iface.bigint_lit("9"));
            const auto v_temp5 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If34__2, v_If27__1));
            iface.f_switch_context(iface.f_true_branch(v_temp5));
            iface.f_gen_store(v_If41__2, v_If27__1);
            iface.f_switch_context(iface.f_false_branch(v_temp5));
            iface.f_gen_store(v_If41__2, v_If34__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp5));
            v_If37__1 = iface.f_gen_load(v_If41__2);
          } // if
          auto v_If44__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If44__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If44__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If47__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If49__2 = iface.f_decl_bv("If49__2", iface.bigint_lit("9"));
            const auto v_temp6 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If37__1, v_If44__2));
            iface.f_switch_context(iface.f_true_branch(v_temp6));
            iface.f_gen_store(v_If49__2, v_If37__1);
            iface.f_switch_context(iface.f_false_branch(v_temp6));
            iface.f_gen_store(v_If49__2, v_If44__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp6));
            v_If47__1 = iface.f_gen_load(v_If49__2);
          } else {
            const auto v_If51__2 = iface.f_decl_bv("If51__2", iface.bigint_lit("9"));
            const auto v_temp7 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If44__2, v_If37__1));
            iface.f_switch_context(iface.f_true_branch(v_temp7));
            iface.f_gen_store(v_If51__2, v_If37__1);
            iface.f_switch_context(iface.f_false_branch(v_temp7));
            iface.f_gen_store(v_If51__2, v_If44__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp7));
            v_If47__1 = iface.f_gen_load(v_If51__2);
          } // if
          auto v_If54__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If54__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If54__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If57__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If59__2 = iface.f_decl_bv("If59__2", iface.bigint_lit("9"));
            const auto v_temp8 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If47__1, v_If54__2));
            iface.f_switch_context(iface.f_true_branch(v_temp8));
            iface.f_gen_store(v_If59__2, v_If47__1);
            iface.f_switch_context(iface.f_false_branch(v_temp8));
            iface.f_gen_store(v_If59__2, v_If54__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp8));
            v_If57__1 = iface.f_gen_load(v_If59__2);
          } else {
            const auto v_If61__2 = iface.f_decl_bv("If61__2", iface.bigint_lit("9"));
            const auto v_temp9 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If54__2, v_If47__1));
            iface.f_switch_context(iface.f_true_branch(v_temp9));
            iface.f_gen_store(v_If61__2, v_If47__1);
            iface.f_switch_context(iface.f_false_branch(v_temp9));
            iface.f_gen_store(v_If61__2, v_If54__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp9));
            v_If57__1 = iface.f_gen_load(v_If61__2);
          } // if
          auto v_If64__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If64__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If64__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If67__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If69__2 = iface.f_decl_bv("If69__2", iface.bigint_lit("9"));
            const auto v_temp10 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If57__1, v_If64__2));
            iface.f_switch_context(iface.f_true_branch(v_temp10));
            iface.f_gen_store(v_If69__2, v_If57__1);
            iface.f_switch_context(iface.f_false_branch(v_temp10));
            iface.f_gen_store(v_If69__2, v_If64__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp10));
            v_If67__1 = iface.f_gen_load(v_If69__2);
          } else {
            const auto v_If71__2 = iface.f_decl_bv("If71__2", iface.bigint_lit("9"));
            const auto v_temp11 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If64__2, v_If57__1));
            iface.f_switch_context(iface.f_true_branch(v_temp11));
            iface.f_gen_store(v_If71__2, v_If57__1);
            iface.f_switch_context(iface.f_false_branch(v_temp11));
            iface.f_gen_store(v_If71__2, v_If64__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp11));
            v_If67__1 = iface.f_gen_load(v_If71__2);
          } // if
          auto v_If74__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If74__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If74__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If77__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If79__2 = iface.f_decl_bv("If79__2", iface.bigint_lit("9"));
            const auto v_temp12 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If67__1, v_If74__2));
            iface.f_switch_context(iface.f_true_branch(v_temp12));
            iface.f_gen_store(v_If79__2, v_If67__1);
            iface.f_switch_context(iface.f_false_branch(v_temp12));
            iface.f_gen_store(v_If79__2, v_If74__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp12));
            v_If77__1 = iface.f_gen_load(v_If79__2);
          } else {
            const auto v_If81__2 = iface.f_decl_bv("If81__2", iface.bigint_lit("9"));
            const auto v_temp13 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If74__2, v_If67__1));
            iface.f_switch_context(iface.f_true_branch(v_temp13));
            iface.f_gen_store(v_If81__2, v_If67__1);
            iface.f_switch_context(iface.f_false_branch(v_temp13));
            iface.f_gen_store(v_If81__2, v_If74__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp13));
            v_If77__1 = iface.f_gen_load(v_If81__2);
          } // if
          auto v_If84__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If84__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If84__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If87__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If89__2 = iface.f_decl_bv("If89__2", iface.bigint_lit("9"));
            const auto v_temp14 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If77__1, v_If84__2));
            iface.f_switch_context(iface.f_true_branch(v_temp14));
            iface.f_gen_store(v_If89__2, v_If77__1);
            iface.f_switch_context(iface.f_false_branch(v_temp14));
            iface.f_gen_store(v_If89__2, v_If84__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp14));
            v_If87__1 = iface.f_gen_load(v_If89__2);
          } else {
            const auto v_If91__2 = iface.f_decl_bv("If91__2", iface.bigint_lit("9"));
            const auto v_temp15 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If84__2, v_If77__1));
            iface.f_switch_context(iface.f_true_branch(v_temp15));
            iface.f_gen_store(v_If91__2, v_If77__1);
            iface.f_switch_context(iface.f_false_branch(v_temp15));
            iface.f_gen_store(v_If91__2, v_If84__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp15));
            v_If87__1 = iface.f_gen_load(v_If91__2);
          } // if
          auto v_If94__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If94__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If94__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If97__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If99__2 = iface.f_decl_bv("If99__2", iface.bigint_lit("9"));
            const auto v_temp16 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If87__1, v_If94__2));
            iface.f_switch_context(iface.f_true_branch(v_temp16));
            iface.f_gen_store(v_If99__2, v_If87__1);
            iface.f_switch_context(iface.f_false_branch(v_temp16));
            iface.f_gen_store(v_If99__2, v_If94__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp16));
            v_If97__1 = iface.f_gen_load(v_If99__2);
          } else {
            const auto v_If101__2 = iface.f_decl_bv("If101__2", iface.bigint_lit("9"));
            const auto v_temp17 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If94__2, v_If87__1));
            iface.f_switch_context(iface.f_true_branch(v_temp17));
            iface.f_gen_store(v_If101__2, v_If87__1);
            iface.f_switch_context(iface.f_false_branch(v_temp17));
            iface.f_gen_store(v_If101__2, v_If94__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp17));
            v_If97__1 = iface.f_gen_load(v_If101__2);
          } // if
          auto v_If104__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If104__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If104__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If107__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If109__2 = iface.f_decl_bv("If109__2", iface.bigint_lit("9"));
            const auto v_temp18 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If97__1, v_If104__2));
            iface.f_switch_context(iface.f_true_branch(v_temp18));
            iface.f_gen_store(v_If109__2, v_If97__1);
            iface.f_switch_context(iface.f_false_branch(v_temp18));
            iface.f_gen_store(v_If109__2, v_If104__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp18));
            v_If107__1 = iface.f_gen_load(v_If109__2);
          } else {
            const auto v_If111__2 = iface.f_decl_bv("If111__2", iface.bigint_lit("9"));
            const auto v_temp19 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If104__2, v_If97__1));
            iface.f_switch_context(iface.f_true_branch(v_temp19));
            iface.f_gen_store(v_If111__2, v_If97__1);
            iface.f_switch_context(iface.f_false_branch(v_temp19));
            iface.f_gen_store(v_If111__2, v_If104__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp19));
            v_If107__1 = iface.f_gen_load(v_If111__2);
          } // if
          auto v_If114__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If114__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If114__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If117__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If119__2 = iface.f_decl_bv("If119__2", iface.bigint_lit("9"));
            const auto v_temp20 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If107__1, v_If114__2));
            iface.f_switch_context(iface.f_true_branch(v_temp20));
            iface.f_gen_store(v_If119__2, v_If107__1);
            iface.f_switch_context(iface.f_false_branch(v_temp20));
            iface.f_gen_store(v_If119__2, v_If114__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp20));
            v_If117__1 = iface.f_gen_load(v_If119__2);
          } else {
            const auto v_If121__2 = iface.f_decl_bv("If121__2", iface.bigint_lit("9"));
            const auto v_temp21 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If114__2, v_If107__1));
            iface.f_switch_context(iface.f_true_branch(v_temp21));
            iface.f_gen_store(v_If121__2, v_If107__1);
            iface.f_switch_context(iface.f_false_branch(v_temp21));
            iface.f_gen_store(v_If121__2, v_If114__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp21));
            v_If117__1 = iface.f_gen_load(v_If121__2);
          } // if
          auto v_If124__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If124__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If124__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If127__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If129__2 = iface.f_decl_bv("If129__2", iface.bigint_lit("9"));
            const auto v_temp22 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If117__1, v_If124__2));
            iface.f_switch_context(iface.f_true_branch(v_temp22));
            iface.f_gen_store(v_If129__2, v_If117__1);
            iface.f_switch_context(iface.f_false_branch(v_temp22));
            iface.f_gen_store(v_If129__2, v_If124__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp22));
            v_If127__1 = iface.f_gen_load(v_If129__2);
          } else {
            const auto v_If131__2 = iface.f_decl_bv("If131__2", iface.bigint_lit("9"));
            const auto v_temp23 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If124__2, v_If117__1));
            iface.f_switch_context(iface.f_true_branch(v_temp23));
            iface.f_gen_store(v_If131__2, v_If117__1);
            iface.f_switch_context(iface.f_false_branch(v_temp23));
            iface.f_gen_store(v_If131__2, v_If124__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp23));
            v_If127__1 = iface.f_gen_load(v_If131__2);
          } // if
          auto v_If134__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If134__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If134__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If137__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If139__2 = iface.f_decl_bv("If139__2", iface.bigint_lit("9"));
            const auto v_temp24 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If127__1, v_If134__2));
            iface.f_switch_context(iface.f_true_branch(v_temp24));
            iface.f_gen_store(v_If139__2, v_If127__1);
            iface.f_switch_context(iface.f_false_branch(v_temp24));
            iface.f_gen_store(v_If139__2, v_If134__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp24));
            v_If137__1 = iface.f_gen_load(v_If139__2);
          } else {
            const auto v_If141__2 = iface.f_decl_bv("If141__2", iface.bigint_lit("9"));
            const auto v_temp25 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If134__2, v_If127__1));
            iface.f_switch_context(iface.f_true_branch(v_temp25));
            iface.f_gen_store(v_If141__2, v_If127__1);
            iface.f_switch_context(iface.f_false_branch(v_temp25));
            iface.f_gen_store(v_If141__2, v_If134__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp25));
            v_If137__1 = iface.f_gen_load(v_If141__2);
          } // if
          auto v_If144__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If144__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If144__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If147__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If149__2 = iface.f_decl_bv("If149__2", iface.bigint_lit("9"));
            const auto v_temp26 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If137__1, v_If144__2));
            iface.f_switch_context(iface.f_true_branch(v_temp26));
            iface.f_gen_store(v_If149__2, v_If137__1);
            iface.f_switch_context(iface.f_false_branch(v_temp26));
            iface.f_gen_store(v_If149__2, v_If144__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp26));
            v_If147__1 = iface.f_gen_load(v_If149__2);
          } else {
            const auto v_If151__2 = iface.f_decl_bv("If151__2", iface.bigint_lit("9"));
            const auto v_temp27 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If144__2, v_If137__1));
            iface.f_switch_context(iface.f_true_branch(v_temp27));
            iface.f_gen_store(v_If151__2, v_If137__1);
            iface.f_switch_context(iface.f_false_branch(v_temp27));
            iface.f_gen_store(v_If151__2, v_If144__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp27));
            v_If147__1 = iface.f_gen_load(v_If151__2);
          } // if
          auto v_If154__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If154__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If154__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If157__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If159__2 = iface.f_decl_bv("If159__2", iface.bigint_lit("9"));
            const auto v_temp28 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If147__1, v_If154__2));
            iface.f_switch_context(iface.f_true_branch(v_temp28));
            iface.f_gen_store(v_If159__2, v_If147__1);
            iface.f_switch_context(iface.f_false_branch(v_temp28));
            iface.f_gen_store(v_If159__2, v_If154__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp28));
            v_If157__1 = iface.f_gen_load(v_If159__2);
          } else {
            const auto v_If161__2 = iface.f_decl_bv("If161__2", iface.bigint_lit("9"));
            const auto v_temp29 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If154__2, v_If147__1));
            iface.f_switch_context(iface.f_true_branch(v_temp29));
            iface.f_gen_store(v_If161__2, v_If147__1);
            iface.f_switch_context(iface.f_false_branch(v_temp29));
            iface.f_gen_store(v_If161__2, v_If154__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp29));
            v_If157__1 = iface.f_gen_load(v_If161__2);
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_If157__1, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp169__2 = typename Traits::rt_expr{};
          v_Exp169__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_If172__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If172__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If172__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If177__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If177__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If177__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If180__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If182__2 = iface.f_decl_bv("If182__2", iface.bigint_lit("9"));
            const auto v_temp30 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If172__2, v_If177__2));
            iface.f_switch_context(iface.f_true_branch(v_temp30));
            iface.f_gen_store(v_If182__2, v_If172__2);
            iface.f_switch_context(iface.f_false_branch(v_temp30));
            iface.f_gen_store(v_If182__2, v_If177__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp30));
            v_If180__1 = iface.f_gen_load(v_If182__2);
          } else {
            const auto v_If184__2 = iface.f_decl_bv("If184__2", iface.bigint_lit("9"));
            const auto v_temp31 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If177__2, v_If172__2));
            iface.f_switch_context(iface.f_true_branch(v_temp31));
            iface.f_gen_store(v_If184__2, v_If172__2);
            iface.f_switch_context(iface.f_false_branch(v_temp31));
            iface.f_gen_store(v_If184__2, v_If177__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp31));
            v_If180__1 = iface.f_gen_load(v_If184__2);
          } // if
          auto v_If187__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If187__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If187__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If190__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If192__2 = iface.f_decl_bv("If192__2", iface.bigint_lit("9"));
            const auto v_temp32 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If180__1, v_If187__2));
            iface.f_switch_context(iface.f_true_branch(v_temp32));
            iface.f_gen_store(v_If192__2, v_If180__1);
            iface.f_switch_context(iface.f_false_branch(v_temp32));
            iface.f_gen_store(v_If192__2, v_If187__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp32));
            v_If190__1 = iface.f_gen_load(v_If192__2);
          } else {
            const auto v_If194__2 = iface.f_decl_bv("If194__2", iface.bigint_lit("9"));
            const auto v_temp33 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If187__2, v_If180__1));
            iface.f_switch_context(iface.f_true_branch(v_temp33));
            iface.f_gen_store(v_If194__2, v_If180__1);
            iface.f_switch_context(iface.f_false_branch(v_temp33));
            iface.f_gen_store(v_If194__2, v_If187__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp33));
            v_If190__1 = iface.f_gen_load(v_If194__2);
          } // if
          auto v_If197__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If197__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If197__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If200__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If202__2 = iface.f_decl_bv("If202__2", iface.bigint_lit("9"));
            const auto v_temp34 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If190__1, v_If197__2));
            iface.f_switch_context(iface.f_true_branch(v_temp34));
            iface.f_gen_store(v_If202__2, v_If190__1);
            iface.f_switch_context(iface.f_false_branch(v_temp34));
            iface.f_gen_store(v_If202__2, v_If197__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp34));
            v_If200__1 = iface.f_gen_load(v_If202__2);
          } else {
            const auto v_If204__2 = iface.f_decl_bv("If204__2", iface.bigint_lit("9"));
            const auto v_temp35 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If197__2, v_If190__1));
            iface.f_switch_context(iface.f_true_branch(v_temp35));
            iface.f_gen_store(v_If204__2, v_If190__1);
            iface.f_switch_context(iface.f_false_branch(v_temp35));
            iface.f_gen_store(v_If204__2, v_If197__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp35));
            v_If200__1 = iface.f_gen_load(v_If204__2);
          } // if
          auto v_If207__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If207__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If207__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If210__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If212__2 = iface.f_decl_bv("If212__2", iface.bigint_lit("9"));
            const auto v_temp36 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If200__1, v_If207__2));
            iface.f_switch_context(iface.f_true_branch(v_temp36));
            iface.f_gen_store(v_If212__2, v_If200__1);
            iface.f_switch_context(iface.f_false_branch(v_temp36));
            iface.f_gen_store(v_If212__2, v_If207__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp36));
            v_If210__1 = iface.f_gen_load(v_If212__2);
          } else {
            const auto v_If214__2 = iface.f_decl_bv("If214__2", iface.bigint_lit("9"));
            const auto v_temp37 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If207__2, v_If200__1));
            iface.f_switch_context(iface.f_true_branch(v_temp37));
            iface.f_gen_store(v_If214__2, v_If200__1);
            iface.f_switch_context(iface.f_false_branch(v_temp37));
            iface.f_gen_store(v_If214__2, v_If207__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp37));
            v_If210__1 = iface.f_gen_load(v_If214__2);
          } // if
          auto v_If217__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If217__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If217__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If220__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If222__2 = iface.f_decl_bv("If222__2", iface.bigint_lit("9"));
            const auto v_temp38 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If210__1, v_If217__2));
            iface.f_switch_context(iface.f_true_branch(v_temp38));
            iface.f_gen_store(v_If222__2, v_If210__1);
            iface.f_switch_context(iface.f_false_branch(v_temp38));
            iface.f_gen_store(v_If222__2, v_If217__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp38));
            v_If220__1 = iface.f_gen_load(v_If222__2);
          } else {
            const auto v_If224__2 = iface.f_decl_bv("If224__2", iface.bigint_lit("9"));
            const auto v_temp39 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If217__2, v_If210__1));
            iface.f_switch_context(iface.f_true_branch(v_temp39));
            iface.f_gen_store(v_If224__2, v_If210__1);
            iface.f_switch_context(iface.f_false_branch(v_temp39));
            iface.f_gen_store(v_If224__2, v_If217__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp39));
            v_If220__1 = iface.f_gen_load(v_If224__2);
          } // if
          auto v_If227__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If227__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If227__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If230__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If232__2 = iface.f_decl_bv("If232__2", iface.bigint_lit("9"));
            const auto v_temp40 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If220__1, v_If227__2));
            iface.f_switch_context(iface.f_true_branch(v_temp40));
            iface.f_gen_store(v_If232__2, v_If220__1);
            iface.f_switch_context(iface.f_false_branch(v_temp40));
            iface.f_gen_store(v_If232__2, v_If227__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp40));
            v_If230__1 = iface.f_gen_load(v_If232__2);
          } else {
            const auto v_If234__2 = iface.f_decl_bv("If234__2", iface.bigint_lit("9"));
            const auto v_temp41 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If227__2, v_If220__1));
            iface.f_switch_context(iface.f_true_branch(v_temp41));
            iface.f_gen_store(v_If234__2, v_If220__1);
            iface.f_switch_context(iface.f_false_branch(v_temp41));
            iface.f_gen_store(v_If234__2, v_If227__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp41));
            v_If230__1 = iface.f_gen_load(v_If234__2);
          } // if
          auto v_If237__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If237__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } else {
            v_If237__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp169__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("9")));
          } // if
          auto v_If240__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            const auto v_If242__2 = iface.f_decl_bv("If242__2", iface.bigint_lit("9"));
            const auto v_temp42 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If230__1, v_If237__2));
            iface.f_switch_context(iface.f_true_branch(v_temp42));
            iface.f_gen_store(v_If242__2, v_If230__1);
            iface.f_switch_context(iface.f_false_branch(v_temp42));
            iface.f_gen_store(v_If242__2, v_If237__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp42));
            v_If240__1 = iface.f_gen_load(v_If242__2);
          } else {
            const auto v_If244__2 = iface.f_decl_bv("If244__2", iface.bigint_lit("9"));
            const auto v_temp43 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If237__2, v_If230__1));
            iface.f_switch_context(iface.f_true_branch(v_temp43));
            iface.f_gen_store(v_If244__2, v_If230__1);
            iface.f_switch_context(iface.f_false_branch(v_temp43));
            iface.f_gen_store(v_If244__2, v_If237__2);
            iface.f_switch_context(iface.f_merge_branch(v_temp43));
            v_If240__1 = iface.f_gen_load(v_If244__2);
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_If240__1, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp253__2 = typename Traits::rt_expr{};
            v_Exp253__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If256__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If256__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If256__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If261__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If261__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If261__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If264__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If266__2 = iface.f_decl_bv("If266__2", iface.bigint_lit("17"));
              const auto v_temp44 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If256__2, v_If261__2));
              iface.f_switch_context(iface.f_true_branch(v_temp44));
              iface.f_gen_store(v_If266__2, v_If256__2);
              iface.f_switch_context(iface.f_false_branch(v_temp44));
              iface.f_gen_store(v_If266__2, v_If261__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp44));
              v_If264__1 = iface.f_gen_load(v_If266__2);
            } else {
              const auto v_If268__2 = iface.f_decl_bv("If268__2", iface.bigint_lit("17"));
              const auto v_temp45 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If261__2, v_If256__2));
              iface.f_switch_context(iface.f_true_branch(v_temp45));
              iface.f_gen_store(v_If268__2, v_If256__2);
              iface.f_switch_context(iface.f_false_branch(v_temp45));
              iface.f_gen_store(v_If268__2, v_If261__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp45));
              v_If264__1 = iface.f_gen_load(v_If268__2);
            } // if
            auto v_If271__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If271__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If271__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If274__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If276__2 = iface.f_decl_bv("If276__2", iface.bigint_lit("17"));
              const auto v_temp46 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If264__1, v_If271__2));
              iface.f_switch_context(iface.f_true_branch(v_temp46));
              iface.f_gen_store(v_If276__2, v_If264__1);
              iface.f_switch_context(iface.f_false_branch(v_temp46));
              iface.f_gen_store(v_If276__2, v_If271__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp46));
              v_If274__1 = iface.f_gen_load(v_If276__2);
            } else {
              const auto v_If278__2 = iface.f_decl_bv("If278__2", iface.bigint_lit("17"));
              const auto v_temp47 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If271__2, v_If264__1));
              iface.f_switch_context(iface.f_true_branch(v_temp47));
              iface.f_gen_store(v_If278__2, v_If264__1);
              iface.f_switch_context(iface.f_false_branch(v_temp47));
              iface.f_gen_store(v_If278__2, v_If271__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp47));
              v_If274__1 = iface.f_gen_load(v_If278__2);
            } // if
            auto v_If281__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If281__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If281__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If284__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If286__2 = iface.f_decl_bv("If286__2", iface.bigint_lit("17"));
              const auto v_temp48 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If274__1, v_If281__2));
              iface.f_switch_context(iface.f_true_branch(v_temp48));
              iface.f_gen_store(v_If286__2, v_If274__1);
              iface.f_switch_context(iface.f_false_branch(v_temp48));
              iface.f_gen_store(v_If286__2, v_If281__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp48));
              v_If284__1 = iface.f_gen_load(v_If286__2);
            } else {
              const auto v_If288__2 = iface.f_decl_bv("If288__2", iface.bigint_lit("17"));
              const auto v_temp49 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If281__2, v_If274__1));
              iface.f_switch_context(iface.f_true_branch(v_temp49));
              iface.f_gen_store(v_If288__2, v_If274__1);
              iface.f_switch_context(iface.f_false_branch(v_temp49));
              iface.f_gen_store(v_If288__2, v_If281__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp49));
              v_If284__1 = iface.f_gen_load(v_If288__2);
            } // if
            auto v_If291__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If291__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If291__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If294__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If296__2 = iface.f_decl_bv("If296__2", iface.bigint_lit("17"));
              const auto v_temp50 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If284__1, v_If291__2));
              iface.f_switch_context(iface.f_true_branch(v_temp50));
              iface.f_gen_store(v_If296__2, v_If284__1);
              iface.f_switch_context(iface.f_false_branch(v_temp50));
              iface.f_gen_store(v_If296__2, v_If291__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp50));
              v_If294__1 = iface.f_gen_load(v_If296__2);
            } else {
              const auto v_If298__2 = iface.f_decl_bv("If298__2", iface.bigint_lit("17"));
              const auto v_temp51 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If291__2, v_If284__1));
              iface.f_switch_context(iface.f_true_branch(v_temp51));
              iface.f_gen_store(v_If298__2, v_If284__1);
              iface.f_switch_context(iface.f_false_branch(v_temp51));
              iface.f_gen_store(v_If298__2, v_If291__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp51));
              v_If294__1 = iface.f_gen_load(v_If298__2);
            } // if
            auto v_If301__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If301__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If301__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If304__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If306__2 = iface.f_decl_bv("If306__2", iface.bigint_lit("17"));
              const auto v_temp52 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If294__1, v_If301__2));
              iface.f_switch_context(iface.f_true_branch(v_temp52));
              iface.f_gen_store(v_If306__2, v_If294__1);
              iface.f_switch_context(iface.f_false_branch(v_temp52));
              iface.f_gen_store(v_If306__2, v_If301__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp52));
              v_If304__1 = iface.f_gen_load(v_If306__2);
            } else {
              const auto v_If308__2 = iface.f_decl_bv("If308__2", iface.bigint_lit("17"));
              const auto v_temp53 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If301__2, v_If294__1));
              iface.f_switch_context(iface.f_true_branch(v_temp53));
              iface.f_gen_store(v_If308__2, v_If294__1);
              iface.f_switch_context(iface.f_false_branch(v_temp53));
              iface.f_gen_store(v_If308__2, v_If301__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp53));
              v_If304__1 = iface.f_gen_load(v_If308__2);
            } // if
            auto v_If311__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If311__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If311__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If314__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If316__2 = iface.f_decl_bv("If316__2", iface.bigint_lit("17"));
              const auto v_temp54 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If304__1, v_If311__2));
              iface.f_switch_context(iface.f_true_branch(v_temp54));
              iface.f_gen_store(v_If316__2, v_If304__1);
              iface.f_switch_context(iface.f_false_branch(v_temp54));
              iface.f_gen_store(v_If316__2, v_If311__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp54));
              v_If314__1 = iface.f_gen_load(v_If316__2);
            } else {
              const auto v_If318__2 = iface.f_decl_bv("If318__2", iface.bigint_lit("17"));
              const auto v_temp55 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If311__2, v_If304__1));
              iface.f_switch_context(iface.f_true_branch(v_temp55));
              iface.f_gen_store(v_If318__2, v_If304__1);
              iface.f_switch_context(iface.f_false_branch(v_temp55));
              iface.f_gen_store(v_If318__2, v_If311__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp55));
              v_If314__1 = iface.f_gen_load(v_If318__2);
            } // if
            auto v_If321__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If321__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If321__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp253__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If324__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If326__2 = iface.f_decl_bv("If326__2", iface.bigint_lit("17"));
              const auto v_temp56 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If314__1, v_If321__2));
              iface.f_switch_context(iface.f_true_branch(v_temp56));
              iface.f_gen_store(v_If326__2, v_If314__1);
              iface.f_switch_context(iface.f_false_branch(v_temp56));
              iface.f_gen_store(v_If326__2, v_If321__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp56));
              v_If324__1 = iface.f_gen_load(v_If326__2);
            } else {
              const auto v_If328__2 = iface.f_decl_bv("If328__2", iface.bigint_lit("17"));
              const auto v_temp57 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If321__2, v_If314__1));
              iface.f_switch_context(iface.f_true_branch(v_temp57));
              iface.f_gen_store(v_If328__2, v_If314__1);
              iface.f_switch_context(iface.f_false_branch(v_temp57));
              iface.f_gen_store(v_If328__2, v_If321__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp57));
              v_If324__1 = iface.f_gen_load(v_If328__2);
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_If324__1, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp336__2 = typename Traits::rt_expr{};
            v_Exp336__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_If339__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If339__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If339__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If344__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If344__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp336__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If344__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp336__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If347__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If349__2 = iface.f_decl_bv("If349__2", iface.bigint_lit("17"));
              const auto v_temp58 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If339__2, v_If344__2));
              iface.f_switch_context(iface.f_true_branch(v_temp58));
              iface.f_gen_store(v_If349__2, v_If339__2);
              iface.f_switch_context(iface.f_false_branch(v_temp58));
              iface.f_gen_store(v_If349__2, v_If344__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp58));
              v_If347__1 = iface.f_gen_load(v_If349__2);
            } else {
              const auto v_If351__2 = iface.f_decl_bv("If351__2", iface.bigint_lit("17"));
              const auto v_temp59 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If344__2, v_If339__2));
              iface.f_switch_context(iface.f_true_branch(v_temp59));
              iface.f_gen_store(v_If351__2, v_If339__2);
              iface.f_switch_context(iface.f_false_branch(v_temp59));
              iface.f_gen_store(v_If351__2, v_If344__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp59));
              v_If347__1 = iface.f_gen_load(v_If351__2);
            } // if
            auto v_If354__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If354__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp336__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If354__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp336__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If357__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If359__2 = iface.f_decl_bv("If359__2", iface.bigint_lit("17"));
              const auto v_temp60 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If347__1, v_If354__2));
              iface.f_switch_context(iface.f_true_branch(v_temp60));
              iface.f_gen_store(v_If359__2, v_If347__1);
              iface.f_switch_context(iface.f_false_branch(v_temp60));
              iface.f_gen_store(v_If359__2, v_If354__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp60));
              v_If357__1 = iface.f_gen_load(v_If359__2);
            } else {
              const auto v_If361__2 = iface.f_decl_bv("If361__2", iface.bigint_lit("17"));
              const auto v_temp61 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If354__2, v_If347__1));
              iface.f_switch_context(iface.f_true_branch(v_temp61));
              iface.f_gen_store(v_If361__2, v_If347__1);
              iface.f_switch_context(iface.f_false_branch(v_temp61));
              iface.f_gen_store(v_If361__2, v_If354__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp61));
              v_If357__1 = iface.f_gen_load(v_If361__2);
            } // if
            auto v_If364__2 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If364__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp336__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } else {
              v_If364__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp336__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("17")));
            } // if
            auto v_If367__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              const auto v_If369__2 = iface.f_decl_bv("If369__2", iface.bigint_lit("17"));
              const auto v_temp62 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If357__1, v_If364__2));
              iface.f_switch_context(iface.f_true_branch(v_temp62));
              iface.f_gen_store(v_If369__2, v_If357__1);
              iface.f_switch_context(iface.f_false_branch(v_temp62));
              iface.f_gen_store(v_If369__2, v_If364__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp62));
              v_If367__1 = iface.f_gen_load(v_If369__2);
            } else {
              const auto v_If371__2 = iface.f_decl_bv("If371__2", iface.bigint_lit("17"));
              const auto v_temp63 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If364__2, v_If357__1));
              iface.f_switch_context(iface.f_true_branch(v_temp63));
              iface.f_gen_store(v_If371__2, v_If357__1);
              iface.f_switch_context(iface.f_false_branch(v_temp63));
              iface.f_gen_store(v_If371__2, v_If364__2);
              iface.f_switch_context(iface.f_merge_branch(v_temp63));
              v_If367__1 = iface.f_gen_load(v_If371__2);
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_If367__1, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp380__2 = typename Traits::rt_expr{};
              v_Exp380__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If383__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If383__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If383__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If388__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If388__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp380__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If388__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp380__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If391__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_If393__2 = iface.f_decl_bv("If393__2", iface.bigint_lit("33"));
                const auto v_temp64 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If383__2, v_If388__2));
                iface.f_switch_context(iface.f_true_branch(v_temp64));
                iface.f_gen_store(v_If393__2, v_If383__2);
                iface.f_switch_context(iface.f_false_branch(v_temp64));
                iface.f_gen_store(v_If393__2, v_If388__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp64));
                v_If391__1 = iface.f_gen_load(v_If393__2);
              } else {
                const auto v_If395__2 = iface.f_decl_bv("If395__2", iface.bigint_lit("33"));
                const auto v_temp65 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If388__2, v_If383__2));
                iface.f_switch_context(iface.f_true_branch(v_temp65));
                iface.f_gen_store(v_If395__2, v_If383__2);
                iface.f_switch_context(iface.f_false_branch(v_temp65));
                iface.f_gen_store(v_If395__2, v_If388__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp65));
                v_If391__1 = iface.f_gen_load(v_If395__2);
              } // if
              auto v_If398__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If398__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp380__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If398__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp380__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If401__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_If403__2 = iface.f_decl_bv("If403__2", iface.bigint_lit("33"));
                const auto v_temp66 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If391__1, v_If398__2));
                iface.f_switch_context(iface.f_true_branch(v_temp66));
                iface.f_gen_store(v_If403__2, v_If391__1);
                iface.f_switch_context(iface.f_false_branch(v_temp66));
                iface.f_gen_store(v_If403__2, v_If398__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp66));
                v_If401__1 = iface.f_gen_load(v_If403__2);
              } else {
                const auto v_If405__2 = iface.f_decl_bv("If405__2", iface.bigint_lit("33"));
                const auto v_temp67 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If398__2, v_If391__1));
                iface.f_switch_context(iface.f_true_branch(v_temp67));
                iface.f_gen_store(v_If405__2, v_If391__1);
                iface.f_switch_context(iface.f_false_branch(v_temp67));
                iface.f_gen_store(v_If405__2, v_If398__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp67));
                v_If401__1 = iface.f_gen_load(v_If405__2);
              } // if
              auto v_If408__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If408__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp380__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If408__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp380__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If411__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_If413__2 = iface.f_decl_bv("If413__2", iface.bigint_lit("33"));
                const auto v_temp68 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If401__1, v_If408__2));
                iface.f_switch_context(iface.f_true_branch(v_temp68));
                iface.f_gen_store(v_If413__2, v_If401__1);
                iface.f_switch_context(iface.f_false_branch(v_temp68));
                iface.f_gen_store(v_If413__2, v_If408__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp68));
                v_If411__1 = iface.f_gen_load(v_If413__2);
              } else {
                const auto v_If415__2 = iface.f_decl_bv("If415__2", iface.bigint_lit("33"));
                const auto v_temp69 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If408__2, v_If401__1));
                iface.f_switch_context(iface.f_true_branch(v_temp69));
                iface.f_gen_store(v_If415__2, v_If401__1);
                iface.f_switch_context(iface.f_false_branch(v_temp69));
                iface.f_gen_store(v_If415__2, v_If408__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp69));
                v_If411__1 = iface.f_gen_load(v_If415__2);
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_If411__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp423__2 = typename Traits::rt_expr{};
              v_Exp423__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_If426__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If426__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If426__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If431__2 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If431__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp423__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } else {
                v_If431__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp423__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33")));
              } // if
              auto v_If434__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                const auto v_If436__2 = iface.f_decl_bv("If436__2", iface.bigint_lit("33"));
                const auto v_temp70 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If426__2, v_If431__2));
                iface.f_switch_context(iface.f_true_branch(v_temp70));
                iface.f_gen_store(v_If436__2, v_If426__2);
                iface.f_switch_context(iface.f_false_branch(v_temp70));
                iface.f_gen_store(v_If436__2, v_If431__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp70));
                v_If434__1 = iface.f_gen_load(v_If436__2);
              } else {
                const auto v_If438__2 = iface.f_decl_bv("If438__2", iface.bigint_lit("33"));
                const auto v_temp71 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If431__2, v_If426__2));
                iface.f_switch_context(iface.f_true_branch(v_temp71));
                iface.f_gen_store(v_If438__2, v_If426__2);
                iface.f_switch_context(iface.f_false_branch(v_temp71));
                iface.f_gen_store(v_If438__2, v_If431__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp71));
                v_If434__1 = iface.f_gen_load(v_If438__2);
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_If434__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_Exp447__2 = typename Traits::rt_expr{};
                v_Exp447__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                auto v_If450__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If450__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If450__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If455__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If455__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_Exp447__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If455__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_Exp447__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                auto v_If458__1 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  const auto v_If460__2 = iface.f_decl_bv("If460__2", iface.bigint_lit("65"));
                  const auto v_temp72 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If450__2, v_If455__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp72));
                  iface.f_gen_store(v_If460__2, v_If450__2);
                  iface.f_switch_context(iface.f_false_branch(v_temp72));
                  iface.f_gen_store(v_If460__2, v_If455__2);
                  iface.f_switch_context(iface.f_merge_branch(v_temp72));
                  v_If458__1 = iface.f_gen_load(v_If460__2);
                } else {
                  const auto v_If462__2 = iface.f_decl_bv("If462__2", iface.bigint_lit("65"));
                  const auto v_temp73 = iface.f_gen_branch(iface.f_gen_sle_bits(v_If455__2, v_If450__2));
                  iface.f_switch_context(iface.f_true_branch(v_temp73));
                  iface.f_gen_store(v_If462__2, v_If450__2);
                  iface.f_switch_context(iface.f_false_branch(v_temp73));
                  iface.f_gen_store(v_If462__2, v_If455__2);
                  iface.f_switch_context(iface.f_merge_branch(v_temp73));
                  v_If458__1 = iface.f_gen_load(v_If462__2);
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_If458__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                auto v_If473__2 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If473__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } else {
                  v_If473__2 = iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65")));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(v_If473__2, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } // if
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_reduce_int_max


} // namespace aslp
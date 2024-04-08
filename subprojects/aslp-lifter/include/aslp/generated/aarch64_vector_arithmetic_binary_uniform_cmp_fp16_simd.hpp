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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_cmp__1 = iface.bits_zero(iface.bigint_lit("3"));
    auto v_abs__1 = true;
    if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "000"))) {
      v_cmp__1 = iface.bits_lit(3U, "010");
      v_abs__1 = false;
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "010"))) {
        v_cmp__1 = iface.bits_lit(3U, "001");
        v_abs__1 = false;
      } else {
        if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "011"))) {
          v_cmp__1 = iface.bits_lit(3U, "001");
          v_abs__1 = true;
        } else {
          if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "110"))) {
            v_cmp__1 = iface.bits_lit(3U, "000");
            v_abs__1 = false;
          } else {
            if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "111"))) {
              v_cmp__1 = iface.bits_lit(3U, "000");
              v_abs__1 = true;
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp7__2 = typename Traits::rt_expr{};
    v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp10__2 = typename Traits::rt_expr{};
    v_Exp10__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
    auto v_test_passed__1 = typename Traits::rt_expr{};
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp18__2 = iface.f_decl_bool("Exp18__2");
        iface.f_gen_store(v_Exp18__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp18__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp20__2 = iface.f_decl_bool("Exp20__2");
          iface.f_gen_store(v_Exp20__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp20__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp22__2 = iface.f_decl_bool("Exp22__2");
            iface.f_gen_store(v_Exp22__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp22__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If25__1 = iface.f_decl_bv("If25__1", iface.bigint_lit("16"));
      const auto v_temp0 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp0));
      iface.f_gen_store(v_If25__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp0));
      iface.f_gen_store(v_If25__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp0));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_load(v_If25__1)));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp31__2 = iface.f_decl_bool("Exp31__2");
        iface.f_gen_store(v_Exp31__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp31__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp33__2 = iface.f_decl_bool("Exp33__2");
          iface.f_gen_store(v_Exp33__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp33__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp35__2 = iface.f_decl_bool("Exp35__2");
            iface.f_gen_store(v_Exp35__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp35__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If38__1 = iface.f_decl_bv("If38__1", iface.bigint_lit("16"));
      const auto v_temp1 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp1));
      iface.f_gen_store(v_If38__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp1));
      iface.f_gen_store(v_If38__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp1));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("112")), iface.f_gen_load(v_If38__1)));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp48__2 = iface.f_decl_bool("Exp48__2");
        iface.f_gen_store(v_Exp48__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp48__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp50__2 = iface.f_decl_bool("Exp50__2");
          iface.f_gen_store(v_Exp50__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp50__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp52__2 = iface.f_decl_bool("Exp52__2");
            iface.f_gen_store(v_Exp52__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp52__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If55__1 = iface.f_decl_bv("If55__1", iface.bigint_lit("16"));
      const auto v_temp2 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp2));
      iface.f_gen_store(v_If55__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp2));
      iface.f_gen_store(v_If55__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp2));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_load(v_If55__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp61__2 = iface.f_decl_bool("Exp61__2");
        iface.f_gen_store(v_Exp61__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp61__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp63__2 = iface.f_decl_bool("Exp63__2");
          iface.f_gen_store(v_Exp63__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp63__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp65__2 = iface.f_decl_bool("Exp65__2");
            iface.f_gen_store(v_Exp65__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp65__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If68__1 = iface.f_decl_bv("If68__1", iface.bigint_lit("16"));
      const auto v_temp3 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp3));
      iface.f_gen_store(v_If68__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp3));
      iface.f_gen_store(v_If68__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp3));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_append_bits(iface.f_gen_load(v_If68__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp78__2 = iface.f_decl_bool("Exp78__2");
        iface.f_gen_store(v_Exp78__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp78__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp80__2 = iface.f_decl_bool("Exp80__2");
          iface.f_gen_store(v_Exp80__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp80__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp82__2 = iface.f_decl_bool("Exp82__2");
            iface.f_gen_store(v_Exp82__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp82__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If85__1 = iface.f_decl_bv("If85__1", iface.bigint_lit("16"));
      const auto v_temp4 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp4));
      iface.f_gen_store(v_If85__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp4));
      iface.f_gen_store(v_If85__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp4));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_load(v_If85__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp91__2 = iface.f_decl_bool("Exp91__2");
        iface.f_gen_store(v_Exp91__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp91__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp93__2 = iface.f_decl_bool("Exp93__2");
          iface.f_gen_store(v_Exp93__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp93__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp95__2 = iface.f_decl_bool("Exp95__2");
            iface.f_gen_store(v_Exp95__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp95__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If98__1 = iface.f_decl_bv("If98__1", iface.bigint_lit("16"));
      const auto v_temp5 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp5));
      iface.f_gen_store(v_If98__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp5));
      iface.f_gen_store(v_If98__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp5));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("80")), iface.f_gen_append_bits(iface.f_gen_load(v_If98__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp108__2 = iface.f_decl_bool("Exp108__2");
        iface.f_gen_store(v_Exp108__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp108__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp110__2 = iface.f_decl_bool("Exp110__2");
          iface.f_gen_store(v_Exp110__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp110__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp112__2 = iface.f_decl_bool("Exp112__2");
            iface.f_gen_store(v_Exp112__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp112__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If115__1 = iface.f_decl_bv("If115__1", iface.bigint_lit("16"));
      const auto v_temp6 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp6));
      iface.f_gen_store(v_If115__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp6));
      iface.f_gen_store(v_If115__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp6));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If115__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp121__2 = iface.f_decl_bool("Exp121__2");
        iface.f_gen_store(v_Exp121__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp121__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp123__2 = iface.f_decl_bool("Exp123__2");
          iface.f_gen_store(v_Exp123__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp123__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp125__2 = iface.f_decl_bool("Exp125__2");
            iface.f_gen_store(v_Exp125__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp125__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If128__1 = iface.f_decl_bv("If128__1", iface.bigint_lit("16"));
      const auto v_temp7 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp7));
      iface.f_gen_store(v_If128__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp7));
      iface.f_gen_store(v_If128__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp7));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If128__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48")))));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp138__2 = iface.f_decl_bool("Exp138__2");
        iface.f_gen_store(v_Exp138__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp138__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp140__2 = iface.f_decl_bool("Exp140__2");
          iface.f_gen_store(v_Exp140__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp140__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp142__2 = iface.f_decl_bool("Exp142__2");
            iface.f_gen_store(v_Exp142__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp142__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If145__1 = iface.f_decl_bv("If145__1", iface.bigint_lit("16"));
      const auto v_temp8 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp8));
      iface.f_gen_store(v_If145__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp8));
      iface.f_gen_store(v_If145__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp8));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_If145__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp151__2 = iface.f_decl_bool("Exp151__2");
        iface.f_gen_store(v_Exp151__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp151__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp153__2 = iface.f_decl_bool("Exp153__2");
          iface.f_gen_store(v_Exp153__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp153__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp155__2 = iface.f_decl_bool("Exp155__2");
            iface.f_gen_store(v_Exp155__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp155__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If158__1 = iface.f_decl_bv("If158__1", iface.bigint_lit("16"));
      const auto v_temp9 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp9));
      iface.f_gen_store(v_If158__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp9));
      iface.f_gen_store(v_If158__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp9));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("80"), iface.bigint_lit("48")), iface.f_gen_append_bits(iface.f_gen_load(v_If158__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp168__2 = iface.f_decl_bool("Exp168__2");
        iface.f_gen_store(v_Exp168__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp168__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp170__2 = iface.f_decl_bool("Exp170__2");
          iface.f_gen_store(v_Exp170__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp170__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp172__2 = iface.f_decl_bool("Exp172__2");
            iface.f_gen_store(v_Exp172__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp172__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If175__1 = iface.f_decl_bv("If175__1", iface.bigint_lit("16"));
      const auto v_temp10 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp10));
      iface.f_gen_store(v_If175__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp10));
      iface.f_gen_store(v_If175__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp10));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If175__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp181__2 = iface.f_decl_bool("Exp181__2");
        iface.f_gen_store(v_Exp181__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp181__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp183__2 = iface.f_decl_bool("Exp183__2");
          iface.f_gen_store(v_Exp183__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp183__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp185__2 = iface.f_decl_bool("Exp185__2");
            iface.f_gen_store(v_Exp185__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp185__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If188__1 = iface.f_decl_bv("If188__1", iface.bigint_lit("16"));
      const auto v_temp11 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp11));
      iface.f_gen_store(v_If188__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp11));
      iface.f_gen_store(v_If188__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp11));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If188__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("80")))));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp198__2 = iface.f_decl_bool("Exp198__2");
        iface.f_gen_store(v_Exp198__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp198__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp200__2 = iface.f_decl_bool("Exp200__2");
          iface.f_gen_store(v_Exp200__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp200__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp202__2 = iface.f_decl_bool("Exp202__2");
            iface.f_gen_store(v_Exp202__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp202__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If205__1 = iface.f_decl_bv("If205__1", iface.bigint_lit("16"));
      const auto v_temp12 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp12));
      iface.f_gen_store(v_If205__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp12));
      iface.f_gen_store(v_If205__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp12));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If205__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp211__2 = iface.f_decl_bool("Exp211__2");
        iface.f_gen_store(v_Exp211__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp211__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp213__2 = iface.f_decl_bool("Exp213__2");
          iface.f_gen_store(v_Exp213__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp213__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp215__2 = iface.f_decl_bool("Exp215__2");
            iface.f_gen_store(v_Exp215__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp215__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If218__1 = iface.f_decl_bv("If218__1", iface.bigint_lit("16"));
      const auto v_temp13 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp13));
      iface.f_gen_store(v_If218__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp13));
      iface.f_gen_store(v_If218__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp13));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If218__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96")))));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        auto v_Exp228__2 = typename Traits::rt_expr{};
        v_Exp228__2 = iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR()));
        v_test_passed__1 = v_Exp228__2;
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          auto v_Exp230__2 = typename Traits::rt_expr{};
          v_Exp230__2 = iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp230__2;
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            auto v_Exp232__2 = typename Traits::rt_expr{};
            v_Exp232__2 = iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp232__2;
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If235__1 = iface.f_decl_bv("If235__1", iface.bigint_lit("16"));
      const auto v_temp14 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp14));
      iface.f_gen_store(v_If235__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp14));
      iface.f_gen_store(v_If235__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp14));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If235__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        auto v_Exp241__2 = typename Traits::rt_expr{};
        v_Exp241__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        v_test_passed__1 = v_Exp241__2;
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          auto v_Exp243__2 = typename Traits::rt_expr{};
          v_Exp243__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp243__2;
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            auto v_Exp245__2 = typename Traits::rt_expr{};
            v_Exp245__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp245__2;
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If248__1 = iface.f_decl_bv("If248__1", iface.bigint_lit("16"));
      const auto v_temp15 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp15));
      iface.f_gen_store(v_If248__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp15));
      iface.f_gen_store(v_If248__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp15));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If248__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("112"))));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_result__1));
  } else {
    auto v_cmp__1 = iface.bits_zero(iface.bigint_lit("3"));
    auto v_abs__1 = true;
    if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "000"))) {
      v_cmp__1 = iface.bits_lit(3U, "010");
      v_abs__1 = false;
    } else {
      if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "010"))) {
        v_cmp__1 = iface.bits_lit(3U, "001");
        v_abs__1 = false;
      } else {
        if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "011"))) {
          v_cmp__1 = iface.bits_lit(3U, "001");
          v_abs__1 = true;
        } else {
          if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "110"))) {
            v_cmp__1 = iface.bits_lit(3U, "000");
            v_abs__1 = false;
          } else {
            if (iface.f_eq_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "111"))) {
              v_cmp__1 = iface.bits_lit(3U, "000");
              v_abs__1 = true;
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp260__2 = typename Traits::rt_expr{};
    v_Exp260__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp263__2 = typename Traits::rt_expr{};
    v_Exp263__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
    const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
    auto v_test_passed__1 = typename Traits::rt_expr{};
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp271__2 = iface.f_decl_bool("Exp271__2");
        iface.f_gen_store(v_Exp271__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp271__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp273__2 = iface.f_decl_bool("Exp273__2");
          iface.f_gen_store(v_Exp273__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp273__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp275__2 = iface.f_decl_bool("Exp275__2");
            iface.f_gen_store(v_Exp275__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp275__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If278__1 = iface.f_decl_bv("If278__1", iface.bigint_lit("16"));
      const auto v_temp16 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp16));
      iface.f_gen_store(v_If278__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp16));
      iface.f_gen_store(v_If278__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp16));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_load(v_If278__1)));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp284__2 = iface.f_decl_bool("Exp284__2");
        iface.f_gen_store(v_Exp284__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp284__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp286__2 = iface.f_decl_bool("Exp286__2");
          iface.f_gen_store(v_Exp286__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp286__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp288__2 = iface.f_decl_bool("Exp288__2");
            iface.f_gen_store(v_Exp288__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp288__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If291__1 = iface.f_decl_bv("If291__1", iface.bigint_lit("16"));
      const auto v_temp17 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp17));
      iface.f_gen_store(v_If291__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp17));
      iface.f_gen_store(v_If291__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp17));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("16"), iface.bigint_lit("48")), iface.f_gen_load(v_If291__1)));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp301__2 = iface.f_decl_bool("Exp301__2");
        iface.f_gen_store(v_Exp301__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp301__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp303__2 = iface.f_decl_bool("Exp303__2");
          iface.f_gen_store(v_Exp303__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp303__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp305__2 = iface.f_decl_bool("Exp305__2");
            iface.f_gen_store(v_Exp305__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("16"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp305__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If308__1 = iface.f_decl_bv("If308__1", iface.bigint_lit("16"));
      const auto v_temp18 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp18));
      iface.f_gen_store(v_If308__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp18));
      iface.f_gen_store(v_If308__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp18));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If308__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp314__2 = iface.f_decl_bool("Exp314__2");
        iface.f_gen_store(v_Exp314__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp314__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp316__2 = iface.f_decl_bool("Exp316__2");
          iface.f_gen_store(v_Exp316__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp316__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp318__2 = iface.f_decl_bool("Exp318__2");
            iface.f_gen_store(v_Exp318__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp318__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If321__1 = iface.f_decl_bv("If321__1", iface.bigint_lit("16"));
      const auto v_temp19 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp19));
      iface.f_gen_store(v_If321__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp19));
      iface.f_gen_store(v_If321__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp19));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If321__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("16")))));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp331__2 = iface.f_decl_bool("Exp331__2");
        iface.f_gen_store(v_Exp331__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp331__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp333__2 = iface.f_decl_bool("Exp333__2");
          iface.f_gen_store(v_Exp333__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp333__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp335__2 = iface.f_decl_bool("Exp335__2");
            iface.f_gen_store(v_Exp335__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("32"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp335__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If338__1 = iface.f_decl_bv("If338__1", iface.bigint_lit("16"));
      const auto v_temp20 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp20));
      iface.f_gen_store(v_If338__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp20));
      iface.f_gen_store(v_If338__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp20));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If338__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        const auto v_Exp344__2 = iface.f_decl_bool("Exp344__2");
        iface.f_gen_store(v_Exp344__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp344__2);
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          const auto v_Exp346__2 = iface.f_decl_bool("Exp346__2");
          iface.f_gen_store(v_Exp346__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp346__2);
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp348__2 = iface.f_decl_bool("Exp348__2");
            iface.f_gen_store(v_Exp348__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp348__2);
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If351__1 = iface.f_decl_bv("If351__1", iface.bigint_lit("16"));
      const auto v_temp21 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp21));
      iface.f_gen_store(v_If351__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp21));
      iface.f_gen_store(v_If351__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp21));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_append_bits(iface.f_gen_load(v_If351__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
    } // if
    if (v_abs__1) {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        auto v_Exp361__2 = typename Traits::rt_expr{};
        v_Exp361__2 = iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR()));
        v_test_passed__1 = v_Exp361__2;
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          auto v_Exp363__2 = typename Traits::rt_expr{};
          v_Exp363__2 = iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp363__2;
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            auto v_Exp365__2 = typename Traits::rt_expr{};
            v_Exp365__2 = iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("48"), iface.bigint_lit("15"))), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp365__2;
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If368__1 = iface.f_decl_bv("If368__1", iface.bigint_lit("16"));
      const auto v_temp22 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp22));
      iface.f_gen_store(v_If368__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp22));
      iface.f_gen_store(v_If368__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp22));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If368__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
    } else {
      if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
        auto v_Exp374__2 = typename Traits::rt_expr{};
        v_Exp374__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
        v_test_passed__1 = v_Exp374__2;
      } else {
        if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
          auto v_Exp376__2 = typename Traits::rt_expr{};
          v_Exp376__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp376__2;
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
            auto v_Exp378__2 = typename Traits::rt_expr{};
            v_Exp378__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp260__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp263__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp378__2;
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      const auto v_If381__1 = iface.f_decl_bv("If381__1", iface.bigint_lit("16"));
      const auto v_temp23 = iface.f_gen_branch(v_test_passed__1);
      iface.f_switch_context(iface.f_true_branch(v_temp23));
      iface.f_gen_store(v_If381__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
      iface.f_switch_context(iface.f_false_branch(v_temp23));
      iface.f_gen_store(v_If381__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
      iface.f_switch_context(iface.f_merge_branch(v_temp23));
      iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If381__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("48"))));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd


} // namespace aslp
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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
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
            iface.f_gen_store(v_Exp18__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp18__2);
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp20__2 = iface.f_decl_bool("Exp20__2");
              iface.f_gen_store(v_Exp20__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp20__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                const auto v_Exp22__2 = iface.f_decl_bool("Exp22__2");
                iface.f_gen_store(v_Exp22__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp22__2);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If25__1 = iface.f_decl_bv("If25__1", iface.bigint_lit("32"));
          const auto v_temp0 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp0));
          iface.f_gen_store(v_If25__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp0));
          iface.f_gen_store(v_If25__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp0));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_load(v_If25__1)));
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            const auto v_Exp31__2 = iface.f_decl_bool("Exp31__2");
            iface.f_gen_store(v_Exp31__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp31__2);
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp33__2 = iface.f_decl_bool("Exp33__2");
              iface.f_gen_store(v_Exp33__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp33__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                const auto v_Exp35__2 = iface.f_decl_bool("Exp35__2");
                iface.f_gen_store(v_Exp35__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp35__2);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If38__1 = iface.f_decl_bv("If38__1", iface.bigint_lit("32"));
          const auto v_temp1 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp1));
          iface.f_gen_store(v_If38__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp1));
          iface.f_gen_store(v_If38__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp1));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("96")), iface.f_gen_load(v_If38__1)));
        } // if
        if (v_abs__1) {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            const auto v_Exp48__2 = iface.f_decl_bool("Exp48__2");
            iface.f_gen_store(v_Exp48__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp48__2);
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp50__2 = iface.f_decl_bool("Exp50__2");
              iface.f_gen_store(v_Exp50__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp50__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                const auto v_Exp52__2 = iface.f_decl_bool("Exp52__2");
                iface.f_gen_store(v_Exp52__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp52__2);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If55__1 = iface.f_decl_bv("If55__1", iface.bigint_lit("32"));
          const auto v_temp2 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp2));
          iface.f_gen_store(v_If55__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp2));
          iface.f_gen_store(v_If55__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp2));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If55__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            const auto v_Exp61__2 = iface.f_decl_bool("Exp61__2");
            iface.f_gen_store(v_Exp61__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp61__2);
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp63__2 = iface.f_decl_bool("Exp63__2");
              iface.f_gen_store(v_Exp63__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp63__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                const auto v_Exp65__2 = iface.f_decl_bool("Exp65__2");
                iface.f_gen_store(v_Exp65__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp65__2);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If68__1 = iface.f_decl_bv("If68__1", iface.bigint_lit("32"));
          const auto v_temp3 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp3));
          iface.f_gen_store(v_If68__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp3));
          iface.f_gen_store(v_If68__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp3));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_append_bits(iface.f_gen_load(v_If68__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32")))));
        } // if
        if (v_abs__1) {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            const auto v_Exp78__2 = iface.f_decl_bool("Exp78__2");
            iface.f_gen_store(v_Exp78__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp78__2);
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp80__2 = iface.f_decl_bool("Exp80__2");
              iface.f_gen_store(v_Exp80__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp80__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                const auto v_Exp82__2 = iface.f_decl_bool("Exp82__2");
                iface.f_gen_store(v_Exp82__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp82__2);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If85__1 = iface.f_decl_bv("If85__1", iface.bigint_lit("32"));
          const auto v_temp4 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp4));
          iface.f_gen_store(v_If85__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp4));
          iface.f_gen_store(v_If85__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp4));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If85__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            const auto v_Exp91__2 = iface.f_decl_bool("Exp91__2");
            iface.f_gen_store(v_Exp91__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp91__2);
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp93__2 = iface.f_decl_bool("Exp93__2");
              iface.f_gen_store(v_Exp93__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp93__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                const auto v_Exp95__2 = iface.f_decl_bool("Exp95__2");
                iface.f_gen_store(v_Exp95__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp95__2);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If98__1 = iface.f_decl_bv("If98__1", iface.bigint_lit("32"));
          const auto v_temp5 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp5));
          iface.f_gen_store(v_If98__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp5));
          iface.f_gen_store(v_If98__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp5));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_append_bits(iface.f_gen_load(v_If98__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64")))));
        } // if
        if (v_abs__1) {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            auto v_Exp108__2 = typename Traits::rt_expr{};
            v_Exp108__2 = iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp108__2;
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              auto v_Exp110__2 = typename Traits::rt_expr{};
              v_Exp110__2 = iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp110__2;
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                auto v_Exp112__2 = typename Traits::rt_expr{};
                v_Exp112__2 = iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp112__2;
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If115__1 = iface.f_decl_bv("If115__1", iface.bigint_lit("32"));
          const auto v_temp6 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_If115__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          iface.f_gen_store(v_If115__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp6));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If115__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            auto v_Exp121__2 = typename Traits::rt_expr{};
            v_Exp121__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp121__2;
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              auto v_Exp123__2 = typename Traits::rt_expr{};
              v_Exp123__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp123__2;
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                auto v_Exp125__2 = typename Traits::rt_expr{};
                v_Exp125__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp10__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp125__2;
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If128__1 = iface.f_decl_bv("If128__1", iface.bigint_lit("32"));
          const auto v_temp7 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_If128__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          iface.f_gen_store(v_If128__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If128__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("96"))));
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
        auto v_Exp140__2 = typename Traits::rt_expr{};
        v_Exp140__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp143__2 = typename Traits::rt_expr{};
        v_Exp143__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
        auto v_test_passed__1 = typename Traits::rt_expr{};
        if (v_abs__1) {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            const auto v_Exp151__2 = iface.f_decl_bool("Exp151__2");
            iface.f_gen_store(v_Exp151__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp151__2);
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp153__2 = iface.f_decl_bool("Exp153__2");
              iface.f_gen_store(v_Exp153__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp153__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                const auto v_Exp155__2 = iface.f_decl_bool("Exp155__2");
                iface.f_gen_store(v_Exp155__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp155__2);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If158__1 = iface.f_decl_bv("If158__1", iface.bigint_lit("32"));
          const auto v_temp8 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(v_If158__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp8));
          iface.f_gen_store(v_If158__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp8));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(v_If158__1)));
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            const auto v_Exp164__2 = iface.f_decl_bool("Exp164__2");
            iface.f_gen_store(v_Exp164__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp164__2);
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp166__2 = iface.f_decl_bool("Exp166__2");
              iface.f_gen_store(v_Exp166__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp166__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                const auto v_Exp168__2 = iface.f_decl_bool("Exp168__2");
                iface.f_gen_store(v_Exp168__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp168__2);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If171__1 = iface.f_decl_bv("If171__1", iface.bigint_lit("32"));
          const auto v_temp9 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp9));
          iface.f_gen_store(v_If171__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp9));
          iface.f_gen_store(v_If171__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp9));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(v_If171__1)));
        } // if
        if (v_abs__1) {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            auto v_Exp181__2 = typename Traits::rt_expr{};
            v_Exp181__2 = iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp140__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp143__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp181__2;
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              auto v_Exp183__2 = typename Traits::rt_expr{};
              v_Exp183__2 = iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp140__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp143__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp183__2;
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                auto v_Exp185__2 = typename Traits::rt_expr{};
                v_Exp185__2 = iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp140__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp143__2, iface.bigint_lit("32"), iface.bigint_lit("31"))), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp185__2;
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If188__1 = iface.f_decl_bv("If188__1", iface.bigint_lit("32"));
          const auto v_temp10 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp10));
          iface.f_gen_store(v_If188__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp10));
          iface.f_gen_store(v_If188__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp10));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If188__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
        } else {
          if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
            auto v_Exp194__2 = typename Traits::rt_expr{};
            v_Exp194__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp140__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp143__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp194__2;
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
              auto v_Exp196__2 = typename Traits::rt_expr{};
              v_Exp196__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp140__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp143__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp196__2;
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                auto v_Exp198__2 = typename Traits::rt_expr{};
                v_Exp198__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp140__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp143__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp198__2;
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
          const auto v_If201__1 = iface.f_decl_bv("If201__1", iface.bigint_lit("32"));
          const auto v_temp11 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp11));
          iface.f_gen_store(v_If201__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp11));
          iface.f_gen_store(v_If201__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp11));
          iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If201__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("32"))));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
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
          auto v_Exp214__2 = typename Traits::rt_expr{};
          v_Exp214__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp217__2 = typename Traits::rt_expr{};
          v_Exp217__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("128"));
          auto v_test_passed__1 = typename Traits::rt_expr{};
          if (v_abs__1) {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
              const auto v_Exp225__2 = iface.f_decl_bool("Exp225__2");
              iface.f_gen_store(v_Exp225__2, iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp225__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
                const auto v_Exp227__2 = iface.f_decl_bool("Exp227__2");
                iface.f_gen_store(v_Exp227__2, iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp227__2);
              } else {
                if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                  const auto v_Exp229__2 = iface.f_decl_bool("Exp229__2");
                  iface.f_gen_store(v_Exp229__2, iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR())));
                  v_test_passed__1 = iface.f_gen_load(v_Exp229__2);
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
            const auto v_If232__1 = iface.f_decl_bv("If232__1", iface.bigint_lit("64"));
            const auto v_temp12 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp12));
            iface.f_gen_store(v_If232__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp12));
            iface.f_gen_store(v_If232__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp12));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(v_If232__1)));
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
              const auto v_Exp238__2 = iface.f_decl_bool("Exp238__2");
              iface.f_gen_store(v_Exp238__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp238__2);
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
                const auto v_Exp240__2 = iface.f_decl_bool("Exp240__2");
                iface.f_gen_store(v_Exp240__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp240__2);
              } else {
                if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                  const auto v_Exp242__2 = iface.f_decl_bool("Exp242__2");
                  iface.f_gen_store(v_Exp242__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR())));
                  v_test_passed__1 = iface.f_gen_load(v_Exp242__2);
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
            const auto v_If245__1 = iface.f_decl_bv("If245__1", iface.bigint_lit("64"));
            const auto v_temp13 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp13));
            iface.f_gen_store(v_If245__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp13));
            iface.f_gen_store(v_If245__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp13));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(v_If245__1)));
          } // if
          if (v_abs__1) {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
              auto v_Exp255__2 = typename Traits::rt_expr{};
              v_Exp255__2 = iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp214__2, iface.bigint_lit("64"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp217__2, iface.bigint_lit("64"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp255__2;
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
                auto v_Exp257__2 = typename Traits::rt_expr{};
                v_Exp257__2 = iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp214__2, iface.bigint_lit("64"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp217__2, iface.bigint_lit("64"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp257__2;
              } else {
                if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                  auto v_Exp259__2 = typename Traits::rt_expr{};
                  v_Exp259__2 = iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp214__2, iface.bigint_lit("64"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(v_Exp217__2, iface.bigint_lit("64"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR()));
                  v_test_passed__1 = v_Exp259__2;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
            const auto v_If262__1 = iface.f_decl_bv("If262__1", iface.bigint_lit("64"));
            const auto v_temp14 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp14));
            iface.f_gen_store(v_If262__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp14));
            iface.f_gen_store(v_If262__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp14));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If262__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
              auto v_Exp268__2 = typename Traits::rt_expr{};
              v_Exp268__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp214__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(v_Exp217__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp268__2;
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
                auto v_Exp270__2 = typename Traits::rt_expr{};
                v_Exp270__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp214__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(v_Exp217__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp270__2;
              } else {
                if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                  auto v_Exp272__2 = typename Traits::rt_expr{};
                  v_Exp272__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp214__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_slice(v_Exp217__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                  v_test_passed__1 = v_Exp272__2;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
            const auto v_If275__1 = iface.f_decl_bv("If275__1", iface.bigint_lit("64"));
            const auto v_temp15 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp15));
            iface.f_gen_store(v_If275__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp15));
            iface.f_gen_store(v_If275__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp15));
            iface.f_gen_store(v_result__1, iface.f_gen_append_bits(iface.f_gen_load(v_If275__1), iface.f_gen_slice(iface.f_gen_load(v_result__1), iface.bigint_lit("0"), iface.bigint_lit("64"))));
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
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          const auto v_result__1 = iface.f_decl_bv("result__1", iface.bigint_lit("64"));
          auto v_test_passed__1 = typename Traits::rt_expr{};
          if (v_abs__1) {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
              auto v_Exp298__2 = typename Traits::rt_expr{};
              v_Exp298__2 = iface.f_gen_FPCompareEQ(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp298__2;
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
                auto v_Exp300__2 = typename Traits::rt_expr{};
                v_Exp300__2 = iface.f_gen_FPCompareGE(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp300__2;
              } else {
                if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                  auto v_Exp302__2 = typename Traits::rt_expr{};
                  v_Exp302__2 = iface.f_gen_FPCompareGT(iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(1U, "0")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("63"))), iface.f_gen_load(iface.v_FPCR()));
                  v_test_passed__1 = v_Exp302__2;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
            const auto v_If305__1 = iface.f_decl_bv("If305__1", iface.bigint_lit("64"));
            const auto v_temp16 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp16));
            iface.f_gen_store(v_If305__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp16));
            iface.f_gen_store(v_If305__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp16));
            iface.f_gen_store(v_result__1, iface.f_gen_load(v_If305__1));
          } else {
            if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "010"))) {
              auto v_Exp311__2 = typename Traits::rt_expr{};
              v_Exp311__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp311__2;
            } else {
              if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "001"))) {
                auto v_Exp313__2 = typename Traits::rt_expr{};
                v_Exp313__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp313__2;
              } else {
                if (iface.f_eq_bits(v_cmp__1, iface.bits_lit(3U, "000"))) {
                  auto v_Exp315__2 = typename Traits::rt_expr{};
                  v_Exp315__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                  v_test_passed__1 = v_Exp315__2;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
            const auto v_If318__1 = iface.f_decl_bv("If318__1", iface.bigint_lit("64"));
            const auto v_temp17 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp17));
            iface.f_gen_store(v_If318__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp17));
            iface.f_gen_store(v_If318__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp17));
            iface.f_gen_store(v_result__1, iface.f_gen_load(v_If318__1));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_result__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd


} // namespace aslp
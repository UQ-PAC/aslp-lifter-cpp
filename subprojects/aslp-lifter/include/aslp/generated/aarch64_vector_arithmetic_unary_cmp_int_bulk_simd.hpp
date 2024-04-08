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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(3U, "110"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
          v_comparison__1 = iface.bits_lit(3U, "000");
        } else {
          if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
            v_comparison__1 = iface.bits_lit(3U, "001");
          } else {
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
              v_comparison__1 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                v_comparison__1 = iface.bits_lit(3U, "011");
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp6__2 = typename Traits::rt_expr{};
        v_Exp6__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        auto v_test_passed__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If12__1 = iface.f_decl_bv("If12__1", iface.bigint_lit("8"));
        const auto v_temp0 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_If12__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        iface.f_gen_store(v_If12__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If19__1 = iface.f_decl_bv("If19__1", iface.bigint_lit("8"));
        const auto v_temp1 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_If19__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_If19__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp1));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If26__1 = iface.f_decl_bv("If26__1", iface.bigint_lit("8"));
        const auto v_temp2 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_If26__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        iface.f_gen_store(v_If26__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If33__1 = iface.f_decl_bv("If33__1", iface.bigint_lit("8"));
        const auto v_temp3 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_If33__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_If33__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If40__1 = iface.f_decl_bv("If40__1", iface.bigint_lit("8"));
        const auto v_temp4 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_If40__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        iface.f_gen_store(v_If40__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If47__1 = iface.f_decl_bv("If47__1", iface.bigint_lit("8"));
        const auto v_temp5 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_If47__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        iface.f_gen_store(v_If47__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If54__1 = iface.f_decl_bv("If54__1", iface.bigint_lit("8"));
        const auto v_temp6 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp6));
        iface.f_gen_store(v_If54__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp6));
        iface.f_gen_store(v_If54__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp6));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If61__1 = iface.f_decl_bv("If61__1", iface.bigint_lit("8"));
        const auto v_temp7 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp7));
        iface.f_gen_store(v_If61__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp7));
        iface.f_gen_store(v_If61__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp7));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If68__1 = iface.f_decl_bv("If68__1", iface.bigint_lit("8"));
        const auto v_temp8 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp8));
        iface.f_gen_store(v_If68__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp8));
        iface.f_gen_store(v_If68__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp8));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("72"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If75__1 = iface.f_decl_bv("If75__1", iface.bigint_lit("8"));
        const auto v_temp9 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp9));
        iface.f_gen_store(v_If75__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp9));
        iface.f_gen_store(v_If75__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp9));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If82__1 = iface.f_decl_bv("If82__1", iface.bigint_lit("8"));
        const auto v_temp10 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp10));
        iface.f_gen_store(v_If82__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp10));
        iface.f_gen_store(v_If82__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp10));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("88"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If89__1 = iface.f_decl_bv("If89__1", iface.bigint_lit("8"));
        const auto v_temp11 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp11));
        iface.f_gen_store(v_If89__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp11));
        iface.f_gen_store(v_If89__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp11));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If96__1 = iface.f_decl_bv("If96__1", iface.bigint_lit("8"));
        const auto v_temp12 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp12));
        iface.f_gen_store(v_If96__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp12));
        iface.f_gen_store(v_If96__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp12));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("104"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If103__1 = iface.f_decl_bv("If103__1", iface.bigint_lit("8"));
        const auto v_temp13 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp13));
        iface.f_gen_store(v_If103__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp13));
        iface.f_gen_store(v_If103__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp13));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If110__1 = iface.f_decl_bv("If110__1", iface.bigint_lit("8"));
        const auto v_temp14 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp14));
        iface.f_gen_store(v_If110__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp14));
        iface.f_gen_store(v_If110__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp14));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("120"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If117__1 = iface.f_decl_bv("If117__1", iface.bigint_lit("8"));
        const auto v_temp15 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp15));
        iface.f_gen_store(v_If117__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp15));
        iface.f_gen_store(v_If117__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp15));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If117__1), iface.f_gen_append_bits(iface.f_gen_load(v_If110__1), iface.f_gen_append_bits(iface.f_gen_load(v_If103__1), iface.f_gen_append_bits(iface.f_gen_load(v_If96__1), iface.f_gen_append_bits(iface.f_gen_load(v_If89__1), iface.f_gen_append_bits(iface.f_gen_load(v_If82__1), iface.f_gen_append_bits(iface.f_gen_load(v_If75__1), iface.f_gen_append_bits(iface.f_gen_load(v_If68__1), iface.f_gen_append_bits(iface.f_gen_load(v_If61__1), iface.f_gen_append_bits(iface.f_gen_load(v_If54__1), iface.f_gen_append_bits(iface.f_gen_load(v_If47__1), iface.f_gen_append_bits(iface.f_gen_load(v_If40__1), iface.f_gen_append_bits(iface.f_gen_load(v_If33__1), iface.f_gen_append_bits(iface.f_gen_load(v_If26__1), iface.f_gen_append_bits(iface.f_gen_load(v_If19__1), iface.f_gen_load(v_If12__1)))))))))))))))));
      } else {
        auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
          v_comparison__1 = iface.bits_lit(3U, "000");
        } else {
          if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
            v_comparison__1 = iface.bits_lit(3U, "001");
          } else {
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
              v_comparison__1 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                v_comparison__1 = iface.bits_lit(3U, "011");
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_Exp128__2 = typename Traits::rt_expr{};
        v_Exp128__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        auto v_test_passed__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If134__1 = iface.f_decl_bv("If134__1", iface.bigint_lit("8"));
        const auto v_temp16 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp16));
        iface.f_gen_store(v_If134__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp16));
        iface.f_gen_store(v_If134__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp16));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("8"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("8"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("8"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If141__1 = iface.f_decl_bv("If141__1", iface.bigint_lit("8"));
        const auto v_temp17 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp17));
        iface.f_gen_store(v_If141__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp17));
        iface.f_gen_store(v_If141__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp17));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("16"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("16"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("16"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If148__1 = iface.f_decl_bv("If148__1", iface.bigint_lit("8"));
        const auto v_temp18 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp18));
        iface.f_gen_store(v_If148__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp18));
        iface.f_gen_store(v_If148__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp18));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("24"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("24"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("24"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If155__1 = iface.f_decl_bv("If155__1", iface.bigint_lit("8"));
        const auto v_temp19 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp19));
        iface.f_gen_store(v_If155__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp19));
        iface.f_gen_store(v_If155__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp19));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("32"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("32"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("32"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If162__1 = iface.f_decl_bv("If162__1", iface.bigint_lit("8"));
        const auto v_temp20 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp20));
        iface.f_gen_store(v_If162__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp20));
        iface.f_gen_store(v_If162__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp20));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("40"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("40"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("40"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If169__1 = iface.f_decl_bv("If169__1", iface.bigint_lit("8"));
        const auto v_temp21 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp21));
        iface.f_gen_store(v_If169__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp21));
        iface.f_gen_store(v_If169__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp21));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("48"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("48"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("48"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If176__1 = iface.f_decl_bv("If176__1", iface.bigint_lit("8"));
        const auto v_temp22 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp22));
        iface.f_gen_store(v_If176__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp22));
        iface.f_gen_store(v_If176__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp22));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("56"), iface.bigint_lit("8")));
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")), iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("56"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp128__2, iface.bigint_lit("56"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If183__1 = iface.f_decl_bv("If183__1", iface.bigint_lit("8"));
        const auto v_temp23 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp23));
        iface.f_gen_store(v_If183__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "11111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp23));
        iface.f_gen_store(v_If183__1, iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp23));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If183__1), iface.f_gen_append_bits(iface.f_gen_load(v_If176__1), iface.f_gen_append_bits(iface.f_gen_load(v_If169__1), iface.f_gen_append_bits(iface.f_gen_load(v_If162__1), iface.f_gen_append_bits(iface.f_gen_load(v_If155__1), iface.f_gen_append_bits(iface.f_gen_load(v_If148__1), iface.f_gen_append_bits(iface.f_gen_load(v_If141__1), iface.f_gen_load(v_If134__1)))))))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
            v_comparison__1 = iface.bits_lit(3U, "000");
          } else {
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
              v_comparison__1 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                v_comparison__1 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                  v_comparison__1 = iface.bits_lit(3U, "011");
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp195__2 = typename Traits::rt_expr{};
          v_Exp195__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_test_passed__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If201__1 = iface.f_decl_bv("If201__1", iface.bigint_lit("16"));
          const auto v_temp24 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp24));
          iface.f_gen_store(v_If201__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp24));
          iface.f_gen_store(v_If201__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp24));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("16"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("16"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If208__1 = iface.f_decl_bv("If208__1", iface.bigint_lit("16"));
          const auto v_temp25 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp25));
          iface.f_gen_store(v_If208__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp25));
          iface.f_gen_store(v_If208__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp25));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("32"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("32"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If215__1 = iface.f_decl_bv("If215__1", iface.bigint_lit("16"));
          const auto v_temp26 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp26));
          iface.f_gen_store(v_If215__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp26));
          iface.f_gen_store(v_If215__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp26));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("48"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("48"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If222__1 = iface.f_decl_bv("If222__1", iface.bigint_lit("16"));
          const auto v_temp27 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp27));
          iface.f_gen_store(v_If222__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp27));
          iface.f_gen_store(v_If222__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp27));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("64"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("64"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If229__1 = iface.f_decl_bv("If229__1", iface.bigint_lit("16"));
          const auto v_temp28 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp28));
          iface.f_gen_store(v_If229__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp28));
          iface.f_gen_store(v_If229__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp28));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("80"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("80"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If236__1 = iface.f_decl_bv("If236__1", iface.bigint_lit("16"));
          const auto v_temp29 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp29));
          iface.f_gen_store(v_If236__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp29));
          iface.f_gen_store(v_If236__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp29));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("96"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("96"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If243__1 = iface.f_decl_bv("If243__1", iface.bigint_lit("16"));
          const auto v_temp30 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp30));
          iface.f_gen_store(v_If243__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp30));
          iface.f_gen_store(v_If243__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp30));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("112"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("112"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp195__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If250__1 = iface.f_decl_bv("If250__1", iface.bigint_lit("16"));
          const auto v_temp31 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp31));
          iface.f_gen_store(v_If250__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp31));
          iface.f_gen_store(v_If250__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp31));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If250__1), iface.f_gen_append_bits(iface.f_gen_load(v_If243__1), iface.f_gen_append_bits(iface.f_gen_load(v_If236__1), iface.f_gen_append_bits(iface.f_gen_load(v_If229__1), iface.f_gen_append_bits(iface.f_gen_load(v_If222__1), iface.f_gen_append_bits(iface.f_gen_load(v_If215__1), iface.f_gen_append_bits(iface.f_gen_load(v_If208__1), iface.f_gen_load(v_If201__1)))))))));
        } else {
          auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
            v_comparison__1 = iface.bits_lit(3U, "000");
          } else {
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
              v_comparison__1 = iface.bits_lit(3U, "001");
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                v_comparison__1 = iface.bits_lit(3U, "010");
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                  v_comparison__1 = iface.bits_lit(3U, "011");
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_Exp261__2 = typename Traits::rt_expr{};
          v_Exp261__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_test_passed__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If267__1 = iface.f_decl_bv("If267__1", iface.bigint_lit("16"));
          const auto v_temp32 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp32));
          iface.f_gen_store(v_If267__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp32));
          iface.f_gen_store(v_If267__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp32));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("16"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("16"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If274__1 = iface.f_decl_bv("If274__1", iface.bigint_lit("16"));
          const auto v_temp33 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp33));
          iface.f_gen_store(v_If274__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp33));
          iface.f_gen_store(v_If274__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp33));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("32"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("32"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If281__1 = iface.f_decl_bv("If281__1", iface.bigint_lit("16"));
          const auto v_temp34 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp34));
          iface.f_gen_store(v_If281__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp34));
          iface.f_gen_store(v_If281__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp34));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("48"), iface.bigint_lit("16")));
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("48"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp261__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If288__1 = iface.f_decl_bv("If288__1", iface.bigint_lit("16"));
          const auto v_temp35 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp35));
          iface.f_gen_store(v_If288__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp35));
          iface.f_gen_store(v_If288__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp35));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If288__1), iface.f_gen_append_bits(iface.f_gen_load(v_If281__1), iface.f_gen_append_bits(iface.f_gen_load(v_If274__1), iface.f_gen_load(v_If267__1)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
              v_comparison__1 = iface.bits_lit(3U, "000");
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                v_comparison__1 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                  v_comparison__1 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                    v_comparison__1 = iface.bits_lit(3U, "011");
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp300__2 = typename Traits::rt_expr{};
            v_Exp300__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_test_passed__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
              v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                  v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                    v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                      v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
            } // if
            const auto v_If306__1 = iface.f_decl_bv("If306__1", iface.bigint_lit("32"));
            const auto v_temp36 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp36));
            iface.f_gen_store(v_If306__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp36));
            iface.f_gen_store(v_If306__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp36));
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
              v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("32"), iface.bigint_lit("32")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("32"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                  v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                    v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                      v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
            } // if
            const auto v_If313__1 = iface.f_decl_bv("If313__1", iface.bigint_lit("32"));
            const auto v_temp37 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp37));
            iface.f_gen_store(v_If313__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp37));
            iface.f_gen_store(v_If313__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp37));
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
              v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("64"), iface.bigint_lit("32")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("64"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                  v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                    v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                      v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
            } // if
            const auto v_If320__1 = iface.f_decl_bv("If320__1", iface.bigint_lit("32"));
            const auto v_temp38 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp38));
            iface.f_gen_store(v_If320__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp38));
            iface.f_gen_store(v_If320__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp38));
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
              v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("96"), iface.bigint_lit("32")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("96"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                  v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                    v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                      v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp300__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
            } // if
            const auto v_If327__1 = iface.f_decl_bv("If327__1", iface.bigint_lit("32"));
            const auto v_temp39 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp39));
            iface.f_gen_store(v_If327__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp39));
            iface.f_gen_store(v_If327__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp39));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If327__1), iface.f_gen_append_bits(iface.f_gen_load(v_If320__1), iface.f_gen_append_bits(iface.f_gen_load(v_If313__1), iface.f_gen_load(v_If306__1)))));
          } else {
            auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
              v_comparison__1 = iface.bits_lit(3U, "000");
            } else {
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                v_comparison__1 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                  v_comparison__1 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                    v_comparison__1 = iface.bits_lit(3U, "011");
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            auto v_Exp338__2 = typename Traits::rt_expr{};
            v_Exp338__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            auto v_test_passed__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
              v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                  v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                    v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                      v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
            } // if
            const auto v_If344__1 = iface.f_decl_bv("If344__1", iface.bigint_lit("32"));
            const auto v_temp40 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp40));
            iface.f_gen_store(v_If344__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp40));
            iface.f_gen_store(v_If344__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp40));
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
              v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp338__2, iface.bigint_lit("32"), iface.bigint_lit("32")));
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp338__2, iface.bigint_lit("32"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                  v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp338__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                    v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp338__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                      v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp338__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
            } // if
            const auto v_If351__1 = iface.f_decl_bv("If351__1", iface.bigint_lit("32"));
            const auto v_temp41 = iface.f_gen_branch(v_test_passed__1);
            iface.f_switch_context(iface.f_true_branch(v_temp41));
            iface.f_gen_store(v_If351__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
            iface.f_switch_context(iface.f_false_branch(v_temp41));
            iface.f_gen_store(v_If351__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
            iface.f_switch_context(iface.f_merge_branch(v_temp41));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If351__1), iface.f_gen_load(v_If344__1)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2")))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
                v_comparison__1 = iface.bits_lit(3U, "000");
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                  v_comparison__1 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                    v_comparison__1 = iface.bits_lit(3U, "010");
                  } else {
                    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                      v_comparison__1 = iface.bits_lit(3U, "011");
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_Exp363__2 = typename Traits::rt_expr{};
              v_Exp363__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              auto v_test_passed__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
                v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                    v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                      v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    } else {
                      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                        v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } // if
              const auto v_If369__1 = iface.f_decl_bv("If369__1", iface.bigint_lit("64"));
              const auto v_temp42 = iface.f_gen_branch(v_test_passed__1);
              iface.f_switch_context(iface.f_true_branch(v_temp42));
              iface.f_gen_store(v_If369__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp42));
              iface.f_gen_store(v_If369__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp42));
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
                v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(v_Exp363__2, iface.bigint_lit("64"), iface.bigint_lit("64")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(v_Exp363__2, iface.bigint_lit("64"), iface.bigint_lit("64")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                    v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(v_Exp363__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                      v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(v_Exp363__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    } else {
                      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                        v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(v_Exp363__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } // if
              const auto v_If376__1 = iface.f_decl_bv("If376__1", iface.bigint_lit("64"));
              const auto v_temp43 = iface.f_gen_branch(v_test_passed__1);
              iface.f_switch_context(iface.f_true_branch(v_temp43));
              iface.f_gen_store(v_If376__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp43));
              iface.f_gen_store(v_If376__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp43));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If376__1), iface.f_gen_load(v_If369__1)));
            } else {
              auto v_comparison__1 = iface.bits_zero(iface.bigint_lit("3"));
              if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "00"))) {
                v_comparison__1 = iface.bits_lit(3U, "000");
              } else {
                if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
                  v_comparison__1 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
                    v_comparison__1 = iface.bits_lit(3U, "010");
                  } else {
                    if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "11"))) {
                      v_comparison__1 = iface.bits_lit(3U, "011");
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              auto v_test_passed__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
                v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
                  v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                    v_test_passed__1 = iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                  } else {
                    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                      v_test_passed__1 = iface.f_gen_sle_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                    } else {
                      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                        v_test_passed__1 = iface.f_gen_slt_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } // if
              const auto v_If393__1 = iface.f_decl_bv("If393__1", iface.bigint_lit("64"));
              const auto v_temp44 = iface.f_gen_branch(v_test_passed__1);
              iface.f_switch_context(iface.f_true_branch(v_temp44));
              iface.f_gen_store(v_If393__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
              iface.f_switch_context(iface.f_false_branch(v_temp44));
              iface.f_gen_store(v_If393__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
              iface.f_switch_context(iface.f_merge_branch(v_temp44));
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If393__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd


} // namespace aslp
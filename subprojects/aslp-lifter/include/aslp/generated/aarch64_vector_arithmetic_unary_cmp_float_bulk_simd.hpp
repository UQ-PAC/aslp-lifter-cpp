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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "10"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
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
          const auto v_Exp13__2 = iface.f_decl_bool("Exp13__2");
          iface.f_gen_store(v_Exp13__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp13__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            const auto v_Exp15__2 = iface.f_decl_bool("Exp15__2");
            iface.f_gen_store(v_Exp15__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp15__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              const auto v_Exp17__2 = iface.f_decl_bool("Exp17__2");
              iface.f_gen_store(v_Exp17__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp17__2);
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                const auto v_Exp19__2 = iface.f_decl_bool("Exp19__2");
                iface.f_gen_store(v_Exp19__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp19__2);
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  const auto v_Exp21__2 = iface.f_decl_bool("Exp21__2");
                  iface.f_gen_store(v_Exp21__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                  v_test_passed__1 = iface.f_gen_load(v_Exp21__2);
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If24__1 = iface.f_decl_bv("If24__1", iface.bigint_lit("32"));
        const auto v_temp0 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp0));
        iface.f_gen_store(v_If24__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp0));
        iface.f_gen_store(v_If24__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp0));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          const auto v_Exp30__2 = iface.f_decl_bool("Exp30__2");
          iface.f_gen_store(v_Exp30__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp30__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            const auto v_Exp32__2 = iface.f_decl_bool("Exp32__2");
            iface.f_gen_store(v_Exp32__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp32__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              const auto v_Exp34__2 = iface.f_decl_bool("Exp34__2");
              iface.f_gen_store(v_Exp34__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp34__2);
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                const auto v_Exp36__2 = iface.f_decl_bool("Exp36__2");
                iface.f_gen_store(v_Exp36__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp36__2);
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  const auto v_Exp38__2 = iface.f_decl_bool("Exp38__2");
                  iface.f_gen_store(v_Exp38__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                  v_test_passed__1 = iface.f_gen_load(v_Exp38__2);
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If40__1 = iface.f_decl_bv("If40__1", iface.bigint_lit("32"));
        const auto v_temp1 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp1));
        iface.f_gen_store(v_If40__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp1));
        iface.f_gen_store(v_If40__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp1));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          const auto v_Exp46__2 = iface.f_decl_bool("Exp46__2");
          iface.f_gen_store(v_Exp46__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp46__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            const auto v_Exp48__2 = iface.f_decl_bool("Exp48__2");
            iface.f_gen_store(v_Exp48__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp48__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              const auto v_Exp50__2 = iface.f_decl_bool("Exp50__2");
              iface.f_gen_store(v_Exp50__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp50__2);
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                const auto v_Exp52__2 = iface.f_decl_bool("Exp52__2");
                iface.f_gen_store(v_Exp52__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp52__2);
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  const auto v_Exp54__2 = iface.f_decl_bool("Exp54__2");
                  iface.f_gen_store(v_Exp54__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                  v_test_passed__1 = iface.f_gen_load(v_Exp54__2);
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If56__1 = iface.f_decl_bv("If56__1", iface.bigint_lit("32"));
        const auto v_temp2 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp2));
        iface.f_gen_store(v_If56__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp2));
        iface.f_gen_store(v_If56__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp2));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          auto v_Exp62__2 = typename Traits::rt_expr{};
          v_Exp62__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp62__2;
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            auto v_Exp64__2 = typename Traits::rt_expr{};
            v_Exp64__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp64__2;
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              auto v_Exp66__2 = typename Traits::rt_expr{};
              v_Exp66__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp66__2;
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                auto v_Exp68__2 = typename Traits::rt_expr{};
                v_Exp68__2 = iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp68__2;
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  auto v_Exp70__2 = typename Traits::rt_expr{};
                  v_Exp70__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
                  v_test_passed__1 = v_Exp70__2;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If72__1 = iface.f_decl_bv("If72__1", iface.bigint_lit("32"));
        const auto v_temp3 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp3));
        iface.f_gen_store(v_If72__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp3));
        iface.f_gen_store(v_If72__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp3));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If72__1), iface.f_gen_append_bits(iface.f_gen_load(v_If56__1), iface.f_gen_append_bits(iface.f_gen_load(v_If40__1), iface.f_gen_load(v_If24__1)))));
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
        auto v_Exp83__2 = typename Traits::rt_expr{};
        v_Exp83__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        auto v_test_passed__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          const auto v_Exp90__2 = iface.f_decl_bool("Exp90__2");
          iface.f_gen_store(v_Exp90__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp90__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            const auto v_Exp92__2 = iface.f_decl_bool("Exp92__2");
            iface.f_gen_store(v_Exp92__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp92__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              const auto v_Exp94__2 = iface.f_decl_bool("Exp94__2");
              iface.f_gen_store(v_Exp94__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp94__2);
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                const auto v_Exp96__2 = iface.f_decl_bool("Exp96__2");
                iface.f_gen_store(v_Exp96__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp96__2);
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  const auto v_Exp98__2 = iface.f_decl_bool("Exp98__2");
                  iface.f_gen_store(v_Exp98__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                  v_test_passed__1 = iface.f_gen_load(v_Exp98__2);
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If101__1 = iface.f_decl_bv("If101__1", iface.bigint_lit("32"));
        const auto v_temp4 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp4));
        iface.f_gen_store(v_If101__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp4));
        iface.f_gen_store(v_If101__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp4));
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
          auto v_Exp107__2 = typename Traits::rt_expr{};
          v_Exp107__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp83__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp107__2;
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
            auto v_Exp109__2 = typename Traits::rt_expr{};
            v_Exp109__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp83__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp109__2;
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
              auto v_Exp111__2 = typename Traits::rt_expr{};
              v_Exp111__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp83__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp111__2;
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                auto v_Exp113__2 = typename Traits::rt_expr{};
                v_Exp113__2 = iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp83__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp113__2;
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                  auto v_Exp115__2 = typename Traits::rt_expr{};
                  v_Exp115__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")), iface.f_gen_slice(v_Exp83__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
                  v_test_passed__1 = v_Exp115__2;
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
        const auto v_If117__1 = iface.f_decl_bv("If117__1", iface.bigint_lit("32"));
        const auto v_temp5 = iface.f_gen_branch(v_test_passed__1);
        iface.f_switch_context(iface.f_true_branch(v_temp5));
        iface.f_gen_store(v_If117__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "11111111111111111111111111111111")));
        iface.f_switch_context(iface.f_false_branch(v_temp5));
        iface.f_gen_store(v_If117__1, iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")));
        iface.f_switch_context(iface.f_merge_branch(v_temp5));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If117__1), iface.f_gen_load(v_If101__1)), iface.f_gen_int_lit(iface.bigint_lit("128"))));
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
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
          auto v_Exp129__2 = typename Traits::rt_expr{};
          v_Exp129__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          auto v_test_passed__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            const auto v_Exp136__2 = iface.f_decl_bool("Exp136__2");
            iface.f_gen_store(v_Exp136__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp136__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              const auto v_Exp138__2 = iface.f_decl_bool("Exp138__2");
              iface.f_gen_store(v_Exp138__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp138__2);
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                const auto v_Exp140__2 = iface.f_decl_bool("Exp140__2");
                iface.f_gen_store(v_Exp140__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR())));
                v_test_passed__1 = iface.f_gen_load(v_Exp140__2);
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  const auto v_Exp142__2 = iface.f_decl_bool("Exp142__2");
                  iface.f_gen_store(v_Exp142__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR())));
                  v_test_passed__1 = iface.f_gen_load(v_Exp142__2);
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    const auto v_Exp144__2 = iface.f_decl_bool("Exp144__2");
                    iface.f_gen_store(v_Exp144__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR())));
                    v_test_passed__1 = iface.f_gen_load(v_Exp144__2);
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If147__1 = iface.f_decl_bv("If147__1", iface.bigint_lit("64"));
          const auto v_temp6 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp6));
          iface.f_gen_store(v_If147__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp6));
          iface.f_gen_store(v_If147__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp6));
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
            auto v_Exp153__2 = typename Traits::rt_expr{};
            v_Exp153__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp153__2;
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              auto v_Exp155__2 = typename Traits::rt_expr{};
              v_Exp155__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp155__2;
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                auto v_Exp157__2 = typename Traits::rt_expr{};
                v_Exp157__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp157__2;
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  auto v_Exp159__2 = typename Traits::rt_expr{};
                  v_Exp159__2 = iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                  v_test_passed__1 = v_Exp159__2;
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    auto v_Exp161__2 = typename Traits::rt_expr{};
                    v_Exp161__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(v_Exp129__2, iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                    v_test_passed__1 = v_Exp161__2;
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If163__1 = iface.f_decl_bv("If163__1", iface.bigint_lit("64"));
          const auto v_temp7 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp7));
          iface.f_gen_store(v_If163__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp7));
          iface.f_gen_store(v_If163__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp7));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If163__1), iface.f_gen_load(v_If147__1)));
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
            auto v_Exp181__2 = typename Traits::rt_expr{};
            v_Exp181__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp181__2;
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
              auto v_Exp183__2 = typename Traits::rt_expr{};
              v_Exp183__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp183__2;
            } else {
              if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
                auto v_Exp185__2 = typename Traits::rt_expr{};
                v_Exp185__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_load(iface.v_FPCR()));
                v_test_passed__1 = v_Exp185__2;
              } else {
                if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
                  auto v_Exp187__2 = typename Traits::rt_expr{};
                  v_Exp187__2 = iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                  v_test_passed__1 = v_Exp187__2;
                } else {
                  if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
                    auto v_Exp189__2 = typename Traits::rt_expr{};
                    v_Exp189__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                    v_test_passed__1 = v_Exp189__2;
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
          const auto v_If192__1 = iface.f_decl_bv("If192__1", iface.bigint_lit("64"));
          const auto v_temp8 = iface.f_gen_branch(v_test_passed__1);
          iface.f_switch_context(iface.f_true_branch(v_temp8));
          iface.f_gen_store(v_If192__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "1111111111111111111111111111111111111111111111111111111111111111")));
          iface.f_switch_context(iface.f_false_branch(v_temp8));
          iface.f_gen_store(v_If192__1, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
          iface.f_switch_context(iface.f_merge_branch(v_temp8));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_If192__1), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd


} // namespace aslp
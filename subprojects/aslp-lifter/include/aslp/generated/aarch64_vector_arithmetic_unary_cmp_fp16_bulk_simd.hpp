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
void aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd(typename Traits::bits v_enc) {
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
      iface.f_gen_store(v_Exp13__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp13__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp15__2 = iface.f_decl_bool("Exp15__2");
        iface.f_gen_store(v_Exp15__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp15__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp17__2 = iface.f_decl_bool("Exp17__2");
          iface.f_gen_store(v_Exp17__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp17__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp19__2 = iface.f_decl_bool("Exp19__2");
            iface.f_gen_store(v_Exp19__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp19__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp21__2 = iface.f_decl_bool("Exp21__2");
              iface.f_gen_store(v_Exp21__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp21__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If24__1 = iface.f_decl_bv("If24__1", iface.bigint_lit("16"));
    const auto v_temp0 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp0));
    iface.f_gen_store(v_If24__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp0));
    iface.f_gen_store(v_If24__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp0));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp30__2 = iface.f_decl_bool("Exp30__2");
      iface.f_gen_store(v_Exp30__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp30__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp32__2 = iface.f_decl_bool("Exp32__2");
        iface.f_gen_store(v_Exp32__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp32__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp34__2 = iface.f_decl_bool("Exp34__2");
          iface.f_gen_store(v_Exp34__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp34__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp36__2 = iface.f_decl_bool("Exp36__2");
            iface.f_gen_store(v_Exp36__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp36__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp38__2 = iface.f_decl_bool("Exp38__2");
              iface.f_gen_store(v_Exp38__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp38__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If40__1 = iface.f_decl_bv("If40__1", iface.bigint_lit("16"));
    const auto v_temp1 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp1));
    iface.f_gen_store(v_If40__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp1));
    iface.f_gen_store(v_If40__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp1));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp46__2 = iface.f_decl_bool("Exp46__2");
      iface.f_gen_store(v_Exp46__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp46__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp48__2 = iface.f_decl_bool("Exp48__2");
        iface.f_gen_store(v_Exp48__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp48__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp50__2 = iface.f_decl_bool("Exp50__2");
          iface.f_gen_store(v_Exp50__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp50__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp52__2 = iface.f_decl_bool("Exp52__2");
            iface.f_gen_store(v_Exp52__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp52__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp54__2 = iface.f_decl_bool("Exp54__2");
              iface.f_gen_store(v_Exp54__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp54__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If56__1 = iface.f_decl_bv("If56__1", iface.bigint_lit("16"));
    const auto v_temp2 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp2));
    iface.f_gen_store(v_If56__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp2));
    iface.f_gen_store(v_If56__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp2));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp62__2 = iface.f_decl_bool("Exp62__2");
      iface.f_gen_store(v_Exp62__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp62__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp64__2 = iface.f_decl_bool("Exp64__2");
        iface.f_gen_store(v_Exp64__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp64__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp66__2 = iface.f_decl_bool("Exp66__2");
          iface.f_gen_store(v_Exp66__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp66__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp68__2 = iface.f_decl_bool("Exp68__2");
            iface.f_gen_store(v_Exp68__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp68__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp70__2 = iface.f_decl_bool("Exp70__2");
              iface.f_gen_store(v_Exp70__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp70__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If72__1 = iface.f_decl_bv("If72__1", iface.bigint_lit("16"));
    const auto v_temp3 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp3));
    iface.f_gen_store(v_If72__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp3));
    iface.f_gen_store(v_If72__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp3));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp78__2 = iface.f_decl_bool("Exp78__2");
      iface.f_gen_store(v_Exp78__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp78__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp80__2 = iface.f_decl_bool("Exp80__2");
        iface.f_gen_store(v_Exp80__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp80__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp82__2 = iface.f_decl_bool("Exp82__2");
          iface.f_gen_store(v_Exp82__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp82__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp84__2 = iface.f_decl_bool("Exp84__2");
            iface.f_gen_store(v_Exp84__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp84__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp86__2 = iface.f_decl_bool("Exp86__2");
              iface.f_gen_store(v_Exp86__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp86__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If88__1 = iface.f_decl_bv("If88__1", iface.bigint_lit("16"));
    const auto v_temp4 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp4));
    iface.f_gen_store(v_If88__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp4));
    iface.f_gen_store(v_If88__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp4));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp94__2 = iface.f_decl_bool("Exp94__2");
      iface.f_gen_store(v_Exp94__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp94__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp96__2 = iface.f_decl_bool("Exp96__2");
        iface.f_gen_store(v_Exp96__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp96__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp98__2 = iface.f_decl_bool("Exp98__2");
          iface.f_gen_store(v_Exp98__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp98__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp100__2 = iface.f_decl_bool("Exp100__2");
            iface.f_gen_store(v_Exp100__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp100__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp102__2 = iface.f_decl_bool("Exp102__2");
              iface.f_gen_store(v_Exp102__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp102__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If104__1 = iface.f_decl_bv("If104__1", iface.bigint_lit("16"));
    const auto v_temp5 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp5));
    iface.f_gen_store(v_If104__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp5));
    iface.f_gen_store(v_If104__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp5));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp110__2 = iface.f_decl_bool("Exp110__2");
      iface.f_gen_store(v_Exp110__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp110__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp112__2 = iface.f_decl_bool("Exp112__2");
        iface.f_gen_store(v_Exp112__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp112__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp114__2 = iface.f_decl_bool("Exp114__2");
          iface.f_gen_store(v_Exp114__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp114__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp116__2 = iface.f_decl_bool("Exp116__2");
            iface.f_gen_store(v_Exp116__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp116__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp118__2 = iface.f_decl_bool("Exp118__2");
              iface.f_gen_store(v_Exp118__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp118__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If120__1 = iface.f_decl_bv("If120__1", iface.bigint_lit("16"));
    const auto v_temp6 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp6));
    iface.f_gen_store(v_If120__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp6));
    iface.f_gen_store(v_If120__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp6));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      auto v_Exp126__2 = typename Traits::rt_expr{};
      v_Exp126__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
      v_test_passed__1 = v_Exp126__2;
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        auto v_Exp128__2 = typename Traits::rt_expr{};
        v_Exp128__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
        v_test_passed__1 = v_Exp128__2;
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          auto v_Exp130__2 = typename Traits::rt_expr{};
          v_Exp130__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp130__2;
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            auto v_Exp132__2 = typename Traits::rt_expr{};
            v_Exp132__2 = iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp132__2;
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              auto v_Exp134__2 = typename Traits::rt_expr{};
              v_Exp134__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp6__2, iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp134__2;
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If136__1 = iface.f_decl_bv("If136__1", iface.bigint_lit("16"));
    const auto v_temp7 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp7));
    iface.f_gen_store(v_If136__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp7));
    iface.f_gen_store(v_If136__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp7));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_load(v_If136__1), iface.f_gen_append_bits(iface.f_gen_load(v_If120__1), iface.f_gen_append_bits(iface.f_gen_load(v_If104__1), iface.f_gen_append_bits(iface.f_gen_load(v_If88__1), iface.f_gen_append_bits(iface.f_gen_load(v_If72__1), iface.f_gen_append_bits(iface.f_gen_load(v_If56__1), iface.f_gen_append_bits(iface.f_gen_load(v_If40__1), iface.f_gen_load(v_If24__1)))))))));
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
    auto v_Exp147__2 = typename Traits::rt_expr{};
    v_Exp147__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    auto v_test_passed__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp154__2 = iface.f_decl_bool("Exp154__2");
      iface.f_gen_store(v_Exp154__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp154__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp156__2 = iface.f_decl_bool("Exp156__2");
        iface.f_gen_store(v_Exp156__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp156__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp158__2 = iface.f_decl_bool("Exp158__2");
          iface.f_gen_store(v_Exp158__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp158__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp160__2 = iface.f_decl_bool("Exp160__2");
            iface.f_gen_store(v_Exp160__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp160__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp162__2 = iface.f_decl_bool("Exp162__2");
              iface.f_gen_store(v_Exp162__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp162__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If165__1 = iface.f_decl_bv("If165__1", iface.bigint_lit("16"));
    const auto v_temp8 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp8));
    iface.f_gen_store(v_If165__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp8));
    iface.f_gen_store(v_If165__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp8));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp171__2 = iface.f_decl_bool("Exp171__2");
      iface.f_gen_store(v_Exp171__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp171__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp173__2 = iface.f_decl_bool("Exp173__2");
        iface.f_gen_store(v_Exp173__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp173__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp175__2 = iface.f_decl_bool("Exp175__2");
          iface.f_gen_store(v_Exp175__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp175__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp177__2 = iface.f_decl_bool("Exp177__2");
            iface.f_gen_store(v_Exp177__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp177__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp179__2 = iface.f_decl_bool("Exp179__2");
              iface.f_gen_store(v_Exp179__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp179__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If181__1 = iface.f_decl_bv("If181__1", iface.bigint_lit("16"));
    const auto v_temp9 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp9));
    iface.f_gen_store(v_If181__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp9));
    iface.f_gen_store(v_If181__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp9));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp187__2 = iface.f_decl_bool("Exp187__2");
      iface.f_gen_store(v_Exp187__2, iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
      v_test_passed__1 = iface.f_gen_load(v_Exp187__2);
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp189__2 = iface.f_decl_bool("Exp189__2");
        iface.f_gen_store(v_Exp189__2, iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
        v_test_passed__1 = iface.f_gen_load(v_Exp189__2);
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp191__2 = iface.f_decl_bool("Exp191__2");
          iface.f_gen_store(v_Exp191__2, iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR())));
          v_test_passed__1 = iface.f_gen_load(v_Exp191__2);
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp193__2 = iface.f_decl_bool("Exp193__2");
            iface.f_gen_store(v_Exp193__2, iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_test_passed__1 = iface.f_gen_load(v_Exp193__2);
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp195__2 = iface.f_decl_bool("Exp195__2");
              iface.f_gen_store(v_Exp195__2, iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_test_passed__1 = iface.f_gen_load(v_Exp195__2);
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If197__1 = iface.f_decl_bv("If197__1", iface.bigint_lit("16"));
    const auto v_temp10 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp10));
    iface.f_gen_store(v_If197__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp10));
    iface.f_gen_store(v_If197__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp10));
    if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "000"))) {
      auto v_Exp203__2 = typename Traits::rt_expr{};
      v_Exp203__2 = iface.f_gen_FPCompareGT(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
      v_test_passed__1 = v_Exp203__2;
    } else {
      if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "001"))) {
        auto v_Exp205__2 = typename Traits::rt_expr{};
        v_Exp205__2 = iface.f_gen_FPCompareGE(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
        v_test_passed__1 = v_Exp205__2;
      } else {
        if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "010"))) {
          auto v_Exp207__2 = typename Traits::rt_expr{};
          v_Exp207__2 = iface.f_gen_FPCompareEQ(iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_load(iface.v_FPCR()));
          v_test_passed__1 = v_Exp207__2;
        } else {
          if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "011"))) {
            auto v_Exp209__2 = typename Traits::rt_expr{};
            v_Exp209__2 = iface.f_gen_FPCompareGE(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
            v_test_passed__1 = v_Exp209__2;
          } else {
            if (iface.f_eq_bits(v_comparison__1, iface.bits_lit(3U, "100"))) {
              auto v_Exp211__2 = typename Traits::rt_expr{};
              v_Exp211__2 = iface.f_gen_FPCompareGT(iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")), iface.f_gen_slice(v_Exp147__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR()));
              v_test_passed__1 = v_Exp211__2;
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
    const auto v_If213__1 = iface.f_decl_bv("If213__1", iface.bigint_lit("16"));
    const auto v_temp11 = iface.f_gen_branch(v_test_passed__1);
    iface.f_switch_context(iface.f_true_branch(v_temp11));
    iface.f_gen_store(v_If213__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "1111111111111111")));
    iface.f_switch_context(iface.f_false_branch(v_temp11));
    iface.f_gen_store(v_If213__1, iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000")));
    iface.f_switch_context(iface.f_merge_branch(v_temp11));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_load(v_If213__1), iface.f_gen_append_bits(iface.f_gen_load(v_If197__1), iface.f_gen_append_bits(iface.f_gen_load(v_If181__1), iface.f_gen_load(v_If165__1)))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd


} // namespace aslp
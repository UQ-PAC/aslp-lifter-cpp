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
void aslp_lifter<Traits>::f_aarch64_vector_reduce_fp16_maxnm_simd(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_If4__1 = iface.bits_zero(iface.bigint_lit("3"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If4__1 = iface.bits_lit(3U, "000");
    } else {
      v_If4__1 = iface.bits_lit(3U, "001");
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp7__2 = typename Traits::rt_expr{};
    v_Exp7__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    auto v_result__2 = typename Traits::rt_expr{};
    auto v_result__3 = typename Traits::rt_expr{};
    auto v_result__4 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp14__5 = iface.f_decl_bv("Exp14__5", iface.bigint_lit("16"));
      iface.f_gen_store(v_Exp14__5, iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
      v_result__4 = iface.f_gen_load(v_Exp14__5);
    } else {
      if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp16__5 = iface.f_decl_bv("Exp16__5", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp16__5, iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_result__4 = iface.f_gen_load(v_Exp16__5);
      } else {
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp18__5 = iface.f_decl_bv("Exp18__5", iface.bigint_lit("16"));
          iface.f_gen_store(v_Exp18__5, iface.f_gen_FPMin(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_result__4 = iface.f_gen_load(v_Exp18__5);
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp20__5 = iface.f_decl_bv("Exp20__5", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp20__5, iface.f_gen_FPMax(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_result__4 = iface.f_gen_load(v_Exp20__5);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp22__5 = iface.f_decl_bv("Exp22__5", iface.bigint_lit("16"));
              iface.f_gen_store(v_Exp22__5, iface.f_gen_FPAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_result__4 = iface.f_gen_load(v_Exp22__5);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                v_result__4 = iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("112"), iface.bigint_lit("16")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    auto v_Exp23__4 = typename Traits::rt_expr{};
    v_Exp23__4 = v_result__4;
    auto v_result__4_1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp28__5 = iface.f_decl_bv("Exp28__5", iface.bigint_lit("16"));
      iface.f_gen_store(v_Exp28__5, iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
      v_result__4_1 = iface.f_gen_load(v_Exp28__5);
    } else {
      if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp30__5 = iface.f_decl_bv("Exp30__5", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp30__5, iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_result__4_1 = iface.f_gen_load(v_Exp30__5);
      } else {
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp32__5 = iface.f_decl_bv("Exp32__5", iface.bigint_lit("16"));
          iface.f_gen_store(v_Exp32__5, iface.f_gen_FPMin(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_result__4_1 = iface.f_gen_load(v_Exp32__5);
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp34__5 = iface.f_decl_bv("Exp34__5", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp34__5, iface.f_gen_FPMax(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_result__4_1 = iface.f_gen_load(v_Exp34__5);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp36__5 = iface.f_decl_bv("Exp36__5", iface.bigint_lit("16"));
              iface.f_gen_store(v_Exp36__5, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_result__4_1 = iface.f_gen_load(v_Exp36__5);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                v_result__4_1 = iface.f_gen_add_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("64"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("80"), iface.bigint_lit("16")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp39__4 = iface.f_decl_bv("Exp39__4", iface.bigint_lit("16"));
      iface.f_gen_store(v_Exp39__4, iface.f_gen_FPMinNum(v_result__4_1, v_Exp23__4, iface.f_gen_load(iface.v_FPCR())));
      v_result__3 = iface.f_gen_load(v_Exp39__4);
    } else {
      if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp41__4 = iface.f_decl_bv("Exp41__4", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp41__4, iface.f_gen_FPMaxNum(v_result__4_1, v_Exp23__4, iface.f_gen_load(iface.v_FPCR())));
        v_result__3 = iface.f_gen_load(v_Exp41__4);
      } else {
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp43__4 = iface.f_decl_bv("Exp43__4", iface.bigint_lit("16"));
          iface.f_gen_store(v_Exp43__4, iface.f_gen_FPMin(v_result__4_1, v_Exp23__4, iface.f_gen_load(iface.v_FPCR())));
          v_result__3 = iface.f_gen_load(v_Exp43__4);
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp45__4 = iface.f_decl_bv("Exp45__4", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp45__4, iface.f_gen_FPMax(v_result__4_1, v_Exp23__4, iface.f_gen_load(iface.v_FPCR())));
            v_result__3 = iface.f_gen_load(v_Exp45__4);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp47__4 = iface.f_decl_bv("Exp47__4", iface.bigint_lit("16"));
              iface.f_gen_store(v_Exp47__4, iface.f_gen_FPAdd(v_result__4_1, v_Exp23__4, iface.f_gen_load(iface.v_FPCR())));
              v_result__3 = iface.f_gen_load(v_Exp47__4);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                v_result__3 = iface.f_gen_add_bits(v_result__4_1, v_Exp23__4);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    auto v_Exp48__3 = typename Traits::rt_expr{};
    v_Exp48__3 = v_result__3;
    auto v_result__3_1 = typename Traits::rt_expr{};
    auto v_result__4_2 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp54__5 = iface.f_decl_bv("Exp54__5", iface.bigint_lit("16"));
      iface.f_gen_store(v_Exp54__5, iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
      v_result__4_2 = iface.f_gen_load(v_Exp54__5);
    } else {
      if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp56__5 = iface.f_decl_bv("Exp56__5", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp56__5, iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_result__4_2 = iface.f_gen_load(v_Exp56__5);
      } else {
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp58__5 = iface.f_decl_bv("Exp58__5", iface.bigint_lit("16"));
          iface.f_gen_store(v_Exp58__5, iface.f_gen_FPMin(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_result__4_2 = iface.f_gen_load(v_Exp58__5);
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp60__5 = iface.f_decl_bv("Exp60__5", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp60__5, iface.f_gen_FPMax(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_result__4_2 = iface.f_gen_load(v_Exp60__5);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp62__5 = iface.f_decl_bv("Exp62__5", iface.bigint_lit("16"));
              iface.f_gen_store(v_Exp62__5, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_result__4_2 = iface.f_gen_load(v_Exp62__5);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                v_result__4_2 = iface.f_gen_add_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("48"), iface.bigint_lit("16")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    auto v_Exp63__4 = typename Traits::rt_expr{};
    v_Exp63__4 = v_result__4_2;
    auto v_result__4_3 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp68__5 = iface.f_decl_bv("Exp68__5", iface.bigint_lit("16"));
      iface.f_gen_store(v_Exp68__5, iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
      v_result__4_3 = iface.f_gen_load(v_Exp68__5);
    } else {
      if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp70__5 = iface.f_decl_bv("Exp70__5", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp70__5, iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_result__4_3 = iface.f_gen_load(v_Exp70__5);
      } else {
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp72__5 = iface.f_decl_bv("Exp72__5", iface.bigint_lit("16"));
          iface.f_gen_store(v_Exp72__5, iface.f_gen_FPMin(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_result__4_3 = iface.f_gen_load(v_Exp72__5);
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp74__5 = iface.f_decl_bv("Exp74__5", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp74__5, iface.f_gen_FPMax(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_result__4_3 = iface.f_gen_load(v_Exp74__5);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp76__5 = iface.f_decl_bv("Exp76__5", iface.bigint_lit("16"));
              iface.f_gen_store(v_Exp76__5, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_result__4_3 = iface.f_gen_load(v_Exp76__5);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                v_result__4_3 = iface.f_gen_add_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("16"), iface.bigint_lit("16")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp79__4 = iface.f_decl_bv("Exp79__4", iface.bigint_lit("16"));
      iface.f_gen_store(v_Exp79__4, iface.f_gen_FPMinNum(v_result__4_3, v_Exp63__4, iface.f_gen_load(iface.v_FPCR())));
      v_result__3_1 = iface.f_gen_load(v_Exp79__4);
    } else {
      if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp81__4 = iface.f_decl_bv("Exp81__4", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp81__4, iface.f_gen_FPMaxNum(v_result__4_3, v_Exp63__4, iface.f_gen_load(iface.v_FPCR())));
        v_result__3_1 = iface.f_gen_load(v_Exp81__4);
      } else {
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp83__4 = iface.f_decl_bv("Exp83__4", iface.bigint_lit("16"));
          iface.f_gen_store(v_Exp83__4, iface.f_gen_FPMin(v_result__4_3, v_Exp63__4, iface.f_gen_load(iface.v_FPCR())));
          v_result__3_1 = iface.f_gen_load(v_Exp83__4);
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp85__4 = iface.f_decl_bv("Exp85__4", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp85__4, iface.f_gen_FPMax(v_result__4_3, v_Exp63__4, iface.f_gen_load(iface.v_FPCR())));
            v_result__3_1 = iface.f_gen_load(v_Exp85__4);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp87__4 = iface.f_decl_bv("Exp87__4", iface.bigint_lit("16"));
              iface.f_gen_store(v_Exp87__4, iface.f_gen_FPAdd(v_result__4_3, v_Exp63__4, iface.f_gen_load(iface.v_FPCR())));
              v_result__3_1 = iface.f_gen_load(v_Exp87__4);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                v_result__3_1 = iface.f_gen_add_bits(v_result__4_3, v_Exp63__4);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
      auto v_Exp90__3 = typename Traits::rt_expr{};
      v_Exp90__3 = iface.f_gen_FPMinNum(v_result__3_1, v_Exp48__3, iface.f_gen_load(iface.v_FPCR()));
      v_result__2 = v_Exp90__3;
    } else {
      if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
        auto v_Exp92__3 = typename Traits::rt_expr{};
        v_Exp92__3 = iface.f_gen_FPMaxNum(v_result__3_1, v_Exp48__3, iface.f_gen_load(iface.v_FPCR()));
        v_result__2 = v_Exp92__3;
      } else {
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
          auto v_Exp94__3 = typename Traits::rt_expr{};
          v_Exp94__3 = iface.f_gen_FPMin(v_result__3_1, v_Exp48__3, iface.f_gen_load(iface.v_FPCR()));
          v_result__2 = v_Exp94__3;
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
            auto v_Exp96__3 = typename Traits::rt_expr{};
            v_Exp96__3 = iface.f_gen_FPMax(v_result__3_1, v_Exp48__3, iface.f_gen_load(iface.v_FPCR()));
            v_result__2 = v_Exp96__3;
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
              auto v_Exp98__3 = typename Traits::rt_expr{};
              v_Exp98__3 = iface.f_gen_FPAdd(v_result__3_1, v_Exp48__3, iface.f_gen_load(iface.v_FPCR()));
              v_result__2 = v_Exp98__3;
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                v_result__2 = iface.f_gen_add_bits(v_result__3_1, v_Exp48__3);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } else {
    auto v_If105__1 = iface.bits_zero(iface.bigint_lit("3"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If105__1 = iface.bits_lit(3U, "000");
    } else {
      v_If105__1 = iface.bits_lit(3U, "001");
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    auto v_Exp108__2 = typename Traits::rt_expr{};
    v_Exp108__2 = iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
    auto v_result__2 = typename Traits::rt_expr{};
    auto v_result__3 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp114__4 = iface.f_decl_bv("Exp114__4", iface.bigint_lit("16"));
      iface.f_gen_store(v_Exp114__4, iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
      v_result__3 = iface.f_gen_load(v_Exp114__4);
    } else {
      if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp116__4 = iface.f_decl_bv("Exp116__4", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp116__4, iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_result__3 = iface.f_gen_load(v_Exp116__4);
      } else {
        if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp118__4 = iface.f_decl_bv("Exp118__4", iface.bigint_lit("16"));
          iface.f_gen_store(v_Exp118__4, iface.f_gen_FPMin(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_result__3 = iface.f_gen_load(v_Exp118__4);
        } else {
          if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp120__4 = iface.f_decl_bv("Exp120__4", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp120__4, iface.f_gen_FPMax(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_result__3 = iface.f_gen_load(v_Exp120__4);
          } else {
            if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp122__4 = iface.f_decl_bv("Exp122__4", iface.bigint_lit("16"));
              iface.f_gen_store(v_Exp122__4, iface.f_gen_FPAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_result__3 = iface.f_gen_load(v_Exp122__4);
            } else {
              if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "101"))) {
                v_result__3 = iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("16")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("48"), iface.bigint_lit("16")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    auto v_Exp123__3 = typename Traits::rt_expr{};
    v_Exp123__3 = v_result__3;
    auto v_result__3_1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "000"))) {
      const auto v_Exp128__4 = iface.f_decl_bv("Exp128__4", iface.bigint_lit("16"));
      iface.f_gen_store(v_Exp128__4, iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
      v_result__3_1 = iface.f_gen_load(v_Exp128__4);
    } else {
      if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "001"))) {
        const auto v_Exp130__4 = iface.f_decl_bv("Exp130__4", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp130__4, iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
        v_result__3_1 = iface.f_gen_load(v_Exp130__4);
      } else {
        if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "010"))) {
          const auto v_Exp132__4 = iface.f_decl_bv("Exp132__4", iface.bigint_lit("16"));
          iface.f_gen_store(v_Exp132__4, iface.f_gen_FPMin(iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
          v_result__3_1 = iface.f_gen_load(v_Exp132__4);
        } else {
          if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "011"))) {
            const auto v_Exp134__4 = iface.f_decl_bv("Exp134__4", iface.bigint_lit("16"));
            iface.f_gen_store(v_Exp134__4, iface.f_gen_FPMax(iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
            v_result__3_1 = iface.f_gen_load(v_Exp134__4);
          } else {
            if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "100"))) {
              const auto v_Exp136__4 = iface.f_decl_bv("Exp136__4", iface.bigint_lit("16"));
              iface.f_gen_store(v_Exp136__4, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("16"), iface.bigint_lit("16")), iface.f_gen_load(iface.v_FPCR())));
              v_result__3_1 = iface.f_gen_load(v_Exp136__4);
            } else {
              if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "101"))) {
                v_result__3_1 = iface.f_gen_add_bits(iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_slice(v_Exp108__2, iface.bigint_lit("16"), iface.bigint_lit("16")));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "000"))) {
      auto v_Exp139__3 = typename Traits::rt_expr{};
      v_Exp139__3 = iface.f_gen_FPMinNum(v_result__3_1, v_Exp123__3, iface.f_gen_load(iface.v_FPCR()));
      v_result__2 = v_Exp139__3;
    } else {
      if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "001"))) {
        auto v_Exp141__3 = typename Traits::rt_expr{};
        v_Exp141__3 = iface.f_gen_FPMaxNum(v_result__3_1, v_Exp123__3, iface.f_gen_load(iface.v_FPCR()));
        v_result__2 = v_Exp141__3;
      } else {
        if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "010"))) {
          auto v_Exp143__3 = typename Traits::rt_expr{};
          v_Exp143__3 = iface.f_gen_FPMin(v_result__3_1, v_Exp123__3, iface.f_gen_load(iface.v_FPCR()));
          v_result__2 = v_Exp143__3;
        } else {
          if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "011"))) {
            auto v_Exp145__3 = typename Traits::rt_expr{};
            v_Exp145__3 = iface.f_gen_FPMax(v_result__3_1, v_Exp123__3, iface.f_gen_load(iface.v_FPCR()));
            v_result__2 = v_Exp145__3;
          } else {
            if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "100"))) {
              auto v_Exp147__3 = typename Traits::rt_expr{};
              v_Exp147__3 = iface.f_gen_FPAdd(v_result__3_1, v_Exp123__3, iface.f_gen_load(iface.v_FPCR()));
              v_result__2 = v_Exp147__3;
            } else {
              if (iface.f_eq_bits(v_If105__1, iface.bits_lit(3U, "101"))) {
                v_result__2 = iface.f_gen_add_bits(v_result__3_1, v_Exp123__3);
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(v_result__2, iface.f_gen_int_lit(iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_reduce_fp16_maxnm_simd


} // namespace aslp
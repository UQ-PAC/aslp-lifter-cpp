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
void aslp_lifter<Traits>::f_aarch64_vector_reduce_fp_maxnm_simd(typename Traits::bits v_enc) {
  if (iface.f_ne_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"))), iface.bits_lit(2U, "01"))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    if (iface.f_eq_bits(iface.bits_lit(1U, "0"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
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
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
          const auto v_Exp13__4 = iface.f_decl_bv("Exp13__4", iface.bigint_lit("32"));
          iface.f_gen_store(v_Exp13__4, iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
          v_result__3 = iface.f_gen_load(v_Exp13__4);
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
            const auto v_Exp15__4 = iface.f_decl_bv("Exp15__4", iface.bigint_lit("32"));
            iface.f_gen_store(v_Exp15__4, iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
            v_result__3 = iface.f_gen_load(v_Exp15__4);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
              const auto v_Exp17__4 = iface.f_decl_bv("Exp17__4", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp17__4, iface.f_gen_FPMin(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
              v_result__3 = iface.f_gen_load(v_Exp17__4);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
                const auto v_Exp19__4 = iface.f_decl_bv("Exp19__4", iface.bigint_lit("32"));
                iface.f_gen_store(v_Exp19__4, iface.f_gen_FPMax(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_result__3 = iface.f_gen_load(v_Exp19__4);
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
                  const auto v_Exp21__4 = iface.f_decl_bv("Exp21__4", iface.bigint_lit("32"));
                  iface.f_gen_store(v_Exp21__4, iface.f_gen_FPAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                  v_result__3 = iface.f_gen_load(v_Exp21__4);
                } else {
                  if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                    v_result__3 = iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("96"), iface.bigint_lit("32")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
        auto v_Exp22__3 = typename Traits::rt_expr{};
        v_Exp22__3 = v_result__3;
        auto v_result__3_1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
          const auto v_Exp27__4 = iface.f_decl_bv("Exp27__4", iface.bigint_lit("32"));
          iface.f_gen_store(v_Exp27__4, iface.f_gen_FPMinNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
          v_result__3_1 = iface.f_gen_load(v_Exp27__4);
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
            const auto v_Exp29__4 = iface.f_decl_bv("Exp29__4", iface.bigint_lit("32"));
            iface.f_gen_store(v_Exp29__4, iface.f_gen_FPMaxNum(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
            v_result__3_1 = iface.f_gen_load(v_Exp29__4);
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
              const auto v_Exp31__4 = iface.f_decl_bv("Exp31__4", iface.bigint_lit("32"));
              iface.f_gen_store(v_Exp31__4, iface.f_gen_FPMin(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
              v_result__3_1 = iface.f_gen_load(v_Exp31__4);
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
                const auto v_Exp33__4 = iface.f_decl_bv("Exp33__4", iface.bigint_lit("32"));
                iface.f_gen_store(v_Exp33__4, iface.f_gen_FPMax(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                v_result__3_1 = iface.f_gen_load(v_Exp33__4);
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
                  const auto v_Exp35__4 = iface.f_decl_bv("Exp35__4", iface.bigint_lit("32"));
                  iface.f_gen_store(v_Exp35__4, iface.f_gen_FPAdd(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR())));
                  v_result__3_1 = iface.f_gen_load(v_Exp35__4);
                } else {
                  if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                    v_result__3_1 = iface.f_gen_add_bits(iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_Exp7__2, iface.bigint_lit("32"), iface.bigint_lit("32")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "000"))) {
          auto v_Exp38__3 = typename Traits::rt_expr{};
          v_Exp38__3 = iface.f_gen_FPMinNum(v_result__3_1, v_Exp22__3, iface.f_gen_load(iface.v_FPCR()));
          v_result__2 = v_Exp38__3;
        } else {
          if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "001"))) {
            auto v_Exp40__3 = typename Traits::rt_expr{};
            v_Exp40__3 = iface.f_gen_FPMaxNum(v_result__3_1, v_Exp22__3, iface.f_gen_load(iface.v_FPCR()));
            v_result__2 = v_Exp40__3;
          } else {
            if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "010"))) {
              auto v_Exp42__3 = typename Traits::rt_expr{};
              v_Exp42__3 = iface.f_gen_FPMin(v_result__3_1, v_Exp22__3, iface.f_gen_load(iface.v_FPCR()));
              v_result__2 = v_Exp42__3;
            } else {
              if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "011"))) {
                auto v_Exp44__3 = typename Traits::rt_expr{};
                v_Exp44__3 = iface.f_gen_FPMax(v_result__3_1, v_Exp22__3, iface.f_gen_load(iface.v_FPCR()));
                v_result__2 = v_Exp44__3;
              } else {
                if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "100"))) {
                  auto v_Exp46__3 = typename Traits::rt_expr{};
                  v_Exp46__3 = iface.f_gen_FPAdd(v_result__3_1, v_Exp22__3, iface.f_gen_load(iface.v_FPCR()));
                  v_result__2 = v_Exp46__3;
                } else {
                  if (iface.f_eq_bits(v_If4__1, iface.bits_lit(3U, "101"))) {
                    v_result__2 = iface.f_gen_add_bits(v_result__3_1, v_Exp22__3);
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
        auto v_If53__1 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If53__1 = iface.bits_lit(3U, "000");
        } else {
          v_If53__1 = iface.bits_lit(3U, "001");
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        auto v_result__2 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(v_If53__1, iface.bits_lit(3U, "000"))) {
          auto v_Exp61__3 = typename Traits::rt_expr{};
          v_Exp61__3 = iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
          v_result__2 = v_Exp61__3;
        } else {
          if (iface.f_eq_bits(v_If53__1, iface.bits_lit(3U, "001"))) {
            auto v_Exp63__3 = typename Traits::rt_expr{};
            v_Exp63__3 = iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
            v_result__2 = v_Exp63__3;
          } else {
            if (iface.f_eq_bits(v_If53__1, iface.bits_lit(3U, "010"))) {
              auto v_Exp65__3 = typename Traits::rt_expr{};
              v_Exp65__3 = iface.f_gen_FPMin(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
              v_result__2 = v_Exp65__3;
            } else {
              if (iface.f_eq_bits(v_If53__1, iface.bits_lit(3U, "011"))) {
                auto v_Exp67__3 = typename Traits::rt_expr{};
                v_Exp67__3 = iface.f_gen_FPMax(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
                v_result__2 = v_Exp67__3;
              } else {
                if (iface.f_eq_bits(v_If53__1, iface.bits_lit(3U, "100"))) {
                  auto v_Exp69__3 = typename Traits::rt_expr{};
                  v_Exp69__3 = iface.f_gen_FPAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")), iface.f_gen_load(iface.v_FPCR()));
                  v_result__2 = v_Exp69__3;
                } else {
                  if (iface.f_eq_bits(v_If53__1, iface.bits_lit(3U, "101"))) {
                    v_result__2 = iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("32"), iface.bigint_lit("32")));
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
    } else {
      if (iface.f_eq_bits(iface.bits_lit(1U, "1"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_If77__1 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If77__1 = iface.bits_lit(3U, "000");
          } else {
            v_If77__1 = iface.bits_lit(3U, "001");
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          auto v_result__2 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(v_If77__1, iface.bits_lit(3U, "000"))) {
            auto v_Exp85__3 = typename Traits::rt_expr{};
            v_Exp85__3 = iface.f_gen_FPMinNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
            v_result__2 = v_Exp85__3;
          } else {
            if (iface.f_eq_bits(v_If77__1, iface.bits_lit(3U, "001"))) {
              auto v_Exp87__3 = typename Traits::rt_expr{};
              v_Exp87__3 = iface.f_gen_FPMaxNum(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
              v_result__2 = v_Exp87__3;
            } else {
              if (iface.f_eq_bits(v_If77__1, iface.bits_lit(3U, "010"))) {
                auto v_Exp89__3 = typename Traits::rt_expr{};
                v_Exp89__3 = iface.f_gen_FPMin(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                v_result__2 = v_Exp89__3;
              } else {
                if (iface.f_eq_bits(v_If77__1, iface.bits_lit(3U, "011"))) {
                  auto v_Exp91__3 = typename Traits::rt_expr{};
                  v_Exp91__3 = iface.f_gen_FPMax(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                  v_result__2 = v_Exp91__3;
                } else {
                  if (iface.f_eq_bits(v_If77__1, iface.bits_lit(3U, "100"))) {
                    auto v_Exp93__3 = typename Traits::rt_expr{};
                    v_Exp93__3 = iface.f_gen_FPAdd(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64")), iface.f_gen_load(iface.v_FPCR()));
                    v_result__2 = v_Exp93__3;
                  } else {
                    if (iface.f_eq_bits(v_If77__1, iface.bits_lit(3U, "101"))) {
                      v_result__2 = iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("64"), iface.bigint_lit("64")));
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
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("128"))));
        } // if
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } // if
  } // if

} // f_aarch64_vector_reduce_fp_maxnm_simd


} // namespace aslp
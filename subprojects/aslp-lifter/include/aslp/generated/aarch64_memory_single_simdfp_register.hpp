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
void aslp_lifter<Traits>::f_aarch64_memory_single_simdfp_register(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(3U, "000"), iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"))))) {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      auto v_DecodeRegExtend1__2 = iface.bits_zero(iface.bigint_lit("3"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
        v_DecodeRegExtend1__2 = iface.bits_lit(3U, "100");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
          v_DecodeRegExtend1__2 = iface.bits_lit(3U, "101");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
            v_DecodeRegExtend1__2 = iface.bits_lit(3U, "110");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
              v_DecodeRegExtend1__2 = iface.bits_lit(3U, "111");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                v_DecodeRegExtend1__2 = iface.bits_lit(3U, "000");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                  v_DecodeRegExtend1__2 = iface.bits_lit(3U, "001");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                    v_DecodeRegExtend1__2 = iface.bits_lit(3U, "010");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                      v_DecodeRegExtend1__2 = iface.bits_lit(3U, "011");
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
      } // if
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        auto v_If6__1 = iface.bits_zero(iface.bigint_lit("2"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If6__1 = iface.bits_lit(2U, "00");
        } else {
          v_If6__1 = iface.bits_lit(2U, "01");
        } // if
        auto v_ExtendReg8__2 = typename Traits::rt_expr{};
        auto v_X_read9__3 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read9__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read9__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        const auto v_Exp14__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "000"));
        if (v_Exp14__2) {
          v_ExtendReg8__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read9__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
        } else {
          const auto v_Exp18__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "001"));
          if (v_Exp18__2) {
            v_ExtendReg8__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read9__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp22__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "010"));
            if (v_Exp22__2) {
              v_ExtendReg8__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read9__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp26__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "011"));
              if (v_Exp26__2) {
                v_ExtendReg8__2 = iface.f_gen_SignExtend(v_X_read9__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp30__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "100"));
                if (v_Exp30__2) {
                  v_ExtendReg8__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read9__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp34__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "101"));
                  if (v_Exp34__2) {
                    v_ExtendReg8__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read9__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp38__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "110"));
                    if (v_Exp38__2) {
                      v_ExtendReg8__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read9__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp42__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "111"));
                      if (v_Exp42__2) {
                        v_ExtendReg8__2 = v_X_read9__3;
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "01"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg8__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg8__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } else {
          auto v_X_read59__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read59__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read59__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "01"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read59__2, v_ExtendReg8__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read59__2, v_ExtendReg8__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } else {
        auto v_If76__1 = iface.bits_zero(iface.bigint_lit("2"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If76__1 = iface.bits_lit(2U, "00");
        } else {
          v_If76__1 = iface.bits_lit(2U, "01");
        } // if
        auto v_ExtendReg78__2 = typename Traits::rt_expr{};
        auto v_X_read79__3 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read79__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read79__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        const auto v_Exp84__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "000"));
        if (v_Exp84__2) {
          v_ExtendReg78__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read79__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
        } else {
          const auto v_Exp88__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "001"));
          if (v_Exp88__2) {
            v_ExtendReg78__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read79__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp92__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "010"));
            if (v_Exp92__2) {
              v_ExtendReg78__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read79__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp96__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "011"));
              if (v_Exp96__2) {
                v_ExtendReg78__2 = iface.f_gen_SignExtend(v_X_read79__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp100__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "100"));
                if (v_Exp100__2) {
                  v_ExtendReg78__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read79__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp104__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "101"));
                  if (v_Exp104__2) {
                    v_ExtendReg78__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read79__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp108__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "110"));
                    if (v_Exp108__2) {
                      v_ExtendReg78__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read79__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp112__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "111"));
                      if (v_Exp112__2) {
                        v_ExtendReg78__2 = v_X_read79__3;
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          if (iface.f_eq_bits(v_If76__1, iface.bits_lit(2U, "01"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg78__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_If76__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg78__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } else {
          auto v_X_read129__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read129__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read129__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          if (iface.f_eq_bits(v_If76__1, iface.bits_lit(2U, "01"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read129__2, v_ExtendReg78__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8")));
          } else {
            if (iface.f_eq_bits(v_If76__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read129__2, v_ExtendReg78__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
            } else {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } // if
          } // if
        } // if
      } // if
    } // if
  } else {
    if (iface.f_eq_bits(iface.bits_lit(3U, "001"), iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"))))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        auto v_DecodeRegExtend143__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
          v_DecodeRegExtend143__2 = iface.bits_lit(3U, "100");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
            v_DecodeRegExtend143__2 = iface.bits_lit(3U, "101");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
              v_DecodeRegExtend143__2 = iface.bits_lit(3U, "110");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                v_DecodeRegExtend143__2 = iface.bits_lit(3U, "111");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                  v_DecodeRegExtend143__2 = iface.bits_lit(3U, "000");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                    v_DecodeRegExtend143__2 = iface.bits_lit(3U, "001");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                      v_DecodeRegExtend143__2 = iface.bits_lit(3U, "010");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                        v_DecodeRegExtend143__2 = iface.bits_lit(3U, "011");
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          auto v_If148__1 = iface.bits_zero(iface.bigint_lit("2"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If148__1 = iface.bits_lit(2U, "00");
          } else {
            v_If148__1 = iface.bits_lit(2U, "01");
          } // if
          auto v_ExtendReg150__2 = typename Traits::rt_expr{};
          auto v_X_read151__3 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read151__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read151__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          const auto v_Exp156__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "000"));
          if (v_Exp156__2) {
            v_ExtendReg150__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read151__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp160__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "001"));
            if (v_Exp160__2) {
              v_ExtendReg150__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read151__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp164__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "010"));
              if (v_Exp164__2) {
                v_ExtendReg150__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read151__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp168__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "011"));
                if (v_Exp168__2) {
                  v_ExtendReg150__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read151__3, iface.bigint_lit("0"), iface.bigint_lit("63")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp172__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "100"));
                  if (v_Exp172__2) {
                    v_ExtendReg150__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read151__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp176__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "101"));
                    if (v_Exp176__2) {
                      v_ExtendReg150__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read151__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp180__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "110"));
                      if (v_Exp180__2) {
                        v_ExtendReg150__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read151__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp184__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "111"));
                        if (v_Exp184__2) {
                          v_ExtendReg150__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read151__3, iface.bigint_lit("0"), iface.bigint_lit("63")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0")));
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            if (iface.f_eq_bits(v_If148__1, iface.bits_lit(2U, "01"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg150__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_If148__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg150__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } else {
            auto v_X_read201__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read201__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read201__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            if (iface.f_eq_bits(v_If148__1, iface.bits_lit(2U, "01"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read201__2, v_ExtendReg150__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_If148__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read201__2, v_ExtendReg150__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } else {
          auto v_If218__1 = iface.bits_zero(iface.bigint_lit("2"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If218__1 = iface.bits_lit(2U, "00");
          } else {
            v_If218__1 = iface.bits_lit(2U, "01");
          } // if
          auto v_ExtendReg220__2 = typename Traits::rt_expr{};
          auto v_X_read221__3 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read221__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read221__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          const auto v_Exp226__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "000"));
          if (v_Exp226__2) {
            v_ExtendReg220__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read221__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp230__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "001"));
            if (v_Exp230__2) {
              v_ExtendReg220__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read221__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp234__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "010"));
              if (v_Exp234__2) {
                v_ExtendReg220__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read221__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp238__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "011"));
                if (v_Exp238__2) {
                  v_ExtendReg220__2 = iface.f_gen_SignExtend(v_X_read221__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp242__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "100"));
                  if (v_Exp242__2) {
                    v_ExtendReg220__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read221__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp246__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "101"));
                    if (v_Exp246__2) {
                      v_ExtendReg220__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read221__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp250__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "110"));
                      if (v_Exp250__2) {
                        v_ExtendReg220__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read221__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp254__2 = iface.f_eq_bits(v_DecodeRegExtend143__2, iface.bits_lit(3U, "111"));
                        if (v_Exp254__2) {
                          v_ExtendReg220__2 = v_X_read221__3;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            if (iface.f_eq_bits(v_If218__1, iface.bits_lit(2U, "01"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg220__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_If218__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg220__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } else {
            auto v_X_read271__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read271__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read271__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            if (iface.f_eq_bits(v_If218__1, iface.bits_lit(2U, "01"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read271__2, v_ExtendReg220__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16")));
            } else {
              if (iface.f_eq_bits(v_If218__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read271__2, v_ExtendReg220__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
              } else {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } // if
            } // if
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(3U, "010"), iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"))))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          auto v_DecodeRegExtend285__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
            v_DecodeRegExtend285__2 = iface.bits_lit(3U, "100");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
              v_DecodeRegExtend285__2 = iface.bits_lit(3U, "101");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
                v_DecodeRegExtend285__2 = iface.bits_lit(3U, "110");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                  v_DecodeRegExtend285__2 = iface.bits_lit(3U, "111");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                    v_DecodeRegExtend285__2 = iface.bits_lit(3U, "000");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                      v_DecodeRegExtend285__2 = iface.bits_lit(3U, "001");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                        v_DecodeRegExtend285__2 = iface.bits_lit(3U, "010");
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                          v_DecodeRegExtend285__2 = iface.bits_lit(3U, "011");
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            auto v_If290__1 = iface.bits_zero(iface.bigint_lit("2"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If290__1 = iface.bits_lit(2U, "00");
            } else {
              v_If290__1 = iface.bits_lit(2U, "01");
            } // if
            auto v_ExtendReg292__2 = typename Traits::rt_expr{};
            auto v_X_read293__3 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read293__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read293__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            const auto v_Exp298__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "000"));
            if (v_Exp298__2) {
              v_ExtendReg292__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read293__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp302__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "001"));
              if (v_Exp302__2) {
                v_ExtendReg292__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read293__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp306__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "010"));
                if (v_Exp306__2) {
                  v_ExtendReg292__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read293__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp310__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "011"));
                  if (v_Exp310__2) {
                    v_ExtendReg292__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read293__3, iface.bigint_lit("0"), iface.bigint_lit("62")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp314__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "100"));
                    if (v_Exp314__2) {
                      v_ExtendReg292__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read293__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp318__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "101"));
                      if (v_Exp318__2) {
                        v_ExtendReg292__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read293__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp322__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "110"));
                        if (v_Exp322__2) {
                          v_ExtendReg292__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read293__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp326__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "111"));
                          if (v_Exp326__2) {
                            v_ExtendReg292__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read293__3, iface.bigint_lit("0"), iface.bigint_lit("62")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              if (iface.f_eq_bits(v_If290__1, iface.bits_lit(2U, "01"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg292__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_If290__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg292__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } else {
              auto v_X_read343__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read343__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read343__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              if (iface.f_eq_bits(v_If290__1, iface.bits_lit(2U, "01"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read343__2, v_ExtendReg292__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_If290__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read343__2, v_ExtendReg292__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } else {
            auto v_If360__1 = iface.bits_zero(iface.bigint_lit("2"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If360__1 = iface.bits_lit(2U, "00");
            } else {
              v_If360__1 = iface.bits_lit(2U, "01");
            } // if
            auto v_ExtendReg362__2 = typename Traits::rt_expr{};
            auto v_X_read363__3 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read363__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read363__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            const auto v_Exp368__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "000"));
            if (v_Exp368__2) {
              v_ExtendReg362__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read363__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp372__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "001"));
              if (v_Exp372__2) {
                v_ExtendReg362__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read363__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp376__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "010"));
                if (v_Exp376__2) {
                  v_ExtendReg362__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read363__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp380__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "011"));
                  if (v_Exp380__2) {
                    v_ExtendReg362__2 = iface.f_gen_SignExtend(v_X_read363__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp384__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "100"));
                    if (v_Exp384__2) {
                      v_ExtendReg362__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read363__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp388__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "101"));
                      if (v_Exp388__2) {
                        v_ExtendReg362__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read363__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp392__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "110"));
                        if (v_Exp392__2) {
                          v_ExtendReg362__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read363__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp396__2 = iface.f_eq_bits(v_DecodeRegExtend285__2, iface.bits_lit(3U, "111"));
                          if (v_Exp396__2) {
                            v_ExtendReg362__2 = v_X_read363__3;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              if (iface.f_eq_bits(v_If360__1, iface.bits_lit(2U, "01"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg362__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_If360__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg362__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } else {
              auto v_X_read413__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read413__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read413__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              if (iface.f_eq_bits(v_If360__1, iface.bits_lit(2U, "01"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read413__2, v_ExtendReg362__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32")));
              } else {
                if (iface.f_eq_bits(v_If360__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read413__2, v_ExtendReg362__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(3U, "011"), iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"))))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            auto v_DecodeRegExtend427__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
              v_DecodeRegExtend427__2 = iface.bits_lit(3U, "100");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
                v_DecodeRegExtend427__2 = iface.bits_lit(3U, "101");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
                  v_DecodeRegExtend427__2 = iface.bits_lit(3U, "110");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                    v_DecodeRegExtend427__2 = iface.bits_lit(3U, "111");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                      v_DecodeRegExtend427__2 = iface.bits_lit(3U, "000");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                        v_DecodeRegExtend427__2 = iface.bits_lit(3U, "001");
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                          v_DecodeRegExtend427__2 = iface.bits_lit(3U, "010");
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                            v_DecodeRegExtend427__2 = iface.bits_lit(3U, "011");
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              auto v_If432__1 = iface.bits_zero(iface.bigint_lit("2"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If432__1 = iface.bits_lit(2U, "00");
              } else {
                v_If432__1 = iface.bits_lit(2U, "01");
              } // if
              auto v_ExtendReg434__2 = typename Traits::rt_expr{};
              auto v_X_read435__3 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read435__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read435__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              const auto v_Exp440__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "000"));
              if (v_Exp440__2) {
                v_ExtendReg434__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read435__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp444__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "001"));
                if (v_Exp444__2) {
                  v_ExtendReg434__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read435__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp448__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "010"));
                  if (v_Exp448__2) {
                    v_ExtendReg434__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read435__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp452__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "011"));
                    if (v_Exp452__2) {
                      v_ExtendReg434__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read435__3, iface.bigint_lit("0"), iface.bigint_lit("61")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp456__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "100"));
                      if (v_Exp456__2) {
                        v_ExtendReg434__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read435__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp460__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "101"));
                        if (v_Exp460__2) {
                          v_ExtendReg434__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read435__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp464__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "110"));
                          if (v_Exp464__2) {
                            v_ExtendReg434__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read435__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp468__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "111"));
                            if (v_Exp468__2) {
                              v_ExtendReg434__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read435__3, iface.bigint_lit("0"), iface.bigint_lit("61")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                if (iface.f_eq_bits(v_If432__1, iface.bits_lit(2U, "01"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg434__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  if (iface.f_eq_bits(v_If432__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg434__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } else {
                auto v_X_read485__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read485__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read485__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                if (iface.f_eq_bits(v_If432__1, iface.bits_lit(2U, "01"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read485__2, v_ExtendReg434__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  if (iface.f_eq_bits(v_If432__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read485__2, v_ExtendReg434__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } else {
              auto v_If502__1 = iface.bits_zero(iface.bigint_lit("2"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If502__1 = iface.bits_lit(2U, "00");
              } else {
                v_If502__1 = iface.bits_lit(2U, "01");
              } // if
              auto v_ExtendReg504__2 = typename Traits::rt_expr{};
              auto v_X_read505__3 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read505__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read505__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              const auto v_Exp510__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "000"));
              if (v_Exp510__2) {
                v_ExtendReg504__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read505__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp514__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "001"));
                if (v_Exp514__2) {
                  v_ExtendReg504__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read505__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp518__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "010"));
                  if (v_Exp518__2) {
                    v_ExtendReg504__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read505__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp522__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "011"));
                    if (v_Exp522__2) {
                      v_ExtendReg504__2 = iface.f_gen_SignExtend(v_X_read505__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp526__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "100"));
                      if (v_Exp526__2) {
                        v_ExtendReg504__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read505__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp530__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "101"));
                        if (v_Exp530__2) {
                          v_ExtendReg504__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read505__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp534__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "110"));
                          if (v_Exp534__2) {
                            v_ExtendReg504__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read505__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp538__2 = iface.f_eq_bits(v_DecodeRegExtend427__2, iface.bits_lit(3U, "111"));
                            if (v_Exp538__2) {
                              v_ExtendReg504__2 = v_X_read505__3;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                if (iface.f_eq_bits(v_If502__1, iface.bits_lit(2U, "01"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg504__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  if (iface.f_eq_bits(v_If502__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg504__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } else {
                auto v_X_read555__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read555__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read555__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                if (iface.f_eq_bits(v_If502__1, iface.bits_lit(2U, "01"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read555__2, v_ExtendReg504__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_slice(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  if (iface.f_eq_bits(v_If502__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read555__2, v_ExtendReg504__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("1"))), iface.f_gen_int_lit(iface.bigint_lit("128"))));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(3U, "100"), iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"))))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              auto v_DecodeRegExtend569__2 = iface.bits_zero(iface.bigint_lit("3"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
                v_DecodeRegExtend569__2 = iface.bits_lit(3U, "100");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
                  v_DecodeRegExtend569__2 = iface.bits_lit(3U, "101");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
                    v_DecodeRegExtend569__2 = iface.bits_lit(3U, "110");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                      v_DecodeRegExtend569__2 = iface.bits_lit(3U, "111");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                        v_DecodeRegExtend569__2 = iface.bits_lit(3U, "000");
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                          v_DecodeRegExtend569__2 = iface.bits_lit(3U, "001");
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                            v_DecodeRegExtend569__2 = iface.bits_lit(3U, "010");
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                              v_DecodeRegExtend569__2 = iface.bits_lit(3U, "011");
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                auto v_If574__1 = iface.bits_zero(iface.bigint_lit("2"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If574__1 = iface.bits_lit(2U, "00");
                } else {
                  v_If574__1 = iface.bits_lit(2U, "01");
                } // if
                auto v_ExtendReg576__2 = typename Traits::rt_expr{};
                auto v_X_read577__3 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read577__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read577__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                const auto v_Exp582__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "000"));
                if (v_Exp582__2) {
                  v_ExtendReg576__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read577__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp586__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "001"));
                  if (v_Exp586__2) {
                    v_ExtendReg576__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read577__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp590__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "010"));
                    if (v_Exp590__2) {
                      v_ExtendReg576__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read577__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp594__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "011"));
                      if (v_Exp594__2) {
                        v_ExtendReg576__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read577__3, iface.bigint_lit("0"), iface.bigint_lit("60")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp598__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "100"));
                        if (v_Exp598__2) {
                          v_ExtendReg576__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read577__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp602__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "101"));
                          if (v_Exp602__2) {
                            v_ExtendReg576__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read577__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp606__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "110"));
                            if (v_Exp606__2) {
                              v_ExtendReg576__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read577__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp610__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "111"));
                              if (v_Exp610__2) {
                                v_ExtendReg576__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read577__3, iface.bigint_lit("0"), iface.bigint_lit("60")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                              } else {
                                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                              } // if
                            } // if
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  if (iface.f_eq_bits(v_If574__1, iface.bits_lit(2U, "01"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg576__2), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))));
                  } else {
                    if (iface.f_eq_bits(v_If574__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg576__2), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("1"))));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } else {
                  auto v_X_read627__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read627__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read627__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  if (iface.f_eq_bits(v_If574__1, iface.bits_lit(2U, "01"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read627__2, v_ExtendReg576__2), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))));
                  } else {
                    if (iface.f_eq_bits(v_If574__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read627__2, v_ExtendReg576__2), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("1"))));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } else {
                auto v_If644__1 = iface.bits_zero(iface.bigint_lit("2"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If644__1 = iface.bits_lit(2U, "00");
                } else {
                  v_If644__1 = iface.bits_lit(2U, "01");
                } // if
                auto v_ExtendReg646__2 = typename Traits::rt_expr{};
                auto v_X_read647__3 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read647__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read647__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                const auto v_Exp652__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "000"));
                if (v_Exp652__2) {
                  v_ExtendReg646__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read647__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp656__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "001"));
                  if (v_Exp656__2) {
                    v_ExtendReg646__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read647__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp660__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "010"));
                    if (v_Exp660__2) {
                      v_ExtendReg646__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read647__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp664__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "011"));
                      if (v_Exp664__2) {
                        v_ExtendReg646__2 = iface.f_gen_SignExtend(v_X_read647__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp668__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "100"));
                        if (v_Exp668__2) {
                          v_ExtendReg646__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read647__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp672__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "101"));
                          if (v_Exp672__2) {
                            v_ExtendReg646__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read647__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp676__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "110"));
                            if (v_Exp676__2) {
                              v_ExtendReg646__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read647__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp680__2 = iface.f_eq_bits(v_DecodeRegExtend569__2, iface.bits_lit(3U, "111"));
                              if (v_Exp680__2) {
                                v_ExtendReg646__2 = v_X_read647__3;
                              } else {
                                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                              } // if
                            } // if
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  if (iface.f_eq_bits(v_If644__1, iface.bits_lit(2U, "01"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg646__2), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))));
                  } else {
                    if (iface.f_eq_bits(v_If644__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg646__2), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("1"))));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } else {
                  auto v_X_read697__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read697__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read697__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  if (iface.f_eq_bits(v_If644__1, iface.bits_lit(2U, "01"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read697__2, v_ExtendReg646__2), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))));
                  } else {
                    if (iface.f_eq_bits(v_If644__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read697__2, v_ExtendReg646__2), iface.f_gen_int_lit(iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("1"))));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_memory_single_simdfp_register


} // namespace aslp
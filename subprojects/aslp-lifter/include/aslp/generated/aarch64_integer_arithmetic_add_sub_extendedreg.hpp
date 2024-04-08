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
void aslp_lifter<Traits>::f_aarch64_integer_arithmetic_add_sub_extendedreg(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    auto v_DecodeRegExtend4__2 = iface.bits_zero(iface.bigint_lit("3"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
      v_DecodeRegExtend4__2 = iface.bits_lit(3U, "100");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
        v_DecodeRegExtend4__2 = iface.bits_lit(3U, "101");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
          v_DecodeRegExtend4__2 = iface.bits_lit(3U, "110");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
            v_DecodeRegExtend4__2 = iface.bits_lit(3U, "111");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
              v_DecodeRegExtend4__2 = iface.bits_lit(3U, "000");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                v_DecodeRegExtend4__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                  v_DecodeRegExtend4__2 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                    v_DecodeRegExtend4__2 = iface.bits_lit(3U, "011");
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
    if (iface.f_eq_bits(iface.bits_lit(3U, "000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
      auto v_If6__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_If6__1 = iface.f_gen_load(iface.v_SP_EL0());
      } else {
        auto v_X_read9__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read9__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read9__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        v_If6__1 = v_X_read9__2;
      } // if
      auto v_ExtendReg14__2 = typename Traits::rt_expr{};
      auto v_X_read15__3 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read15__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
      } else {
        v_X_read15__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
      } // if
      const auto v_Exp20__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "000"));
      if (v_Exp20__2) {
        v_ExtendReg14__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read15__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
      } else {
        const auto v_Exp24__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "001"));
        if (v_Exp24__2) {
          v_ExtendReg14__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read15__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
        } else {
          const auto v_Exp28__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "010"));
          if (v_Exp28__2) {
            v_ExtendReg14__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read15__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp32__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "011"));
            if (v_Exp32__2) {
              v_ExtendReg14__2 = iface.f_gen_SignExtend(v_X_read15__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp36__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "100"));
              if (v_Exp36__2) {
                v_ExtendReg14__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read15__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp40__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "101"));
                if (v_Exp40__2) {
                  v_ExtendReg14__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read15__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp44__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "110"));
                  if (v_Exp44__2) {
                    v_ExtendReg14__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read15__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp48__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "111"));
                    if (v_Exp48__2) {
                      v_ExtendReg14__2 = v_X_read15__3;
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
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg14__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If6__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg14__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg14__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If6__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg14__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
          iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg14__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
          iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg14__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg14__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg14__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
          } // if
        } else {
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg14__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg14__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg14__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If6__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_ExtendReg14__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg14__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If6__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(v_ExtendReg14__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
          iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg14__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
          iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg14__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg14__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg14__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
          } // if
        } else {
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg14__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If6__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg14__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } // if
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(3U, "001"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
        auto v_If99__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_If99__1 = iface.f_gen_load(iface.v_SP_EL0());
        } else {
          auto v_X_read102__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read102__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read102__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          v_If99__1 = v_X_read102__2;
        } // if
        auto v_ExtendReg107__2 = typename Traits::rt_expr{};
        auto v_X_read108__3 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read108__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read108__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        const auto v_Exp113__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "000"));
        if (v_Exp113__2) {
          v_ExtendReg107__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read108__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
        } else {
          const auto v_Exp117__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "001"));
          if (v_Exp117__2) {
            v_ExtendReg107__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read108__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp121__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "010"));
            if (v_Exp121__2) {
              v_ExtendReg107__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read108__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp125__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "011"));
              if (v_Exp125__2) {
                v_ExtendReg107__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read108__3, iface.bigint_lit("0"), iface.bigint_lit("63")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp129__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "100"));
                if (v_Exp129__2) {
                  v_ExtendReg107__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read108__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp133__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "101"));
                  if (v_Exp133__2) {
                    v_ExtendReg107__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read108__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp137__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "110"));
                    if (v_Exp137__2) {
                      v_ExtendReg107__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read108__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp141__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "111"));
                      if (v_Exp141__2) {
                        v_ExtendReg107__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read108__3, iface.bigint_lit("0"), iface.bigint_lit("63")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0")));
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
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg107__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If99__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg107__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
            iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg107__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If99__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg107__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
            iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg107__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
            iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg107__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg107__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg107__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } // if
            } // if
          } else {
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg107__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg107__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } // if
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg107__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If99__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_ExtendReg107__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
            iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg107__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If99__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(v_ExtendReg107__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
            iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg107__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
            iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg107__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg107__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg107__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } // if
            } // if
          } else {
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg107__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If99__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg107__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } // if
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(3U, "010"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
          auto v_If192__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_If192__1 = iface.f_gen_load(iface.v_SP_EL0());
          } else {
            auto v_X_read195__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read195__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read195__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            v_If192__1 = v_X_read195__2;
          } // if
          auto v_ExtendReg200__2 = typename Traits::rt_expr{};
          auto v_X_read201__3 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read201__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read201__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          const auto v_Exp206__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "000"));
          if (v_Exp206__2) {
            v_ExtendReg200__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read201__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp210__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "001"));
            if (v_Exp210__2) {
              v_ExtendReg200__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read201__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp214__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "010"));
              if (v_Exp214__2) {
                v_ExtendReg200__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read201__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp218__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "011"));
                if (v_Exp218__2) {
                  v_ExtendReg200__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read201__3, iface.bigint_lit("0"), iface.bigint_lit("62")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp222__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "100"));
                  if (v_Exp222__2) {
                    v_ExtendReg200__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read201__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp226__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "101"));
                    if (v_Exp226__2) {
                      v_ExtendReg200__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read201__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp230__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "110"));
                      if (v_Exp230__2) {
                        v_ExtendReg200__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read201__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp234__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "111"));
                        if (v_Exp234__2) {
                          v_ExtendReg200__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read201__3, iface.bigint_lit("0"), iface.bigint_lit("62")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
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
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg200__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If192__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg200__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
              iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg200__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If192__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg200__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
              iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg200__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
              iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg200__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg200__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg200__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } // if
              } // if
            } else {
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg200__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg200__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } // if
              } // if
            } // if
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg200__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If192__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_ExtendReg200__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
              iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg200__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If192__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(v_ExtendReg200__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
              iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg200__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
              iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg200__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg200__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg200__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } // if
              } // if
            } else {
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg200__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If192__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg200__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } // if
              } // if
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(3U, "011"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
            auto v_If285__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_If285__1 = iface.f_gen_load(iface.v_SP_EL0());
            } else {
              auto v_X_read288__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read288__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read288__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              v_If285__1 = v_X_read288__2;
            } // if
            auto v_ExtendReg293__2 = typename Traits::rt_expr{};
            auto v_X_read294__3 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read294__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read294__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            const auto v_Exp299__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "000"));
            if (v_Exp299__2) {
              v_ExtendReg293__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read294__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp303__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "001"));
              if (v_Exp303__2) {
                v_ExtendReg293__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read294__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp307__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "010"));
                if (v_Exp307__2) {
                  v_ExtendReg293__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read294__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp311__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "011"));
                  if (v_Exp311__2) {
                    v_ExtendReg293__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read294__3, iface.bigint_lit("0"), iface.bigint_lit("61")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp315__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "100"));
                    if (v_Exp315__2) {
                      v_ExtendReg293__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read294__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp319__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "101"));
                      if (v_Exp319__2) {
                        v_ExtendReg293__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read294__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp323__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "110"));
                        if (v_Exp323__2) {
                          v_ExtendReg293__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read294__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp327__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "111"));
                          if (v_Exp327__2) {
                            v_ExtendReg293__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read294__3, iface.bigint_lit("0"), iface.bigint_lit("61")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
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
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg293__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If285__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg293__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
                iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg293__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If285__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg293__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
                iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg293__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
                iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg293__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg293__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg293__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  } // if
                } // if
              } else {
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg293__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg293__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  } // if
                } // if
              } // if
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg293__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If285__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_ExtendReg293__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
                iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg293__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If285__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(v_ExtendReg293__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
                iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg293__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
                iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg293__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg293__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg293__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  } // if
                } // if
              } else {
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg293__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If285__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg293__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  } // if
                } // if
              } // if
            } // if
          } else {
            if (iface.f_eq_bits(iface.bits_lit(3U, "100"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
              auto v_If378__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_If378__1 = iface.f_gen_load(iface.v_SP_EL0());
              } else {
                auto v_X_read381__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read381__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read381__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                v_If378__1 = v_X_read381__2;
              } // if
              auto v_ExtendReg386__2 = typename Traits::rt_expr{};
              auto v_X_read387__3 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read387__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read387__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              const auto v_Exp392__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "000"));
              if (v_Exp392__2) {
                v_ExtendReg386__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read387__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp396__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "001"));
                if (v_Exp396__2) {
                  v_ExtendReg386__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read387__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp400__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "010"));
                  if (v_Exp400__2) {
                    v_ExtendReg386__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read387__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp404__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "011"));
                    if (v_Exp404__2) {
                      v_ExtendReg386__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read387__3, iface.bigint_lit("0"), iface.bigint_lit("60")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp408__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "100"));
                      if (v_Exp408__2) {
                        v_ExtendReg386__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read387__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp412__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "101"));
                        if (v_Exp412__2) {
                          v_ExtendReg386__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read387__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp416__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "110"));
                          if (v_Exp416__2) {
                            v_ExtendReg386__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read387__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp420__2 = iface.f_eq_bits(v_DecodeRegExtend4__2, iface.bits_lit(3U, "111"));
                            if (v_Exp420__2) {
                              v_ExtendReg386__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read387__3, iface.bigint_lit("0"), iface.bigint_lit("60")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
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
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg386__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If378__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg386__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
                  iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg386__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If378__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg386__2), iface.f_gen_int_lit(iface.bigint_lit("65")))), iface.f_gen_bit_lit(iface.bits_lit(65U, "00000000000000000000000000000000000000000000000000000000000000001")))))));
                  iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg386__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
                  iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg386__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg386__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg386__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    } // if
                  } // if
                } else {
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg386__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg386__2), iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    } // if
                  } // if
                } // if
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg386__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If378__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_SignExtend(v_ExtendReg386__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
                  iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg386__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If378__1, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(v_ExtendReg386__2, iface.f_gen_int_lit(iface.bigint_lit("65"))))))));
                  iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg386__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")))));
                  iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg386__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("63"), iface.bigint_lit("1")));
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg386__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg386__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                    } // if
                  } // if
                } else {
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg386__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If378__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_slice(v_ExtendReg386__2, iface.bigint_lit("0"), iface.bigint_lit("64"))), iface.bigint_lit("0"), iface.bigint_lit("64")));
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
  } else {
    auto v_DecodeRegExtend471__2 = iface.bits_zero(iface.bigint_lit("3"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
      v_DecodeRegExtend471__2 = iface.bits_lit(3U, "100");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
        v_DecodeRegExtend471__2 = iface.bits_lit(3U, "101");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
          v_DecodeRegExtend471__2 = iface.bits_lit(3U, "110");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
            v_DecodeRegExtend471__2 = iface.bits_lit(3U, "111");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
              v_DecodeRegExtend471__2 = iface.bits_lit(3U, "000");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                v_DecodeRegExtend471__2 = iface.bits_lit(3U, "001");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                  v_DecodeRegExtend471__2 = iface.bits_lit(3U, "010");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                    v_DecodeRegExtend471__2 = iface.bits_lit(3U, "011");
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
    if (iface.f_eq_bits(iface.bits_lit(3U, "000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
      auto v_If473__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_If473__1 = iface.f_gen_slice(iface.f_gen_load(iface.v_SP_EL0()), iface.bigint_lit("0"), iface.bigint_lit("32"));
      } else {
        auto v_X_read476__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read476__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read476__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        v_If473__1 = v_X_read476__2;
      } // if
      auto v_ExtendReg481__2 = typename Traits::rt_expr{};
      auto v_X_read482__3 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read482__3 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
      } else {
        v_X_read482__3 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
      } // if
      const auto v_Exp487__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "000"));
      if (v_Exp487__2) {
        v_ExtendReg481__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read482__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("32")));
      } else {
        const auto v_Exp491__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "001"));
        if (v_Exp491__2) {
          v_ExtendReg481__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read482__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("32")));
        } else {
          const auto v_Exp495__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "010"));
          if (v_Exp495__2) {
            v_ExtendReg481__2 = iface.f_gen_SignExtend(v_X_read482__3, iface.f_gen_int_lit(iface.bigint_lit("32")));
          } else {
            const auto v_Exp499__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "011"));
            if (v_Exp499__2) {
              v_ExtendReg481__2 = iface.f_gen_SignExtend(v_X_read482__3, iface.f_gen_int_lit(iface.bigint_lit("32")));
            } else {
              const auto v_Exp503__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "100"));
              if (v_Exp503__2) {
                v_ExtendReg481__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read482__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("32")));
              } else {
                const auto v_Exp507__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "101"));
                if (v_Exp507__2) {
                  v_ExtendReg481__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read482__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("32")));
                } else {
                  const auto v_Exp511__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "110"));
                  if (v_Exp511__2) {
                    v_ExtendReg481__2 = v_X_read482__3;
                  } else {
                    const auto v_Exp515__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "111"));
                    if (v_Exp515__2) {
                      v_ExtendReg481__2 = v_X_read482__3;
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
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg481__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If473__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg481__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg481__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If473__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg481__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
          iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg481__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
          iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg481__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg481__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg481__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } else {
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg481__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg481__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg481__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If473__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_ExtendReg481__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
          iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg481__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If473__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(v_ExtendReg481__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
          iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg481__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
          iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg481__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg481__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg481__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } else {
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg481__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If473__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg481__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(3U, "001"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
        auto v_If566__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_If566__1 = iface.f_gen_slice(iface.f_gen_load(iface.v_SP_EL0()), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          auto v_X_read569__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read569__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
          } else {
            v_X_read569__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
          } // if
          v_If566__1 = v_X_read569__2;
        } // if
        auto v_ExtendReg574__2 = typename Traits::rt_expr{};
        auto v_X_read575__3 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read575__3 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read575__3 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        const auto v_Exp580__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "000"));
        if (v_Exp580__2) {
          v_ExtendReg574__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read575__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
        } else {
          const auto v_Exp584__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "001"));
          if (v_Exp584__2) {
            v_ExtendReg574__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read575__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
          } else {
            const auto v_Exp588__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "010"));
            if (v_Exp588__2) {
              v_ExtendReg574__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read575__3, iface.bigint_lit("0"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
            } else {
              const auto v_Exp592__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "011"));
              if (v_Exp592__2) {
                v_ExtendReg574__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read575__3, iface.bigint_lit("0"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
              } else {
                const auto v_Exp596__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "100"));
                if (v_Exp596__2) {
                  v_ExtendReg574__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read575__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                } else {
                  const auto v_Exp600__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "101"));
                  if (v_Exp600__2) {
                    v_ExtendReg574__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read575__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                  } else {
                    const auto v_Exp604__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "110"));
                    if (v_Exp604__2) {
                      v_ExtendReg574__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read575__3, iface.bigint_lit("0"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0")));
                    } else {
                      const auto v_Exp608__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "111"));
                      if (v_Exp608__2) {
                        v_ExtendReg574__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read575__3, iface.bigint_lit("0"), iface.bigint_lit("31")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0")));
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
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg574__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If566__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg574__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
            iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg574__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If566__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg574__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
            iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg574__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
            iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg574__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg574__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg574__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } // if
          } else {
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg574__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg574__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg574__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If566__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_ExtendReg574__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
            iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg574__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If566__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(v_ExtendReg574__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
            iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg574__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
            iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg574__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg574__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg574__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } // if
          } else {
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg574__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If566__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg574__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(3U, "010"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
          auto v_If659__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_If659__1 = iface.f_gen_slice(iface.f_gen_load(iface.v_SP_EL0()), iface.bigint_lit("0"), iface.bigint_lit("32"));
          } else {
            auto v_X_read662__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read662__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } else {
              v_X_read662__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
            } // if
            v_If659__1 = v_X_read662__2;
          } // if
          auto v_ExtendReg667__2 = typename Traits::rt_expr{};
          auto v_X_read668__3 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read668__3 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
          } else {
            v_X_read668__3 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
          } // if
          const auto v_Exp673__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "000"));
          if (v_Exp673__2) {
            v_ExtendReg667__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read668__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
          } else {
            const auto v_Exp677__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "001"));
            if (v_Exp677__2) {
              v_ExtendReg667__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read668__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
            } else {
              const auto v_Exp681__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "010"));
              if (v_Exp681__2) {
                v_ExtendReg667__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read668__3, iface.bigint_lit("0"), iface.bigint_lit("30")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
              } else {
                const auto v_Exp685__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "011"));
                if (v_Exp685__2) {
                  v_ExtendReg667__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read668__3, iface.bigint_lit("0"), iface.bigint_lit("30")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                } else {
                  const auto v_Exp689__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "100"));
                  if (v_Exp689__2) {
                    v_ExtendReg667__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read668__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                  } else {
                    const auto v_Exp693__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "101"));
                    if (v_Exp693__2) {
                      v_ExtendReg667__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read668__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                    } else {
                      const auto v_Exp697__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "110"));
                      if (v_Exp697__2) {
                        v_ExtendReg667__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read668__3, iface.bigint_lit("0"), iface.bigint_lit("30")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                      } else {
                        const auto v_Exp701__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "111"));
                        if (v_Exp701__2) {
                          v_ExtendReg667__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read668__3, iface.bigint_lit("0"), iface.bigint_lit("30")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
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
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg667__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If659__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg667__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
              iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg667__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If659__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg667__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
              iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg667__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
              iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg667__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg667__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg667__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } else {
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg667__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg667__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } // if
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg667__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If659__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_ExtendReg667__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
              iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg667__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If659__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(v_ExtendReg667__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
              iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg667__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
              iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg667__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg667__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg667__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } else {
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg667__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If659__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg667__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(3U, "011"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
            auto v_If752__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_If752__1 = iface.f_gen_slice(iface.f_gen_load(iface.v_SP_EL0()), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } else {
              auto v_X_read755__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read755__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                v_X_read755__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
              } // if
              v_If752__1 = v_X_read755__2;
            } // if
            auto v_ExtendReg760__2 = typename Traits::rt_expr{};
            auto v_X_read761__3 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read761__3 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
            } else {
              v_X_read761__3 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
            } // if
            const auto v_Exp766__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "000"));
            if (v_Exp766__2) {
              v_ExtendReg760__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read761__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
            } else {
              const auto v_Exp770__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "001"));
              if (v_Exp770__2) {
                v_ExtendReg760__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read761__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
              } else {
                const auto v_Exp774__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "010"));
                if (v_Exp774__2) {
                  v_ExtendReg760__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read761__3, iface.bigint_lit("0"), iface.bigint_lit("29")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                } else {
                  const auto v_Exp778__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "011"));
                  if (v_Exp778__2) {
                    v_ExtendReg760__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read761__3, iface.bigint_lit("0"), iface.bigint_lit("29")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                  } else {
                    const auto v_Exp782__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "100"));
                    if (v_Exp782__2) {
                      v_ExtendReg760__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read761__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                    } else {
                      const auto v_Exp786__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "101"));
                      if (v_Exp786__2) {
                        v_ExtendReg760__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read761__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                      } else {
                        const auto v_Exp790__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "110"));
                        if (v_Exp790__2) {
                          v_ExtendReg760__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read761__3, iface.bigint_lit("0"), iface.bigint_lit("29")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
                        } else {
                          const auto v_Exp794__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "111"));
                          if (v_Exp794__2) {
                            v_ExtendReg760__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read761__3, iface.bigint_lit("0"), iface.bigint_lit("29")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
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
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg760__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If752__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg760__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
                iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg760__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If752__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg760__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
                iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg760__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
                iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg760__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg760__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg760__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } // if
              } else {
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg760__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg760__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } // if
              } // if
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg760__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If752__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_ExtendReg760__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
                iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg760__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If752__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(v_ExtendReg760__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
                iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg760__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
                iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg760__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg760__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg760__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } // if
              } else {
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg760__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If752__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg760__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } // if
              } // if
            } // if
          } else {
            if (iface.f_eq_bits(iface.bits_lit(3U, "100"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3")))) {
              auto v_If845__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_If845__1 = iface.f_gen_slice(iface.f_gen_load(iface.v_SP_EL0()), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                auto v_X_read848__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read848__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read848__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                v_If845__1 = v_X_read848__2;
              } // if
              auto v_ExtendReg853__2 = typename Traits::rt_expr{};
              auto v_X_read854__3 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read854__3 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                v_X_read854__3 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
              } // if
              const auto v_Exp859__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "000"));
              if (v_Exp859__2) {
                v_ExtendReg853__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read854__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
              } else {
                const auto v_Exp863__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "001"));
                if (v_Exp863__2) {
                  v_ExtendReg853__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read854__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                } else {
                  const auto v_Exp867__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "010"));
                  if (v_Exp867__2) {
                    v_ExtendReg853__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read854__3, iface.bigint_lit("0"), iface.bigint_lit("28")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                  } else {
                    const auto v_Exp871__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "011"));
                    if (v_Exp871__2) {
                      v_ExtendReg853__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read854__3, iface.bigint_lit("0"), iface.bigint_lit("28")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                    } else {
                      const auto v_Exp875__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "100"));
                      if (v_Exp875__2) {
                        v_ExtendReg853__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read854__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                      } else {
                        const auto v_Exp879__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "101"));
                        if (v_Exp879__2) {
                          v_ExtendReg853__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read854__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000"))), iface.f_gen_int_lit(iface.bigint_lit("32")));
                        } else {
                          const auto v_Exp883__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "110"));
                          if (v_Exp883__2) {
                            v_ExtendReg853__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read854__3, iface.bigint_lit("0"), iface.bigint_lit("28")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
                          } else {
                            const auto v_Exp887__2 = iface.f_eq_bits(v_DecodeRegExtend471__2, iface.bits_lit(3U, "111"));
                            if (v_Exp887__2) {
                              v_ExtendReg853__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read854__3, iface.bigint_lit("0"), iface.bigint_lit("28")), iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")));
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
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg853__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If845__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(iface.f_gen_not_bits(v_ExtendReg853__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
                  iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg853__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If845__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_not_bits(v_ExtendReg853__2), iface.f_gen_int_lit(iface.bigint_lit("33")))), iface.f_gen_bit_lit(iface.bits_lit(33U, "000000000000000000000000000000001")))))));
                  iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg853__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
                  iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg853__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg853__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg853__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } else {
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg853__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(iface.f_gen_not_bits(v_ExtendReg853__2), iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } // if
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  iface.f_gen_store(iface.v_PSTATE_V(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_SignExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg853__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_SignExtend(v_If845__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_SignExtend(v_ExtendReg853__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
                  iface.f_gen_store(iface.v_PSTATE_C(), iface.f_gen_not_bits(iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg853__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_add_bits(iface.f_gen_ZeroExtend(v_If845__1, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(v_ExtendReg853__2, iface.f_gen_int_lit(iface.bigint_lit("33"))))))));
                  iface.f_gen_store(iface.v_PSTATE_Z(), iface.f_gen_cvt_bool_bv(iface.f_gen_eq_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg853__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000")))));
                  iface.f_gen_store(iface.v_PSTATE_N(), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg853__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("31"), iface.bigint_lit("1")));
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg853__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg853__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } else {
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg853__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If845__1, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_slice(v_ExtendReg853__2, iface.bigint_lit("0"), iface.bigint_lit("32"))), iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64"))));
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
  } // if

} // f_aarch64_integer_arithmetic_add_sub_extendedreg


} // namespace aslp
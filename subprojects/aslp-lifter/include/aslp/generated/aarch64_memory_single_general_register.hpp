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
void aslp_lifter<Traits>::f_aarch64_memory_single_general_register(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
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
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          auto v_If6__1 = iface.bits_zero(iface.bigint_lit("2"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If6__1 = iface.bits_lit(2U, "00");
          } else {
            v_If6__1 = iface.bits_lit(2U, "01");
          } // if
          auto v_If7__1 = iface.bits_zero(iface.bigint_lit("7"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            v_If7__1 = iface.bits_lit(7U, "1000000");
          } else {
            v_If7__1 = iface.bits_lit(7U, "0100000");
          } // if
          auto v_ExtendReg9__2 = typename Traits::rt_expr{};
          auto v_X_read10__3 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read10__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read10__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          const auto v_Exp15__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "000"));
          if (v_Exp15__2) {
            v_ExtendReg9__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read10__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp19__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "001"));
            if (v_Exp19__2) {
              v_ExtendReg9__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read10__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp23__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "010"));
              if (v_Exp23__2) {
                v_ExtendReg9__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read10__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp27__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "011"));
                if (v_Exp27__2) {
                  v_ExtendReg9__2 = iface.f_gen_SignExtend(v_X_read10__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp31__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "100"));
                  if (v_Exp31__2) {
                    v_ExtendReg9__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read10__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp35__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "101"));
                    if (v_Exp35__2) {
                      v_ExtendReg9__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read10__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp39__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "110"));
                      if (v_Exp39__2) {
                        v_ExtendReg9__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read10__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp43__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "111"));
                        if (v_Exp43__2) {
                          v_ExtendReg9__2 = v_X_read10__3;
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
            if (iface.f_ne_bits(v_If6__1, iface.bits_lit(2U, "10"))) {
              if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read53__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read53__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
                } else {
                  v_X_read53__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg9__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read53__2);
              } else {
                if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp61__2 = (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp61__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg9__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "10"))) {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } else {
              if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read67__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read67__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
                } else {
                  v_X_read67__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg9__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read67__2);
              } else {
                if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp75__2 = (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp75__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg9__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "10"))) {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
          } else {
            auto v_X_read79__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read79__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read79__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read84__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read84__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
              } else {
                v_X_read84__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read79__2, v_ExtendReg9__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read84__2);
            } else {
              if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp92__2 = (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If7__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp92__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read79__2, v_ExtendReg9__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If7__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                if (iface.f_eq_bits(v_If6__1, iface.bits_lit(2U, "10"))) {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                          return;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp103__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "000"));
              if (v_Exp103__2) {
                return;
              } else {
                const auto v_Exp107__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "001"));
                if (v_Exp107__2) {
                  return;
                } else {
                  const auto v_Exp111__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "010"));
                  if (v_Exp111__2) {
                    return;
                  } else {
                    const auto v_Exp115__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "011"));
                    if (v_Exp115__2) {
                      return;
                    } else {
                      const auto v_Exp119__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "100"));
                      if (v_Exp119__2) {
                        return;
                      } else {
                        const auto v_Exp123__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "101"));
                        if (v_Exp123__2) {
                          return;
                        } else {
                          const auto v_Exp127__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "110"));
                          if (v_Exp127__2) {
                            return;
                          } else {
                            const auto v_Exp131__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "111"));
                            if (v_Exp131__2) {
                              return;
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
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                  return;
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                        return;
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                  return;
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                        return;
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } else {
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              auto v_If149__1 = iface.bits_zero(iface.bigint_lit("7"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If149__1 = iface.bits_lit(7U, "0100000");
              } else {
                v_If149__1 = iface.bits_lit(7U, "1000000");
              } // if
              auto v_ExtendReg151__2 = typename Traits::rt_expr{};
              auto v_X_read152__3 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read152__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read152__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              const auto v_Exp157__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "000"));
              if (v_Exp157__2) {
                v_ExtendReg151__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read152__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp161__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "001"));
                if (v_Exp161__2) {
                  v_ExtendReg151__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read152__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp165__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "010"));
                  if (v_Exp165__2) {
                    v_ExtendReg151__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read152__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp169__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "011"));
                    if (v_Exp169__2) {
                      v_ExtendReg151__2 = iface.f_gen_SignExtend(v_X_read152__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp173__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "100"));
                      if (v_Exp173__2) {
                        v_ExtendReg151__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read152__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp177__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "101"));
                        if (v_Exp177__2) {
                          v_ExtendReg151__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read152__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp181__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "110"));
                          if (v_Exp181__2) {
                            v_ExtendReg151__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read152__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp185__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "111"));
                            if (v_Exp185__2) {
                              v_ExtendReg151__2 = v_X_read152__3;
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
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp196__2 = (iface.f_eq_bits(v_If149__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If149__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If149__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp196__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg151__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If149__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                auto v_X_read198__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read198__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read198__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp206__2 = (iface.f_eq_bits(v_If149__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If149__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If149__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp206__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read198__2, v_ExtendReg151__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If149__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          auto v_If211__1 = iface.bits_zero(iface.bigint_lit("2"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If211__1 = iface.bits_lit(2U, "00");
          } else {
            v_If211__1 = iface.bits_lit(2U, "01");
          } // if
          auto v_If212__1 = iface.bits_zero(iface.bigint_lit("7"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            v_If212__1 = iface.bits_lit(7U, "1000000");
          } else {
            v_If212__1 = iface.bits_lit(7U, "0100000");
          } // if
          auto v_ExtendReg214__2 = typename Traits::rt_expr{};
          auto v_X_read215__3 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read215__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read215__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          const auto v_Exp220__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "000"));
          if (v_Exp220__2) {
            v_ExtendReg214__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read215__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
          } else {
            const auto v_Exp224__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "001"));
            if (v_Exp224__2) {
              v_ExtendReg214__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read215__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp228__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "010"));
              if (v_Exp228__2) {
                v_ExtendReg214__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read215__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp232__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "011"));
                if (v_Exp232__2) {
                  v_ExtendReg214__2 = iface.f_gen_SignExtend(v_X_read215__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp236__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "100"));
                  if (v_Exp236__2) {
                    v_ExtendReg214__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read215__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp240__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "101"));
                    if (v_Exp240__2) {
                      v_ExtendReg214__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read215__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp244__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "110"));
                      if (v_Exp244__2) {
                        v_ExtendReg214__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read215__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp248__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "111"));
                        if (v_Exp248__2) {
                          v_ExtendReg214__2 = v_X_read215__3;
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
            if (iface.f_ne_bits(v_If211__1, iface.bits_lit(2U, "10"))) {
              if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read258__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read258__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
                } else {
                  v_X_read258__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg214__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read258__2);
              } else {
                if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp266__2 = (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp266__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg214__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If212__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "10"))) {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
            } else {
              if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read272__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read272__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
                } else {
                  v_X_read272__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg214__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read272__2);
              } else {
                if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp280__2 = (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp280__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg214__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If212__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "10"))) {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
          } else {
            auto v_X_read284__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read284__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read284__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read289__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read289__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
              } else {
                v_X_read289__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read284__2, v_ExtendReg214__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read289__2);
            } else {
              if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp297__2 = (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If212__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp297__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read284__2, v_ExtendReg214__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If212__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                if (iface.f_eq_bits(v_If211__1, iface.bits_lit(2U, "10"))) {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                          return;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp308__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "000"));
              if (v_Exp308__2) {
                return;
              } else {
                const auto v_Exp312__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "001"));
                if (v_Exp312__2) {
                  return;
                } else {
                  const auto v_Exp316__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "010"));
                  if (v_Exp316__2) {
                    return;
                  } else {
                    const auto v_Exp320__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "011"));
                    if (v_Exp320__2) {
                      return;
                    } else {
                      const auto v_Exp324__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "100"));
                      if (v_Exp324__2) {
                        return;
                      } else {
                        const auto v_Exp328__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "101"));
                        if (v_Exp328__2) {
                          return;
                        } else {
                          const auto v_Exp332__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "110"));
                          if (v_Exp332__2) {
                            return;
                          } else {
                            const auto v_Exp336__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "111"));
                            if (v_Exp336__2) {
                              return;
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
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                  return;
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                        return;
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                  return;
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                        return;
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } else {
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              auto v_If354__1 = iface.bits_zero(iface.bigint_lit("7"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If354__1 = iface.bits_lit(7U, "0100000");
              } else {
                v_If354__1 = iface.bits_lit(7U, "1000000");
              } // if
              auto v_ExtendReg356__2 = typename Traits::rt_expr{};
              auto v_X_read357__3 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read357__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read357__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              const auto v_Exp362__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "000"));
              if (v_Exp362__2) {
                v_ExtendReg356__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read357__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp366__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "001"));
                if (v_Exp366__2) {
                  v_ExtendReg356__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read357__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp370__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "010"));
                  if (v_Exp370__2) {
                    v_ExtendReg356__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read357__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp374__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "011"));
                    if (v_Exp374__2) {
                      v_ExtendReg356__2 = iface.f_gen_SignExtend(v_X_read357__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp378__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "100"));
                      if (v_Exp378__2) {
                        v_ExtendReg356__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read357__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp382__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "101"));
                        if (v_Exp382__2) {
                          v_ExtendReg356__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read357__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp386__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "110"));
                          if (v_Exp386__2) {
                            v_ExtendReg356__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read357__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp390__2 = iface.f_eq_bits(v_DecodeRegExtend1__2, iface.bits_lit(3U, "111"));
                            if (v_Exp390__2) {
                              v_ExtendReg356__2 = v_X_read357__3;
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
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp401__2 = (iface.f_eq_bits(v_If354__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If354__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If354__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp401__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg356__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If354__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                auto v_X_read403__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read403__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read403__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp411__2 = (iface.f_eq_bits(v_If354__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If354__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If354__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp411__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read403__2, v_ExtendReg356__2), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If354__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        auto v_DecodeRegExtend413__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
          v_DecodeRegExtend413__2 = iface.bits_lit(3U, "100");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
            v_DecodeRegExtend413__2 = iface.bits_lit(3U, "101");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
              v_DecodeRegExtend413__2 = iface.bits_lit(3U, "110");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                v_DecodeRegExtend413__2 = iface.bits_lit(3U, "111");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                  v_DecodeRegExtend413__2 = iface.bits_lit(3U, "000");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                    v_DecodeRegExtend413__2 = iface.bits_lit(3U, "001");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                      v_DecodeRegExtend413__2 = iface.bits_lit(3U, "010");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                        v_DecodeRegExtend413__2 = iface.bits_lit(3U, "011");
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
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            auto v_If418__1 = iface.bits_zero(iface.bigint_lit("2"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If418__1 = iface.bits_lit(2U, "00");
            } else {
              v_If418__1 = iface.bits_lit(2U, "01");
            } // if
            auto v_If419__1 = iface.bits_zero(iface.bigint_lit("7"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
              v_If419__1 = iface.bits_lit(7U, "1000000");
            } else {
              v_If419__1 = iface.bits_lit(7U, "0100000");
            } // if
            auto v_ExtendReg421__2 = typename Traits::rt_expr{};
            auto v_X_read422__3 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read422__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read422__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            const auto v_Exp427__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "000"));
            if (v_Exp427__2) {
              v_ExtendReg421__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read422__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp431__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "001"));
              if (v_Exp431__2) {
                v_ExtendReg421__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read422__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp435__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "010"));
                if (v_Exp435__2) {
                  v_ExtendReg421__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read422__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp439__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "011"));
                  if (v_Exp439__2) {
                    v_ExtendReg421__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read422__3, iface.bigint_lit("0"), iface.bigint_lit("63")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp443__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "100"));
                    if (v_Exp443__2) {
                      v_ExtendReg421__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read422__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp447__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "101"));
                      if (v_Exp447__2) {
                        v_ExtendReg421__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read422__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp451__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "110"));
                        if (v_Exp451__2) {
                          v_ExtendReg421__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read422__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp455__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "111"));
                          if (v_Exp455__2) {
                            v_ExtendReg421__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read422__3, iface.bigint_lit("0"), iface.bigint_lit("63")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0")));
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
              if (iface.f_ne_bits(v_If418__1, iface.bits_lit(2U, "10"))) {
                if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read465__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read465__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
                  } else {
                    v_X_read465__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg421__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read465__2);
                } else {
                  if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp473__2 = (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp473__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg421__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If419__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "10"))) {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } else {
                if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read479__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read479__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
                  } else {
                    v_X_read479__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg421__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read479__2);
                } else {
                  if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp487__2 = (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp487__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg421__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If419__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "10"))) {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
            } else {
              auto v_X_read491__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read491__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read491__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read496__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read496__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
                } else {
                  v_X_read496__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read491__2, v_ExtendReg421__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read496__2);
              } else {
                if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp504__2 = (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If419__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp504__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read491__2, v_ExtendReg421__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If419__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If418__1, iface.bits_lit(2U, "10"))) {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp515__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "000"));
                if (v_Exp515__2) {
                  return;
                } else {
                  const auto v_Exp519__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "001"));
                  if (v_Exp519__2) {
                    return;
                  } else {
                    const auto v_Exp523__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "010"));
                    if (v_Exp523__2) {
                      return;
                    } else {
                      const auto v_Exp527__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "011"));
                      if (v_Exp527__2) {
                        return;
                      } else {
                        const auto v_Exp531__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "100"));
                        if (v_Exp531__2) {
                          return;
                        } else {
                          const auto v_Exp535__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "101"));
                          if (v_Exp535__2) {
                            return;
                          } else {
                            const auto v_Exp539__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "110"));
                            if (v_Exp539__2) {
                              return;
                            } else {
                              const auto v_Exp543__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "111"));
                              if (v_Exp543__2) {
                                return;
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
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                          return;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                          return;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } else {
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } else {
                auto v_If561__1 = iface.bits_zero(iface.bigint_lit("7"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If561__1 = iface.bits_lit(7U, "0100000");
                } else {
                  v_If561__1 = iface.bits_lit(7U, "1000000");
                } // if
                auto v_ExtendReg563__2 = typename Traits::rt_expr{};
                auto v_X_read564__3 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read564__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read564__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                const auto v_Exp569__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "000"));
                if (v_Exp569__2) {
                  v_ExtendReg563__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read564__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp573__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "001"));
                  if (v_Exp573__2) {
                    v_ExtendReg563__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read564__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp577__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "010"));
                    if (v_Exp577__2) {
                      v_ExtendReg563__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read564__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp581__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "011"));
                      if (v_Exp581__2) {
                        v_ExtendReg563__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read564__3, iface.bigint_lit("0"), iface.bigint_lit("63")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp585__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "100"));
                        if (v_Exp585__2) {
                          v_ExtendReg563__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read564__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp589__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "101"));
                          if (v_Exp589__2) {
                            v_ExtendReg563__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read564__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp593__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "110"));
                            if (v_Exp593__2) {
                              v_ExtendReg563__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read564__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp597__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "111"));
                              if (v_Exp597__2) {
                                v_ExtendReg563__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read564__3, iface.bigint_lit("0"), iface.bigint_lit("63")), iface.f_gen_bit_lit(iface.bits_lit(1U, "0")));
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
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp608__2 = (iface.f_eq_bits(v_If561__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If561__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If561__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp608__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg563__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If561__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  auto v_X_read610__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read610__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read610__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp618__2 = (iface.f_eq_bits(v_If561__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If561__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If561__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp618__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read610__2, v_ExtendReg563__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If561__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } // if
              } // if
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            auto v_If623__1 = iface.bits_zero(iface.bigint_lit("2"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If623__1 = iface.bits_lit(2U, "00");
            } else {
              v_If623__1 = iface.bits_lit(2U, "01");
            } // if
            auto v_If624__1 = iface.bits_zero(iface.bigint_lit("7"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
              v_If624__1 = iface.bits_lit(7U, "1000000");
            } else {
              v_If624__1 = iface.bits_lit(7U, "0100000");
            } // if
            auto v_ExtendReg626__2 = typename Traits::rt_expr{};
            auto v_X_read627__3 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read627__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read627__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            const auto v_Exp632__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "000"));
            if (v_Exp632__2) {
              v_ExtendReg626__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read627__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
            } else {
              const auto v_Exp636__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "001"));
              if (v_Exp636__2) {
                v_ExtendReg626__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read627__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp640__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "010"));
                if (v_Exp640__2) {
                  v_ExtendReg626__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read627__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp644__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "011"));
                  if (v_Exp644__2) {
                    v_ExtendReg626__2 = iface.f_gen_SignExtend(v_X_read627__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp648__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "100"));
                    if (v_Exp648__2) {
                      v_ExtendReg626__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read627__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp652__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "101"));
                      if (v_Exp652__2) {
                        v_ExtendReg626__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read627__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp656__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "110"));
                        if (v_Exp656__2) {
                          v_ExtendReg626__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read627__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp660__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "111"));
                          if (v_Exp660__2) {
                            v_ExtendReg626__2 = v_X_read627__3;
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
              if (iface.f_ne_bits(v_If623__1, iface.bits_lit(2U, "10"))) {
                if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read670__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read670__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
                  } else {
                    v_X_read670__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg626__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read670__2);
                } else {
                  if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp678__2 = (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp678__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg626__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If624__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "10"))) {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
              } else {
                if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read684__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read684__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
                  } else {
                    v_X_read684__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg626__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read684__2);
                } else {
                  if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp692__2 = (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp692__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg626__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If624__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "10"))) {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
            } else {
              auto v_X_read696__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read696__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read696__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read701__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read701__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
                } else {
                  v_X_read701__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read696__2, v_ExtendReg626__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read701__2);
              } else {
                if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp709__2 = (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If624__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp709__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read696__2, v_ExtendReg626__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If624__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If623__1, iface.bits_lit(2U, "10"))) {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp720__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "000"));
                if (v_Exp720__2) {
                  return;
                } else {
                  const auto v_Exp724__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "001"));
                  if (v_Exp724__2) {
                    return;
                  } else {
                    const auto v_Exp728__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "010"));
                    if (v_Exp728__2) {
                      return;
                    } else {
                      const auto v_Exp732__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "011"));
                      if (v_Exp732__2) {
                        return;
                      } else {
                        const auto v_Exp736__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "100"));
                        if (v_Exp736__2) {
                          return;
                        } else {
                          const auto v_Exp740__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "101"));
                          if (v_Exp740__2) {
                            return;
                          } else {
                            const auto v_Exp744__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "110"));
                            if (v_Exp744__2) {
                              return;
                            } else {
                              const auto v_Exp748__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "111"));
                              if (v_Exp748__2) {
                                return;
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
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                          return;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                    return;
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                          return;
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } else {
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } else {
                auto v_If766__1 = iface.bits_zero(iface.bigint_lit("7"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If766__1 = iface.bits_lit(7U, "0100000");
                } else {
                  v_If766__1 = iface.bits_lit(7U, "1000000");
                } // if
                auto v_ExtendReg768__2 = typename Traits::rt_expr{};
                auto v_X_read769__3 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read769__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read769__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                const auto v_Exp774__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "000"));
                if (v_Exp774__2) {
                  v_ExtendReg768__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read769__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp778__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "001"));
                  if (v_Exp778__2) {
                    v_ExtendReg768__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read769__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp782__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "010"));
                    if (v_Exp782__2) {
                      v_ExtendReg768__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read769__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp786__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "011"));
                      if (v_Exp786__2) {
                        v_ExtendReg768__2 = iface.f_gen_SignExtend(v_X_read769__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp790__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "100"));
                        if (v_Exp790__2) {
                          v_ExtendReg768__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read769__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp794__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "101"));
                          if (v_Exp794__2) {
                            v_ExtendReg768__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read769__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp798__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "110"));
                            if (v_Exp798__2) {
                              v_ExtendReg768__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read769__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp802__2 = iface.f_eq_bits(v_DecodeRegExtend413__2, iface.bits_lit(3U, "111"));
                              if (v_Exp802__2) {
                                v_ExtendReg768__2 = v_X_read769__3;
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
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp813__2 = (iface.f_eq_bits(v_If766__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If766__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If766__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp813__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg768__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If766__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  auto v_X_read815__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read815__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read815__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp823__2 = (iface.f_eq_bits(v_If766__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If766__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If766__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp823__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read815__2, v_ExtendReg768__2), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If766__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          auto v_DecodeRegExtend825__2 = iface.bits_zero(iface.bigint_lit("3"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
            v_DecodeRegExtend825__2 = iface.bits_lit(3U, "100");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
              v_DecodeRegExtend825__2 = iface.bits_lit(3U, "101");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
                v_DecodeRegExtend825__2 = iface.bits_lit(3U, "110");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                  v_DecodeRegExtend825__2 = iface.bits_lit(3U, "111");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                    v_DecodeRegExtend825__2 = iface.bits_lit(3U, "000");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                      v_DecodeRegExtend825__2 = iface.bits_lit(3U, "001");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                        v_DecodeRegExtend825__2 = iface.bits_lit(3U, "010");
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                          v_DecodeRegExtend825__2 = iface.bits_lit(3U, "011");
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
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              auto v_If830__1 = iface.bits_zero(iface.bigint_lit("2"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If830__1 = iface.bits_lit(2U, "00");
              } else {
                v_If830__1 = iface.bits_lit(2U, "01");
              } // if
              auto v_If831__1 = iface.bits_zero(iface.bigint_lit("7"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                v_If831__1 = iface.bits_lit(7U, "1000000");
              } else {
                v_If831__1 = iface.bits_lit(7U, "0100000");
              } // if
              auto v_ExtendReg833__2 = typename Traits::rt_expr{};
              auto v_X_read834__3 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read834__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read834__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              const auto v_Exp839__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "000"));
              if (v_Exp839__2) {
                v_ExtendReg833__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read834__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp843__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "001"));
                if (v_Exp843__2) {
                  v_ExtendReg833__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read834__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp847__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "010"));
                  if (v_Exp847__2) {
                    v_ExtendReg833__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read834__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp851__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "011"));
                    if (v_Exp851__2) {
                      v_ExtendReg833__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read834__3, iface.bigint_lit("0"), iface.bigint_lit("62")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp855__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "100"));
                      if (v_Exp855__2) {
                        v_ExtendReg833__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read834__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp859__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "101"));
                        if (v_Exp859__2) {
                          v_ExtendReg833__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read834__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp863__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "110"));
                          if (v_Exp863__2) {
                            v_ExtendReg833__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read834__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp867__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "111"));
                            if (v_Exp867__2) {
                              v_ExtendReg833__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read834__3, iface.bigint_lit("0"), iface.bigint_lit("62")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
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
                if (iface.f_ne_bits(v_If830__1, iface.bits_lit(2U, "10"))) {
                  if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "01"))) {
                    auto v_X_read877__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read877__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                    } else {
                      v_X_read877__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                    } // if
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg833__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read877__2);
                  } else {
                    if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp885__2 = (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp885__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg833__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If831__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "10"))) {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                return;
                              } else {
                                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                              } // if
                            } // if
                          } // if
                        } // if
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "01"))) {
                    auto v_X_read891__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read891__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                    } else {
                      v_X_read891__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                    } // if
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg833__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read891__2);
                  } else {
                    if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp899__2 = (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp899__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg833__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If831__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "10"))) {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                return;
                              } else {
                                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
              } else {
                auto v_X_read903__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read903__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read903__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read908__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read908__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                  } else {
                    v_X_read908__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read903__2, v_ExtendReg833__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read908__2);
                } else {
                  if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp916__2 = (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If831__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp916__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read903__2, v_ExtendReg833__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If831__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If830__1, iface.bits_lit(2U, "10"))) {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp927__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "000"));
                  if (v_Exp927__2) {
                    return;
                  } else {
                    const auto v_Exp931__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "001"));
                    if (v_Exp931__2) {
                      return;
                    } else {
                      const auto v_Exp935__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "010"));
                      if (v_Exp935__2) {
                        return;
                      } else {
                        const auto v_Exp939__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "011"));
                        if (v_Exp939__2) {
                          return;
                        } else {
                          const auto v_Exp943__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "100"));
                          if (v_Exp943__2) {
                            return;
                          } else {
                            const auto v_Exp947__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "101"));
                            if (v_Exp947__2) {
                              return;
                            } else {
                              const auto v_Exp951__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "110"));
                              if (v_Exp951__2) {
                                return;
                              } else {
                                const auto v_Exp955__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "111"));
                                if (v_Exp955__2) {
                                  return;
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
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } else {
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } else {
                  auto v_If973__1 = iface.bits_zero(iface.bigint_lit("7"));
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If973__1 = iface.bits_lit(7U, "0100000");
                  } else {
                    v_If973__1 = iface.bits_lit(7U, "1000000");
                  } // if
                  auto v_ExtendReg975__2 = typename Traits::rt_expr{};
                  auto v_X_read976__3 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read976__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read976__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  const auto v_Exp981__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "000"));
                  if (v_Exp981__2) {
                    v_ExtendReg975__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read976__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp985__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "001"));
                    if (v_Exp985__2) {
                      v_ExtendReg975__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read976__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp989__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "010"));
                      if (v_Exp989__2) {
                        v_ExtendReg975__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read976__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp993__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "011"));
                        if (v_Exp993__2) {
                          v_ExtendReg975__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read976__3, iface.bigint_lit("0"), iface.bigint_lit("62")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp997__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "100"));
                          if (v_Exp997__2) {
                            v_ExtendReg975__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read976__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp1001__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "101"));
                            if (v_Exp1001__2) {
                              v_ExtendReg975__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read976__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp1005__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "110"));
                              if (v_Exp1005__2) {
                                v_ExtendReg975__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read976__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                              } else {
                                const auto v_Exp1009__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "111"));
                                if (v_Exp1009__2) {
                                  v_ExtendReg975__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read976__3, iface.bigint_lit("0"), iface.bigint_lit("62")), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
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
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp1020__2 = (iface.f_eq_bits(v_If973__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If973__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If973__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp1020__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg975__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If973__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    auto v_X_read1022__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read1022__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                    } else {
                      v_X_read1022__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp1030__2 = (iface.f_eq_bits(v_If973__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If973__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If973__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp1030__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read1022__2, v_ExtendReg975__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If973__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
              auto v_If1035__1 = iface.bits_zero(iface.bigint_lit("2"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If1035__1 = iface.bits_lit(2U, "00");
              } else {
                v_If1035__1 = iface.bits_lit(2U, "01");
              } // if
              auto v_If1036__1 = iface.bits_zero(iface.bigint_lit("7"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                v_If1036__1 = iface.bits_lit(7U, "1000000");
              } else {
                v_If1036__1 = iface.bits_lit(7U, "0100000");
              } // if
              auto v_ExtendReg1038__2 = typename Traits::rt_expr{};
              auto v_X_read1039__3 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read1039__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read1039__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              const auto v_Exp1044__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "000"));
              if (v_Exp1044__2) {
                v_ExtendReg1038__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1039__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
              } else {
                const auto v_Exp1048__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "001"));
                if (v_Exp1048__2) {
                  v_ExtendReg1038__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1039__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp1052__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "010"));
                  if (v_Exp1052__2) {
                    v_ExtendReg1038__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1039__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp1056__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "011"));
                    if (v_Exp1056__2) {
                      v_ExtendReg1038__2 = iface.f_gen_SignExtend(v_X_read1039__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp1060__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "100"));
                      if (v_Exp1060__2) {
                        v_ExtendReg1038__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1039__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp1064__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "101"));
                        if (v_Exp1064__2) {
                          v_ExtendReg1038__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1039__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp1068__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "110"));
                          if (v_Exp1068__2) {
                            v_ExtendReg1038__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1039__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp1072__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "111"));
                            if (v_Exp1072__2) {
                              v_ExtendReg1038__2 = v_X_read1039__3;
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
                if (iface.f_ne_bits(v_If1035__1, iface.bits_lit(2U, "10"))) {
                  if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "01"))) {
                    auto v_X_read1082__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read1082__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                    } else {
                      v_X_read1082__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                    } // if
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1038__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1082__2);
                  } else {
                    if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp1090__2 = (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp1090__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1038__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1036__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "10"))) {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                return;
                              } else {
                                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                              } // if
                            } // if
                          } // if
                        } // if
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "01"))) {
                    auto v_X_read1096__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read1096__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                    } else {
                      v_X_read1096__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                    } // if
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1038__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1096__2);
                  } else {
                    if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp1104__2 = (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp1104__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1038__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1036__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "10"))) {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                return;
                              } else {
                                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
              } else {
                auto v_X_read1108__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read1108__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read1108__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read1113__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read1113__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                  } else {
                    v_X_read1113__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read1108__2, v_ExtendReg1038__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1113__2);
                } else {
                  if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp1121__2 = (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1036__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp1121__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read1108__2, v_ExtendReg1038__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1036__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If1035__1, iface.bits_lit(2U, "10"))) {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp1132__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "000"));
                  if (v_Exp1132__2) {
                    return;
                  } else {
                    const auto v_Exp1136__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "001"));
                    if (v_Exp1136__2) {
                      return;
                    } else {
                      const auto v_Exp1140__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "010"));
                      if (v_Exp1140__2) {
                        return;
                      } else {
                        const auto v_Exp1144__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "011"));
                        if (v_Exp1144__2) {
                          return;
                        } else {
                          const auto v_Exp1148__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "100"));
                          if (v_Exp1148__2) {
                            return;
                          } else {
                            const auto v_Exp1152__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "101"));
                            if (v_Exp1152__2) {
                              return;
                            } else {
                              const auto v_Exp1156__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "110"));
                              if (v_Exp1156__2) {
                                return;
                              } else {
                                const auto v_Exp1160__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "111"));
                                if (v_Exp1160__2) {
                                  return;
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
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                      return;
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                            return;
                          } else {
                            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } else {
                if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } else {
                  auto v_If1178__1 = iface.bits_zero(iface.bigint_lit("7"));
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    v_If1178__1 = iface.bits_lit(7U, "0100000");
                  } else {
                    v_If1178__1 = iface.bits_lit(7U, "1000000");
                  } // if
                  auto v_ExtendReg1180__2 = typename Traits::rt_expr{};
                  auto v_X_read1181__3 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read1181__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read1181__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  const auto v_Exp1186__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "000"));
                  if (v_Exp1186__2) {
                    v_ExtendReg1180__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1181__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp1190__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "001"));
                    if (v_Exp1190__2) {
                      v_ExtendReg1180__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1181__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp1194__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "010"));
                      if (v_Exp1194__2) {
                        v_ExtendReg1180__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1181__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp1198__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "011"));
                        if (v_Exp1198__2) {
                          v_ExtendReg1180__2 = iface.f_gen_SignExtend(v_X_read1181__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp1202__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "100"));
                          if (v_Exp1202__2) {
                            v_ExtendReg1180__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1181__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp1206__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "101"));
                            if (v_Exp1206__2) {
                              v_ExtendReg1180__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1181__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp1210__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "110"));
                              if (v_Exp1210__2) {
                                v_ExtendReg1180__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1181__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                              } else {
                                const auto v_Exp1214__2 = iface.f_eq_bits(v_DecodeRegExtend825__2, iface.bits_lit(3U, "111"));
                                if (v_Exp1214__2) {
                                  v_ExtendReg1180__2 = v_X_read1181__3;
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
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp1225__2 = (iface.f_eq_bits(v_If1178__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1178__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1178__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp1225__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1180__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1178__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    auto v_X_read1227__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read1227__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                    } else {
                      v_X_read1227__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                    } // if
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp1235__2 = (iface.f_eq_bits(v_If1178__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1178__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1178__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp1235__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read1227__2, v_ExtendReg1180__2), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1178__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            auto v_DecodeRegExtend1237__2 = iface.bits_zero(iface.bigint_lit("3"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
              v_DecodeRegExtend1237__2 = iface.bits_lit(3U, "100");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
                v_DecodeRegExtend1237__2 = iface.bits_lit(3U, "101");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
                  v_DecodeRegExtend1237__2 = iface.bits_lit(3U, "110");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                    v_DecodeRegExtend1237__2 = iface.bits_lit(3U, "111");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                      v_DecodeRegExtend1237__2 = iface.bits_lit(3U, "000");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                        v_DecodeRegExtend1237__2 = iface.bits_lit(3U, "001");
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                          v_DecodeRegExtend1237__2 = iface.bits_lit(3U, "010");
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                            v_DecodeRegExtend1237__2 = iface.bits_lit(3U, "011");
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
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                auto v_If1242__1 = iface.bits_zero(iface.bigint_lit("2"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If1242__1 = iface.bits_lit(2U, "00");
                } else {
                  v_If1242__1 = iface.bits_lit(2U, "01");
                } // if
                auto v_If1243__1 = iface.bits_zero(iface.bigint_lit("7"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                  v_If1243__1 = iface.bits_lit(7U, "1000000");
                } else {
                  v_If1243__1 = iface.bits_lit(7U, "0100000");
                } // if
                auto v_ExtendReg1245__2 = typename Traits::rt_expr{};
                auto v_X_read1246__3 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read1246__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read1246__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                const auto v_Exp1251__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "000"));
                if (v_Exp1251__2) {
                  v_ExtendReg1245__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1246__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp1255__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "001"));
                  if (v_Exp1255__2) {
                    v_ExtendReg1245__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1246__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp1259__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "010"));
                    if (v_Exp1259__2) {
                      v_ExtendReg1245__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1246__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp1263__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "011"));
                      if (v_Exp1263__2) {
                        v_ExtendReg1245__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1246__3, iface.bigint_lit("0"), iface.bigint_lit("61")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp1267__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "100"));
                        if (v_Exp1267__2) {
                          v_ExtendReg1245__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1246__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp1271__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "101"));
                          if (v_Exp1271__2) {
                            v_ExtendReg1245__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1246__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp1275__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "110"));
                            if (v_Exp1275__2) {
                              v_ExtendReg1245__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1246__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp1279__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "111"));
                              if (v_Exp1279__2) {
                                v_ExtendReg1245__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1246__3, iface.bigint_lit("0"), iface.bigint_lit("61")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
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
                  if (iface.f_ne_bits(v_If1242__1, iface.bits_lit(2U, "10"))) {
                    if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "01"))) {
                      auto v_X_read1289__2 = typename Traits::rt_expr{};
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        v_X_read1289__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                      } else {
                        v_X_read1289__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                      } // if
                      iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1245__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1289__2);
                    } else {
                      if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "00"))) {
                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                        const auto v_Exp1297__2 = (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "1000000"))));
                        assert(v_Exp1297__2);
                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1245__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1243__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                        } // if
                      } else {
                        if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "10"))) {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                                return;
                              } else {
                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                  return;
                                } else {
                                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                                } // if
                              } // if
                            } // if
                          } // if
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "01"))) {
                      auto v_X_read1303__2 = typename Traits::rt_expr{};
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        v_X_read1303__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                      } else {
                        v_X_read1303__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                      } // if
                      iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1245__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1303__2);
                    } else {
                      if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "00"))) {
                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                        const auto v_Exp1311__2 = (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "1000000"))));
                        assert(v_Exp1311__2);
                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1245__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1243__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                        } // if
                      } else {
                        if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "10"))) {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                                return;
                              } else {
                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                  return;
                                } else {
                                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
                } else {
                  auto v_X_read1315__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read1315__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read1315__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "01"))) {
                    auto v_X_read1320__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read1320__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                    } else {
                      v_X_read1320__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                    } // if
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read1315__2, v_ExtendReg1245__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1320__2);
                  } else {
                    if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp1328__2 = (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1243__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp1328__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read1315__2, v_ExtendReg1245__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1243__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      if (iface.f_eq_bits(v_If1242__1, iface.bits_lit(2U, "10"))) {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                return;
                              } else {
                                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp1339__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "000"));
                    if (v_Exp1339__2) {
                      return;
                    } else {
                      const auto v_Exp1343__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "001"));
                      if (v_Exp1343__2) {
                        return;
                      } else {
                        const auto v_Exp1347__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "010"));
                        if (v_Exp1347__2) {
                          return;
                        } else {
                          const auto v_Exp1351__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "011"));
                          if (v_Exp1351__2) {
                            return;
                          } else {
                            const auto v_Exp1355__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "100"));
                            if (v_Exp1355__2) {
                              return;
                            } else {
                              const auto v_Exp1359__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "101"));
                              if (v_Exp1359__2) {
                                return;
                              } else {
                                const auto v_Exp1363__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "110"));
                                if (v_Exp1363__2) {
                                  return;
                                } else {
                                  const auto v_Exp1367__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "111"));
                                  if (v_Exp1367__2) {
                                    return;
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
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } else {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } else {
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } else {
                    auto v_If1385__1 = iface.bits_zero(iface.bigint_lit("7"));
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                      v_If1385__1 = iface.bits_lit(7U, "0100000");
                    } else {
                      v_If1385__1 = iface.bits_lit(7U, "1000000");
                    } // if
                    auto v_ExtendReg1387__2 = typename Traits::rt_expr{};
                    auto v_X_read1388__3 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read1388__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                    } else {
                      v_X_read1388__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                    } // if
                    const auto v_Exp1393__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "000"));
                    if (v_Exp1393__2) {
                      v_ExtendReg1387__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1388__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp1397__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "001"));
                      if (v_Exp1397__2) {
                        v_ExtendReg1387__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1388__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp1401__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "010"));
                        if (v_Exp1401__2) {
                          v_ExtendReg1387__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1388__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp1405__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "011"));
                          if (v_Exp1405__2) {
                            v_ExtendReg1387__2 = iface.f_gen_SignExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1388__3, iface.bigint_lit("0"), iface.bigint_lit("61")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp1409__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "100"));
                            if (v_Exp1409__2) {
                              v_ExtendReg1387__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1388__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp1413__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "101"));
                              if (v_Exp1413__2) {
                                v_ExtendReg1387__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1388__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                              } else {
                                const auto v_Exp1417__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "110"));
                                if (v_Exp1417__2) {
                                  v_ExtendReg1387__2 = iface.f_gen_ZeroExtend(iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1388__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000"))), iface.f_gen_int_lit(iface.bigint_lit("64")));
                                } else {
                                  const auto v_Exp1421__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "111"));
                                  if (v_Exp1421__2) {
                                    v_ExtendReg1387__2 = iface.f_gen_append_bits(iface.f_gen_slice(v_X_read1388__3, iface.bigint_lit("0"), iface.bigint_lit("61")), iface.f_gen_bit_lit(iface.bits_lit(3U, "000")));
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
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp1432__2 = (iface.f_eq_bits(v_If1385__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1385__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1385__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp1432__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1387__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1385__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      auto v_X_read1434__2 = typename Traits::rt_expr{};
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        v_X_read1434__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                      } else {
                        v_X_read1434__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp1442__2 = (iface.f_eq_bits(v_If1385__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1385__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1385__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp1442__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read1434__2, v_ExtendReg1387__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1385__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                auto v_If1447__1 = iface.bits_zero(iface.bigint_lit("2"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If1447__1 = iface.bits_lit(2U, "00");
                } else {
                  v_If1447__1 = iface.bits_lit(2U, "01");
                } // if
                auto v_If1448__1 = iface.bits_zero(iface.bigint_lit("7"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                  v_If1448__1 = iface.bits_lit(7U, "1000000");
                } else {
                  v_If1448__1 = iface.bits_lit(7U, "0100000");
                } // if
                auto v_ExtendReg1450__2 = typename Traits::rt_expr{};
                auto v_X_read1451__3 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read1451__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read1451__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                const auto v_Exp1456__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "000"));
                if (v_Exp1456__2) {
                  v_ExtendReg1450__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1451__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                } else {
                  const auto v_Exp1460__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "001"));
                  if (v_Exp1460__2) {
                    v_ExtendReg1450__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1451__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                  } else {
                    const auto v_Exp1464__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "010"));
                    if (v_Exp1464__2) {
                      v_ExtendReg1450__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1451__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp1468__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "011"));
                      if (v_Exp1468__2) {
                        v_ExtendReg1450__2 = iface.f_gen_SignExtend(v_X_read1451__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp1472__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "100"));
                        if (v_Exp1472__2) {
                          v_ExtendReg1450__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1451__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp1476__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "101"));
                          if (v_Exp1476__2) {
                            v_ExtendReg1450__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1451__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp1480__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "110"));
                            if (v_Exp1480__2) {
                              v_ExtendReg1450__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1451__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp1484__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "111"));
                              if (v_Exp1484__2) {
                                v_ExtendReg1450__2 = v_X_read1451__3;
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
                  if (iface.f_ne_bits(v_If1447__1, iface.bits_lit(2U, "10"))) {
                    if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "01"))) {
                      auto v_X_read1494__2 = typename Traits::rt_expr{};
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        v_X_read1494__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                      } else {
                        v_X_read1494__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                      } // if
                      iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1450__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1494__2);
                    } else {
                      if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "00"))) {
                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                        const auto v_Exp1502__2 = (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "1000000"))));
                        assert(v_Exp1502__2);
                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1450__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1448__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                        } // if
                      } else {
                        if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "10"))) {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                                return;
                              } else {
                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                  return;
                                } else {
                                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                                } // if
                              } // if
                            } // if
                          } // if
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "01"))) {
                      auto v_X_read1508__2 = typename Traits::rt_expr{};
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        v_X_read1508__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                      } else {
                        v_X_read1508__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                      } // if
                      iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1450__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1508__2);
                    } else {
                      if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "00"))) {
                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                        const auto v_Exp1516__2 = (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "1000000"))));
                        assert(v_Exp1516__2);
                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1450__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1448__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                        } // if
                      } else {
                        if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "10"))) {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                                return;
                              } else {
                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                  return;
                                } else {
                                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
                } else {
                  auto v_X_read1520__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read1520__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read1520__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "01"))) {
                    auto v_X_read1525__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read1525__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                    } else {
                      v_X_read1525__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                    } // if
                    iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read1520__2, v_ExtendReg1450__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read1525__2);
                  } else {
                    if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "00"))) {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp1533__2 = (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1448__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp1533__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read1520__2, v_ExtendReg1450__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1448__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      if (iface.f_eq_bits(v_If1447__1, iface.bits_lit(2U, "10"))) {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                              return;
                            } else {
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                                return;
                              } else {
                                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
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
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp1544__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "000"));
                    if (v_Exp1544__2) {
                      return;
                    } else {
                      const auto v_Exp1548__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "001"));
                      if (v_Exp1548__2) {
                        return;
                      } else {
                        const auto v_Exp1552__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "010"));
                        if (v_Exp1552__2) {
                          return;
                        } else {
                          const auto v_Exp1556__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "011"));
                          if (v_Exp1556__2) {
                            return;
                          } else {
                            const auto v_Exp1560__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "100"));
                            if (v_Exp1560__2) {
                              return;
                            } else {
                              const auto v_Exp1564__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "101"));
                              if (v_Exp1564__2) {
                                return;
                              } else {
                                const auto v_Exp1568__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "110"));
                                if (v_Exp1568__2) {
                                  return;
                                } else {
                                  const auto v_Exp1572__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "111"));
                                  if (v_Exp1572__2) {
                                    return;
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
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } else {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
                        return;
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
                          return;
                        } else {
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
                            return;
                          } else {
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("3"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
                              return;
                            } else {
                              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                            } // if
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } else {
                  if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } else {
                    auto v_If1590__1 = iface.bits_zero(iface.bigint_lit("7"));
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                      v_If1590__1 = iface.bits_lit(7U, "0100000");
                    } else {
                      v_If1590__1 = iface.bits_lit(7U, "1000000");
                    } // if
                    auto v_ExtendReg1592__2 = typename Traits::rt_expr{};
                    auto v_X_read1593__3 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read1593__3 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
                    } else {
                      v_X_read1593__3 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                    } // if
                    const auto v_Exp1598__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "000"));
                    if (v_Exp1598__2) {
                      v_ExtendReg1592__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1593__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                    } else {
                      const auto v_Exp1602__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "001"));
                      if (v_Exp1602__2) {
                        v_ExtendReg1592__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1593__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                      } else {
                        const auto v_Exp1606__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "010"));
                        if (v_Exp1606__2) {
                          v_ExtendReg1592__2 = iface.f_gen_SignExtend(iface.f_gen_slice(v_X_read1593__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                        } else {
                          const auto v_Exp1610__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "011"));
                          if (v_Exp1610__2) {
                            v_ExtendReg1592__2 = iface.f_gen_SignExtend(v_X_read1593__3, iface.f_gen_int_lit(iface.bigint_lit("64")));
                          } else {
                            const auto v_Exp1614__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "100"));
                            if (v_Exp1614__2) {
                              v_ExtendReg1592__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1593__3, iface.bigint_lit("0"), iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                            } else {
                              const auto v_Exp1618__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "101"));
                              if (v_Exp1618__2) {
                                v_ExtendReg1592__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1593__3, iface.bigint_lit("0"), iface.bigint_lit("16")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                              } else {
                                const auto v_Exp1622__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "110"));
                                if (v_Exp1622__2) {
                                  v_ExtendReg1592__2 = iface.f_gen_ZeroExtend(iface.f_gen_slice(v_X_read1593__3, iface.bigint_lit("0"), iface.bigint_lit("32")), iface.f_gen_int_lit(iface.bigint_lit("64")));
                                } else {
                                  const auto v_Exp1626__2 = iface.f_eq_bits(v_DecodeRegExtend1237__2, iface.bits_lit(3U, "111"));
                                  if (v_Exp1626__2) {
                                    v_ExtendReg1592__2 = v_X_read1593__3;
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
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp1637__2 = (iface.f_eq_bits(v_If1590__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1590__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1590__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp1637__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), v_ExtendReg1592__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1590__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } else {
                      auto v_X_read1639__2 = typename Traits::rt_expr{};
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        v_X_read1639__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                      } else {
                        v_X_read1639__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                      } // if
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      const auto v_Exp1647__2 = (iface.f_eq_bits(v_If1590__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If1590__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If1590__1, iface.bits_lit(7U, "1000000"))));
                      assert(v_Exp1647__2);
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read1639__2, v_ExtendReg1592__2), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If1590__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                      } // if
                    } // if
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

} // f_aarch64_memory_single_general_register


} // namespace aslp
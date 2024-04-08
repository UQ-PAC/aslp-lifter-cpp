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
void aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_signed_offset_unpriv(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      auto v_If7__1 = iface.bits_zero(iface.bigint_lit("2"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If7__1 = iface.bits_lit(2U, "00");
      } else {
        v_If7__1 = iface.bits_lit(2U, "01");
      } // if
      auto v_If8__1 = iface.bits_zero(iface.bigint_lit("7"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
        v_If8__1 = iface.bits_lit(7U, "1000000");
      } else {
        v_If8__1 = iface.bits_lit(7U, "0100000");
      } // if
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        if (iface.f_ne_bits(v_If7__1, iface.bits_lit(2U, "10"))) {
          if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "01"))) {
            auto v_X_read16__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read16__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
            } else {
              v_X_read16__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
            } // if
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read16__2);
          } else {
            if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp24__2 = (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp24__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } else {
              if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "10"))) {
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
          if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "01"))) {
            auto v_X_read30__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read30__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
            } else {
              v_X_read30__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
            } // if
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read30__2);
          } else {
            if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp38__2 = (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp38__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } else {
              if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "10"))) {
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
        auto v_X_read42__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read42__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read42__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "01"))) {
          auto v_X_read47__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read47__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
          } else {
            v_X_read47__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
          } // if
          iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read42__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read47__2);
        } else {
          if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "00"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp55__2 = (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If8__1, iface.bits_lit(7U, "1000000"))));
            assert(v_Exp55__2);
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read42__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } else {
            if (iface.f_eq_bits(v_If7__1, iface.bits_lit(2U, "10"))) {
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
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          auto v_If60__1 = iface.bits_zero(iface.bigint_lit("7"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If60__1 = iface.bits_lit(7U, "0100000");
          } else {
            v_If60__1 = iface.bits_lit(7U, "1000000");
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp68__2 = (iface.f_eq_bits(v_If60__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If60__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If60__1, iface.bits_lit(7U, "1000000"))));
            assert(v_Exp68__2);
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If60__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } else {
            auto v_X_read70__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read70__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read70__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp78__2 = (iface.f_eq_bits(v_If60__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If60__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If60__1, iface.bits_lit(7U, "1000000"))));
            assert(v_Exp78__2);
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read70__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If60__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } // if
      } // if
    } // if
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        auto v_If86__1 = iface.bits_zero(iface.bigint_lit("2"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If86__1 = iface.bits_lit(2U, "00");
        } else {
          v_If86__1 = iface.bits_lit(2U, "01");
        } // if
        auto v_If87__1 = iface.bits_zero(iface.bigint_lit("7"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
          v_If87__1 = iface.bits_lit(7U, "1000000");
        } else {
          v_If87__1 = iface.bits_lit(7U, "0100000");
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          if (iface.f_ne_bits(v_If86__1, iface.bits_lit(2U, "10"))) {
            if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read95__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read95__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
              } else {
                v_X_read95__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read95__2);
            } else {
              if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp103__2 = (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp103__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If87__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "10"))) {
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
            if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read109__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read109__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
              } else {
                v_X_read109__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read109__2);
            } else {
              if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp117__2 = (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp117__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If87__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "10"))) {
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
          auto v_X_read121__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read121__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read121__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "01"))) {
            auto v_X_read126__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read126__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
            } else {
              v_X_read126__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
            } // if
            iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read121__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read126__2);
          } else {
            if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp134__2 = (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If87__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp134__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read121__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If87__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } else {
              if (iface.f_eq_bits(v_If86__1, iface.bits_lit(2U, "10"))) {
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
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            auto v_If139__1 = iface.bits_zero(iface.bigint_lit("7"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If139__1 = iface.bits_lit(7U, "0100000");
            } else {
              v_If139__1 = iface.bits_lit(7U, "1000000");
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp147__2 = (iface.f_eq_bits(v_If139__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If139__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If139__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp147__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If139__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } else {
              auto v_X_read149__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read149__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read149__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp157__2 = (iface.f_eq_bits(v_If139__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If139__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If139__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp157__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read149__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If139__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } // if
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          auto v_If165__1 = iface.bits_zero(iface.bigint_lit("2"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If165__1 = iface.bits_lit(2U, "00");
          } else {
            v_If165__1 = iface.bits_lit(2U, "01");
          } // if
          auto v_If166__1 = iface.bits_zero(iface.bigint_lit("7"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            v_If166__1 = iface.bits_lit(7U, "1000000");
          } else {
            v_If166__1 = iface.bits_lit(7U, "0100000");
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            if (iface.f_ne_bits(v_If165__1, iface.bits_lit(2U, "10"))) {
              if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read174__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read174__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read174__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read174__2);
              } else {
                if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp182__2 = (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp182__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If166__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "10"))) {
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
              if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read188__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read188__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read188__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read188__2);
              } else {
                if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp196__2 = (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp196__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If166__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "10"))) {
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
            auto v_X_read200__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read200__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read200__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read205__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read205__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                v_X_read205__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read200__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read205__2);
            } else {
              if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp213__2 = (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If166__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp213__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read200__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If166__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                if (iface.f_eq_bits(v_If165__1, iface.bits_lit(2U, "10"))) {
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
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } else {
            if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              auto v_If218__1 = iface.bits_zero(iface.bigint_lit("7"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If218__1 = iface.bits_lit(7U, "0100000");
              } else {
                v_If218__1 = iface.bits_lit(7U, "1000000");
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp226__2 = (iface.f_eq_bits(v_If218__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If218__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If218__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp226__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If218__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                auto v_X_read228__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read228__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read228__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp236__2 = (iface.f_eq_bits(v_If218__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If218__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If218__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp236__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read228__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If218__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            auto v_If244__1 = iface.bits_zero(iface.bigint_lit("2"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If244__1 = iface.bits_lit(2U, "00");
            } else {
              v_If244__1 = iface.bits_lit(2U, "01");
            } // if
            auto v_If245__1 = iface.bits_zero(iface.bigint_lit("7"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
              v_If245__1 = iface.bits_lit(7U, "1000000");
            } else {
              v_If245__1 = iface.bits_lit(7U, "0100000");
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              if (iface.f_ne_bits(v_If244__1, iface.bits_lit(2U, "10"))) {
                if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read253__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read253__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read253__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read253__2);
                } else {
                  if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp261__2 = (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp261__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If245__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "10"))) {
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
                if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read267__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read267__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read267__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read267__2);
                } else {
                  if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp275__2 = (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp275__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If245__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "10"))) {
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
              auto v_X_read279__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read279__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read279__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read284__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read284__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read284__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read279__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0")), v_X_read284__2);
              } else {
                if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp292__2 = (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp292__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read279__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If245__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If244__1, iface.bits_lit(2U, "10"))) {
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
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) {
                throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
              } else {
                auto v_If297__1 = iface.bits_zero(iface.bigint_lit("7"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If297__1 = iface.bits_lit(7U, "0100000");
                } else {
                  v_If297__1 = iface.bits_lit(7U, "1000000");
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp305__2 = (iface.f_eq_bits(v_If297__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If297__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If297__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp305__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If297__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  auto v_X_read307__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read307__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read307__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp315__2 = (iface.f_eq_bits(v_If297__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If297__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If297__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp315__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read307__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("0"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If297__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
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

} // f_aarch64_memory_single_general_immediate_signed_offset_unpriv


} // namespace aslp
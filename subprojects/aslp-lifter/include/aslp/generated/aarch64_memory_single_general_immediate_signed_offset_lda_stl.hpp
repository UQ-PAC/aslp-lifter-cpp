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
void aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
      auto v_If3__1 = iface.bits_zero(iface.bigint_lit("2"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If3__1 = iface.bits_lit(2U, "00");
      } else {
        v_If3__1 = iface.bits_lit(2U, "01");
      } // if
      auto v_If4__1 = iface.bits_zero(iface.bigint_lit("7"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
        v_If4__1 = iface.bits_lit(7U, "1000000");
      } else {
        v_If4__1 = iface.bits_lit(7U, "0100000");
      } // if
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        if (iface.f_ne_bits(v_If3__1, iface.bits_lit(2U, "10"))) {
          if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "01"))) {
            auto v_X_read12__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read12__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
            } else {
              v_X_read12__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
            } // if
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read12__2);
          } else {
            if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp20__2 = (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp20__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If4__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } else {
              if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "10"))) {
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
          if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "01"))) {
            auto v_X_read26__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read26__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
            } else {
              v_X_read26__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
            } // if
            iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read26__2);
          } else {
            if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp34__2 = (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp34__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If4__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } else {
              if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "10"))) {
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
        auto v_X_read38__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read38__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read38__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "01"))) {
          auto v_X_read43__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read43__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
          } else {
            v_X_read43__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
          } // if
          iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read38__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read43__2);
        } else {
          if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "00"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp51__2 = (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If4__1, iface.bits_lit(7U, "1000000"))));
            assert(v_Exp51__2);
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read38__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If4__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } else {
            if (iface.f_eq_bits(v_If3__1, iface.bits_lit(2U, "10"))) {
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
          auto v_If69__1 = iface.bits_zero(iface.bigint_lit("7"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If69__1 = iface.bits_lit(7U, "0100000");
          } else {
            v_If69__1 = iface.bits_lit(7U, "1000000");
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp77__2 = (iface.f_eq_bits(v_If69__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If69__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If69__1, iface.bits_lit(7U, "1000000"))));
            assert(v_Exp77__2);
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If69__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } else {
            auto v_X_read79__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read79__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read79__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            const auto v_Exp87__2 = (iface.f_eq_bits(v_If69__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If69__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If69__1, iface.bits_lit(7U, "1000000"))));
            assert(v_Exp87__2);
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read79__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If69__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } // if
      } // if
    } // if
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
        auto v_If91__1 = iface.bits_zero(iface.bigint_lit("2"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If91__1 = iface.bits_lit(2U, "00");
        } else {
          v_If91__1 = iface.bits_lit(2U, "01");
        } // if
        auto v_If92__1 = iface.bits_zero(iface.bigint_lit("7"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
          v_If92__1 = iface.bits_lit(7U, "1000000");
        } else {
          v_If92__1 = iface.bits_lit(7U, "0100000");
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          if (iface.f_ne_bits(v_If91__1, iface.bits_lit(2U, "10"))) {
            if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read100__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read100__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
              } else {
                v_X_read100__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read100__2);
            } else {
              if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp108__2 = (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp108__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If92__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "10"))) {
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
            if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read114__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read114__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
              } else {
                v_X_read114__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read114__2);
            } else {
              if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp122__2 = (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp122__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If92__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "10"))) {
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
          auto v_X_read126__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read126__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read126__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "01"))) {
            auto v_X_read131__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read131__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
            } else {
              v_X_read131__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
            } // if
            iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read126__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read131__2);
          } else {
            if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "00"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp139__2 = (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If92__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp139__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read126__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If92__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } else {
              if (iface.f_eq_bits(v_If91__1, iface.bits_lit(2U, "10"))) {
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
            auto v_If157__1 = iface.bits_zero(iface.bigint_lit("7"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If157__1 = iface.bits_lit(7U, "0100000");
            } else {
              v_If157__1 = iface.bits_lit(7U, "1000000");
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp165__2 = (iface.f_eq_bits(v_If157__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If157__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If157__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp165__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If157__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } else {
              auto v_X_read167__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read167__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read167__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              const auto v_Exp175__2 = (iface.f_eq_bits(v_If157__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If157__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If157__1, iface.bits_lit(7U, "1000000"))));
              assert(v_Exp175__2);
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read167__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If157__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
              } // if
            } // if
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
          auto v_If179__1 = iface.bits_zero(iface.bigint_lit("2"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If179__1 = iface.bits_lit(2U, "00");
          } else {
            v_If179__1 = iface.bits_lit(2U, "01");
          } // if
          auto v_If180__1 = iface.bits_zero(iface.bigint_lit("7"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
            v_If180__1 = iface.bits_lit(7U, "1000000");
          } else {
            v_If180__1 = iface.bits_lit(7U, "0100000");
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            if (iface.f_ne_bits(v_If179__1, iface.bits_lit(2U, "10"))) {
              if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read188__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read188__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read188__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read188__2);
              } else {
                if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp196__2 = (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp196__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If180__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "10"))) {
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
              if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read202__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read202__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
                } else {
                  v_X_read202__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read202__2);
              } else {
                if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp210__2 = (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp210__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If180__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "10"))) {
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
            auto v_X_read214__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read214__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read214__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "01"))) {
              auto v_X_read219__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read219__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
              } else {
                v_X_read219__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
              } // if
              iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read214__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read219__2);
            } else {
              if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "00"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp227__2 = (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If180__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp227__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read214__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If180__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                if (iface.f_eq_bits(v_If179__1, iface.bits_lit(2U, "10"))) {
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
              auto v_If245__1 = iface.bits_zero(iface.bigint_lit("7"));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_If245__1 = iface.bits_lit(7U, "0100000");
              } else {
                v_If245__1 = iface.bits_lit(7U, "1000000");
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp253__2 = (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp253__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If245__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } else {
                auto v_X_read255__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read255__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read255__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                const auto v_Exp263__2 = (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If245__1, iface.bits_lit(7U, "1000000"))));
                assert(v_Exp263__2);
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read255__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If245__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                } // if
              } // if
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            auto v_If267__1 = iface.bits_zero(iface.bigint_lit("2"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_If267__1 = iface.bits_lit(2U, "00");
            } else {
              v_If267__1 = iface.bits_lit(2U, "01");
            } // if
            auto v_If268__1 = iface.bits_zero(iface.bigint_lit("7"));
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) {
              v_If268__1 = iface.bits_lit(7U, "1000000");
            } else {
              v_If268__1 = iface.bits_lit(7U, "0100000");
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              if (iface.f_ne_bits(v_If267__1, iface.bits_lit(2U, "10"))) {
                if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read276__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read276__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read276__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read276__2);
                } else {
                  if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp284__2 = (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp284__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If268__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "10"))) {
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
                if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "01"))) {
                  auto v_X_read290__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read290__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read290__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  iface.f_gen_Mem_set(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read290__2);
                } else {
                  if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "00"))) {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    const auto v_Exp298__2 = (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "1000000"))));
                    assert(v_Exp298__2);
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If268__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                    } // if
                  } else {
                    if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "10"))) {
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
              auto v_X_read302__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read302__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read302__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "01"))) {
                auto v_X_read307__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read307__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read307__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                iface.f_gen_Mem_set(iface.f_gen_add_bits(v_X_read302__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("6")), v_X_read307__2);
              } else {
                if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "00"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp315__2 = (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If268__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp315__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read302__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If268__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_If267__1, iface.bits_lit(2U, "10"))) {
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
                auto v_If333__1 = iface.bits_zero(iface.bigint_lit("7"));
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_If333__1 = iface.bits_lit(7U, "0100000");
                } else {
                  v_If333__1 = iface.bits_lit(7U, "1000000");
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp341__2 = (iface.f_eq_bits(v_If333__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If333__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If333__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp341__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If333__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
                  } // if
                } else {
                  auto v_X_read343__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read343__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read343__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  const auto v_Exp351__2 = (iface.f_eq_bits(v_If333__1, iface.bits_lit(7U, "0100000"))) || ((! (iface.f_eq_bits(v_If333__1, iface.bits_lit(7U, "0100000")))) && (iface.f_eq_bits(v_If333__1, iface.bits_lit(7U, "1000000"))));
                  assert(v_Exp351__2);
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_SignExtend(iface.f_gen_Mem_read(iface.f_gen_add_bits(v_X_read343__2, iface.f_gen_bit_lit(iface.f_SignExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9")), iface.bigint_lit("64")))), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.bigint_lit("6"))), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If333__1))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
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

} // f_aarch64_memory_single_general_immediate_signed_offset_lda_stl


} // namespace aslp
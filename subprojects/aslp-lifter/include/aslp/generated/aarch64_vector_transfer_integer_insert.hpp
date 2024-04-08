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
void aslp_lifter<Traits>::f_aarch64_vector_transfer_integer_insert(typename Traits::bits v_enc) {
  auto v_LowestSetBit3__2 = iface.bits_zero(iface.bigint_lit("3"));
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    v_LowestSetBit3__2 = iface.bits_lit(3U, "000");
  } else {
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_LowestSetBit3__2 = iface.bits_lit(3U, "001");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_LowestSetBit3__2 = iface.bits_lit(3U, "010");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_LowestSetBit3__2 = iface.bits_lit(3U, "011");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_LowestSetBit3__2 = iface.bits_lit(3U, "100");
          } else {
            v_LowestSetBit3__2 = iface.bits_lit(3U, "101");
          } // if
        } // if
      } // if
    } // if
  } // if
  if (iface.f_eq_bits(v_LowestSetBit3__2, iface.bits_lit(3U, "000"))) {
    auto v_X_read7__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read7__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
    } else {
      v_X_read7__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
    } // if
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    assert((iface.f_sle_bits(iface.bits_lit(5U, "00000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("4")), iface.bigint_lit("5")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("4")), iface.bigint_lit("7")), iface.bits_lit(7U, "0001000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00001000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_or_bits(iface.f_gen_and_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111"), iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("4")), iface.bigint_lit("7")), iface.bits_lit(7U, "0001000")), iface.bigint_lit("8")))))), iface.f_gen_lsl_bits(iface.f_gen_ZeroExtend(v_X_read7__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("4")), iface.bigint_lit("7")), iface.bits_lit(7U, "0001000")), iface.bigint_lit("8"))))));
  } else {
    auto v_LowestSetBit22__2 = iface.bits_zero(iface.bigint_lit("3"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_LowestSetBit22__2 = iface.bits_lit(3U, "000");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_LowestSetBit22__2 = iface.bits_lit(3U, "001");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_LowestSetBit22__2 = iface.bits_lit(3U, "010");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_LowestSetBit22__2 = iface.bits_lit(3U, "011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_LowestSetBit22__2 = iface.bits_lit(3U, "100");
            } else {
              v_LowestSetBit22__2 = iface.bits_lit(3U, "101");
            } // if
          } // if
        } // if
      } // if
    } // if
    if (iface.f_eq_bits(v_LowestSetBit22__2, iface.bits_lit(3U, "001"))) {
      auto v_X_read26__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read26__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
      } else {
        v_X_read26__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
      } // if
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      assert((iface.f_sle_bits(iface.bits_lit(4U, "0000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("3")), iface.bigint_lit("4")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("3")), iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00010000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_or_bits(iface.f_gen_and_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111"), iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("3")), iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8")))))), iface.f_gen_lsl_bits(iface.f_gen_ZeroExtend(v_X_read26__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("3")), iface.bigint_lit("7")), iface.bits_lit(7U, "0010000")), iface.bigint_lit("8"))))));
    } else {
      auto v_LowestSetBit41__2 = iface.bits_zero(iface.bigint_lit("3"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_LowestSetBit41__2 = iface.bits_lit(3U, "000");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_LowestSetBit41__2 = iface.bits_lit(3U, "001");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_LowestSetBit41__2 = iface.bits_lit(3U, "010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_LowestSetBit41__2 = iface.bits_lit(3U, "011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_LowestSetBit41__2 = iface.bits_lit(3U, "100");
              } else {
                v_LowestSetBit41__2 = iface.bits_lit(3U, "101");
              } // if
            } // if
          } // if
        } // if
      } // if
      if (iface.f_eq_bits(v_LowestSetBit41__2, iface.bits_lit(3U, "010"))) {
        auto v_X_read45__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read45__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read45__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        assert((iface.f_sle_bits(iface.bits_lit(3U, "000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("2")), iface.bigint_lit("3")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("2")), iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8")), iface.bits_lit(8U, "00100000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_or_bits(iface.f_gen_and_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111"), iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("2")), iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8")))))), iface.f_gen_lsl_bits(iface.f_gen_ZeroExtend(v_X_read45__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("2")), iface.bigint_lit("7")), iface.bits_lit(7U, "0100000")), iface.bigint_lit("8"))))));
      } else {
        auto v_LowestSetBit60__2 = iface.bits_zero(iface.bigint_lit("3"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_LowestSetBit60__2 = iface.bits_lit(3U, "000");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_LowestSetBit60__2 = iface.bits_lit(3U, "001");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              v_LowestSetBit60__2 = iface.bits_lit(3U, "010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                v_LowestSetBit60__2 = iface.bits_lit(3U, "011");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                  v_LowestSetBit60__2 = iface.bits_lit(3U, "100");
                } else {
                  v_LowestSetBit60__2 = iface.bits_lit(3U, "101");
                } // if
              } // if
            } // if
          } // if
        } // if
        if (iface.f_eq_bits(v_LowestSetBit60__2, iface.bits_lit(3U, "011"))) {
          auto v_X_read64__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read64__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read64__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          assert((iface.f_sle_bits(iface.bits_lit(2U, "00"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bigint_lit("2")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.f_add_bits(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bigint_lit("7")), iface.bits_lit(7U, "1000000")), iface.bigint_lit("8")), iface.bits_lit(8U, "01000000")), iface.bigint_lit("9")), iface.bits_lit(9U, "010000000"))));
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_or_bits(iface.f_gen_and_bits(iface.f_gen_array_load(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")))), iface.f_gen_bit_lit(iface.f_not_bits(iface.f_lsl_bits(iface.bits_lit(128U, "00000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111"), iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bigint_lit("7")), iface.bits_lit(7U, "1000000")), iface.bigint_lit("8")))))), iface.f_gen_lsl_bits(iface.f_gen_ZeroExtend(v_X_read64__2, iface.f_gen_int_lit(iface.bigint_lit("128"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_mul_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("20"), /*wd*/ iface.bigint_lit("1")), iface.bigint_lit("7")), iface.bits_lit(7U, "1000000")), iface.bigint_lit("8"))))));
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_vector_transfer_integer_insert


} // namespace aslp
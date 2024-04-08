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
void aslp_lifter<Traits>::f_aarch64_integer_tags_mcinsertrandomtag(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(5U, "00000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
    auto v_If3__1 = typename Traits::rt_expr{};
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_If3__1 = iface.f_gen_load(iface.v_SP_EL0());
    } else {
      auto v_X_read6__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read6__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      } else {
        v_X_read6__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
      } // if
      v_If3__1 = v_X_read6__2;
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If3__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If3__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
    } else {
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If3__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If3__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
      } // if
    } // if
  } else {
    if (iface.f_eq_bits(iface.bits_lit(5U, "00001"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
      auto v_If20__1 = typename Traits::rt_expr{};
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_If20__1 = iface.f_gen_load(iface.v_SP_EL0());
      } else {
        auto v_X_read23__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read23__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
        } else {
          v_X_read23__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
        } // if
        v_If20__1 = v_X_read23__2;
      } // if
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If20__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If20__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
      } else {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If20__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If20__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(5U, "00010"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
        auto v_If37__1 = typename Traits::rt_expr{};
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_If37__1 = iface.f_gen_load(iface.v_SP_EL0());
        } else {
          auto v_X_read40__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read40__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read40__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          v_If37__1 = v_X_read40__2;
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If37__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If37__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
        } else {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If37__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If37__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(5U, "00011"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
          auto v_If54__1 = typename Traits::rt_expr{};
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_If54__1 = iface.f_gen_load(iface.v_SP_EL0());
          } else {
            auto v_X_read57__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read57__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read57__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            v_If54__1 = v_X_read57__2;
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If54__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If54__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If54__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If54__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(iface.bits_lit(5U, "00100"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
            auto v_If71__1 = typename Traits::rt_expr{};
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_If71__1 = iface.f_gen_load(iface.v_SP_EL0());
            } else {
              auto v_X_read74__2 = typename Traits::rt_expr{};
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_X_read74__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
              } else {
                v_X_read74__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
              } // if
              v_If71__1 = v_X_read74__2;
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If71__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If71__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
            } else {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If71__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If71__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
              } // if
            } // if
          } else {
            if (iface.f_eq_bits(iface.bits_lit(5U, "00101"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
              auto v_If88__1 = typename Traits::rt_expr{};
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                v_If88__1 = iface.f_gen_load(iface.v_SP_EL0());
              } else {
                auto v_X_read91__2 = typename Traits::rt_expr{};
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_X_read91__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                } else {
                  v_X_read91__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                } // if
                v_If88__1 = v_X_read91__2;
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If88__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If88__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If88__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If88__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                } // if
              } // if
            } else {
              if (iface.f_eq_bits(iface.bits_lit(5U, "00110"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                auto v_If105__1 = typename Traits::rt_expr{};
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  v_If105__1 = iface.f_gen_load(iface.v_SP_EL0());
                } else {
                  auto v_X_read108__2 = typename Traits::rt_expr{};
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_X_read108__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                  } else {
                    v_X_read108__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                  } // if
                  v_If105__1 = v_X_read108__2;
                } // if
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If105__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If105__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                } else {
                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If105__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If105__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                  } // if
                } // if
              } else {
                if (iface.f_eq_bits(iface.bits_lit(5U, "00111"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                  auto v_If122__1 = typename Traits::rt_expr{};
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    v_If122__1 = iface.f_gen_load(iface.v_SP_EL0());
                  } else {
                    auto v_X_read125__2 = typename Traits::rt_expr{};
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_X_read125__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                    } else {
                      v_X_read125__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                    } // if
                    v_If122__1 = v_X_read125__2;
                  } // if
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If122__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If122__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                  } else {
                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If122__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If122__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                    } // if
                  } // if
                } else {
                  if (iface.f_eq_bits(iface.bits_lit(5U, "01000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                    auto v_If139__1 = typename Traits::rt_expr{};
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      v_If139__1 = iface.f_gen_load(iface.v_SP_EL0());
                    } else {
                      auto v_X_read142__2 = typename Traits::rt_expr{};
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        v_X_read142__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                      } else {
                        v_X_read142__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                      } // if
                      v_If139__1 = v_X_read142__2;
                    } // if
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                      iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If139__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If139__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                    } else {
                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If139__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If139__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                      } // if
                    } // if
                  } else {
                    if (iface.f_eq_bits(iface.bits_lit(5U, "01001"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                      auto v_If156__1 = typename Traits::rt_expr{};
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        v_If156__1 = iface.f_gen_load(iface.v_SP_EL0());
                      } else {
                        auto v_X_read159__2 = typename Traits::rt_expr{};
                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                          v_X_read159__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                        } else {
                          v_X_read159__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                        } // if
                        v_If156__1 = v_X_read159__2;
                      } // if
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                        iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If156__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If156__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                      } else {
                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If156__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If156__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                        } // if
                      } // if
                    } else {
                      if (iface.f_eq_bits(iface.bits_lit(5U, "01010"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                        auto v_If173__1 = typename Traits::rt_expr{};
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                          v_If173__1 = iface.f_gen_load(iface.v_SP_EL0());
                        } else {
                          auto v_X_read176__2 = typename Traits::rt_expr{};
                          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                            v_X_read176__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                          } else {
                            v_X_read176__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                          } // if
                          v_If173__1 = v_X_read176__2;
                        } // if
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If173__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If173__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                        } else {
                          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If173__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If173__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                          } // if
                        } // if
                      } else {
                        if (iface.f_eq_bits(iface.bits_lit(5U, "01011"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                          auto v_If190__1 = typename Traits::rt_expr{};
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                            v_If190__1 = iface.f_gen_load(iface.v_SP_EL0());
                          } else {
                            auto v_X_read193__2 = typename Traits::rt_expr{};
                            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                              v_X_read193__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                            } else {
                              v_X_read193__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                            } // if
                            v_If190__1 = v_X_read193__2;
                          } // if
                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If190__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If190__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                          } else {
                            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If190__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If190__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                            } // if
                          } // if
                        } else {
                          if (iface.f_eq_bits(iface.bits_lit(5U, "01100"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                            auto v_If207__1 = typename Traits::rt_expr{};
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                              v_If207__1 = iface.f_gen_load(iface.v_SP_EL0());
                            } else {
                              auto v_X_read210__2 = typename Traits::rt_expr{};
                              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                v_X_read210__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                              } else {
                                v_X_read210__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                              } // if
                              v_If207__1 = v_X_read210__2;
                            } // if
                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If207__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If207__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                            } else {
                              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If207__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If207__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                              } // if
                            } // if
                          } else {
                            if (iface.f_eq_bits(iface.bits_lit(5U, "01101"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                              auto v_If224__1 = typename Traits::rt_expr{};
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                v_If224__1 = iface.f_gen_load(iface.v_SP_EL0());
                              } else {
                                auto v_X_read227__2 = typename Traits::rt_expr{};
                                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                  v_X_read227__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                } else {
                                  v_X_read227__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                } // if
                                v_If224__1 = v_X_read227__2;
                              } // if
                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If224__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If224__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                              } else {
                                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If224__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If224__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                } // if
                              } // if
                            } else {
                              if (iface.f_eq_bits(iface.bits_lit(5U, "01110"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                auto v_If241__1 = typename Traits::rt_expr{};
                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                  v_If241__1 = iface.f_gen_load(iface.v_SP_EL0());
                                } else {
                                  auto v_X_read244__2 = typename Traits::rt_expr{};
                                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                    v_X_read244__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                  } else {
                                    v_X_read244__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                  } // if
                                  v_If241__1 = v_X_read244__2;
                                } // if
                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If241__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If241__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                } else {
                                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If241__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If241__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                  } // if
                                } // if
                              } else {
                                if (iface.f_eq_bits(iface.bits_lit(5U, "01111"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                  auto v_If258__1 = typename Traits::rt_expr{};
                                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                    v_If258__1 = iface.f_gen_load(iface.v_SP_EL0());
                                  } else {
                                    auto v_X_read261__2 = typename Traits::rt_expr{};
                                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                      v_X_read261__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                    } else {
                                      v_X_read261__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                    } // if
                                    v_If258__1 = v_X_read261__2;
                                  } // if
                                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If258__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If258__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                  } else {
                                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If258__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If258__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                    } // if
                                  } // if
                                } else {
                                  if (iface.f_eq_bits(iface.bits_lit(5U, "10000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                    auto v_If275__1 = typename Traits::rt_expr{};
                                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                      v_If275__1 = iface.f_gen_load(iface.v_SP_EL0());
                                    } else {
                                      auto v_X_read278__2 = typename Traits::rt_expr{};
                                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                        v_X_read278__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                      } else {
                                        v_X_read278__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                      } // if
                                      v_If275__1 = v_X_read278__2;
                                    } // if
                                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                      iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If275__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If275__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                    } else {
                                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If275__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If275__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                      } // if
                                    } // if
                                  } else {
                                    if (iface.f_eq_bits(iface.bits_lit(5U, "10001"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                      auto v_If292__1 = typename Traits::rt_expr{};
                                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                        v_If292__1 = iface.f_gen_load(iface.v_SP_EL0());
                                      } else {
                                        auto v_X_read295__2 = typename Traits::rt_expr{};
                                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                          v_X_read295__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                        } else {
                                          v_X_read295__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                        } // if
                                        v_If292__1 = v_X_read295__2;
                                      } // if
                                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                        iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If292__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If292__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                      } else {
                                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If292__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If292__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                        } // if
                                      } // if
                                    } else {
                                      if (iface.f_eq_bits(iface.bits_lit(5U, "10010"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                        auto v_If309__1 = typename Traits::rt_expr{};
                                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                          v_If309__1 = iface.f_gen_load(iface.v_SP_EL0());
                                        } else {
                                          auto v_X_read312__2 = typename Traits::rt_expr{};
                                          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                            v_X_read312__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                          } else {
                                            v_X_read312__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                          } // if
                                          v_If309__1 = v_X_read312__2;
                                        } // if
                                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If309__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If309__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                        } else {
                                          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If309__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If309__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                          } // if
                                        } // if
                                      } else {
                                        if (iface.f_eq_bits(iface.bits_lit(5U, "10011"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                          auto v_If326__1 = typename Traits::rt_expr{};
                                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                            v_If326__1 = iface.f_gen_load(iface.v_SP_EL0());
                                          } else {
                                            auto v_X_read329__2 = typename Traits::rt_expr{};
                                            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                              v_X_read329__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                            } else {
                                              v_X_read329__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                            } // if
                                            v_If326__1 = v_X_read329__2;
                                          } // if
                                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If326__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If326__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                          } else {
                                            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If326__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If326__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                            } // if
                                          } // if
                                        } else {
                                          if (iface.f_eq_bits(iface.bits_lit(5U, "10100"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                            auto v_If343__1 = typename Traits::rt_expr{};
                                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                              v_If343__1 = iface.f_gen_load(iface.v_SP_EL0());
                                            } else {
                                              auto v_X_read346__2 = typename Traits::rt_expr{};
                                              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                v_X_read346__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                              } else {
                                                v_X_read346__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                              } // if
                                              v_If343__1 = v_X_read346__2;
                                            } // if
                                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If343__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If343__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                            } else {
                                              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If343__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If343__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                              } // if
                                            } // if
                                          } else {
                                            if (iface.f_eq_bits(iface.bits_lit(5U, "10101"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                              auto v_If360__1 = typename Traits::rt_expr{};
                                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                v_If360__1 = iface.f_gen_load(iface.v_SP_EL0());
                                              } else {
                                                auto v_X_read363__2 = typename Traits::rt_expr{};
                                                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                  v_X_read363__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                } else {
                                                  v_X_read363__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                } // if
                                                v_If360__1 = v_X_read363__2;
                                              } // if
                                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If360__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If360__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                              } else {
                                                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If360__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If360__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                } // if
                                              } // if
                                            } else {
                                              if (iface.f_eq_bits(iface.bits_lit(5U, "10110"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                auto v_If377__1 = typename Traits::rt_expr{};
                                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                  v_If377__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                } else {
                                                  auto v_X_read380__2 = typename Traits::rt_expr{};
                                                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                    v_X_read380__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                  } else {
                                                    v_X_read380__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                  } // if
                                                  v_If377__1 = v_X_read380__2;
                                                } // if
                                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If377__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If377__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                } else {
                                                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If377__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If377__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                  } // if
                                                } // if
                                              } else {
                                                if (iface.f_eq_bits(iface.bits_lit(5U, "10111"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                  auto v_If394__1 = typename Traits::rt_expr{};
                                                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                    v_If394__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                  } else {
                                                    auto v_X_read397__2 = typename Traits::rt_expr{};
                                                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                      v_X_read397__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                    } else {
                                                      v_X_read397__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                    } // if
                                                    v_If394__1 = v_X_read397__2;
                                                  } // if
                                                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If394__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If394__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                  } else {
                                                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If394__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If394__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                    } // if
                                                  } // if
                                                } else {
                                                  if (iface.f_eq_bits(iface.bits_lit(5U, "11000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                    auto v_If411__1 = typename Traits::rt_expr{};
                                                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                      v_If411__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                    } else {
                                                      auto v_X_read414__2 = typename Traits::rt_expr{};
                                                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                        v_X_read414__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                      } else {
                                                        v_X_read414__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                      } // if
                                                      v_If411__1 = v_X_read414__2;
                                                    } // if
                                                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                      iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If411__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If411__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                    } else {
                                                      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                        iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If411__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If411__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                      } // if
                                                    } // if
                                                  } else {
                                                    if (iface.f_eq_bits(iface.bits_lit(5U, "11001"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                      auto v_If428__1 = typename Traits::rt_expr{};
                                                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                        v_If428__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                      } else {
                                                        auto v_X_read431__2 = typename Traits::rt_expr{};
                                                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                          v_X_read431__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                        } else {
                                                          v_X_read431__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                        } // if
                                                        v_If428__1 = v_X_read431__2;
                                                      } // if
                                                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                        iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If428__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If428__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                      } else {
                                                        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If428__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If428__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                        } // if
                                                      } // if
                                                    } else {
                                                      if (iface.f_eq_bits(iface.bits_lit(5U, "11010"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                        auto v_If445__1 = typename Traits::rt_expr{};
                                                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                          v_If445__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                        } else {
                                                          auto v_X_read448__2 = typename Traits::rt_expr{};
                                                          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                            v_X_read448__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                          } else {
                                                            v_X_read448__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                          } // if
                                                          v_If445__1 = v_X_read448__2;
                                                        } // if
                                                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                          iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If445__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If445__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                        } else {
                                                          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If445__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If445__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                          } // if
                                                        } // if
                                                      } else {
                                                        if (iface.f_eq_bits(iface.bits_lit(5U, "11011"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                          auto v_If462__1 = typename Traits::rt_expr{};
                                                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                            v_If462__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                          } else {
                                                            auto v_X_read465__2 = typename Traits::rt_expr{};
                                                            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                              v_X_read465__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                            } else {
                                                              v_X_read465__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                            } // if
                                                            v_If462__1 = v_X_read465__2;
                                                          } // if
                                                          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                            iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If462__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If462__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                          } else {
                                                            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If462__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If462__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                            } // if
                                                          } // if
                                                        } else {
                                                          if (iface.f_eq_bits(iface.bits_lit(5U, "11100"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                            auto v_If479__1 = typename Traits::rt_expr{};
                                                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                              v_If479__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                            } else {
                                                              auto v_X_read482__2 = typename Traits::rt_expr{};
                                                              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                v_X_read482__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                              } else {
                                                                v_X_read482__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                              } // if
                                                              v_If479__1 = v_X_read482__2;
                                                            } // if
                                                            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                              iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If479__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If479__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                            } else {
                                                              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If479__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If479__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                              } // if
                                                            } // if
                                                          } else {
                                                            if (iface.f_eq_bits(iface.bits_lit(5U, "11101"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                              auto v_If496__1 = typename Traits::rt_expr{};
                                                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                v_If496__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                              } else {
                                                                auto v_X_read499__2 = typename Traits::rt_expr{};
                                                                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                  v_X_read499__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                                } else {
                                                                  v_X_read499__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                                } // if
                                                                v_If496__1 = v_X_read499__2;
                                                              } // if
                                                              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If496__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If496__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                              } else {
                                                                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                                if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                  iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If496__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If496__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                                } // if
                                                              } // if
                                                            } else {
                                                              if (iface.f_eq_bits(iface.bits_lit(5U, "11110"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                                auto v_If513__1 = typename Traits::rt_expr{};
                                                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                  v_If513__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                                } else {
                                                                  auto v_X_read516__2 = typename Traits::rt_expr{};
                                                                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                    v_X_read516__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                                  } else {
                                                                    v_X_read516__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                                  } // if
                                                                  v_If513__1 = v_X_read516__2;
                                                                } // if
                                                                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                  iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If513__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If513__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                                } else {
                                                                  assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                                  if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                    iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If513__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If513__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                                  } // if
                                                                } // if
                                                              } else {
                                                                if (iface.f_eq_bits(iface.bits_lit(5U, "11111"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))) {
                                                                  auto v_If530__1 = typename Traits::rt_expr{};
                                                                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                    v_If530__1 = iface.f_gen_load(iface.v_SP_EL0());
                                                                  } else {
                                                                    auto v_X_read533__2 = typename Traits::rt_expr{};
                                                                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                      v_X_read533__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
                                                                    } else {
                                                                      v_X_read533__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
                                                                    } // if
                                                                    v_If530__1 = v_X_read533__2;
                                                                  } // if
                                                                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(v_If530__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If530__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
                                                                  } else {
                                                                    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
                                                                    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                                                                      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(v_If530__1, iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(v_If530__1, iface.bigint_lit("0"), iface.bigint_lit("56")))));
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
                                                    } // if
                                                  } // if
                                                } // if
                                              } // if
                                            } // if
                                          } // if
                                        } // if
                                      } // if
                                    } // if
                                  } // if
                                } // if
                              } // if
                            } // if
                          } // if
                        } // if
                      } // if
                    } // if
                  } // if
                } // if
              } // if
            } // if
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_integer_tags_mcinsertrandomtag


} // namespace aslp
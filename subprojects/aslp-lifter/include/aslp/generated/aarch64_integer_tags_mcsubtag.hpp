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
void aslp_lifter<Traits>::f_aarch64_integer_tags_mcsubtag(typename Traits::bits v_enc) {
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
    iface.f_gen_store(iface.v_SP_EL0(), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If3__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_append_bits(iface.f_append_bits(iface.bits_lit(54U, "000000000000000000000000000000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6"))), iface.bits_lit(4U, "0000"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If3__1, iface.bigint_lit("0"), iface.bigint_lit("56")), iface.f_gen_bit_lit(iface.extract_bits(iface.extract_bits(iface.f_not_bits(iface.f_append_bits(iface.f_append_bits(iface.bits_lit(54U, "000000000000000000000000000000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6"))), iface.bits_lit(4U, "0000"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("56")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("56")))), iface.bigint_lit("0"), iface.bigint_lit("56")), iface.f_gen_bit_lit(iface.bits_lit(56U, "00000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("56")))));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_append_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If3__1, iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.extract_bits(iface.f_not_bits(iface.f_append_bits(iface.f_append_bits(iface.bits_lit(54U, "000000000000000000000000000000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6"))), iface.bits_lit(4U, "0000"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("64")))), iface.bigint_lit("0"), iface.bigint_lit("64")), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("60"), iface.bigint_lit("4")), iface.f_gen_append_bits(iface.f_gen_bit_lit(iface.bits_lit(4U, "0000")), iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(iface.f_gen_add_bits(iface.f_gen_slice(v_If3__1, iface.bigint_lit("0"), iface.bigint_lit("56")), iface.f_gen_bit_lit(iface.extract_bits(iface.extract_bits(iface.f_not_bits(iface.f_append_bits(iface.f_append_bits(iface.bits_lit(54U, "000000000000000000000000000000000000000000000000000000"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6"))), iface.bits_lit(4U, "0000"))), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("56")), /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("56")))), iface.bigint_lit("0"), iface.bigint_lit("56")), iface.f_gen_bit_lit(iface.bits_lit(56U, "00000000000000000000000000000000000000000000000000000001"))), iface.bigint_lit("0"), iface.bigint_lit("56")))));
    } // if
  } // if

} // f_aarch64_integer_tags_mcsubtag


} // namespace aslp
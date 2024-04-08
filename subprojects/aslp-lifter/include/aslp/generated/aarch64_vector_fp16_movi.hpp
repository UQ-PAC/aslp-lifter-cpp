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
void aslp_lifter<Traits>::f_aarch64_vector_fp16_movi(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.f_replicate_bits(iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("1")), iface.f_not_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("1")))), iface.f_replicate_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("1")), iface.bigint_lit("2"))), iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("9"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("7"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("6"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("1")))), iface.bits_lit(6U, "000000")), iface.bigint_lit("8"))));
  } else {
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    iface.f_gen_array_store(iface.v__Z(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_bit_lit(iface.f_ZeroExtend(iface.f_replicate_bits(iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("18"), /*wd*/ iface.bigint_lit("1")), iface.f_not_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("1")))), iface.f_replicate_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("17"), /*wd*/ iface.bigint_lit("1")), iface.bigint_lit("2"))), iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.f_append_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("1")), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("9"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("7"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("6"), /*wd*/ iface.bigint_lit("1"))), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("1")))), iface.bits_lit(6U, "000000")), iface.bigint_lit("4")), iface.bigint_lit("128"))));
  } // if

} // f_aarch64_vector_fp16_movi


} // namespace aslp